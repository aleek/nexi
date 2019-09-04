// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcpu_ram_uart_sim.h for the primary calling header

#include "Vcpu_ram_uart_sim_ao68000.h" // For This
#include "Vcpu_ram_uart_sim__Syms.h"

#include "verilated_dpi.h"


//--------------------
// STATIC VARIABLES

VL_ST_SIG8(Vcpu_ram_uart_sim_ao68000::__Vtable1___PVT__ea_type[32],3,0);

//--------------------

VL_CTOR_IMP(Vcpu_ram_uart_sim_ao68000) {
    VL_CELL (memory_registers_m, Vcpu_ram_uart_sim_memory_registers);
    // Reset internal values
    // Reset structure values
    _ctor_var_reset();
}

void Vcpu_ram_uart_sim_ao68000::__Vconfigure(Vcpu_ram_uart_sim__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

Vcpu_ram_uart_sim_ao68000::~Vcpu_ram_uart_sim_ao68000() {
}

//--------------------
// Internal Methods

void Vcpu_ram_uart_sim_ao68000::_initial__TOP__tb_m68k_ram_uart__ao68000_m__1(Vcpu_ram_uart_sim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        Vcpu_ram_uart_sim_ao68000::_initial__TOP__tb_m68k_ram_uart__ao68000_m__1\n"); );
    Vcpu_ram_uart_sim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // INITIAL at bus_control.v:87
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__jmp_address_trap = 0U;
    // INITIAL at bus_control.v:88
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__jmp_bus_trap = 0U;
}

VL_INLINE_OPT void Vcpu_ram_uart_sim_ao68000::_sequent__TOP__tb_m68k_ram_uart__ao68000_m__2(Vcpu_ram_uart_sim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        Vcpu_ram_uart_sim_ao68000::_sequent__TOP__tb_m68k_ram_uart__ao68000_m__2\n"); );
    Vcpu_ram_uart_sim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__registers_m__DOT__movem_modreg 
	= vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__registers_m__DOT__movem_modreg;
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__movem_loop 
	= vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__movem_loop;
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__movem_reg 
	= vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__movem_reg;
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__bus_control_m__DOT__last_interrupt_mask 
	= vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__bus_control_m__DOT__last_interrupt_mask;
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__interrupt_mask 
	= vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__interrupt_mask;
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__microcode_branch_m__DOT__micro_pc_3 
	= vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__microcode_branch_m__DOT__micro_pc_3;
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__microcode_branch_m__DOT__micro_pc_2 
	= vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__microcode_branch_m__DOT__micro_pc_2;
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__microcode_branch_m__DOT__micro_pc_1 
	= vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__microcode_branch_m__DOT__micro_pc_1;
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__alu_m__DOT__divider 
	= vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__divider;
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__alu_m__DOT__quotient 
	= vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__quotient;
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__alu_m__DOT__div_count 
	= vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__div_count;
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__alu_m__DOT__was_interrupt 
	= vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__was_interrupt;
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__alu_m__DOT__interrupt_mask_copy 
	= vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__interrupt_mask_copy;
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__sr 
	= vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__sr;
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__bus_control_m__DOT__current_state 
	= vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__bus_control_m__DOT__current_state;
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__bus_control_m__DOT__reset_counter 
	= vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__bus_control_m__DOT__reset_counter;
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__WE_O 
	= vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__WE_O;
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__fc_o 
	= vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__fc_o;
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__CYC_O 
	= vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__CYC_O;
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__SEL_O 
	= vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__SEL_O;
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__CTI_O 
	= vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__CTI_O;
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__DAT_O 
	= vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__DAT_O;
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__data_read 
	= vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__data_read;
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__bus_control_m__DOT__prefetch_ir_valid_80_o 
	= vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__bus_control_m__DOT__prefetch_ir_valid_80_o;
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__bus_control_m__DOT__saved_pc_change 
	= vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__bus_control_m__DOT__saved_pc_change;
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__STB_O 
	= vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__STB_O;
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__ADR_O 
	= vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ADR_O;
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__prefetch_ir_valid_32 
	= vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir_valid_32;
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__prefetch_ir_valid 
	= vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir_valid;
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__prefetch_ir[0U] 
	= vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[0U];
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__prefetch_ir[1U] 
	= vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[1U];
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__prefetch_ir[2U] 
	= vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U];
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__address 
	= vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__address;
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__operand1 
	= vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand1;
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__operand2 
	= vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand2;
    // ALWAYS at registers.v:309
    if (vlSymsp->TOP__tb_m68k_ram_uart.rst_n) {
	if ((1U == (7U & ((vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[1U] 
			   << 6U) | (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[0U] 
				     >> 0x1aU))))) {
	    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__registers_m__DOT__movem_modreg = 0U;
	} else {
	    if ((2U == (7U & ((vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[1U] 
			       << 6U) | (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[0U] 
					 >> 0x1aU))))) {
		vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__registers_m__DOT__movem_modreg = 0xfU;
	    } else {
		if ((3U == (7U & ((vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[1U] 
				   << 6U) | (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[0U] 
					     >> 0x1aU))))) {
		    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__registers_m__DOT__movem_modreg 
			= (0x3fU & ((IData)(1U) + (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__registers_m__DOT__movem_modreg)));
		} else {
		    if ((4U == (7U & ((vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[1U] 
				       << 6U) | (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[0U] 
						 >> 0x1aU))))) {
			vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__registers_m__DOT__movem_modreg 
			    = (0x3fU & ((IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__registers_m__DOT__movem_modreg) 
					- (IData)(1U)));
		    }
		}
	    }
	}
    } else {
	vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__registers_m__DOT__movem_modreg = 0U;
    }
    // ALWAYS at registers.v:317
    if (vlSymsp->TOP__tb_m68k_ram_uart.rst_n) {
	if ((1U == (3U & ((vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[1U] 
			   << 3U) | (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[0U] 
				     >> 0x1dU))))) {
	    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__movem_loop = 0U;
	} else {
	    if ((2U == (3U & ((vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[1U] 
			       << 3U) | (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[0U] 
					 >> 0x1dU))))) {
		vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__movem_loop 
		    = (0x1fU & ((IData)(1U) + (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__movem_loop)));
	    }
	}
    } else {
	vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__movem_loop = 0U;
    }
    // ALWAYS at registers.v:323
    if (vlSymsp->TOP__tb_m68k_ram_uart.rst_n) {
	if ((1U == (3U & ((vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[1U] 
			   << 1U) | (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[0U] 
				     >> 0x1fU))))) {
	    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__movem_reg 
		= (0xffffU & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand1);
	} else {
	    if ((2U == (3U & ((vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[1U] 
			       << 1U) | (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[0U] 
					 >> 0x1fU))))) {
		vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__movem_reg 
		    = (0x7fffU & ((IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__movem_reg) 
				  >> 1U));
	    }
	}
    } else {
	vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__movem_reg = 0U;
    }
    // ALWAYS at bus_control.v:158
    if (vlSymsp->TOP__tb_m68k_ram_uart.rst_n) {
	if ((((IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ipl_i) 
	      > (7U & ((IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__sr) 
		       >> 8U))) & (~ (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__do_interrupt)))) {
	    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__bus_control_m__DOT__last_interrupt_mask 
		= vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__interrupt_mask;
	    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__interrupt_mask 
		= vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ipl_i;
	} else {
	    if (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__do_interrupt) {
		vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__interrupt_mask 
		    = vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__bus_control_m__DOT__last_interrupt_mask;
	    } else {
		vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__interrupt_mask = 0U;
		vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__bus_control_m__DOT__last_interrupt_mask = 0U;
	    }
	}
    } else {
	vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__interrupt_mask = 0U;
	vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__bus_control_m__DOT__last_interrupt_mask = 0U;
    }
    // ALWAYS at microcode_branch.v:105
    if (vlSymsp->TOP__tb_m68k_ram_uart.rst_n) {
	if ((((0xbU == (0xfU & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[2U] 
				>> 0x10U))) & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir_valid)) 
	     & (0U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__decoder_trap)))) {
	    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__microcode_branch_m__DOT__micro_pc_3 
		= vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__microcode_branch_m__DOT__micro_pc_2;
	    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__microcode_branch_m__DOT__micro_pc_2 
		= vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__microcode_branch_m__DOT__micro_pc_1;
	    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__microcode_branch_m__DOT__micro_pc_1 
		= (0x1ffU & ((IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__microcode_branch_m__DOT__micro_pc_0) 
			     + (0xfU & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[2U] 
					>> 0x14U))));
	} else {
	    if ((0xfU == (0xfU & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[2U] 
				  >> 0x10U)))) {
		if (((0xeU == (0xfU & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[2U] 
				       >> 0x14U))) 
		     & (0U != (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__load_ea)))) {
		    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__microcode_branch_m__DOT__micro_pc_2 
			= (0x1ffU & ((IData)(1U) + (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__microcode_branch_m__DOT__micro_pc_0)));
		    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__microcode_branch_m__DOT__micro_pc_3 
			= vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__microcode_branch_m__DOT__micro_pc_1;
		    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__microcode_branch_m__DOT__micro_pc_1 
			= vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__perform_ea_read;
		} else {
		    if (((0xeU == (0xfU & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[2U] 
					   >> 0x14U))) 
			 & (0U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__load_ea)))) {
			vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__microcode_branch_m__DOT__micro_pc_3 
			    = vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__microcode_branch_m__DOT__micro_pc_2;
			vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__microcode_branch_m__DOT__micro_pc_2 
			    = vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__microcode_branch_m__DOT__micro_pc_1;
			vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__microcode_branch_m__DOT__micro_pc_1 
			    = (0x1ffU & ((IData)(1U) 
					 + (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__microcode_branch_m__DOT__micro_pc_0)));
		    } else {
			if (((0xfU == (0xfU & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[2U] 
					       >> 0x14U))) 
			     & (0U != (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__save_ea)))) {
			    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__microcode_branch_m__DOT__micro_pc_3 
				= vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__microcode_branch_m__DOT__micro_pc_2;
			    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__microcode_branch_m__DOT__micro_pc_2 
				= vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__microcode_branch_m__DOT__micro_pc_1;
			    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__microcode_branch_m__DOT__micro_pc_1 
				= vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__save_ea;
			} else {
			    if (((((((1U == (0xfU & 
					     (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[2U] 
					      >> 0x14U))) 
				     & (0U != (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__load_ea))) 
				    | (2U == (0xfU 
					      & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[2U] 
						 >> 0x14U)))) 
				   | (3U == (0xfU & 
					     (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[2U] 
					      >> 0x14U)))) 
				  | ((4U == (0xfU & 
					     (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[2U] 
					      >> 0x14U))) 
				     & (0U != (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__save_ea)))) 
				 | (0xbU == (0xfU & 
					     (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[2U] 
					      >> 0x14U))))) {
				vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__microcode_branch_m__DOT__micro_pc_3 
				    = vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__microcode_branch_m__DOT__micro_pc_2;
				vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__microcode_branch_m__DOT__micro_pc_2 
				    = vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__microcode_branch_m__DOT__micro_pc_1;
				vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__microcode_branch_m__DOT__micro_pc_1 
				    = (0x1ffU & ((IData)(1U) 
						 + (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__microcode_branch_m__DOT__micro_pc_0)));
			    } else {
				if ((5U == (0xfU & 
					    (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[2U] 
					     >> 0x14U)))) {
				    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__microcode_branch_m__DOT__micro_pc_1 
					= vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__microcode_branch_m__DOT__micro_pc_2;
				    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__microcode_branch_m__DOT__micro_pc_2 
					= vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__microcode_branch_m__DOT__micro_pc_3;
				    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__microcode_branch_m__DOT__micro_pc_3 = 0U;
				} else {
				    if ((0xaU == (0xfU 
						  & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[2U] 
						     >> 0x14U)))) {
					vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__microcode_branch_m__DOT__micro_pc_3 
					    = vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__microcode_branch_m__DOT__micro_pc_2;
					vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__microcode_branch_m__DOT__micro_pc_2 
					    = vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__microcode_branch_m__DOT__micro_pc_1;
					vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__microcode_branch_m__DOT__micro_pc_1 
					    = vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__microcode_branch_m__DOT__micro_pc_0;
				    } else {
					if ((0xcU == 
					     (0xfU 
					      & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[2U] 
						 >> 0x14U)))) {
					    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__microcode_branch_m__DOT__micro_pc_1 
						= vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__microcode_branch_m__DOT__micro_pc_2;
					    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__microcode_branch_m__DOT__micro_pc_2 
						= vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__microcode_branch_m__DOT__micro_pc_3;
					    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__microcode_branch_m__DOT__micro_pc_3 = 0U;
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
	vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__microcode_branch_m__DOT__micro_pc_1 = 0U;
	vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__microcode_branch_m__DOT__micro_pc_2 = 0U;
	vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__microcode_branch_m__DOT__micro_pc_3 = 0U;
    }
    // ALWAYS at registers.v:389
    if (vlSymsp->TOP__tb_m68k_ram_uart.rst_n) {
	if ((1U == (3U & ((vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[2U] 
			   << 0xeU) | (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[1U] 
				       >> 0x12U))))) {
	    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__group_0_flag = 1U;
	} else {
	    if ((((2U == (3U & ((vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[2U] 
				 << 0xeU) | (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[1U] 
					     >> 0x12U)))) 
		  & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir_valid)) 
		 & (~ (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__stop_flag)))) {
		vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__group_0_flag = 0U;
	    }
	}
    } else {
	vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__group_0_flag = 0U;
    }
    // ALWAYS at registers.v:235
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vtableidx1 
	= ((0x1eU & ((vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[1U] 
		      << 0x1aU) | (0x3fffffeU & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[0U] 
						 >> 6U)))) 
	   | (IData)(vlSymsp->TOP__tb_m68k_ram_uart.rst_n));
    if (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vtablechg1
	[vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vtableidx1]) {
	vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ea_type 
	    = vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vtable1___PVT__ea_type
	    [vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vtableidx1];
    }
    // ALWAYS at registers.v:379
    if (vlSymsp->TOP__tb_m68k_ram_uart.rst_n) {
	if (((((1U == (3U & ((vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[2U] 
			      << 0x10U) | (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[1U] 
					   >> 0x10U)))) 
	       & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir_valid)) 
	      & (0U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__decoder_trap))) 
	     & (~ (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__stop_flag)))) {
	    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__trace_flag 
		= (1U & ((IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__sr) 
			 >> 0xfU));
	}
    } else {
	vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__trace_flag = 0U;
    }
    // ALWAYS at registers.v:220
    if (vlSymsp->TOP__tb_m68k_ram_uart.rst_n) {
	if ((1U == (0xfU & ((vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[1U] 
			     << 0x1dU) | (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[0U] 
					  >> 3U))))) {
	    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ea_mod 
		= (7U & ((IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ir) 
			 >> 3U));
	} else {
	    if ((2U == (0xfU & ((vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[1U] 
				 << 0x1dU) | (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[0U] 
					      >> 3U))))) {
		vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ea_mod 
		    = (7U & ((IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__registers_m__DOT__movem_modreg) 
			     >> 3U));
	    } else {
		if ((3U == (0xfU & ((vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[1U] 
				     << 0x1dU) | (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[0U] 
						  >> 3U))))) {
		    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ea_mod 
			= (7U & ((IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ir) 
				 >> 6U));
		} else {
		    if ((4U == (0xfU & ((vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[1U] 
					 << 0x1dU) 
					| (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[0U] 
					   >> 3U))))) {
			vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ea_mod = 4U;
		    } else {
			if ((5U == (0xfU & ((vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[1U] 
					     << 0x1dU) 
					    | (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[0U] 
					       >> 3U))))) {
			    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ea_mod = 7U;
			} else {
			    if ((6U == (0xfU & ((vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[1U] 
						 << 0x1dU) 
						| (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[0U] 
						   >> 3U))))) {
				vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ea_mod 
				    = ((8U & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ir))
				        ? 1U : 0U);
			    } else {
				if ((7U == (0xfU & 
					    ((vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[1U] 
					      << 0x1dU) 
					     | (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[0U] 
						>> 3U))))) {
				    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ea_mod 
					= (((8U == 
					     (0x1fU 
					      & ((IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ir) 
						 >> 3U))) 
					    | (0x11U 
					       == (0x1fU 
						   & ((IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ir) 
						      >> 3U))))
					    ? 0U : 1U);
				} else {
				    if ((8U == (0xfU 
						& ((vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[1U] 
						    << 0x1dU) 
						   | (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[0U] 
						      >> 3U))))) {
					vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ea_mod = 3U;
				    } else {
					if ((9U == 
					     (0xfU 
					      & ((vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[1U] 
						  << 0x1dU) 
						 | (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[0U] 
						    >> 3U))))) {
					    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ea_mod = 1U;
					} else {
					    if ((0xaU 
						 == 
						 (0xfU 
						  & ((vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[1U] 
						      << 0x1dU) 
						     | (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[0U] 
							>> 3U))))) {
						vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ea_mod = 0U;
					    } else {
						if (
						    (0xbU 
						     == 
						     (0xfU 
						      & ((vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[1U] 
							  << 0x1dU) 
							 | (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[0U] 
							    >> 3U))))) {
						    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ea_mod = 2U;
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
	}
    } else {
	vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ea_mod = 0U;
    }
    // ALWAYS at registers.v:290
    if (vlSymsp->TOP__tb_m68k_ram_uart.rst_n) {
	if ((1U == (0xfU & ((vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[1U] 
			     << 0xeU) | (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[0U] 
					 >> 0x12U))))) {
	    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__address 
		= (((IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__size) 
		    & (7U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ea_reg)))
		    ? ((IData)(2U) + vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__address)
		    : (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__address 
		       + (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__size)));
	} else {
	    if ((2U == (0xfU & ((vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[1U] 
				 << 0xeU) | (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[0U] 
					     >> 0x12U))))) {
		vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__address 
		    = (((IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__size) 
			& (7U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ea_reg)))
		        ? (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__address 
			   - (IData)(2U)) : (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__address 
					     - (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__size)));
	    } else {
		if ((3U == (0xfU & ((vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[1U] 
				     << 0xeU) | (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[0U] 
						 >> 0x12U))))) {
		    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__address 
			= ((IData)(2U) + vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__address);
		} else {
		    if ((4U == (0xfU & ((vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[1U] 
					 << 0xeU) | 
					(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[0U] 
					 >> 0x12U))))) {
			vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__address 
			    = vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m.__PVT__An_output;
		    } else {
			if ((5U == (0xfU & ((vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[1U] 
					     << 0xeU) 
					    | (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[0U] 
					       >> 0x12U))))) {
			    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__address 
				= ((vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__address 
				    + vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__registers_m__DOT__index) 
				   + vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__registers_m__DOT__offset);
			} else {
			    if ((6U == (0xfU & ((vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[1U] 
						 << 0xeU) 
						| (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[0U] 
						   >> 0x12U))))) {
				vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__address 
				    = ((0xffff0000U 
					& (VL_NEGATE_I((IData)(
							       (1U 
								& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
								   >> 0xfU)))) 
					   << 0x10U)) 
				       | (0xffffU & 
					  vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U]));
			    } else {
				if ((7U == (0xfU & 
					    ((vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[1U] 
					      << 0xeU) 
					     | (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[0U] 
						>> 0x12U))))) {
				    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__address 
					= ((vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
					    << 0x10U) 
					   | (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[1U] 
					      >> 0x10U));
				} else {
				    if ((8U == (0xfU 
						& ((vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[1U] 
						    << 0xeU) 
						   | (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[0U] 
						      >> 0x12U))))) {
					vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__address 
					    = ((vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__registers_m__DOT__pc_valid 
						+ vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__registers_m__DOT__index) 
					       + vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__registers_m__DOT__offset);
				    } else {
					if ((9U == 
					     (0xfU 
					      & ((vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[1U] 
						  << 0xeU) 
						 | (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[0U] 
						    >> 0x12U))))) {
					    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__address 
						= ((IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__registers_m__DOT__trap) 
						   << 2U);
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
	vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__address = 0U;
    }
    // ALWAYS at registers.v:247
    if (vlSymsp->TOP__tb_m68k_ram_uart.rst_n) {
	if ((1U == (0xfU & ((vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[1U] 
			     << 0x15U) | (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[0U] 
					  >> 0xbU))))) {
	    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__operand1 
		= vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand2;
	} else {
	    if ((2U == (0xfU & ((vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[1U] 
				 << 0x15U) | (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[0U] 
					      >> 0xbU))))) {
		vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__operand1 
		    = vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__address;
	    } else {
		if ((3U == (0xfU & ((vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[1U] 
				     << 0x15U) | (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[0U] 
						  >> 0xbU))))) {
		    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__operand1 
			= ((1U & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__size))
			    ? ((0xffffff00U & (VL_NEGATE_I((IData)(
								   (1U 
								    & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__data_read 
								       >> 7U)))) 
					       << 8U)) 
			       | (0xffU & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__data_read))
			    : ((2U & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__size))
			        ? ((0xffff0000U & (
						   VL_NEGATE_I((IData)(
								       (1U 
									& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__data_read 
									   >> 0xfU)))) 
						   << 0x10U)) 
				   | (0xffffU & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__data_read))
			        : vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__data_read));
		} else {
		    if ((4U == (0xfU & ((vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[1U] 
					 << 0x15U) 
					| (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[0U] 
					   >> 0xbU))))) {
			vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__operand1 
			    = ((1U & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__size))
			        ? ((0xffffff00U & (
						   VL_NEGATE_I((IData)(
								       (1U 
									& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
									   >> 7U)))) 
						   << 8U)) 
				   | (0xffU & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U]))
			        : ((2U & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__size))
				    ? ((0xffff0000U 
					& (VL_NEGATE_I((IData)(
							       (1U 
								& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
								   >> 0xfU)))) 
					   << 0x10U)) 
				       | (0xffffU & 
					  vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U]))
				    : ((vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
					<< 0x10U) | 
				       (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[1U] 
					>> 0x10U))));
		    } else {
			if ((5U == (0xfU & ((vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[1U] 
					     << 0x15U) 
					    | (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[0U] 
					       >> 0xbU))))) {
			    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__operand1 
				= vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__result;
			} else {
			    if ((6U == (0xfU & ((vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[1U] 
						 << 0x15U) 
						| (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[0U] 
						   >> 0xbU))))) {
				vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__operand1 
				    = ((0xffffff00U 
					& (VL_NEGATE_I((IData)(
							       (1U 
								& ((IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ir) 
								   >> 7U)))) 
					   << 8U)) 
				       | (0xffU & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ir)));
			    } else {
				if ((7U == (0xfU & 
					    ((vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[1U] 
					      << 0x15U) 
					     | (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[0U] 
						>> 0xbU))))) {
				    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__operand1 
					= vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__registers_m__DOT__pc_valid;
				} else {
				    if ((8U == (0xfU 
						& ((vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[1U] 
						    << 0x15U) 
						   | (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[0U] 
						      >> 0xbU))))) {
					vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__operand1 = 0U;
				    } else {
					if ((9U == 
					     (0xfU 
					      & ((vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[1U] 
						  << 0x15U) 
						 | (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[0U] 
						    >> 0xbU))))) {
					    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__operand1 = 0xffffffffU;
					} else {
					    if ((0xaU 
						 == 
						 (0xfU 
						  & ((vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[1U] 
						      << 0x15U) 
						     | (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[0U] 
							>> 0xbU))))) {
						vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__operand1 
						    = 
						    (0xa71fU 
						     & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__sr));
					    } else {
						if (
						    (0xbU 
						     == 
						     (0xfU 
						      & ((vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[1U] 
							  << 0x15U) 
							 | (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[0U] 
							    >> 0xbU))))) {
						    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__operand1 
							= vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m.__PVT__usp;
						} else {
						    if (
							(0xcU 
							 == 
							 (0xfU 
							  & ((vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[1U] 
							      << 0x15U) 
							     | (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[0U] 
								>> 0xbU))))) {
							vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__operand1 
							    = 
							    ((2U 
							      & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__size))
							      ? 
							     ((0xffff0000U 
							       & (VL_NEGATE_I((IData)(
										(1U 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m.__PVT__An_output 
										>> 0xfU)))) 
								  << 0x10U)) 
							      | (0xffffU 
								 & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m.__PVT__An_output))
							      : vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m.__PVT__An_output);
						    } else {
							if (
							    (0xdU 
							     == 
							     (0xfU 
							      & ((vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[1U] 
								  << 0x15U) 
								 | (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[0U] 
								    >> 0xbU))))) {
							    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__operand1 
								= 
								((1U 
								  & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__size))
								  ? 
								 ((0xffffff00U 
								   & (VL_NEGATE_I((IData)(
										(1U 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__dn_ram_inst.__PVT__data_out 
										>> 7U)))) 
								      << 8U)) 
								  | (0xffU 
								     & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__dn_ram_inst.__PVT__data_out))
								  : 
								 ((2U 
								   & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__size))
								   ? 
								  ((0xffff0000U 
								    & (VL_NEGATE_I((IData)(
										(1U 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__dn_ram_inst.__PVT__data_out 
										>> 0xfU)))) 
								       << 0x10U)) 
								   | (0xffffU 
								      & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__dn_ram_inst.__PVT__data_out))
								   : vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__dn_ram_inst.__PVT__data_out));
							} else {
							    if (
								(0xeU 
								 == 
								 (0xfU 
								  & ((vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[1U] 
								      << 0x15U) 
								     | (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[0U] 
									>> 0xbU))))) {
								vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__operand1 
								    = vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ir;
							    } else {
								if (
								    (0xfU 
								     == 
								     (0xfU 
								      & ((vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[1U] 
									  << 0x15U) 
									 | (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[0U] 
									    >> 0xbU))))) {
								    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__operand1 
									= vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__fault_address_state;
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
			}
		    }
		}
	    }
	}
    } else {
	vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__operand1 = 0xffffffffU;
    }
    // ALWAYS at registers.v:277
    if (vlSymsp->TOP__tb_m68k_ram_uart.rst_n) {
	if ((1U == (7U & ((vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[1U] 
			   << 0x11U) | (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[0U] 
					>> 0xfU))))) {
	    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__operand2 
		= vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand1;
	} else {
	    if ((2U == (7U & ((vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[1U] 
			       << 0x11U) | (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[0U] 
					    >> 0xfU))))) {
		vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__operand2 = 1U;
	    } else {
		if ((3U == (7U & ((vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[1U] 
				   << 0x11U) | (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[0U] 
						>> 0xfU))))) {
		    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__operand2 
			= ((0x20U & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ir))
			    ? (0x3fU & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand2)
			    : ((0U == (7U & ((IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ir) 
					     >> 9U)))
			        ? 8U : (7U & ((IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ir) 
					      >> 9U))));
		} else {
		    if ((4U == (7U & ((vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[1U] 
				       << 0x11U) | 
				      (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[0U] 
				       >> 0xfU))))) {
			vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__operand2 
			    = ((0U == (7U & ((IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ir) 
					     >> 9U)))
			        ? 8U : (7U & ((IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ir) 
					      >> 9U)));
		    } else {
			if ((5U == (7U & ((vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[1U] 
					   << 0x11U) 
					  | (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[0U] 
					     >> 0xfU))))) {
			    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__operand2 
				= ((0U == (0xffU & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ir)))
				    ? vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand2
				    : ((0xffffff00U 
					& (VL_NEGATE_I((IData)(
							       (1U 
								& ((IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ir) 
								   >> 7U)))) 
					   << 8U)) 
				       | (0xffU & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ir))));
			} else {
			    if ((6U == (7U & ((vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[1U] 
					       << 0x11U) 
					      | (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[0U] 
						 >> 0xfU))))) {
				vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__operand2 
				    = (((IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__rw_state) 
					<< 4U) | (((IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__registers_m__DOT__instruction_flag) 
						   << 3U) 
						  | (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__fc_state)));
			    } else {
				if ((7U == (7U & ((
						   vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[1U] 
						   << 0x11U) 
						  | (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[0U] 
						     >> 0xfU))))) {
				    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__operand2 
					= (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand2 
					   - (IData)(1U));
				}
			    }
			}
		    }
		}
	    }
	}
    } else {
	vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__operand2 = 0xffffffffU;
    }
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__movem_loop 
	= vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__movem_loop;
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__movem_reg 
	= vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__movem_reg;
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__microcode_branch_m__DOT__micro_pc_2 
	= vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__microcode_branch_m__DOT__micro_pc_2;
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__microcode_branch_m__DOT__micro_pc_3 
	= vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__microcode_branch_m__DOT__micro_pc_3;
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__microcode_branch_m__DOT__micro_pc_1 
	= vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__microcode_branch_m__DOT__micro_pc_1;
    // ALWAYS at microcode_branch.v:100
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__microcode_branch_m__DOT__micro_pc_0 
	= ((IData)(vlSymsp->TOP__tb_m68k_ram_uart.rst_n)
	    ? (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__micro_pc)
	    : 0U);
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__perform_ea_write 
	= (((0U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ea_mod)) 
	    & ((((1U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ea_type)) 
		 | (5U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ea_type))) 
		| (6U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ea_type))) 
	       | (8U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ea_type))))
	    ? 0x5bU : (((1U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ea_mod)) 
			& ((1U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ea_type)) 
			   | (6U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ea_type))))
		        ? 0x5cU : 0x5dU));
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__save_ea 
	= (((3U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ea_mod)) 
	    & (((((1U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ea_type)) 
		  | (2U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ea_type))) 
		 | (7U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ea_type))) 
		| (5U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ea_type))) 
	       | (8U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ea_type))))
	    ? 0x5fU : (((4U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ea_mod)) 
			& (((((1U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ea_type)) 
			      | (3U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ea_type))) 
			     | (5U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ea_type))) 
			    | (7U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ea_type))) 
			   | (8U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ea_type))))
		        ? 0x61U : 0U));
    // ALWAYS at registers.v:354
    if (vlSymsp->TOP__tb_m68k_ram_uart.rst_n) {
	if ((1U == (3U & ((vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[2U] 
			   << 0x16U) | (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[1U] 
					>> 0xaU))))) {
	    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__registers_m__DOT__offset 
		= ((0xffffff00U & (VL_NEGATE_I((IData)(
						       (1U 
							& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
							   >> 7U)))) 
				   << 8U)) | (0xffU 
					      & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U]));
	} else {
	    if ((2U == (3U & ((vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[2U] 
			       << 0x16U) | (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[1U] 
					    >> 0xaU))))) {
		vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__registers_m__DOT__offset 
		    = ((0xffff0000U & (VL_NEGATE_I((IData)(
							   (1U 
							    & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
							       >> 0xfU)))) 
				       << 0x10U)) | 
		       (0xffffU & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U]));
	    }
	}
    } else {
	vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__registers_m__DOT__offset = 0U;
    }
    // ALWAYS at registers.v:360
    if (vlSymsp->TOP__tb_m68k_ram_uart.rst_n) {
	if ((1U == (3U & ((vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[2U] 
			   << 0x14U) | (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[1U] 
					>> 0xcU))))) {
	    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__registers_m__DOT__index = 0U;
	} else {
	    if ((2U == (3U & ((vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[2U] 
			       << 0x14U) | (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[1U] 
					    >> 0xcU))))) {
		vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__registers_m__DOT__index 
		    = ((0x8000U & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U])
		        ? ((0x800U & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U])
			    ? vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m.__PVT__An_output
			    : ((0xffff0000U & (VL_NEGATE_I((IData)(
								   (1U 
								    & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m.__PVT__An_output 
								       >> 0xfU)))) 
					       << 0x10U)) 
			       | (0xffffU & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m.__PVT__An_output)))
		        : ((0x800U & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U])
			    ? vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__dn_ram_inst.__PVT__data_out
			    : ((0xffff0000U & (VL_NEGATE_I((IData)(
								   (1U 
								    & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__dn_ram_inst.__PVT__data_out 
								       >> 0xfU)))) 
					       << 0x10U)) 
			       | (0xffffU & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__dn_ram_inst.__PVT__data_out))));
	    }
	}
    } else {
	vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__registers_m__DOT__index = 0U;
    }
    // ALWAYS at registers.v:211
    if (vlSymsp->TOP__tb_m68k_ram_uart.rst_n) {
	if ((1U == (7U & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[0U]))) {
	    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ea_reg 
		= (7U & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ir));
	} else {
	    if ((2U == (7U & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[0U]))) {
		vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ea_reg 
		    = (7U & ((IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ir) 
			     >> 9U));
	    } else {
		if ((3U == (7U & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[0U]))) {
		    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ea_reg 
			= (7U & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__registers_m__DOT__movem_modreg));
		} else {
		    if ((4U == (7U & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[0U]))) {
			vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ea_reg = 7U;
		    } else {
			if ((5U == (7U & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[0U]))) {
			    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ea_reg = 4U;
			}
		    }
		}
	    }
	}
    } else {
	vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ea_reg = 0U;
    }
    // ALWAYS at registers.v:341
    if (vlSymsp->TOP__tb_m68k_ram_uart.rst_n) {
	if ((1U == (0xfU & ((vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[2U] 
			     << 0x1aU) | (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[1U] 
					  >> 6U))))) {
	    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__registers_m__DOT__trap = 4U;
	} else {
	    if ((2U == (0xfU & ((vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[2U] 
				 << 0x1aU) | (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[1U] 
					      >> 6U))))) {
		vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__registers_m__DOT__trap = 5U;
	    } else {
		if ((3U == (0xfU & ((vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[2U] 
				     << 0x1aU) | (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[1U] 
						  >> 6U))))) {
		    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__registers_m__DOT__trap = 6U;
		} else {
		    if ((4U == (0xfU & ((vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[2U] 
					 << 0x1aU) 
					| (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[1U] 
					   >> 6U))))) {
			vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__registers_m__DOT__trap = 7U;
		    } else {
			if ((5U == (0xfU & ((vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[2U] 
					     << 0x1aU) 
					    | (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[1U] 
					       >> 6U))))) {
			    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__registers_m__DOT__trap = 8U;
			} else {
			    if ((6U == (0xfU & ((vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[2U] 
						 << 0x1aU) 
						| (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[1U] 
						   >> 6U))))) {
				vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__registers_m__DOT__trap = 9U;
			    } else {
				if ((7U == (0xfU & 
					    ((vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[2U] 
					      << 0x1aU) 
					     | (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[1U] 
						>> 6U))))) {
				    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__registers_m__DOT__trap 
					= (0x20U | 
					   (0xfU & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ir)));
				} else {
				    if ((8U == (0xfU 
						& ((vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[2U] 
						    << 0x1aU) 
						   | (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[1U] 
						      >> 6U))))) {
					vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__registers_m__DOT__trap 
					    = vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__decoder_trap;
				    } else {
					if ((9U == 
					     (0xfU 
					      & ((vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[2U] 
						  << 0x1aU) 
						 | (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[1U] 
						    >> 6U))))) {
					    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__registers_m__DOT__trap 
						= vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__interrupt_trap;
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
	vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__registers_m__DOT__trap = 0U;
    }
    // ALWAYS at registers.v:396
    if (vlSymsp->TOP__tb_m68k_ram_uart.rst_n) {
	if ((1U == (3U & ((vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[2U] 
			   << 0xcU) | (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[1U] 
				       >> 0x14U))))) {
	    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__registers_m__DOT__instruction_flag = 1U;
	} else {
	    if (((((2U == (3U & ((vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[2U] 
				  << 0xcU) | (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[1U] 
					      >> 0x14U)))) 
		   & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir_valid)) 
		  & (0U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__decoder_trap))) 
		 & (~ (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__stop_flag)))) {
		vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__registers_m__DOT__instruction_flag = 0U;
	    }
	}
    } else {
	vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__registers_m__DOT__instruction_flag = 0U;
    }
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__registers_m__DOT__movem_modreg 
	= vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__registers_m__DOT__movem_modreg;
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__load_ea 
	= ((((((1U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ea_type)) 
	       & (((0U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ea_mod)) 
		   | (1U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ea_mod))) 
		  | ((7U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ea_mod)) 
		     & (4U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ea_reg))))) 
	      | ((5U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ea_type)) 
		 & (0U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ea_mod)))) 
	     | ((6U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ea_type)) 
		& ((0U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ea_mod)) 
		   | (1U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ea_mod))))) 
	    | ((8U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ea_type)) 
	       & ((0U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ea_mod)) 
		  | ((7U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ea_mod)) 
		     & (4U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ea_reg))))))
	    ? 0U : (((2U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ea_mod)) 
		     & (((((((1U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ea_type)) 
			     | (2U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ea_type))) 
			    | (3U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ea_type))) 
			   | (4U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ea_type))) 
			  | (5U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ea_type))) 
			 | (7U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ea_type))) 
			| (8U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ea_type))))
		     ? 0x3eU : (((3U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ea_mod)) 
				 & (((((1U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ea_type)) 
				       | (2U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ea_type))) 
				      | (7U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ea_type))) 
				     | (5U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ea_type))) 
				    | (8U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ea_type))))
				 ? 0x3eU : (((4U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ea_mod)) 
					     & (((((1U 
						    == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ea_type)) 
						   | (3U 
						      == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ea_type))) 
						  | (5U 
						     == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ea_type))) 
						 | (7U 
						    == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ea_type))) 
						| (8U 
						   == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ea_type))))
					     ? 0x3fU
					     : (((5U 
						  == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ea_mod)) 
						 & (((((((1U 
							  == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ea_type)) 
							 | (2U 
							    == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ea_type))) 
							| (3U 
							   == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ea_type))) 
						       | (4U 
							  == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ea_type))) 
						      | (5U 
							 == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ea_type))) 
						     | (7U 
							== (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ea_type))) 
						    | (8U 
						       == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ea_type))))
						 ? 0x41U
						 : 
						(((6U 
						   == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ea_mod)) 
						  & (((((((1U 
							   == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ea_type)) 
							  | (2U 
							     == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ea_type))) 
							 | (3U 
							    == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ea_type))) 
							| (4U 
							   == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ea_type))) 
						       | (5U 
							  == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ea_type))) 
						      | (7U 
							 == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ea_type))) 
						     | (8U 
							== (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ea_type))))
						  ? 0x44U
						  : 
						 ((((7U 
						     == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ea_mod)) 
						    & (0U 
						       == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ea_reg))) 
						   & (((((((1U 
							    == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ea_type)) 
							   | (2U 
							      == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ea_type))) 
							  | (3U 
							     == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ea_type))) 
							 | (4U 
							    == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ea_type))) 
							| (5U 
							   == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ea_type))) 
						       | (7U 
							  == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ea_type))) 
						      | (8U 
							 == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ea_type))))
						   ? 0x48U
						   : 
						  ((((7U 
						      == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ea_mod)) 
						     & (1U 
							== (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ea_reg))) 
						    & (((((((1U 
							     == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ea_type)) 
							    | (2U 
							       == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ea_type))) 
							   | (3U 
							      == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ea_type))) 
							  | (4U 
							     == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ea_type))) 
							 | (5U 
							    == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ea_type))) 
							| (7U 
							   == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ea_type))) 
						       | (8U 
							  == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ea_type))))
						    ? 0x4aU
						    : 
						   ((((7U 
						       == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ea_mod)) 
						      & (2U 
							 == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ea_reg))) 
						     & ((((1U 
							   == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ea_type)) 
							  | (2U 
							     == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ea_type))) 
							 | (4U 
							    == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ea_type))) 
							| (8U 
							   == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ea_type))))
						     ? 0x4cU
						     : 
						    ((((7U 
							== (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ea_mod)) 
						       & (3U 
							  == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ea_reg))) 
						      & ((((1U 
							    == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ea_type)) 
							   | (2U 
							      == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ea_type))) 
							  | (4U 
							     == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ea_type))) 
							 | (8U 
							    == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ea_type))))
						      ? 0x4fU
						      : 0x53U))))))))));
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__perform_ea_read 
	= (((0U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ea_mod)) 
	    & ((((1U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ea_type)) 
		 | (5U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ea_type))) 
		| (6U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ea_type))) 
	       | (8U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ea_type))))
	    ? 0x55U : (((1U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ea_mod)) 
			& ((1U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ea_type)) 
			   | (6U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ea_type))))
		        ? 0x56U : ((((7U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ea_mod)) 
				     & (4U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ea_reg))) 
				    & ((1U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ea_type)) 
				       | (8U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ea_type))))
				    ? 0x57U : 0x59U)));
    // ALWAYS at bus_control.v:178
    if (vlSymsp->TOP__tb_m68k_ram_uart.rst_n) {
	if (((((((((0U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__bus_control_m__DOT__current_state)) 
		   | (1U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__bus_control_m__DOT__current_state))) 
		  | (2U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__bus_control_m__DOT__current_state))) 
		 | (3U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__bus_control_m__DOT__current_state))) 
		| (0xbU == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__bus_control_m__DOT__current_state))) 
	       | (0xcU == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__bus_control_m__DOT__current_state))) 
	      | (0xdU == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__bus_control_m__DOT__current_state))) 
	     | (0xeU == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__bus_control_m__DOT__current_state)))) {
	    if ((0U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__bus_control_m__DOT__current_state))) {
		vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__finished = 0U;
		vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__jmp_address_trap = 0U;
		vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__jmp_bus_trap = 0U;
		vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__reset_o = 0U;
		vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__blocked_o = 0U;
		if (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__do_blocked) {
		    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__blocked_o = 1U;
		    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__bus_control_m__DOT__current_state = 2U;
		} else {
		    if (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__do_reset) {
			vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__reset_o = 1U;
			vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__bus_control_m__DOT__reset_counter = 0x7cU;
			vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__bus_control_m__DOT__current_state = 1U;
		    } else {
			if (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__do_read) {
			    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__WE_O = 0U;
			    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__fc_o 
				= ((0x2000U & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__sr))
				    ? ((IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__address_type)
				        ? 6U : 5U) : 
				   ((IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__address_type)
				     ? 2U : 1U));
			    if (VL_UNLIKELY((1U & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__address 
						   & (~ (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__size)))))) {
				VL_WRITEF("ADDRESS TRAP\n");
				vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__fault_address_state 
				    = vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__address;
				vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__rw_state = 1U;
				vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__fc_state 
				    = ((0x2000U & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__sr))
				        ? ((IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__address_type)
					    ? 6U : 5U)
				        : ((IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__address_type)
					    ? 2U : 1U));
				vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__interrupt_trap = 3U;
				vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__jmp_address_trap = 1U;
				vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__bus_control_m__DOT__current_state = 7U;
			    } else {
				vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__CYC_O = 1U;
				vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__ADR_O 
				    = (0x3fffffffU 
				       & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__address 
					  >> 2U));
				vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__SEL_O 
				    = (((IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__size) 
					& (0U == (3U 
						  & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__address)))
				        ? 8U : (((IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__size) 
						 & (1U 
						    == 
						    (3U 
						     & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__address)))
						 ? 4U
						 : 
						(((IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__size) 
						  & (2U 
						     == 
						     (3U 
						      & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__address)))
						  ? 2U
						  : 
						 (((IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__size) 
						   & (3U 
						      == 
						      (3U 
						       & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__address)))
						   ? 1U
						   : 
						  ((1U 
						    & (((IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__size) 
							>> 1U) 
						       & (~ 
							  (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__address 
							   >> 1U))))
						    ? 0xcU
						    : 
						   ((1U 
						     & ((~ (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__size)) 
							& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__address 
							   >> 1U)))
						     ? 3U
						     : 0xfU))))));
				vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__STB_O = 1U;
				if (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__read_modify_write_flag) {
				    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__SGL_O = 0U;
				    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__BLK_O = 0U;
				    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__RMW_O = 1U;
				    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__CTI_O = 7U;
				} else {
				    if (((2U == (3U 
						 & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__address)) 
					 & ((IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__size) 
					    >> 2U))) {
					vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__SGL_O = 0U;
					vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__BLK_O = 1U;
					vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__RMW_O = 0U;
					vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__CTI_O = 2U;
				    } else {
					vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__SGL_O = 1U;
					vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__BLK_O = 0U;
					vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__RMW_O = 0U;
					vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__CTI_O = 7U;
				    }
				}
				vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__bus_control_m__DOT__current_state = 4U;
			    }
			} else {
			    if (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__do_write) {
				vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__WE_O = 1U;
				vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__fc_o 
				    = ((0x2000U & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__sr))
				        ? 5U : 1U);
				if (VL_UNLIKELY((1U 
						 & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__address 
						    & (~ (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__size)))))) {
				    VL_WRITEF("ADDRESS TRAP\n");
				    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__fault_address_state 
					= vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__address;
				    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__rw_state = 0U;
				    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__fc_state 
					= ((0x2000U 
					    & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__sr))
					    ? 5U : 1U);
				    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__interrupt_trap = 3U;
				    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__jmp_address_trap = 1U;
				    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__bus_control_m__DOT__current_state = 7U;
				} else {
				    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__CYC_O = 1U;
				    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__ADR_O 
					= (0x3fffffffU 
					   & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__address 
					      >> 2U));
				    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__STB_O = 1U;
				    if (((2U == (3U 
						 & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__address)) 
					 & ((IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__size) 
					    >> 2U))) {
					vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__DAT_O 
					    = (0xffffU 
					       & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__data_write 
						  >> 0x10U));
					vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__SEL_O = 3U;
				    } else {
					if (((0U == 
					      (3U & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__address)) 
					     & ((IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__size) 
						>> 2U))) {
					    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__DAT_O 
						= vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__data_write;
					    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__SEL_O = 0xfU;
					} else {
					    if (((2U 
						  == 
						  (3U 
						   & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__address)) 
						 & ((IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__size) 
						    >> 1U))) {
						vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__DAT_O 
						    = 
						    (0xffffU 
						     & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__data_write);
						vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__SEL_O = 3U;
					    } else {
						if (
						    ((0U 
						      == 
						      (3U 
						       & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__address)) 
						     & ((IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__size) 
							>> 1U))) {
						    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__DAT_O 
							= 
							(0xffff0000U 
							 & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__data_write 
							    << 0x10U));
						    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__SEL_O = 0xcU;
						} else {
						    if (
							((3U 
							  == 
							  (3U 
							   & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__address)) 
							 & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__size))) {
							vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__DAT_O 
							    = 
							    (0xffU 
							     & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__data_write);
							vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__SEL_O = 1U;
						    } else {
							if (
							    ((2U 
							      == 
							      (3U 
							       & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__address)) 
							     & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__size))) {
							    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__DAT_O 
								= 
								(0xff00U 
								 & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__data_write 
								    << 8U));
							    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__SEL_O = 2U;
							} else {
							    if (
								((1U 
								  == 
								  (3U 
								   & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__address)) 
								 & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__size))) {
								vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__DAT_O 
								    = 
								    (0xff0000U 
								     & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__data_write 
									<< 0x10U));
								vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__SEL_O = 4U;
							    } else {
								if (
								    ((0U 
								      == 
								      (3U 
								       & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__address)) 
								     & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__size))) {
								    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__DAT_O 
									= 
									(0xff000000U 
									 & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__data_write 
									    << 0x18U));
								    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__SEL_O = 8U;
								}
							    }
							}
						    }
						}
					    }
					}
				    }
				    if (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__read_modify_write_flag) {
					vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__SGL_O = 0U;
					vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__BLK_O = 0U;
					vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__RMW_O = 1U;
					vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__CTI_O = 7U;
				    } else {
					if (((2U == 
					      (3U & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__address)) 
					     & ((IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__size) 
						>> 2U))) {
					    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__SGL_O = 0U;
					    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__BLK_O = 1U;
					    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__RMW_O = 0U;
					    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__CTI_O = 2U;
					} else {
					    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__SGL_O = 1U;
					    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__BLK_O = 0U;
					    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__RMW_O = 0U;
					    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__CTI_O = 7U;
					}
				    }
				    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__bus_control_m__DOT__current_state = 8U;
				}
			    } else {
				if ((1U & ((~ (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir_valid)) 
					   | (0U != (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__pc_change))))) {
				    if ((1U & (((~ (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir_valid)) 
						| (2U 
						   == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__pc_change))) 
					       | (3U 
						  == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__pc_change))))) {
					vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__prefetch_ir_valid_32 = 0U;
					vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__prefetch_ir_valid = 0U;
					vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__bus_control_m__DOT__prefetch_ir_valid_80_o = 0U;
					vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__bus_control_m__DOT__current_state = 0xbU;
				    } else {
					if (((~ (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__bus_control_m__DOT__prefetch_ir_valid_80_o)) 
					     & (1U 
						== (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__pc_change)))) {
					    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__prefetch_ir[0U] 
						= (0xffff0000U 
						   & ((IData)(
							      (((QData)((IData)(
										vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[1U])) 
								<< 0x20U) 
							       | (QData)((IData)(
										vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[0U])))) 
						      << 0x10U));
					    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__prefetch_ir[1U] 
						= (
						   (0xffffU 
						    & ((IData)(
							       (((QData)((IData)(
										vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[1U])) 
								 << 0x20U) 
								| (QData)((IData)(
										vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[0U])))) 
						       >> 0x10U)) 
						   | (0xffff0000U 
						      & ((IData)(
								 ((((QData)((IData)(
										vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[1U])) 
								    << 0x20U) 
								   | (QData)((IData)(
										vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[0U]))) 
								  >> 0x20U)) 
							 << 0x10U)));
					    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__prefetch_ir[2U] 
						= (0xffffU 
						   & ((IData)(
							      ((((QData)((IData)(
										vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[1U])) 
								 << 0x20U) 
								| (QData)((IData)(
										vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[0U]))) 
							       >> 0x20U)) 
						      >> 0x10U));
					    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__prefetch_ir_valid_32 = 1U;
					    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__prefetch_ir_valid = 0U;
					    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__bus_control_m__DOT__prefetch_ir_valid_80_o = 0U;
					    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__bus_control_m__DOT__current_state = 0xbU;
					} else {
					    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__prefetch_ir[0U] 
						= (0xffff0000U 
						   & ((IData)(
							      (((QData)((IData)(
										vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[1U])) 
								<< 0x20U) 
							       | (QData)((IData)(
										vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[0U])))) 
						      << 0x10U));
					    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__prefetch_ir[1U] 
						= (
						   (0xffffU 
						    & ((IData)(
							       (((QData)((IData)(
										vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[1U])) 
								 << 0x20U) 
								| (QData)((IData)(
										vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[0U])))) 
						       >> 0x10U)) 
						   | (0xffff0000U 
						      & ((IData)(
								 ((((QData)((IData)(
										vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[1U])) 
								    << 0x20U) 
								   | (QData)((IData)(
										vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[0U]))) 
								  >> 0x20U)) 
							 << 0x10U)));
					    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__prefetch_ir[2U] 
						= (0xffffU 
						   & ((IData)(
							      ((((QData)((IData)(
										vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[1U])) 
								 << 0x20U) 
								| (QData)((IData)(
										vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[0U]))) 
							       >> 0x20U)) 
						      >> 0x10U));
					    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__prefetch_ir_valid_32 = 1U;
					    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__prefetch_ir_valid = 1U;
					    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__bus_control_m__DOT__prefetch_ir_valid_80_o = 0U;
					}
				    }
				} else {
				    if (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__do_interrupt) {
					vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__CYC_O = 1U;
					vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__ADR_O 
					    = (0x3ffffff8U 
					       | (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__bus_control_m__DOT__last_interrupt_mask));
					vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__SEL_O = 0xfU;
					vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__STB_O = 1U;
					vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__WE_O = 0U;
					vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__SGL_O = 1U;
					vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__BLK_O = 0U;
					vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__RMW_O = 0U;
					vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__CTI_O = 7U;
					vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__fc_o = 7U;
					vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__bus_control_m__DOT__current_state = 3U;
				    }
				}
			    }
			}
		    }
		}
	    } else {
		if ((1U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__bus_control_m__DOT__current_state))) {
		    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__bus_control_m__DOT__reset_counter 
			= (0xffU & ((IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__bus_control_m__DOT__reset_counter) 
				    - (IData)(1U)));
		    if ((0U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__bus_control_m__DOT__reset_counter))) {
			vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__finished = 1U;
			vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__bus_control_m__DOT__current_state = 7U;
		    }
		} else {
		    if ((2U != (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__bus_control_m__DOT__current_state))) {
			if ((3U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__bus_control_m__DOT__current_state))) {
			    if (((0x1000000U & vlSymsp->TOP__tb_m68k_ram_uart.__PVT__ao_addr)
				  ? (IData)(vlSymsp->TOP__tb_m68k_ram_uart.__PVT__uart_ack)
				  : (IData)(vlSymsp->TOP__tb_m68k_ram_uart__wb_ram_m.__PVT__ack_o_reg))) {
				vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__CYC_O = 0U;
				vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__STB_O = 0U;
				vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__interrupt_trap 
				    = (0xffU & ((0x1000000U 
						 & vlSymsp->TOP__tb_m68k_ram_uart.__PVT__ao_addr)
						 ? vlSymsp->TOP__tb_m68k_ram_uart.__PVT__uart_data_out
						 : vlSymsp->TOP__tb_m68k_ram_uart__wb_ram_m.__PVT__dat_o_reg));
				vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__finished = 1U;
				vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__bus_control_m__DOT__current_state = 7U;
			    } else {
				if (((0x1000000U & vlSymsp->TOP__tb_m68k_ram_uart.__PVT__ao_addr)
				      ? (IData)(vlSymsp->TOP__tb_m68k_ram_uart.__PVT__arbiter__DOT__s1_rty_i)
				      : (IData)(vlSymsp->TOP__tb_m68k_ram_uart.__PVT__arbiter__DOT__s0_rty_i))) {
				    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__CYC_O = 0U;
				    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__STB_O = 0U;
				    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__interrupt_trap 
					= (0xffU & 
					   ((IData)(0x18U) 
					    + (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__interrupt_mask)));
				    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__finished = 1U;
				    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__bus_control_m__DOT__current_state = 7U;
				} else {
				    if (((0x1000000U 
					  & vlSymsp->TOP__tb_m68k_ram_uart.__PVT__ao_addr)
					  ? (IData)(vlSymsp->TOP__tb_m68k_ram_uart.__PVT__arbiter__DOT__s1_err_i)
					  : (IData)(vlSymsp->TOP__tb_m68k_ram_uart.__PVT__arbiter__DOT__s0_err_i))) {
					vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__CYC_O = 0U;
					vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__STB_O = 0U;
					vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__interrupt_trap = 0x18U;
					vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__finished = 1U;
					vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__bus_control_m__DOT__current_state = 7U;
				    }
				}
			    }
			} else {
			    if ((0xbU == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__bus_control_m__DOT__current_state))) {
				vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__WE_O = 0U;
				vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__fc_o 
				    = ((0x2000U & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__sr))
				        ? 6U : 2U);
				if (VL_UNLIKELY((1U 
						 & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__pc))) {
				    VL_WRITEF("ADDRESS TRAP\n");
				    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__prefetch_ir_valid_32 = 1U;
				    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__prefetch_ir_valid = 1U;
				    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__bus_control_m__DOT__prefetch_ir_valid_80_o = 1U;
				    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__fault_address_state 
					= vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__pc;
				    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__rw_state = 1U;
				    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__fc_state 
					= ((0x2000U 
					    & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__sr))
					    ? 6U : 2U);
				    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__interrupt_trap = 3U;
				    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__jmp_address_trap = 1U;
				    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__bus_control_m__DOT__current_state = 7U;
				} else {
				    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__CYC_O = 1U;
				    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__ADR_O 
					= (0x3fffffffU 
					   & ((IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir_valid_32)
					       ? (((IData)(6U) 
						   + vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__pc) 
						  >> 2U)
					       : (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__pc 
						  >> 2U)));
				    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__STB_O = 1U;
				    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__bus_control_m__DOT__saved_pc_change 
					= vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__pc_change;
				    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__bus_control_m__DOT__current_state = 0xcU;
				    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__SEL_O 
					= (((~ (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir_valid_32)) 
					    & (2U == 
					       (3U 
						& vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__pc)))
					    ? 3U : 0xfU);
				    if (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir_valid_32) {
					vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__SGL_O = 1U;
					vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__BLK_O = 0U;
					vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__RMW_O = 0U;
					vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__CTI_O = 7U;
				    } else {
					vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__SGL_O = 0U;
					vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__BLK_O = 1U;
					vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__RMW_O = 0U;
					vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__CTI_O = 2U;
				    }
				    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__prefetch_ir_valid_32 = 0U;
				}
			    } else {
				if ((0xcU == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__bus_control_m__DOT__current_state))) {
				    if (((0x1000000U 
					  & vlSymsp->TOP__tb_m68k_ram_uart.__PVT__ao_addr)
					  ? (IData)(vlSymsp->TOP__tb_m68k_ram_uart.__PVT__uart_ack)
					  : (IData)(vlSymsp->TOP__tb_m68k_ram_uart__wb_ram_m.__PVT__ack_o_reg))) {
					if ((2U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__CTI_O))) {
					    if ((2U 
						 == 
						 (3U 
						  & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__pc))) {
						vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__prefetch_ir[0U] = 0U;
						vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__prefetch_ir[1U] = 0U;
						vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__prefetch_ir[2U] 
						    = 
						    (0xffffU 
						     & ((0x1000000U 
							 & vlSymsp->TOP__tb_m68k_ram_uart.__PVT__ao_addr)
							 ? vlSymsp->TOP__tb_m68k_ram_uart.__PVT__uart_data_out
							 : vlSymsp->TOP__tb_m68k_ram_uart__wb_ram_m.__PVT__dat_o_reg));
					    } else {
						vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__prefetch_ir[0U] = 0U;
						vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__prefetch_ir[1U] 
						    = 
						    (0xffff0000U 
						     & (((0x1000000U 
							  & vlSymsp->TOP__tb_m68k_ram_uart.__PVT__ao_addr)
							  ? vlSymsp->TOP__tb_m68k_ram_uart.__PVT__uart_data_out
							  : vlSymsp->TOP__tb_m68k_ram_uart__wb_ram_m.__PVT__dat_o_reg) 
							<< 0x10U));
						vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__prefetch_ir[2U] 
						    = 
						    (0xffffU 
						     & (((0x1000000U 
							  & vlSymsp->TOP__tb_m68k_ram_uart.__PVT__ao_addr)
							  ? vlSymsp->TOP__tb_m68k_ram_uart.__PVT__uart_data_out
							  : vlSymsp->TOP__tb_m68k_ram_uart__wb_ram_m.__PVT__dat_o_reg) 
							>> 0x10U));
					    }
					    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__ADR_O 
						= (0x3fffffffU 
						   & (((IData)(4U) 
						       + vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__pc) 
						      >> 2U));
					    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__SEL_O = 0xfU;
					    if ((2U 
						 == 
						 (3U 
						  & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__pc))) {
						vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__SGL_O = 0U;
						vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__BLK_O = 1U;
						vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__RMW_O = 0U;
						vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__CTI_O = 2U;
					    } else {
						vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__SGL_O = 0U;
						vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__BLK_O = 1U;
						vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__RMW_O = 0U;
						vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__CTI_O = 7U;
					    }
					    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__bus_control_m__DOT__current_state = 0xeU;
					} else {
					    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__CYC_O = 0U;
					    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__STB_O = 0U;
					    if ((((
						   (2U 
						    == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__bus_control_m__DOT__saved_pc_change)) 
						   | (3U 
						      == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__bus_control_m__DOT__saved_pc_change))) 
						  | (2U 
						     == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__pc_change))) 
						 | (3U 
						    == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__pc_change)))) {
						vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__prefetch_ir_valid_32 = 0U;
						vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__prefetch_ir_valid = 0U;
						vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__bus_control_m__DOT__prefetch_ir_valid_80_o = 0U;
						vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__bus_control_m__DOT__current_state = 0xbU;
					    } else {
						if (
						    ((1U 
						      == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__bus_control_m__DOT__saved_pc_change)) 
						     | (1U 
							== (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__pc_change)))) {
						    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__prefetch_ir[0U] 
							= 
							(0xffff0000U 
							 & ((IData)(
								    (((QData)((IData)(
										vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[1U])) 
								      << 0x20U) 
								     | (QData)((IData)(
										((0x1000000U 
										& vlSymsp->TOP__tb_m68k_ram_uart.__PVT__ao_addr)
										 ? vlSymsp->TOP__tb_m68k_ram_uart.__PVT__uart_data_out
										 : vlSymsp->TOP__tb_m68k_ram_uart__wb_ram_m.__PVT__dat_o_reg))))) 
							    << 0x10U));
						    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__prefetch_ir[1U] 
							= 
							((0xffffU 
							  & ((IData)(
								     (((QData)((IData)(
										vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[1U])) 
								       << 0x20U) 
								      | (QData)((IData)(
										((0x1000000U 
										& vlSymsp->TOP__tb_m68k_ram_uart.__PVT__ao_addr)
										 ? vlSymsp->TOP__tb_m68k_ram_uart.__PVT__uart_data_out
										 : vlSymsp->TOP__tb_m68k_ram_uart__wb_ram_m.__PVT__dat_o_reg))))) 
							     >> 0x10U)) 
							 | (0xffff0000U 
							    & ((IData)(
								       ((((QData)((IData)(
										vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[1U])) 
									  << 0x20U) 
									 | (QData)((IData)(
										((0x1000000U 
										& vlSymsp->TOP__tb_m68k_ram_uart.__PVT__ao_addr)
										 ? vlSymsp->TOP__tb_m68k_ram_uart.__PVT__uart_data_out
										 : vlSymsp->TOP__tb_m68k_ram_uart__wb_ram_m.__PVT__dat_o_reg)))) 
									>> 0x20U)) 
							       << 0x10U)));
						    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__prefetch_ir[2U] 
							= 
							(0xffffU 
							 & ((IData)(
								    ((((QData)((IData)(
										vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[1U])) 
								       << 0x20U) 
								      | (QData)((IData)(
										((0x1000000U 
										& vlSymsp->TOP__tb_m68k_ram_uart.__PVT__ao_addr)
										 ? vlSymsp->TOP__tb_m68k_ram_uart.__PVT__uart_data_out
										 : vlSymsp->TOP__tb_m68k_ram_uart__wb_ram_m.__PVT__dat_o_reg)))) 
								     >> 0x20U)) 
							    >> 0x10U));
						    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__prefetch_ir_valid_32 = 1U;
						    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__prefetch_ir_valid = 1U;
						    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__bus_control_m__DOT__prefetch_ir_valid_80_o = 0U;
						    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__bus_control_m__DOT__current_state = 0U;
						} else {
						    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__prefetch_ir[0U] 
							= 
							((0x1000000U 
							  & vlSymsp->TOP__tb_m68k_ram_uart.__PVT__ao_addr)
							  ? vlSymsp->TOP__tb_m68k_ram_uart.__PVT__uart_data_out
							  : vlSymsp->TOP__tb_m68k_ram_uart__wb_ram_m.__PVT__dat_o_reg);
						    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__prefetch_ir[1U] 
							= (IData)(
								  (VL_ULL(0xffffffffffff) 
								   & (((QData)((IData)(
										vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U])) 
								       << 0x20U) 
								      | (QData)((IData)(
										vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[1U])))));
						    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__prefetch_ir[2U] 
							= (IData)(
								  ((VL_ULL(0xffffffffffff) 
								    & (((QData)((IData)(
										vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U])) 
									<< 0x20U) 
								       | (QData)((IData)(
										vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[1U])))) 
								   >> 0x20U));
						    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__prefetch_ir_valid_32 = 1U;
						    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__prefetch_ir_valid = 1U;
						    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__bus_control_m__DOT__prefetch_ir_valid_80_o = 1U;
						    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__bus_control_m__DOT__current_state = 0U;
						}
					    }
					}
				    } else {
					if (((0x1000000U 
					      & vlSymsp->TOP__tb_m68k_ram_uart.__PVT__ao_addr)
					      ? (IData)(vlSymsp->TOP__tb_m68k_ram_uart.__PVT__arbiter__DOT__s1_rty_i)
					      : (IData)(vlSymsp->TOP__tb_m68k_ram_uart.__PVT__arbiter__DOT__s0_rty_i))) {
					    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__CYC_O = 0U;
					    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__STB_O = 0U;
					    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__bus_control_m__DOT__current_state = 0xdU;
					} else {
					    if (VL_UNLIKELY(
							    ((0x1000000U 
							      & vlSymsp->TOP__tb_m68k_ram_uart.__PVT__ao_addr)
							      ? (IData)(vlSymsp->TOP__tb_m68k_ram_uart.__PVT__arbiter__DOT__s1_err_i)
							      : (IData)(vlSymsp->TOP__tb_m68k_ram_uart.__PVT__arbiter__DOT__s0_err_i)))) {
						VL_WRITEF("BUS TRAP\n");
						vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__CYC_O = 0U;
						vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__STB_O = 0U;
						vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__fault_address_state 
						    = 
						    (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ADR_O 
						     << 2U);
						vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__rw_state 
						    = 
						    (1U 
						     & (~ (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__WE_O)));
						vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__fc_state 
						    = vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__fc_o;
						vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__interrupt_trap = 2U;
						vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__jmp_bus_trap = 1U;
						vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__bus_control_m__DOT__current_state = 7U;
					    }
					}
				    }
				    if ((0U != (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__pc_change))) {
					vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__bus_control_m__DOT__saved_pc_change 
					    = vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__pc_change;
				    }
				} else {
				    if ((0xdU == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__bus_control_m__DOT__current_state))) {
					vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__CYC_O = 1U;
					vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__STB_O = 1U;
					vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__bus_control_m__DOT__current_state = 0xcU;
				    } else {
					if (((0x1000000U 
					      & vlSymsp->TOP__tb_m68k_ram_uart.__PVT__ao_addr)
					      ? (IData)(vlSymsp->TOP__tb_m68k_ram_uart.__PVT__uart_ack)
					      : (IData)(vlSymsp->TOP__tb_m68k_ram_uart__wb_ram_m.__PVT__ack_o_reg))) {
					    if ((2U 
						 == 
						 (3U 
						  & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__pc))) {
						vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__prefetch_ir[0U] 
						    = (IData)(
							      ((QData)((IData)(
									       ((0x1000000U 
										& vlSymsp->TOP__tb_m68k_ram_uart.__PVT__ao_addr)
										 ? vlSymsp->TOP__tb_m68k_ram_uart.__PVT__uart_data_out
										 : vlSymsp->TOP__tb_m68k_ram_uart__wb_ram_m.__PVT__dat_o_reg))) 
							       << 0x20U));
						vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__prefetch_ir[1U] 
						    = (IData)(
							      (((QData)((IData)(
										((0x1000000U 
										& vlSymsp->TOP__tb_m68k_ram_uart.__PVT__ao_addr)
										 ? vlSymsp->TOP__tb_m68k_ram_uart.__PVT__uart_data_out
										 : vlSymsp->TOP__tb_m68k_ram_uart__wb_ram_m.__PVT__dat_o_reg))) 
								<< 0x20U) 
							       >> 0x20U));
						vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__prefetch_ir[2U] 
						    = 
						    (0xffffU 
						     & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U]);
						vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__ADR_O 
						    = 
						    (0x3fffffffU 
						     & (((IData)(6U) 
							 + vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__pc) 
							>> 2U));
						vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__SEL_O = 0xfU;
						vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__SGL_O = 0U;
						vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__BLK_O = 1U;
						vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__RMW_O = 0U;
						vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__CTI_O = 7U;
						vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__bus_control_m__DOT__current_state = 0x10U;
					    } else {
						vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__prefetch_ir[0U] 
						    = 
						    (0xffff0000U 
						     & ((IData)(
								(((QData)((IData)(
										((vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										<< 0x10U) 
										| (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[1U] 
										>> 0x10U)))) 
								  << 0x20U) 
								 | (QData)((IData)(
										((0x1000000U 
										& vlSymsp->TOP__tb_m68k_ram_uart.__PVT__ao_addr)
										 ? vlSymsp->TOP__tb_m68k_ram_uart.__PVT__uart_data_out
										 : vlSymsp->TOP__tb_m68k_ram_uart__wb_ram_m.__PVT__dat_o_reg))))) 
							<< 0x10U));
						vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__prefetch_ir[1U] 
						    = 
						    ((0xffffU 
						      & ((IData)(
								 (((QData)((IData)(
										((vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										<< 0x10U) 
										| (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[1U] 
										>> 0x10U)))) 
								   << 0x20U) 
								  | (QData)((IData)(
										((0x1000000U 
										& vlSymsp->TOP__tb_m68k_ram_uart.__PVT__ao_addr)
										 ? vlSymsp->TOP__tb_m68k_ram_uart.__PVT__uart_data_out
										 : vlSymsp->TOP__tb_m68k_ram_uart__wb_ram_m.__PVT__dat_o_reg))))) 
							 >> 0x10U)) 
						     | (0xffff0000U 
							& ((IData)(
								   ((((QData)((IData)(
										((vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										<< 0x10U) 
										| (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[1U] 
										>> 0x10U)))) 
								      << 0x20U) 
								     | (QData)((IData)(
										((0x1000000U 
										& vlSymsp->TOP__tb_m68k_ram_uart.__PVT__ao_addr)
										 ? vlSymsp->TOP__tb_m68k_ram_uart.__PVT__uart_data_out
										 : vlSymsp->TOP__tb_m68k_ram_uart__wb_ram_m.__PVT__dat_o_reg)))) 
								    >> 0x20U)) 
							   << 0x10U)));
						vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__prefetch_ir[2U] 
						    = 
						    (0xffffU 
						     & ((IData)(
								((((QData)((IData)(
										((vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										<< 0x10U) 
										| (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[1U] 
										>> 0x10U)))) 
								   << 0x20U) 
								  | (QData)((IData)(
										((0x1000000U 
										& vlSymsp->TOP__tb_m68k_ram_uart.__PVT__ao_addr)
										 ? vlSymsp->TOP__tb_m68k_ram_uart.__PVT__uart_data_out
										 : vlSymsp->TOP__tb_m68k_ram_uart__wb_ram_m.__PVT__dat_o_reg)))) 
								 >> 0x20U)) 
							>> 0x10U));
						vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__CYC_O = 0U;
						vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__STB_O = 0U;
						vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__prefetch_ir_valid_32 = 1U;
						vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__prefetch_ir_valid = 1U;
						vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__bus_control_m__DOT__prefetch_ir_valid_80_o = 0U;
						vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__bus_control_m__DOT__current_state = 0U;
					    }
					} else {
					    if (((0x1000000U 
						  & vlSymsp->TOP__tb_m68k_ram_uart.__PVT__ao_addr)
						  ? (IData)(vlSymsp->TOP__tb_m68k_ram_uart.__PVT__arbiter__DOT__s1_rty_i)
						  : (IData)(vlSymsp->TOP__tb_m68k_ram_uart.__PVT__arbiter__DOT__s0_rty_i))) {
						vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__CYC_O = 0U;
						vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__STB_O = 0U;
						vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__bus_control_m__DOT__current_state = 0xfU;
					    } else {
						if (VL_UNLIKELY(
								((0x1000000U 
								  & vlSymsp->TOP__tb_m68k_ram_uart.__PVT__ao_addr)
								  ? (IData)(vlSymsp->TOP__tb_m68k_ram_uart.__PVT__arbiter__DOT__s1_err_i)
								  : (IData)(vlSymsp->TOP__tb_m68k_ram_uart.__PVT__arbiter__DOT__s0_err_i)))) {
						    VL_WRITEF("BUS TRAP\n");
						    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__CYC_O = 0U;
						    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__STB_O = 0U;
						    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__fault_address_state 
							= 
							(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ADR_O 
							 << 2U);
						    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__rw_state 
							= 
							(1U 
							 & (~ (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__WE_O)));
						    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__fc_state 
							= vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__fc_o;
						    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__interrupt_trap = 2U;
						    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__jmp_bus_trap = 1U;
						    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__bus_control_m__DOT__current_state = 7U;
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
	    if (((((((((0xfU == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__bus_control_m__DOT__current_state)) 
		       | (0x10U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__bus_control_m__DOT__current_state))) 
		      | (0x11U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__bus_control_m__DOT__current_state))) 
		     | (4U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__bus_control_m__DOT__current_state))) 
		    | (5U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__bus_control_m__DOT__current_state))) 
		   | (6U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__bus_control_m__DOT__current_state))) 
		  | (7U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__bus_control_m__DOT__current_state))) 
		 | (8U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__bus_control_m__DOT__current_state)))) {
		if ((0xfU == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__bus_control_m__DOT__current_state))) {
		    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__CYC_O = 1U;
		    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__STB_O = 1U;
		    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__bus_control_m__DOT__current_state = 0xeU;
		} else {
		    if ((0x10U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__bus_control_m__DOT__current_state))) {
			if (((0x1000000U & vlSymsp->TOP__tb_m68k_ram_uart.__PVT__ao_addr)
			      ? (IData)(vlSymsp->TOP__tb_m68k_ram_uart.__PVT__uart_ack)
			      : (IData)(vlSymsp->TOP__tb_m68k_ram_uart__wb_ram_m.__PVT__ack_o_reg))) {
			    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__prefetch_ir[0U] 
				= ((0x1000000U & vlSymsp->TOP__tb_m68k_ram_uart.__PVT__ao_addr)
				    ? vlSymsp->TOP__tb_m68k_ram_uart.__PVT__uart_data_out
				    : vlSymsp->TOP__tb_m68k_ram_uart__wb_ram_m.__PVT__dat_o_reg);
			    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__prefetch_ir[1U] 
				= (IData)((VL_ULL(0xffffffffffff) 
					   & (((QData)((IData)(
							       vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U])) 
					       << 0x20U) 
					      | (QData)((IData)(
								vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[1U])))));
			    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__prefetch_ir[2U] 
				= (IData)(((VL_ULL(0xffffffffffff) 
					    & (((QData)((IData)(
								vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U])) 
						<< 0x20U) 
					       | (QData)((IData)(
								 vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[1U])))) 
					   >> 0x20U));
			    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__CYC_O = 0U;
			    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__STB_O = 0U;
			    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__prefetch_ir_valid_32 = 1U;
			    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__prefetch_ir_valid = 1U;
			    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__bus_control_m__DOT__prefetch_ir_valid_80_o = 1U;
			    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__bus_control_m__DOT__current_state = 0U;
			} else {
			    if (((0x1000000U & vlSymsp->TOP__tb_m68k_ram_uart.__PVT__ao_addr)
				  ? (IData)(vlSymsp->TOP__tb_m68k_ram_uart.__PVT__arbiter__DOT__s1_rty_i)
				  : (IData)(vlSymsp->TOP__tb_m68k_ram_uart.__PVT__arbiter__DOT__s0_rty_i))) {
				vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__CYC_O = 0U;
				vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__STB_O = 0U;
				vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__bus_control_m__DOT__current_state = 0x11U;
			    } else {
				if (VL_UNLIKELY(((0x1000000U 
						  & vlSymsp->TOP__tb_m68k_ram_uart.__PVT__ao_addr)
						  ? (IData)(vlSymsp->TOP__tb_m68k_ram_uart.__PVT__arbiter__DOT__s1_err_i)
						  : (IData)(vlSymsp->TOP__tb_m68k_ram_uart.__PVT__arbiter__DOT__s0_err_i)))) {
				    VL_WRITEF("BUS TRAP\n");
				    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__CYC_O = 0U;
				    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__STB_O = 0U;
				    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__fault_address_state 
					= (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ADR_O 
					   << 2U);
				    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__rw_state 
					= (1U & (~ (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__WE_O)));
				    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__fc_state 
					= vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__fc_o;
				    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__interrupt_trap = 2U;
				    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__jmp_bus_trap = 1U;
				    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__bus_control_m__DOT__current_state = 7U;
				}
			    }
			}
		    } else {
			if ((0x11U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__bus_control_m__DOT__current_state))) {
			    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__CYC_O = 1U;
			    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__STB_O = 1U;
			    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__bus_control_m__DOT__current_state = 0x10U;
			} else {
			    if ((4U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__bus_control_m__DOT__current_state))) {
				if (((0x1000000U & vlSymsp->TOP__tb_m68k_ram_uart.__PVT__ao_addr)
				      ? (IData)(vlSymsp->TOP__tb_m68k_ram_uart.__PVT__uart_ack)
				      : (IData)(vlSymsp->TOP__tb_m68k_ram_uart__wb_ram_m.__PVT__ack_o_reg))) {
				    if (((2U == (3U 
						 & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__address)) 
					 & ((IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__size) 
					    >> 2U))) {
					vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__ADR_O 
					    = (0x3fffffffU 
					       & (((IData)(4U) 
						   + vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__address) 
						  >> 2U));
					vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__SEL_O = 0xcU;
					vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__CTI_O = 7U;
					vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__data_read 
					    = (0xffff0000U 
					       & (((0x1000000U 
						    & vlSymsp->TOP__tb_m68k_ram_uart.__PVT__ao_addr)
						    ? vlSymsp->TOP__tb_m68k_ram_uart.__PVT__uart_data_out
						    : vlSymsp->TOP__tb_m68k_ram_uart__wb_ram_m.__PVT__dat_o_reg) 
						  << 0x10U));
					vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__bus_control_m__DOT__current_state = 5U;
				    } else {
					if (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__read_modify_write_flag) {
					    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__CYC_O = 1U;
					    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__STB_O = 0U;
					} else {
					    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__CYC_O = 0U;
					    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__STB_O = 0U;
					}
					if (((0U == 
					      (3U & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__address)) 
					     & ((IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__size) 
						>> 2U))) {
					    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__data_read 
						= (
						   (0x1000000U 
						    & vlSymsp->TOP__tb_m68k_ram_uart.__PVT__ao_addr)
						    ? vlSymsp->TOP__tb_m68k_ram_uart.__PVT__uart_data_out
						    : vlSymsp->TOP__tb_m68k_ram_uart__wb_ram_m.__PVT__dat_o_reg);
					} else {
					    if (((2U 
						  == 
						  (3U 
						   & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__address)) 
						 & ((IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__size) 
						    >> 1U))) {
						vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__data_read 
						    = 
						    ((0xffff0000U 
						      & (VL_NEGATE_I((IData)(
									     (1U 
									      & (((0x1000000U 
										& vlSymsp->TOP__tb_m68k_ram_uart.__PVT__ao_addr)
										 ? vlSymsp->TOP__tb_m68k_ram_uart.__PVT__uart_data_out
										 : vlSymsp->TOP__tb_m68k_ram_uart__wb_ram_m.__PVT__dat_o_reg) 
										>> 0xfU)))) 
							 << 0x10U)) 
						     | (0xffffU 
							& ((0x1000000U 
							    & vlSymsp->TOP__tb_m68k_ram_uart.__PVT__ao_addr)
							    ? vlSymsp->TOP__tb_m68k_ram_uart.__PVT__uart_data_out
							    : vlSymsp->TOP__tb_m68k_ram_uart__wb_ram_m.__PVT__dat_o_reg)));
					    } else {
						if (
						    ((0U 
						      == 
						      (3U 
						       & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__address)) 
						     & ((IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__size) 
							>> 1U))) {
						    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__data_read 
							= 
							((0xffff0000U 
							  & (VL_NEGATE_I((IData)(
										(1U 
										& (((0x1000000U 
										& vlSymsp->TOP__tb_m68k_ram_uart.__PVT__ao_addr)
										 ? vlSymsp->TOP__tb_m68k_ram_uart.__PVT__uart_data_out
										 : vlSymsp->TOP__tb_m68k_ram_uart__wb_ram_m.__PVT__dat_o_reg) 
										>> 0x1fU)))) 
							     << 0x10U)) 
							 | (0xffffU 
							    & (((0x1000000U 
								 & vlSymsp->TOP__tb_m68k_ram_uart.__PVT__ao_addr)
								 ? vlSymsp->TOP__tb_m68k_ram_uart.__PVT__uart_data_out
								 : vlSymsp->TOP__tb_m68k_ram_uart__wb_ram_m.__PVT__dat_o_reg) 
							       >> 0x10U)));
						} else {
						    if (
							((3U 
							  == 
							  (3U 
							   & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__address)) 
							 & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__size))) {
							vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__data_read 
							    = 
							    ((0xffffff00U 
							      & (VL_NEGATE_I((IData)(
										(1U 
										& (((0x1000000U 
										& vlSymsp->TOP__tb_m68k_ram_uart.__PVT__ao_addr)
										 ? vlSymsp->TOP__tb_m68k_ram_uart.__PVT__uart_data_out
										 : vlSymsp->TOP__tb_m68k_ram_uart__wb_ram_m.__PVT__dat_o_reg) 
										>> 7U)))) 
								 << 8U)) 
							     | (0xffU 
								& ((0x1000000U 
								    & vlSymsp->TOP__tb_m68k_ram_uart.__PVT__ao_addr)
								    ? vlSymsp->TOP__tb_m68k_ram_uart.__PVT__uart_data_out
								    : vlSymsp->TOP__tb_m68k_ram_uart__wb_ram_m.__PVT__dat_o_reg)));
						    } else {
							if (
							    ((2U 
							      == 
							      (3U 
							       & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__address)) 
							     & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__size))) {
							    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__data_read 
								= 
								((0xffffff00U 
								  & (VL_NEGATE_I((IData)(
										(1U 
										& (((0x1000000U 
										& vlSymsp->TOP__tb_m68k_ram_uart.__PVT__ao_addr)
										 ? vlSymsp->TOP__tb_m68k_ram_uart.__PVT__uart_data_out
										 : vlSymsp->TOP__tb_m68k_ram_uart__wb_ram_m.__PVT__dat_o_reg) 
										>> 0xfU)))) 
								     << 8U)) 
								 | (0xffU 
								    & (((0x1000000U 
									 & vlSymsp->TOP__tb_m68k_ram_uart.__PVT__ao_addr)
									 ? vlSymsp->TOP__tb_m68k_ram_uart.__PVT__uart_data_out
									 : vlSymsp->TOP__tb_m68k_ram_uart__wb_ram_m.__PVT__dat_o_reg) 
								       >> 8U)));
							} else {
							    if (
								((1U 
								  == 
								  (3U 
								   & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__address)) 
								 & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__size))) {
								vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__data_read 
								    = 
								    ((0xffffff00U 
								      & (VL_NEGATE_I((IData)(
										(1U 
										& (((0x1000000U 
										& vlSymsp->TOP__tb_m68k_ram_uart.__PVT__ao_addr)
										 ? vlSymsp->TOP__tb_m68k_ram_uart.__PVT__uart_data_out
										 : vlSymsp->TOP__tb_m68k_ram_uart__wb_ram_m.__PVT__dat_o_reg) 
										>> 0x17U)))) 
									 << 8U)) 
								     | (0xffU 
									& (((0x1000000U 
									     & vlSymsp->TOP__tb_m68k_ram_uart.__PVT__ao_addr)
									     ? vlSymsp->TOP__tb_m68k_ram_uart.__PVT__uart_data_out
									     : vlSymsp->TOP__tb_m68k_ram_uart__wb_ram_m.__PVT__dat_o_reg) 
									   >> 0x10U)));
							    } else {
								if (
								    ((0U 
								      == 
								      (3U 
								       & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__address)) 
								     & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__size))) {
								    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__data_read 
									= 
									((0xffffff00U 
									  & (VL_NEGATE_I((IData)(
										(1U 
										& (((0x1000000U 
										& vlSymsp->TOP__tb_m68k_ram_uart.__PVT__ao_addr)
										 ? vlSymsp->TOP__tb_m68k_ram_uart.__PVT__uart_data_out
										 : vlSymsp->TOP__tb_m68k_ram_uart__wb_ram_m.__PVT__dat_o_reg) 
										>> 0x1fU)))) 
									     << 8U)) 
									 | (0xffU 
									    & (((0x1000000U 
										& vlSymsp->TOP__tb_m68k_ram_uart.__PVT__ao_addr)
										 ? vlSymsp->TOP__tb_m68k_ram_uart.__PVT__uart_data_out
										 : vlSymsp->TOP__tb_m68k_ram_uart__wb_ram_m.__PVT__dat_o_reg) 
									       >> 0x18U)));
								}
							    }
							}
						    }
						}
					    }
					}
					vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__finished = 1U;
					vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__bus_control_m__DOT__current_state = 7U;
				    }
				} else {
				    if (((0x1000000U 
					  & vlSymsp->TOP__tb_m68k_ram_uart.__PVT__ao_addr)
					  ? (IData)(vlSymsp->TOP__tb_m68k_ram_uart.__PVT__arbiter__DOT__s1_rty_i)
					  : (IData)(vlSymsp->TOP__tb_m68k_ram_uart.__PVT__arbiter__DOT__s0_rty_i))) {
					vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__CYC_O = 0U;
					vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__STB_O = 0U;
					vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__bus_control_m__DOT__current_state = 0U;
				    } else {
					if (VL_UNLIKELY(
							((0x1000000U 
							  & vlSymsp->TOP__tb_m68k_ram_uart.__PVT__ao_addr)
							  ? (IData)(vlSymsp->TOP__tb_m68k_ram_uart.__PVT__arbiter__DOT__s1_err_i)
							  : (IData)(vlSymsp->TOP__tb_m68k_ram_uart.__PVT__arbiter__DOT__s0_err_i)))) {
					    VL_WRITEF("BUS TRAP\n");
					    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__CYC_O = 0U;
					    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__STB_O = 0U;
					    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__fault_address_state 
						= (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ADR_O 
						   << 2U);
					    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__rw_state 
						= (1U 
						   & (~ (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__WE_O)));
					    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__fc_state 
						= vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__fc_o;
					    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__interrupt_trap = 2U;
					    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__jmp_bus_trap = 1U;
					    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__bus_control_m__DOT__current_state = 7U;
					}
				    }
				}
			    } else {
				if ((5U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__bus_control_m__DOT__current_state))) {
				    if (((0x1000000U 
					  & vlSymsp->TOP__tb_m68k_ram_uart.__PVT__ao_addr)
					  ? (IData)(vlSymsp->TOP__tb_m68k_ram_uart.__PVT__uart_ack)
					  : (IData)(vlSymsp->TOP__tb_m68k_ram_uart__wb_ram_m.__PVT__ack_o_reg))) {
					vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__data_read 
					    = ((0xffff0000U 
						& vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__data_read) 
					       | (0xffffU 
						  & (((0x1000000U 
						       & vlSymsp->TOP__tb_m68k_ram_uart.__PVT__ao_addr)
						       ? vlSymsp->TOP__tb_m68k_ram_uart.__PVT__uart_data_out
						       : vlSymsp->TOP__tb_m68k_ram_uart__wb_ram_m.__PVT__dat_o_reg) 
						     >> 0x10U)));
					vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__CYC_O = 0U;
					vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__STB_O = 0U;
					vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__finished = 1U;
					vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__bus_control_m__DOT__current_state = 7U;
				    } else {
					if (((0x1000000U 
					      & vlSymsp->TOP__tb_m68k_ram_uart.__PVT__ao_addr)
					      ? (IData)(vlSymsp->TOP__tb_m68k_ram_uart.__PVT__arbiter__DOT__s1_rty_i)
					      : (IData)(vlSymsp->TOP__tb_m68k_ram_uart.__PVT__arbiter__DOT__s0_rty_i))) {
					    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__CYC_O = 0U;
					    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__STB_O = 0U;
					    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__bus_control_m__DOT__current_state = 6U;
					} else {
					    if (VL_UNLIKELY(
							    ((0x1000000U 
							      & vlSymsp->TOP__tb_m68k_ram_uart.__PVT__ao_addr)
							      ? (IData)(vlSymsp->TOP__tb_m68k_ram_uart.__PVT__arbiter__DOT__s1_err_i)
							      : (IData)(vlSymsp->TOP__tb_m68k_ram_uart.__PVT__arbiter__DOT__s0_err_i)))) {
						VL_WRITEF("BUS TRAP\n");
						vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__CYC_O = 0U;
						vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__STB_O = 0U;
						vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__fault_address_state 
						    = 
						    (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ADR_O 
						     << 2U);
						vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__rw_state 
						    = 
						    (1U 
						     & (~ (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__WE_O)));
						vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__fc_state 
						    = vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__fc_o;
						vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__interrupt_trap = 2U;
						vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__jmp_bus_trap = 1U;
						vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__bus_control_m__DOT__current_state = 7U;
					    }
					}
				    }
				} else {
				    if ((6U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__bus_control_m__DOT__current_state))) {
					vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__CYC_O = 1U;
					vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__STB_O = 1U;
					vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__bus_control_m__DOT__current_state = 5U;
				    } else {
					if ((7U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__bus_control_m__DOT__current_state))) {
					    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__jmp_address_trap = 0U;
					    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__jmp_bus_trap = 0U;
					    if ((1U 
						 & ((((~ (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__do_read)) 
						      & (~ (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__do_write))) 
						     & (~ (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__do_interrupt))) 
						    & (~ (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__do_reset))))) {
						vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__finished = 0U;
						vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__bus_control_m__DOT__current_state = 0U;
					    }
					} else {
					    if (((0x1000000U 
						  & vlSymsp->TOP__tb_m68k_ram_uart.__PVT__ao_addr)
						  ? (IData)(vlSymsp->TOP__tb_m68k_ram_uart.__PVT__uart_ack)
						  : (IData)(vlSymsp->TOP__tb_m68k_ram_uart__wb_ram_m.__PVT__ack_o_reg))) {
						if (
						    ((2U 
						      == 
						      (3U 
						       & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__address)) 
						     & ((IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__size) 
							>> 2U))) {
						    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__ADR_O 
							= 
							(0x3fffffffU 
							 & (((IData)(4U) 
							     + vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__address) 
							    >> 2U));
						    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__DAT_O 
							= 
							(0xffff0000U 
							 & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__data_write 
							    << 0x10U));
						    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__SEL_O = 0xcU;
						    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__CTI_O = 7U;
						    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__bus_control_m__DOT__current_state = 9U;
						} else {
						    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__CYC_O = 0U;
						    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__STB_O = 0U;
						    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__finished = 1U;
						    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__bus_control_m__DOT__current_state = 7U;
						}
					    } else {
						if (
						    ((0x1000000U 
						      & vlSymsp->TOP__tb_m68k_ram_uart.__PVT__ao_addr)
						      ? (IData)(vlSymsp->TOP__tb_m68k_ram_uart.__PVT__arbiter__DOT__s1_rty_i)
						      : (IData)(vlSymsp->TOP__tb_m68k_ram_uart.__PVT__arbiter__DOT__s0_rty_i))) {
						    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__CYC_O = 0U;
						    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__STB_O = 0U;
						    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__bus_control_m__DOT__current_state = 0U;
						} else {
						    if (VL_UNLIKELY(
								    ((0x1000000U 
								      & vlSymsp->TOP__tb_m68k_ram_uart.__PVT__ao_addr)
								      ? (IData)(vlSymsp->TOP__tb_m68k_ram_uart.__PVT__arbiter__DOT__s1_err_i)
								      : (IData)(vlSymsp->TOP__tb_m68k_ram_uart.__PVT__arbiter__DOT__s0_err_i)))) {
							VL_WRITEF("BUS TRAP\n");
							vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__CYC_O = 0U;
							vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__STB_O = 0U;
							vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__fault_address_state 
							    = 
							    (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ADR_O 
							     << 2U);
							vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__rw_state 
							    = 
							    (1U 
							     & (~ (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__WE_O)));
							vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__fc_state 
							    = vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__fc_o;
							vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__interrupt_trap = 2U;
							vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__jmp_bus_trap = 1U;
							vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__bus_control_m__DOT__current_state = 7U;
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
		if ((9U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__bus_control_m__DOT__current_state))) {
		    if (((0x1000000U & vlSymsp->TOP__tb_m68k_ram_uart.__PVT__ao_addr)
			  ? (IData)(vlSymsp->TOP__tb_m68k_ram_uart.__PVT__uart_ack)
			  : (IData)(vlSymsp->TOP__tb_m68k_ram_uart__wb_ram_m.__PVT__ack_o_reg))) {
			vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__CYC_O = 0U;
			vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__STB_O = 0U;
			vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__finished = 1U;
			vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__bus_control_m__DOT__current_state = 7U;
		    } else {
			if (((0x1000000U & vlSymsp->TOP__tb_m68k_ram_uart.__PVT__ao_addr)
			      ? (IData)(vlSymsp->TOP__tb_m68k_ram_uart.__PVT__arbiter__DOT__s1_rty_i)
			      : (IData)(vlSymsp->TOP__tb_m68k_ram_uart.__PVT__arbiter__DOT__s0_rty_i))) {
			    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__CYC_O = 0U;
			    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__STB_O = 0U;
			    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__bus_control_m__DOT__current_state = 0xaU;
			} else {
			    if (VL_UNLIKELY(((0x1000000U 
					      & vlSymsp->TOP__tb_m68k_ram_uart.__PVT__ao_addr)
					      ? (IData)(vlSymsp->TOP__tb_m68k_ram_uart.__PVT__arbiter__DOT__s1_err_i)
					      : (IData)(vlSymsp->TOP__tb_m68k_ram_uart.__PVT__arbiter__DOT__s0_err_i)))) {
				VL_WRITEF("BUS TRAP\n");
				vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__CYC_O = 0U;
				vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__STB_O = 0U;
				vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__fault_address_state 
				    = (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ADR_O 
				       << 2U);
				vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__rw_state 
				    = (1U & (~ (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__WE_O)));
				vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__fc_state 
				    = vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__fc_o;
				vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__interrupt_trap = 2U;
				vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__jmp_bus_trap = 1U;
				vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__bus_control_m__DOT__current_state = 7U;
			    }
			}
		    }
		} else {
		    if ((0xaU == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__bus_control_m__DOT__current_state))) {
			vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__CYC_O = 1U;
			vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__STB_O = 1U;
			vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__bus_control_m__DOT__current_state = 9U;
		    }
		}
	    }
	}
    } else {
	vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__bus_control_m__DOT__current_state = 0U;
	vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__interrupt_trap = 0U;
	vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__prefetch_ir_valid = 0U;
	vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__prefetch_ir_valid_32 = 0U;
	vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__bus_control_m__DOT__prefetch_ir_valid_80_o = 0U;
	vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__jmp_address_trap = 0U;
	vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__jmp_bus_trap = 0U;
	vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__CYC_O = 0U;
	vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__ADR_O = 0U;
	vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__DAT_O = 0U;
	vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__SEL_O = 0U;
	vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__STB_O = 0U;
	vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__WE_O = 0U;
	vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__SGL_O = 0U;
	vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__BLK_O = 0U;
	vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__RMW_O = 0U;
	vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__CTI_O = 0U;
	vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__fc_o = 0U;
	vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__reset_o = 0U;
	vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__blocked_o = 0U;
	vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__data_read = 0U;
	vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__finished = 0U;
	vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__rw_state = 0U;
	vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__fc_state = 0U;
	vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__fault_address_state = 0U;
	vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__bus_control_m__DOT__saved_pc_change = 0U;
	vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__bus_control_m__DOT__reset_counter = 0U;
    }
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__bus_control_m__DOT__current_state 
	= vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__bus_control_m__DOT__current_state;
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__bus_control_m__DOT__reset_counter 
	= vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__bus_control_m__DOT__reset_counter;
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__CTI_O 
	= vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__CTI_O;
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__fc_o 
	= vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__fc_o;
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__bus_control_m__DOT__last_interrupt_mask 
	= vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__bus_control_m__DOT__last_interrupt_mask;
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__data_read 
	= vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__data_read;
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__bus_control_m__DOT__prefetch_ir_valid_80_o 
	= vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__bus_control_m__DOT__prefetch_ir_valid_80_o;
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__bus_control_m__DOT__saved_pc_change 
	= vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__bus_control_m__DOT__saved_pc_change;
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__address 
	= vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__address;
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ADR_O 
	= vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__ADR_O;
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir_valid_32 
	= vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__prefetch_ir_valid_32;
    // ALWAYS at registers.v:159
    if (vlSymsp->TOP__tb_m68k_ram_uart.rst_n) {
	vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__pc 
	    = vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__registers_m__DOT__pc_next;
	if ((1U & (~ vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__registers_m__DOT__pc_next))) {
	    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__registers_m__DOT__pc_valid 
		= vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__registers_m__DOT__pc_next;
	}
    } else {
	vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__pc = 0U;
	vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__registers_m__DOT__pc_valid = 0U;
    }
    // ALWAYS at registers.v:433
    if (vlSymsp->TOP__tb_m68k_ram_uart.rst_n) {
	if ((1U == (3U & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[2U]))) {
	    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__do_blocked = 1U;
	}
    } else {
	vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__do_blocked = 0U;
    }
    // ALWAYS at registers.v:409
    if (vlSymsp->TOP__tb_m68k_ram_uart.rst_n) {
	if ((1U == (3U & ((vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[2U] 
			   << 8U) | (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[1U] 
				     >> 0x18U))))) {
	    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__do_reset = 1U;
	} else {
	    if ((2U == (3U & ((vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[2U] 
			       << 8U) | (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[1U] 
					 >> 0x18U))))) {
		vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__do_reset = 0U;
	    }
	}
    } else {
	vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__do_reset = 0U;
    }
    // ALWAYS at registers.v:421
    if (vlSymsp->TOP__tb_m68k_ram_uart.rst_n) {
	if ((1U == (3U & ((vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[2U] 
			   << 4U) | (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[1U] 
				     >> 0x1cU))))) {
	    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__do_read = 1U;
	} else {
	    if ((2U == (3U & ((vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[2U] 
			       << 4U) | (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[1U] 
					 >> 0x1cU))))) {
		vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__do_read = 0U;
	    }
	}
    } else {
	vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__do_read = 0U;
    }
    // ALWAYS at registers.v:303
    if (vlSymsp->TOP__tb_m68k_ram_uart.rst_n) {
	if ((8U == (0xfU & ((vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[1U] 
			     << 0xeU) | (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[0U] 
					 >> 0x12U))))) {
	    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__address_type = 1U;
	} else {
	    if ((0U != (0xfU & ((vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[1U] 
				 << 0xeU) | (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[0U] 
					     >> 0x12U))))) {
		vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__address_type = 0U;
	    }
	}
    } else {
	vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__address_type = 0U;
    }
    // ALWAYS at registers.v:403
    if (vlSymsp->TOP__tb_m68k_ram_uart.rst_n) {
	if ((1U == (3U & ((vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[2U] 
			   << 0xaU) | (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[1U] 
				       >> 0x16U))))) {
	    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__read_modify_write_flag = 1U;
	} else {
	    if ((2U == (3U & ((vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[2U] 
			       << 0xaU) | (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[1U] 
					   >> 0x16U))))) {
		vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__read_modify_write_flag = 0U;
	    }
	}
    } else {
	vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__read_modify_write_flag = 0U;
    }
    // ALWAYS at registers.v:427
    if (vlSymsp->TOP__tb_m68k_ram_uart.rst_n) {
	if ((1U == (3U & ((vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[2U] 
			   << 2U) | (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[1U] 
				     >> 0x1eU))))) {
	    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__do_write = 1U;
	} else {
	    if ((2U == (3U & ((vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[2U] 
			       << 2U) | (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[1U] 
					 >> 0x1eU))))) {
		vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__do_write = 0U;
	    }
	}
    } else {
	vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__do_write = 0U;
    }
    // ALWAYS at registers.v:415
    if (vlSymsp->TOP__tb_m68k_ram_uart.rst_n) {
	if ((1U == (3U & ((vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[2U] 
			   << 6U) | (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[1U] 
				     >> 0x1aU))))) {
	    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__do_interrupt 
		= (0U != (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__interrupt_mask));
	} else {
	    if ((2U == (3U & ((vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[2U] 
			       << 6U) | (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[1U] 
					 >> 0x1aU))))) {
		vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__do_interrupt = 0U;
	    }
	}
    } else {
	vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__do_interrupt = 0U;
    }
    // ALWAYS at registers.v:438
    if (vlSymsp->TOP__tb_m68k_ram_uart.rst_n) {
	if ((1U == (3U & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[2U] 
			  >> 2U)))) {
	    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__data_write 
		= vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__result;
	}
    } else {
	vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__data_write = 0U;
    }
    // ALWAYS at alu.v:313
    if (vlSymsp->TOP__tb_m68k_ram_uart.rst_n) {
	if ((0x8000U & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[2U])) {
	    if ((0x4000U & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[2U])) {
		if ((0x2000U & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[2U])) {
		    if ((1U & (~ (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[2U] 
				  >> 0xcU)))) {
			if ((1U & (~ (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[2U] 
				      >> 0xbU)))) {
			    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__result 
				= ((7U == (7U & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ir)))
				    ? (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand1 
				       - (IData)(4U))
				    : vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand1);
			}
		    }
		} else {
		    if ((0x1000U & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[2U])) {
			if ((0x800U & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[2U])) {
			    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__result 
				= vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand1;
			} else {
			    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__sr 
				= ((0x10000U & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__decoder_alu_reg)
				    ? (0xa71fU & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand1)
				    : ((0xff00U & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__sr)) 
				       | (0x1fU & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand1)));
			}
		    } else {
			vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__result 
			    = ((0x800U & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[2U])
			        ? (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand1 
				   - vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand2)
			        : (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand1 
				   + vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand2));
		    }
		}
	    } else {
		if ((0x2000U & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[2U])) {
		    if ((0x1000U & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[2U])) {
			if ((0x800U & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[2U])) {
			    if (((((0U == (0xfU & ((IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ir) 
						   >> 8U))) 
				   | (2U == (0xfU & 
					     ((IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ir) 
					      >> 8U)))) 
				  | (4U == (0xfU & 
					    ((IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ir) 
					     >> 8U)))) 
				 | (6U == (0xfU & ((IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ir) 
						   >> 8U))))) {
				vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__result 
				    = vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__result_blocking;
			    } else {
				if ((0x20U == (0x3fU 
					       & ((IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ir) 
						  >> 6U)))) {
				    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__sr 
					= ((0xfffbU 
					    & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__sr)) 
					   | (0xfffffffcU 
					      & ((IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__sr) 
						 & (((1U 
						      & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__size))
						      ? 
						     (0U 
						      == 
						      (0xffU 
						       & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__result_blocking))
						      : 
						     ((2U 
						       & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__size))
						       ? 
						      (0U 
						       == 
						       (0xffffU 
							& vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__result_blocking))
						       : 
						      (0U 
						       == vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__result_blocking))) 
						    << 2U))));
				    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__result 
					= vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__result_blocking;
				    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__sr 
					= ((0xfffeU 
					    & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__sr)) 
					   | (1U & 
					      (~ ((0U 
						   == 
						   (0xffU 
						    & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand1)) 
						  & (~ 
						     ((IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__sr) 
						      >> 4U))))));
				    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__sr 
					= ((0xffefU 
					    & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__sr)) 
					   | (0x10U 
					      & ((~ 
						  ((0U 
						    == 
						    (0xffU 
						     & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand1)) 
						   & (~ 
						      ((IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__sr) 
						       >> 4U)))) 
						 << 4U)));
				} else {
				    if ((0x21U == (0x3fU 
						   & ((IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ir) 
						      >> 6U)))) {
					vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__result 
					    = vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__result_blocking;
				    } else {
					if ((0x22U 
					     == (0x3fU 
						 & ((IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ir) 
						    >> 6U)))) {
					    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__result 
						= vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__result_blocking;
					} else {
					    if ((0x23U 
						 == 
						 (0x3fU 
						  & ((IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ir) 
						     >> 6U)))) {
						vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__result 
						    = vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__result_blocking;
					    }
					}
				    }
				}
			    }
			    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__sr 
				= ((0xfff7U & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__sr)) 
				   | (8U & (((1U & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__size))
					      ? (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__result_blocking 
						 >> 7U)
					      : ((2U 
						  & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__size))
						  ? 
						 (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__result_blocking 
						  >> 0xfU)
						  : 
						 (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__result_blocking 
						  >> 0x1fU))) 
					    << 3U)));
			    if (((((2U == (0xfU & ((IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ir) 
						   >> 8U))) 
				   | (6U == (0xfU & 
					     ((IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ir) 
					      >> 8U)))) 
				  | (0x21U == (0x3fU 
					       & ((IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ir) 
						  >> 6U)))) 
				 | (0x11U == (0x1fU 
					      & ((IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ir) 
						 >> 7U))))) {
				vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__sr 
				    = (0xfffeU & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__sr));
				vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__sr 
				    = (0xfffdU & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__sr));
				vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__sr 
				    = ((0xfffbU & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__sr)) 
				       | (((1U & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__size))
					    ? (0U == 
					       (0xffU 
						& vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__result_blocking))
					    : ((2U 
						& (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__size))
					        ? (0U 
						   == 
						   (0xffffU 
						    & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__result_blocking))
					        : (0U 
						   == vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__result_blocking))) 
					  << 2U));
			    } else {
				if ((0U == (0xfU & 
					    ((IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ir) 
					     >> 8U)))) {
				    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__sr 
					= ((0xfffeU 
					    & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__sr)) 
					   | (1U & 
					      (((1U 
						 & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__size))
						 ? 
						(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand1 
						 >> 7U)
						 : 
						((2U 
						  & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__size))
						  ? 
						 (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand1 
						  >> 0xfU)
						  : 
						 (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand1 
						  >> 0x1fU))) 
					       | ((1U 
						   & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__size))
						   ? 
						  (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__result_blocking 
						   >> 7U)
						   : 
						  ((2U 
						    & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__size))
						    ? 
						   (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__result_blocking 
						    >> 0xfU)
						    : 
						   (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__result_blocking 
						    >> 0x1fU))))));
				    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__sr 
					= ((0xffefU 
					    & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__sr)) 
					   | (0x10U 
					      & ((((1U 
						    & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__size))
						    ? 
						   (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand1 
						    >> 7U)
						    : 
						   ((2U 
						     & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__size))
						     ? 
						    (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand1 
						     >> 0xfU)
						     : 
						    (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand1 
						     >> 0x1fU))) 
						  | ((1U 
						      & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__size))
						      ? 
						     (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__result_blocking 
						      >> 7U)
						      : 
						     ((2U 
						       & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__size))
						       ? 
						      (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__result_blocking 
						       >> 0xfU)
						       : 
						      (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__result_blocking 
						       >> 0x1fU)))) 
						 << 4U)));
				    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__sr 
					= ((0xfffdU 
					    & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__sr)) 
					   | (2U & 
					      ((((1U 
						  & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__size))
						  ? 
						 (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand1 
						  >> 7U)
						  : 
						 ((2U 
						   & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__size))
						   ? 
						  (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand1 
						   >> 0xfU)
						   : 
						  (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand1 
						   >> 0x1fU))) 
						& ((1U 
						    & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__size))
						    ? 
						   (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__result_blocking 
						    >> 7U)
						    : 
						   ((2U 
						     & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__size))
						     ? 
						    (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__result_blocking 
						     >> 0xfU)
						     : 
						    (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__result_blocking 
						     >> 0x1fU)))) 
					       << 1U)));
				    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__sr 
					= ((0xfffbU 
					    & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__sr)) 
					   | (0xfffffffcU 
					      & ((IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__sr) 
						 & (((1U 
						      & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__size))
						      ? 
						     (0U 
						      == 
						      (0xffU 
						       & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__result_blocking))
						      : 
						     ((2U 
						       & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__size))
						       ? 
						      (0U 
						       == 
						       (0xffffU 
							& vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__result_blocking))
						       : 
						      (0U 
						       == vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__result_blocking))) 
						    << 2U))));
				} else {
				    if ((4U == (0xfU 
						& ((IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ir) 
						   >> 8U)))) {
					vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__sr 
					    = ((0xfffeU 
						& (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__sr)) 
					       | (1U 
						  & (((1U 
						       & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__size))
						       ? 
						      (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand1 
						       >> 7U)
						       : 
						      ((2U 
							& (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__size))
						        ? 
						       (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand1 
							>> 0xfU)
						        : 
						       (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand1 
							>> 0x1fU))) 
						     | ((1U 
							 & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__size))
							 ? 
							(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__result_blocking 
							 >> 7U)
							 : 
							((2U 
							  & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__size))
							  ? 
							 (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__result_blocking 
							  >> 0xfU)
							  : 
							 (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__result_blocking 
							  >> 0x1fU))))));
					vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__sr 
					    = ((0xffefU 
						& (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__sr)) 
					       | (0x10U 
						  & ((((1U 
							& (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__size))
						        ? 
						       (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand1 
							>> 7U)
						        : 
						       ((2U 
							 & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__size))
							 ? 
							(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand1 
							 >> 0xfU)
							 : 
							(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand1 
							 >> 0x1fU))) 
						      | ((1U 
							  & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__size))
							  ? 
							 (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__result_blocking 
							  >> 7U)
							  : 
							 ((2U 
							   & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__size))
							   ? 
							  (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__result_blocking 
							   >> 0xfU)
							   : 
							  (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__result_blocking 
							   >> 0x1fU)))) 
						     << 4U)));
					vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__sr 
					    = ((0xfffdU 
						& (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__sr)) 
					       | (2U 
						  & ((((1U 
							& (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__size))
						        ? 
						       (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand1 
							>> 7U)
						        : 
						       ((2U 
							 & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__size))
							 ? 
							(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand1 
							 >> 0xfU)
							 : 
							(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand1 
							 >> 0x1fU))) 
						      & ((1U 
							  & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__size))
							  ? 
							 (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__result_blocking 
							  >> 7U)
							  : 
							 ((2U 
							   & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__size))
							   ? 
							  (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__result_blocking 
							   >> 0xfU)
							   : 
							  (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__result_blocking 
							   >> 0x1fU)))) 
						     << 1U)));
					vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__sr 
					    = ((0xfffbU 
						& (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__sr)) 
					       | (((1U 
						    & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__size))
						    ? 
						   (0U 
						    == 
						    (0xffU 
						     & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__result_blocking))
						    : 
						   ((2U 
						     & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__size))
						     ? 
						    (0U 
						     == 
						     (0xffffU 
						      & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__result_blocking))
						     : 
						    (0U 
						     == vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__result_blocking))) 
						  << 2U));
				    }
				}
			    }
			} else {
			    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__sr 
				= (0xfffeU & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__sr));
			    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__result 
				= (0x80U | ((0xffffff00U 
					     & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__result) 
					    | (0x7fU 
					       & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand1)));
			    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__sr 
				= (0xfffdU & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__sr));
			    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__sr 
				= ((0xfff7U & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__sr)) 
				   | (8U & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand1 
					    >> 4U)));
			    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__sr 
				= ((0xfffbU & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__sr)) 
				   | ((0U == (0xffU 
					      & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand1)) 
				      << 2U));
			}
		    } else {
			if ((0x800U & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[2U])) {
			    if ((0U != (7U & ((IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ir) 
					      >> 3U)))) {
				vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__sr 
				    = ((0xfffbU & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__sr)) 
				       | ((IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__result_BITS8_val) 
					  << 2U));
				vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__result 
				    = ((0xffffff00U 
					& vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand1) 
				       | ((0x80U & 
					   (((7U == 
					      (7U & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand2))
					      ? (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__result_BITS8_bit)
					      : (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand1 
						 >> 7U)) 
					    << 7U)) 
					  | ((0x40U 
					      & (((6U 
						   == 
						   (7U 
						    & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand2))
						   ? (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__result_BITS8_bit)
						   : 
						  (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand1 
						   >> 6U)) 
						 << 6U)) 
					     | ((0x20U 
						 & (((5U 
						      == 
						      (7U 
						       & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand2))
						      ? (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__result_BITS8_bit)
						      : 
						     (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand1 
						      >> 5U)) 
						    << 5U)) 
						| ((0x10U 
						    & (((4U 
							 == 
							 (7U 
							  & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand2))
							 ? (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__result_BITS8_bit)
							 : 
							(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand1 
							 >> 4U)) 
						       << 4U)) 
						   | ((8U 
						       & (((3U 
							    == 
							    (7U 
							     & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand2))
							    ? (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__result_BITS8_bit)
							    : 
							   (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand1 
							    >> 3U)) 
							  << 3U)) 
						      | ((4U 
							  & (((2U 
							       == 
							       (7U 
								& vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand2))
							       ? (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__result_BITS8_bit)
							       : 
							      (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand1 
							       >> 2U)) 
							     << 2U)) 
							 | ((2U 
							     & (((1U 
								  == 
								  (7U 
								   & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand2))
								  ? (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__result_BITS8_bit)
								  : 
								 (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand1 
								  >> 1U)) 
								<< 1U)) 
							    | (1U 
							       & ((0U 
								   == 
								   (7U 
								    & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand2))
								   ? (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__result_BITS8_bit)
								   : vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand1))))))))));
			    } else {
				if ((0U == (7U & ((IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ir) 
						  >> 3U)))) {
				    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__sr 
					= ((0xfffbU 
					    & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__sr)) 
					   | ((IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__result_BITS32_val) 
					      << 2U));
				    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__result 
					= ((0x80000000U 
					    & (((0x1fU 
						 == 
						 (0x1fU 
						  & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand2))
						 ? (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__result_BITS32_bit)
						 : 
						(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand1 
						 >> 0x1fU)) 
					       << 0x1fU)) 
					   | ((0x40000000U 
					       & (((0x1eU 
						    == 
						    (0x1fU 
						     & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand2))
						    ? (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__result_BITS32_bit)
						    : 
						   (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand1 
						    >> 0x1eU)) 
						  << 0x1eU)) 
					      | ((0x20000000U 
						  & (((0x1dU 
						       == 
						       (0x1fU 
							& vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand2))
						       ? (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__result_BITS32_bit)
						       : 
						      (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand1 
						       >> 0x1dU)) 
						     << 0x1dU)) 
						 | ((0x10000000U 
						     & (((0x1cU 
							  == 
							  (0x1fU 
							   & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand2))
							  ? (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__result_BITS32_bit)
							  : 
							 (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand1 
							  >> 0x1cU)) 
							<< 0x1cU)) 
						    | ((0x8000000U 
							& (((0x1bU 
							     == 
							     (0x1fU 
							      & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand2))
							     ? (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__result_BITS32_bit)
							     : 
							    (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand1 
							     >> 0x1bU)) 
							   << 0x1bU)) 
						       | ((0x4000000U 
							   & (((0x1aU 
								== 
								(0x1fU 
								 & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand2))
							        ? (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__result_BITS32_bit)
							        : 
							       (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand1 
								>> 0x1aU)) 
							      << 0x1aU)) 
							  | ((0x2000000U 
							      & (((0x19U 
								   == 
								   (0x1fU 
								    & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand2))
								   ? (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__result_BITS32_bit)
								   : 
								  (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand1 
								   >> 0x19U)) 
								 << 0x19U)) 
							     | ((0x1000000U 
								 & (((0x18U 
								      == 
								      (0x1fU 
								       & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand2))
								      ? (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__result_BITS32_bit)
								      : 
								     (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand1 
								      >> 0x18U)) 
								    << 0x18U)) 
								| ((0x800000U 
								    & (((0x17U 
									 == 
									 (0x1fU 
									  & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand2))
									 ? (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__result_BITS32_bit)
									 : 
									(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand1 
									 >> 0x17U)) 
								       << 0x17U)) 
								   | ((0x400000U 
								       & (((0x16U 
									    == 
									    (0x1fU 
									     & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand2))
									    ? (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__result_BITS32_bit)
									    : 
									   (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand1 
									    >> 0x16U)) 
									  << 0x16U)) 
								      | ((0x200000U 
									  & (((0x15U 
									       == 
									       (0x1fU 
										& vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand2))
									       ? (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__result_BITS32_bit)
									       : 
									      (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand1 
									       >> 0x15U)) 
									     << 0x15U)) 
									 | ((0x100000U 
									     & (((0x14U 
										== 
										(0x1fU 
										& vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand2))
										 ? (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__result_BITS32_bit)
										 : 
										(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand1 
										>> 0x14U)) 
										<< 0x14U)) 
									    | ((0x80000U 
										& (((0x13U 
										== 
										(0x1fU 
										& vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand2))
										 ? (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__result_BITS32_bit)
										 : 
										(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand1 
										>> 0x13U)) 
										<< 0x13U)) 
									       | ((0x40000U 
										& (((0x12U 
										== 
										(0x1fU 
										& vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand2))
										 ? (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__result_BITS32_bit)
										 : 
										(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand1 
										>> 0x12U)) 
										<< 0x12U)) 
										| ((0x20000U 
										& (((0x11U 
										== 
										(0x1fU 
										& vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand2))
										 ? (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__result_BITS32_bit)
										 : 
										(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand1 
										>> 0x11U)) 
										<< 0x11U)) 
										| ((0x10000U 
										& (((0x10U 
										== 
										(0x1fU 
										& vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand2))
										 ? (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__result_BITS32_bit)
										 : 
										(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand1 
										>> 0x10U)) 
										<< 0x10U)) 
										| ((0x8000U 
										& (((0xfU 
										== 
										(0x1fU 
										& vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand2))
										 ? (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__result_BITS32_bit)
										 : 
										(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand1 
										>> 0xfU)) 
										<< 0xfU)) 
										| ((0x4000U 
										& (((0xeU 
										== 
										(0x1fU 
										& vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand2))
										 ? (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__result_BITS32_bit)
										 : 
										(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand1 
										>> 0xeU)) 
										<< 0xeU)) 
										| ((0x2000U 
										& (((0xdU 
										== 
										(0x1fU 
										& vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand2))
										 ? (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__result_BITS32_bit)
										 : 
										(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand1 
										>> 0xdU)) 
										<< 0xdU)) 
										| ((0x1000U 
										& (((0xcU 
										== 
										(0x1fU 
										& vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand2))
										 ? (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__result_BITS32_bit)
										 : 
										(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand1 
										>> 0xcU)) 
										<< 0xcU)) 
										| ((0x800U 
										& (((0xbU 
										== 
										(0x1fU 
										& vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand2))
										 ? (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__result_BITS32_bit)
										 : 
										(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand1 
										>> 0xbU)) 
										<< 0xbU)) 
										| ((0x400U 
										& (((0xaU 
										== 
										(0x1fU 
										& vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand2))
										 ? (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__result_BITS32_bit)
										 : 
										(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand1 
										>> 0xaU)) 
										<< 0xaU)) 
										| ((0x200U 
										& (((9U 
										== 
										(0x1fU 
										& vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand2))
										 ? (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__result_BITS32_bit)
										 : 
										(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand1 
										>> 9U)) 
										<< 9U)) 
										| ((0x100U 
										& (((8U 
										== 
										(0x1fU 
										& vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand2))
										 ? (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__result_BITS32_bit)
										 : 
										(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand1 
										>> 8U)) 
										<< 8U)) 
										| ((0x80U 
										& (((7U 
										== 
										(0x1fU 
										& vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand2))
										 ? (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__result_BITS32_bit)
										 : 
										(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand1 
										>> 7U)) 
										<< 7U)) 
										| ((0x40U 
										& (((6U 
										== 
										(0x1fU 
										& vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand2))
										 ? (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__result_BITS32_bit)
										 : 
										(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand1 
										>> 6U)) 
										<< 6U)) 
										| ((0x20U 
										& (((5U 
										== 
										(0x1fU 
										& vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand2))
										 ? (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__result_BITS32_bit)
										 : 
										(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand1 
										>> 5U)) 
										<< 5U)) 
										| ((0x10U 
										& (((4U 
										== 
										(0x1fU 
										& vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand2))
										 ? (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__result_BITS32_bit)
										 : 
										(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand1 
										>> 4U)) 
										<< 4U)) 
										| ((8U 
										& (((3U 
										== 
										(0x1fU 
										& vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand2))
										 ? (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__result_BITS32_bit)
										 : 
										(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand1 
										>> 3U)) 
										<< 3U)) 
										| ((4U 
										& (((2U 
										== 
										(0x1fU 
										& vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand2))
										 ? (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__result_BITS32_bit)
										 : 
										(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand1 
										>> 2U)) 
										<< 2U)) 
										| ((2U 
										& (((1U 
										== 
										(0x1fU 
										& vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand2))
										 ? (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__result_BITS32_bit)
										 : 
										(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand1 
										>> 1U)) 
										<< 1U)) 
										| (1U 
										& ((0U 
										== 
										(0x1fU 
										& vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand2))
										 ? (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__result_BITS32_bit)
										 : vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand1)))))))))))))))))))))))))))))))));
				}
			    }
			} else {
			    if (((8U == (0xfU & ((IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ir) 
						 >> 0xcU))) 
				 & (0U == (0xffffU 
					   & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand2)))) {
				vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__sr 
				    = (0xfffeU & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__sr));
				vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__sr 
				    = (0xfffdU & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__sr));
				vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_signal = 1U;
				vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__sr 
				    = (0xfffbU & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__sr));
				vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__sr 
				    = (0xfff7U & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__sr));
			    } else {
				if (((8U == (0xfU & 
					     ((IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ir) 
					      >> 0xcU))) 
				     & (0U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__div_count)))) {
				    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_signal = 0U;
				} else {
				    if (((8U == (0xfU 
						 & ((IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ir) 
						    >> 0xcU))) 
					 & ((vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__quotient 
					     >> 0x10U) 
					    | (((IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ir) 
						>> 8U) 
					       & (((~ 
						    ((vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand1 
						      >> 0x1fU) 
						     ^ 
						     (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand2 
						      >> 0xfU))) 
						   & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__quotient 
						      >> 0xfU)) 
						  | (((vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand1 
						       >> 0x1fU) 
						      ^ 
						      (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand2 
						       >> 0xfU)) 
						     & (0x8000U 
							< 
							(0xffffU 
							 & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__quotient)))))))) {
					vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__sr 
					    = (0xfffeU 
					       & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__sr));
					vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__sr 
					    = (2U | (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__sr));
					vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_signal = 1U;
					vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__sr 
					    = (0xfffbU 
					       & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__sr));
					vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__sr 
					    = (8U | (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__sr));
				    } else {
					if ((8U == 
					     (0xfU 
					      & ((IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ir) 
						 >> 0xcU)))) {
					    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__sr 
						= (0xfffeU 
						   & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__sr));
					    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__result 
						= (
						   (0xffff0000U 
						    & (((1U 
							 & ((vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand1 
							     >> 0x1fU) 
							    & ((IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ir) 
							       >> 8U)))
							 ? 
							VL_NEGATE_I(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__dividend)
							 : vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__dividend) 
						       << 0x10U)) 
						   | (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__div_quotient));
					    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__sr 
						= (0xfffdU 
						   & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__sr));
					    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_signal = 0U;
					    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__sr 
						= (
						   (0xfffbU 
						    & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__sr)) 
						   | ((0U 
						       == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__div_quotient)) 
						      << 2U));
					    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__sr 
						= (
						   (0xfff7U 
						    & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__sr)) 
						   | (8U 
						      & ((IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__div_quotient) 
							 >> 0xcU)));
					} else {
					    if ((0xcU 
						 == 
						 (0xfU 
						  & ((IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ir) 
						     >> 0xcU)))) {
						vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__sr 
						    = 
						    (0xfffeU 
						     & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__sr));
						vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__result 
						    = (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__mult_result);
						vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__sr 
						    = 
						    (0xfffdU 
						     & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__sr));
						vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_signal = 0U;
						vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__sr 
						    = 
						    ((0xfffbU 
						      & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__sr)) 
						     | ((0U 
							 == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__mult_result)) 
							<< 2U));
						vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__sr 
						    = 
						    ((0xfff7U 
						      & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__sr)) 
						     | (8U 
							& ((IData)(
								   (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__mult_result 
								    >> 0x1fU)) 
							   << 3U)));
					    }
					}
				    }
				}
			    }
			}
		    }
		} else {
		    if ((0x1000U & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[2U])) {
			if ((0x800U & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[2U])) {
			    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__result 
				= vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__result_blocking;
			    if ((((0xffffU & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand1) 
				  != (0xffffU & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand2)) 
				 & ((((~ ((1U & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__size))
					   ? (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand1 
					      >> 7U)
					   : ((2U & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__size))
					       ? (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand1 
						  >> 0xfU)
					       : (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand1 
						  >> 0x1fU)))) 
				      & ((1U & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__size))
					  ? (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand2 
					     >> 7U)
					  : ((2U & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__size))
					      ? (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand2 
						 >> 0xfU)
					      : (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand2 
						 >> 0x1fU)))) 
				     | (((~ ((1U & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__size))
					      ? (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand1 
						 >> 7U)
					      : ((2U 
						  & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__size))
						  ? 
						 (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand1 
						  >> 0xfU)
						  : 
						 (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand1 
						  >> 0x1fU)))) 
					 & (~ ((1U 
						& (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__size))
					        ? (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand2 
						   >> 7U)
					        : (
						   (2U 
						    & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__size))
						    ? 
						   (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand2 
						    >> 0xfU)
						    : 
						   (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand2 
						    >> 0x1fU))))) 
					& (~ ((1U & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__size))
					       ? (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__result_blocking 
						  >> 7U)
					       : ((2U 
						   & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__size))
						   ? 
						  (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__result_blocking 
						   >> 0xfU)
						   : 
						  (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__result_blocking 
						   >> 0x1fU)))))) 
				    | ((((1U & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__size))
					  ? (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand1 
					     >> 7U)
					  : ((2U & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__size))
					      ? (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand1 
						 >> 0xfU)
					      : (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand1 
						 >> 0x1fU))) 
					& ((1U & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__size))
					    ? (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand2 
					       >> 7U)
					    : ((2U 
						& (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__size))
					        ? (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand2 
						   >> 0xfU)
					        : (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand2 
						   >> 0x1fU)))) 
				       & (~ ((1U & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__size))
					      ? (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__result_blocking 
						 >> 7U)
					      : ((2U 
						  & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__size))
						  ? 
						 (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__result_blocking 
						  >> 0xfU)
						  : 
						 (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__result_blocking 
						  >> 0x1fU)))))))) {
				vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__sr 
				    = (0xfff7U & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__sr));
				vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_signal = 1U;
			    } else {
				if ((0x8000U & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand1)) {
				    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__sr 
					= (8U | (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__sr));
				    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_signal = 1U;
				} else {
				    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_signal = 0U;
				}
			    }
			} else {
			    if ((0xbU == (0xfU & ((IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ir) 
						  >> 0xcU)))) {
				vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__sr 
				    = ((0xfffbU & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__sr)) 
				       | (((1U & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__size))
					    ? (0U == 
					       (0xffU 
						& vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__result_blocking))
					    : ((2U 
						& (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__size))
					        ? (0U 
						   == 
						   (0xffffU 
						    & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__result_blocking))
					        : (0U 
						   == vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__result_blocking))) 
					  << 2U));
				vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__sr 
				    = ((0xfff7U & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__sr)) 
				       | (8U & (((1U 
						  & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__size))
						  ? 
						 (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__result_blocking 
						  >> 7U)
						  : 
						 ((2U 
						   & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__size))
						   ? 
						  (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__result_blocking 
						   >> 0xfU)
						   : 
						  (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__result_blocking 
						   >> 0x1fU))) 
						<< 3U)));
				vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__sr 
				    = ((0xfffeU & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__sr)) 
				       | (1U & ((((
						   (1U 
						    & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__size))
						    ? 
						   (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand2 
						    >> 7U)
						    : 
						   ((2U 
						     & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__size))
						     ? 
						    (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand2 
						     >> 0xfU)
						     : 
						    (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand2 
						     >> 0x1fU))) 
						  & (~ 
						     ((1U 
						       & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__size))
						       ? 
						      (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand1 
						       >> 7U)
						       : 
						      ((2U 
							& (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__size))
						        ? 
						       (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand1 
							>> 0xfU)
						        : 
						       (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand1 
							>> 0x1fU))))) 
						 | (((1U 
						      & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__size))
						      ? 
						     (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__result_blocking 
						      >> 7U)
						      : 
						     ((2U 
						       & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__size))
						       ? 
						      (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__result_blocking 
						       >> 0xfU)
						       : 
						      (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__result_blocking 
						       >> 0x1fU))) 
						    & (~ 
						       ((1U 
							 & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__size))
							 ? 
							(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand1 
							 >> 7U)
							 : 
							((2U 
							  & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__size))
							  ? 
							 (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand1 
							  >> 0xfU)
							  : 
							 (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand1 
							  >> 0x1fU)))))) 
						| (((1U 
						     & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__size))
						     ? 
						    (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand2 
						     >> 7U)
						     : 
						    ((2U 
						      & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__size))
						      ? 
						     (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand2 
						      >> 0xfU)
						      : 
						     (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand2 
						      >> 0x1fU))) 
						   & ((1U 
						       & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__size))
						       ? 
						      (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__result_blocking 
						       >> 7U)
						       : 
						      ((2U 
							& (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__size))
						        ? 
						       (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__result_blocking 
							>> 0xfU)
						        : 
						       (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__result_blocking 
							>> 0x1fU)))))));
				vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__sr 
				    = ((0xfffdU & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__sr)) 
				       | (2U & ((((
						   (~ 
						    ((1U 
						      & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__size))
						      ? 
						     (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand2 
						      >> 7U)
						      : 
						     ((2U 
						       & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__size))
						       ? 
						      (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand2 
						       >> 0xfU)
						       : 
						      (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand2 
						       >> 0x1fU)))) 
						   & ((1U 
						       & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__size))
						       ? 
						      (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand1 
						       >> 7U)
						       : 
						      ((2U 
							& (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__size))
						        ? 
						       (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand1 
							>> 0xfU)
						        : 
						       (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand1 
							>> 0x1fU)))) 
						  & (~ 
						     ((1U 
						       & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__size))
						       ? 
						      (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__result_blocking 
						       >> 7U)
						       : 
						      ((2U 
							& (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__size))
						        ? 
						       (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__result_blocking 
							>> 0xfU)
						        : 
						       (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__result_blocking 
							>> 0x1fU))))) 
						 | ((((1U 
						       & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__size))
						       ? 
						      (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand2 
						       >> 7U)
						       : 
						      ((2U 
							& (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__size))
						        ? 
						       (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand2 
							>> 0xfU)
						        : 
						       (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand2 
							>> 0x1fU))) 
						     & (~ 
							((1U 
							  & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__size))
							  ? 
							 (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand1 
							  >> 7U)
							  : 
							 ((2U 
							   & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__size))
							   ? 
							  (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand1 
							   >> 0xfU)
							   : 
							  (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand1 
							   >> 0x1fU))))) 
						    & ((1U 
							& (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__size))
						        ? 
						       (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__result_blocking 
							>> 7U)
						        : 
						       ((2U 
							 & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__size))
							 ? 
							(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__result_blocking 
							 >> 0xfU)
							 : 
							(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__result_blocking 
							 >> 0x1fU))))) 
						<< 1U)));
			    }
			    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__result 
				= vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__result_blocking;
			}
		    } else {
			if ((0x800U & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[2U])) {
			    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__sr 
				= (0xfffeU & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__sr));
			    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__result 
				= vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__result_blocking;
			    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__sr 
				= (0xfffdU & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__sr));
			    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__sr 
				= ((0xfff7U & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__sr)) 
				   | (8U & (((1U & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__size))
					      ? (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__result_blocking 
						 >> 7U)
					      : ((2U 
						  & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__size))
						  ? 
						 (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__result_blocking 
						  >> 0xfU)
						  : 
						 (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__result_blocking 
						  >> 0x1fU))) 
					    << 3U)));
			    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__sr 
				= ((0xfffbU & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__sr)) 
				   | (((1U & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__size))
				        ? (0U == (0xffU 
						  & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__result_blocking))
				        : ((2U & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__size))
					    ? (0U == 
					       (0xffffU 
						& vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__result_blocking))
					    : (0U == vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__result_blocking))) 
				      << 2U));
			} else {
			    if ((1U & ((((vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__decoder_alu_reg 
					  >> 8U) | 
					 (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__decoder_alu_reg 
					  >> 9U)) | 
					(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__decoder_alu_reg 
					 >> 0xaU)) 
				       | (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__decoder_alu_reg 
					  >> 0xbU)))) {
				vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__sr 
				    = ((0xfffeU & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__sr)) 
				       | (1U & ((1U 
						 & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__size))
						 ? 
						(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand1 
						 >> 7U)
						 : 
						((2U 
						  & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__size))
						  ? 
						 (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand1 
						  >> 0xfU)
						  : 
						 (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand1 
						  >> 0x1fU)))));
				vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__result 
				    = vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__result_blocking;
				vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__sr 
				    = ((0x100U & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__decoder_alu_reg)
				        ? ((0xfffdU 
					    & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__sr)) 
					   | (2U & 
					      ((0xfffffffeU 
						& (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__sr)) 
					       | (((1U 
						    & ((1U 
							& (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__size))
						        ? 
						       (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__result_blocking 
							>> 7U)
						        : 
						       ((2U 
							 & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__size))
							 ? 
							(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__result_blocking 
							 >> 0xfU)
							 : 
							(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__result_blocking 
							 >> 0x1fU)))) 
						   != 
						   (1U 
						    & ((1U 
							& (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__size))
						        ? 
						       (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand1 
							>> 7U)
						        : 
						       ((2U 
							 & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__size))
							 ? 
							(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand1 
							 >> 0xfU)
							 : 
							(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand1 
							 >> 0x1fU))))) 
						  << 1U))))
				        : (0xfffdU 
					   & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__sr)));
				if ((1U & (~ (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__decoder_alu_reg 
					      >> 0xaU)))) {
				    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__sr 
					= ((0xffefU 
					    & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__sr)) 
					   | (0x10U 
					      & (((1U 
						   & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__size))
						   ? 
						  (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand1 
						   >> 7U)
						   : 
						  ((2U 
						    & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__size))
						    ? 
						   (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand1 
						    >> 0xfU)
						    : 
						   (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand1 
						    >> 0x1fU))) 
						 << 4U)));
				}
			    } else {
				vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__sr 
				    = ((0xfffeU & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__sr)) 
				       | (1U & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand1));
				vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__result 
				    = vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__result_blocking;
				vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__sr 
				    = (0xfffdU & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__sr));
				if ((1U & (~ (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__decoder_alu_reg 
					      >> 0xeU)))) {
				    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__sr 
					= ((0xffefU 
					    & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__sr)) 
					   | (0x10U 
					      & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand1 
						 << 4U)));
				}
			    }
			    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__sr 
				= ((0xfff7U & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__sr)) 
				   | (8U & (((1U & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__size))
					      ? (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__result_blocking 
						 >> 7U)
					      : ((2U 
						  & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__size))
						  ? 
						 (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__result_blocking 
						  >> 0xfU)
						  : 
						 (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__result_blocking 
						  >> 0x1fU))) 
					    << 3U)));
			    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__sr 
				= ((0xfffbU & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__sr)) 
				   | (((1U & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__size))
				        ? (0U == (0xffU 
						  & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__result_blocking))
				        : ((2U & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__size))
					    ? (0U == 
					       (0xffffU 
						& vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__result_blocking))
					    : (0U == vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__result_blocking))) 
				      << 2U));
			}
		    }
		}
	    }
	} else {
	    if ((0x4000U & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[2U])) {
		if ((0x2000U & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[2U])) {
		    if ((0x1000U & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[2U])) {
			if ((0x800U & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[2U])) {
			    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__sr 
				= (0xfffdU & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__sr));
			    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__result 
				= vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__result_blocking;
			    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__sr 
				= ((1U & ((vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__decoder_alu_reg 
					   >> 0xbU) 
					  | (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__decoder_alu_reg 
					     >> 0xfU)))
				    ? ((0xfffeU & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__sr)) 
				       | (1U & ((IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__sr) 
						>> 4U)))
				    : (0xfffeU & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__sr)));
			    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__sr 
				= ((0xfff7U & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__sr)) 
				   | (8U & (((1U & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__size))
					      ? (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__result_blocking 
						 >> 7U)
					      : ((2U 
						  & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__size))
						  ? 
						 (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__result_blocking 
						  >> 0xfU)
						  : 
						 (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__result_blocking 
						  >> 0x1fU))) 
					    << 3U)));
			    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__sr 
				= ((0xfffbU & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__sr)) 
				   | (((1U & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__size))
				        ? (0U == (0xffU 
						  & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__result_blocking))
				        : ((2U & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__size))
					    ? (0U == 
					       (0xffffU 
						& vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__result_blocking))
					    : (0U == vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__result_blocking))) 
				      << 2U));
			} else {
			    if ((4U == (7U & ((IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ir) 
					      >> 0xcU)))) {
				vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__sr 
				    = ((0xfffeU & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__sr)) 
				       | (9U < (0x3fU 
						& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__result_ABCD2 
						   >> 0xeU))));
				vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__result 
				    = vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__result_ABCD2;
				vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__sr 
				    = ((0xffefU & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__sr)) 
				       | ((9U < (0x3fU 
						 & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__result_ABCD2 
						    >> 0xeU))) 
					  << 4U));
				vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__sr 
				    = ((0xfffdU & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__sr)) 
				       | (2U & (((~ 
						  (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__result_ABCD2 
						   >> 0x1eU)) 
						 << 1U) 
						& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__result_ABCD2 
						   >> 6U))));
			    } else {
				if ((0U == (7U & ((IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ir) 
						  >> 0xcU)))) {
				    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__sr 
					= ((0xfffeU 
					    & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__sr)) 
					   | (0x20U 
					      > (0x3fU 
						 & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__result_SBCD2 
						    >> 0xeU))));
				    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__result 
					= vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__result_SBCD2;
				    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__sr 
					= ((0xffefU 
					    & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__sr)) 
					   | ((0x20U 
					       > (0x3fU 
						  & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__result_SBCD2 
						     >> 0xeU))) 
					      << 4U));
				    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__sr 
					= ((0xfffdU 
					    & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__sr)) 
					   | (2U & 
					      ((vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__result_SBCD2 
						>> 0x1dU) 
					       & ((~ 
						   (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__result_SBCD2 
						    >> 7U)) 
						  << 1U))));
				} else {
				    if ((5U == (7U 
						& ((IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ir) 
						   >> 0xcU)))) {
					vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__sr 
					    = ((0xfffeU 
						& (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__sr)) 
					       | (1U 
						  & (((((1U 
							 & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__size))
							 ? 
							(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand2 
							 >> 7U)
							 : 
							((2U 
							  & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__size))
							  ? 
							 (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand2 
							  >> 0xfU)
							  : 
							 (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand2 
							  >> 0x1fU))) 
						       & ((1U 
							   & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__size))
							   ? 
							  (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand1 
							   >> 7U)
							   : 
							  ((2U 
							    & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__size))
							    ? 
							   (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand1 
							    >> 0xfU)
							    : 
							   (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand1 
							    >> 0x1fU)))) 
						      | ((~ 
							  ((1U 
							    & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__size))
							    ? 
							   (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__result_blocking 
							    >> 7U)
							    : 
							   ((2U 
							     & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__size))
							     ? 
							    (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__result_blocking 
							     >> 0xfU)
							     : 
							    (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__result_blocking 
							     >> 0x1fU)))) 
							 & ((1U 
							     & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__size))
							     ? 
							    (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand1 
							     >> 7U)
							     : 
							    ((2U 
							      & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__size))
							      ? 
							     (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand1 
							      >> 0xfU)
							      : 
							     (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand1 
							      >> 0x1fU))))) 
						     | (((1U 
							  & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__size))
							  ? 
							 (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand2 
							  >> 7U)
							  : 
							 ((2U 
							   & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__size))
							   ? 
							  (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand2 
							   >> 0xfU)
							   : 
							  (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand2 
							   >> 0x1fU))) 
							& (~ 
							   ((1U 
							     & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__size))
							     ? 
							    (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__result_blocking 
							     >> 7U)
							     : 
							    ((2U 
							      & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__size))
							      ? 
							     (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__result_blocking 
							      >> 0xfU)
							      : 
							     (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__result_blocking 
							      >> 0x1fU))))))));
					vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__result 
					    = vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__result_blocking;
					vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__sr 
					    = ((0xffefU 
						& (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__sr)) 
					       | (0x10U 
						  & ((((((1U 
							  & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__size))
							  ? 
							 (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand2 
							  >> 7U)
							  : 
							 ((2U 
							   & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__size))
							   ? 
							  (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand2 
							   >> 0xfU)
							   : 
							  (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand2 
							   >> 0x1fU))) 
							& ((1U 
							    & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__size))
							    ? 
							   (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand1 
							    >> 7U)
							    : 
							   ((2U 
							     & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__size))
							     ? 
							    (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand1 
							     >> 0xfU)
							     : 
							    (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand1 
							     >> 0x1fU)))) 
						       | ((~ 
							   ((1U 
							     & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__size))
							     ? 
							    (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__result_blocking 
							     >> 7U)
							     : 
							    ((2U 
							      & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__size))
							      ? 
							     (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__result_blocking 
							      >> 0xfU)
							      : 
							     (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__result_blocking 
							      >> 0x1fU)))) 
							  & ((1U 
							      & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__size))
							      ? 
							     (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand1 
							      >> 7U)
							      : 
							     ((2U 
							       & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__size))
							       ? 
							      (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand1 
							       >> 0xfU)
							       : 
							      (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand1 
							       >> 0x1fU))))) 
						      | (((1U 
							   & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__size))
							   ? 
							  (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand2 
							   >> 7U)
							   : 
							  ((2U 
							    & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__size))
							    ? 
							   (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand2 
							    >> 0xfU)
							    : 
							   (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand2 
							    >> 0x1fU))) 
							 & (~ 
							    ((1U 
							      & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__size))
							      ? 
							     (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__result_blocking 
							      >> 7U)
							      : 
							     ((2U 
							       & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__size))
							       ? 
							      (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__result_blocking 
							       >> 0xfU)
							       : 
							      (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__result_blocking 
							       >> 0x1fU)))))) 
						     << 4U)));
					vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__sr 
					    = ((0xfffdU 
						& (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__sr)) 
					       | (2U 
						  & ((((((1U 
							  & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__size))
							  ? 
							 (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand2 
							  >> 7U)
							  : 
							 ((2U 
							   & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__size))
							   ? 
							  (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand2 
							   >> 0xfU)
							   : 
							  (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand2 
							   >> 0x1fU))) 
							& ((1U 
							    & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__size))
							    ? 
							   (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand1 
							    >> 7U)
							    : 
							   ((2U 
							     & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__size))
							     ? 
							    (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand1 
							     >> 0xfU)
							     : 
							    (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand1 
							     >> 0x1fU)))) 
						       & (~ 
							  ((1U 
							    & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__size))
							    ? 
							   (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__result_blocking 
							    >> 7U)
							    : 
							   ((2U 
							     & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__size))
							     ? 
							    (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__result_blocking 
							     >> 0xfU)
							     : 
							    (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__result_blocking 
							     >> 0x1fU))))) 
						      | (((~ 
							   ((1U 
							     & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__size))
							     ? 
							    (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand2 
							     >> 7U)
							     : 
							    ((2U 
							      & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__size))
							      ? 
							     (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand2 
							      >> 0xfU)
							      : 
							     (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand2 
							      >> 0x1fU)))) 
							  & (~ 
							     ((1U 
							       & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__size))
							       ? 
							      (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand1 
							       >> 7U)
							       : 
							      ((2U 
								& (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__size))
							        ? 
							       (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand1 
								>> 0xfU)
							        : 
							       (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand1 
								>> 0x1fU))))) 
							 & ((1U 
							     & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__size))
							     ? 
							    (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__result_blocking 
							     >> 7U)
							     : 
							    ((2U 
							      & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__size))
							      ? 
							     (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__result_blocking 
							      >> 0xfU)
							      : 
							     (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__result_blocking 
							      >> 0x1fU))))) 
						     << 1U)));
				    } else {
					if ((1U == 
					     (7U & 
					      ((IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ir) 
					       >> 0xcU)))) {
					    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__sr 
						= (
						   (0xfffeU 
						    & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__sr)) 
						   | (1U 
						      & (((((1U 
							     & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__size))
							     ? 
							    (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand2 
							     >> 7U)
							     : 
							    ((2U 
							      & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__size))
							      ? 
							     (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand2 
							      >> 0xfU)
							      : 
							     (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand2 
							      >> 0x1fU))) 
							   & (~ 
							      ((1U 
								& (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__size))
							        ? 
							       (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand1 
								>> 7U)
							        : 
							       ((2U 
								 & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__size))
								 ? 
								(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand1 
								 >> 0xfU)
								 : 
								(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand1 
								 >> 0x1fU))))) 
							  | (((1U 
							       & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__size))
							       ? 
							      (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__result_blocking 
							       >> 7U)
							       : 
							      ((2U 
								& (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__size))
							        ? 
							       (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__result_blocking 
								>> 0xfU)
							        : 
							       (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__result_blocking 
								>> 0x1fU))) 
							     & (~ 
								((1U 
								  & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__size))
								  ? 
								 (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand1 
								  >> 7U)
								  : 
								 ((2U 
								   & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__size))
								   ? 
								  (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand1 
								   >> 0xfU)
								   : 
								  (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand1 
								   >> 0x1fU)))))) 
							 | (((1U 
							      & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__size))
							      ? 
							     (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand2 
							      >> 7U)
							      : 
							     ((2U 
							       & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__size))
							       ? 
							      (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand2 
							       >> 0xfU)
							       : 
							      (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand2 
							       >> 0x1fU))) 
							    & ((1U 
								& (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__size))
							        ? 
							       (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__result_blocking 
								>> 7U)
							        : 
							       ((2U 
								 & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__size))
								 ? 
								(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__result_blocking 
								 >> 0xfU)
								 : 
								(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__result_blocking 
								 >> 0x1fU)))))));
					    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__result 
						= vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__result_blocking;
					    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__sr 
						= (
						   (0xffefU 
						    & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__sr)) 
						   | (0x10U 
						      & ((((((1U 
							      & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__size))
							      ? 
							     (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand2 
							      >> 7U)
							      : 
							     ((2U 
							       & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__size))
							       ? 
							      (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand2 
							       >> 0xfU)
							       : 
							      (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand2 
							       >> 0x1fU))) 
							    & (~ 
							       ((1U 
								 & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__size))
								 ? 
								(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand1 
								 >> 7U)
								 : 
								((2U 
								  & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__size))
								  ? 
								 (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand1 
								  >> 0xfU)
								  : 
								 (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand1 
								  >> 0x1fU))))) 
							   | (((1U 
								& (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__size))
							        ? 
							       (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__result_blocking 
								>> 7U)
							        : 
							       ((2U 
								 & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__size))
								 ? 
								(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__result_blocking 
								 >> 0xfU)
								 : 
								(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__result_blocking 
								 >> 0x1fU))) 
							      & (~ 
								 ((1U 
								   & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__size))
								   ? 
								  (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand1 
								   >> 7U)
								   : 
								  ((2U 
								    & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__size))
								    ? 
								   (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand1 
								    >> 0xfU)
								    : 
								   (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand1 
								    >> 0x1fU)))))) 
							  | (((1U 
							       & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__size))
							       ? 
							      (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand2 
							       >> 7U)
							       : 
							      ((2U 
								& (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__size))
							        ? 
							       (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand2 
								>> 0xfU)
							        : 
							       (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand2 
								>> 0x1fU))) 
							     & ((1U 
								 & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__size))
								 ? 
								(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__result_blocking 
								 >> 7U)
								 : 
								((2U 
								  & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__size))
								  ? 
								 (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__result_blocking 
								  >> 0xfU)
								  : 
								 (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__result_blocking 
								  >> 0x1fU))))) 
							 << 4U)));
					    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__sr 
						= (
						   (0xfffdU 
						    & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__sr)) 
						   | (2U 
						      & (((((~ 
							     ((1U 
							       & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__size))
							       ? 
							      (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand2 
							       >> 7U)
							       : 
							      ((2U 
								& (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__size))
							        ? 
							       (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand2 
								>> 0xfU)
							        : 
							       (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand2 
								>> 0x1fU)))) 
							    & ((1U 
								& (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__size))
							        ? 
							       (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand1 
								>> 7U)
							        : 
							       ((2U 
								 & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__size))
								 ? 
								(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand1 
								 >> 0xfU)
								 : 
								(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand1 
								 >> 0x1fU)))) 
							   & (~ 
							      ((1U 
								& (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__size))
							        ? 
							       (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__result_blocking 
								>> 7U)
							        : 
							       ((2U 
								 & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__size))
								 ? 
								(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__result_blocking 
								 >> 0xfU)
								 : 
								(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__result_blocking 
								 >> 0x1fU))))) 
							  | ((((1U 
								& (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__size))
							        ? 
							       (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand2 
								>> 7U)
							        : 
							       ((2U 
								 & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__size))
								 ? 
								(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand2 
								 >> 0xfU)
								 : 
								(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand2 
								 >> 0x1fU))) 
							      & (~ 
								 ((1U 
								   & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__size))
								   ? 
								  (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand1 
								   >> 7U)
								   : 
								  ((2U 
								    & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__size))
								    ? 
								   (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand1 
								    >> 0xfU)
								    : 
								   (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand1 
								    >> 0x1fU))))) 
							     & ((1U 
								 & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__size))
								 ? 
								(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__result_blocking 
								 >> 7U)
								 : 
								((2U 
								  & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__size))
								  ? 
								 (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__result_blocking 
								  >> 0xfU)
								  : 
								 (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__result_blocking 
								  >> 0x1fU))))) 
							 << 1U)));
					}
				    }
				}
			    }
			    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__sr 
				= ((0xfffbU & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__sr)) 
				   | (0xfffffffcU & 
				      ((IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__sr) 
				       & (((1U & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__size))
					    ? (0U == 
					       (0xffU 
						& vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__result_blocking))
					    : ((2U 
						& (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__size))
					        ? (0U 
						   == 
						   (0xffffU 
						    & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__result_blocking))
					        : (0U 
						   == vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__result_blocking))) 
					  << 2U))));
			    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__sr 
				= ((0xfff7U & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__sr)) 
				   | (8U & (((1U & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__size))
					      ? (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__result_blocking 
						 >> 7U)
					      : ((2U 
						  & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__size))
						  ? 
						 (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__result_blocking 
						  >> 0xfU)
						  : 
						 (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__result_blocking 
						  >> 0x1fU))) 
					    << 3U)));
			}
		    } else {
			if ((0x800U & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[2U])) {
			    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__result 
				= vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__result_blocking;
			} else {
			    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__sr 
				= ((0xfffbU & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__sr)) 
				   | (((1U & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__size))
				        ? (0U == (0xffU 
						  & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__result_blocking))
				        : ((2U & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__size))
					    ? (0U == 
					       (0xffffU 
						& vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__result_blocking))
					    : (0U == vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__result_blocking))) 
				      << 2U));
			    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__result 
				= vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__result_blocking;
			    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__sr 
				= ((0xfff7U & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__sr)) 
				   | (8U & (((1U & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__size))
					      ? (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__result_blocking 
						 >> 7U)
					      : ((2U 
						  & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__size))
						  ? 
						 (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__result_blocking 
						  >> 0xfU)
						  : 
						 (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__result_blocking 
						  >> 0x1fU))) 
					    << 3U)));
			    if ((0x20U & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__decoder_alu_reg)) {
				vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__sr 
				    = ((0xfffeU & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__sr)) 
				       | (1U & ((((
						   (1U 
						    & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__size))
						    ? 
						   (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand2 
						    >> 7U)
						    : 
						   ((2U 
						     & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__size))
						     ? 
						    (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand2 
						     >> 0xfU)
						     : 
						    (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand2 
						     >> 0x1fU))) 
						  & (~ 
						     ((1U 
						       & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__size))
						       ? 
						      (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand1 
						       >> 7U)
						       : 
						      ((2U 
							& (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__size))
						        ? 
						       (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand1 
							>> 0xfU)
						        : 
						       (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand1 
							>> 0x1fU))))) 
						 | (((1U 
						      & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__size))
						      ? 
						     (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__result_blocking 
						      >> 7U)
						      : 
						     ((2U 
						       & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__size))
						       ? 
						      (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__result_blocking 
						       >> 0xfU)
						       : 
						      (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__result_blocking 
						       >> 0x1fU))) 
						    & (~ 
						       ((1U 
							 & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__size))
							 ? 
							(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand1 
							 >> 7U)
							 : 
							((2U 
							  & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__size))
							  ? 
							 (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand1 
							  >> 0xfU)
							  : 
							 (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand1 
							  >> 0x1fU)))))) 
						| (((1U 
						     & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__size))
						     ? 
						    (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand2 
						     >> 7U)
						     : 
						    ((2U 
						      & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__size))
						      ? 
						     (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand2 
						      >> 0xfU)
						      : 
						     (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand2 
						      >> 0x1fU))) 
						   & ((1U 
						       & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__size))
						       ? 
						      (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__result_blocking 
						       >> 7U)
						       : 
						      ((2U 
							& (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__size))
						        ? 
						       (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__result_blocking 
							>> 0xfU)
						        : 
						       (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__result_blocking 
							>> 0x1fU)))))));
				vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__sr 
				    = ((0xfffdU & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__sr)) 
				       | (2U & ((((
						   (~ 
						    ((1U 
						      & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__size))
						      ? 
						     (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand2 
						      >> 7U)
						      : 
						     ((2U 
						       & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__size))
						       ? 
						      (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand2 
						       >> 0xfU)
						       : 
						      (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand2 
						       >> 0x1fU)))) 
						   & ((1U 
						       & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__size))
						       ? 
						      (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand1 
						       >> 7U)
						       : 
						      ((2U 
							& (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__size))
						        ? 
						       (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand1 
							>> 0xfU)
						        : 
						       (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand1 
							>> 0x1fU)))) 
						  & (~ 
						     ((1U 
						       & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__size))
						       ? 
						      (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__result_blocking 
						       >> 7U)
						       : 
						      ((2U 
							& (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__size))
						        ? 
						       (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__result_blocking 
							>> 0xfU)
						        : 
						       (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__result_blocking 
							>> 0x1fU))))) 
						 | ((((1U 
						       & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__size))
						       ? 
						      (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand2 
						       >> 7U)
						       : 
						      ((2U 
							& (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__size))
						        ? 
						       (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand2 
							>> 0xfU)
						        : 
						       (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand2 
							>> 0x1fU))) 
						     & (~ 
							((1U 
							  & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__size))
							  ? 
							 (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand1 
							  >> 7U)
							  : 
							 ((2U 
							   & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__size))
							   ? 
							  (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand1 
							   >> 0xfU)
							   : 
							  (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand1 
							   >> 0x1fU))))) 
						    & ((1U 
							& (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__size))
						        ? 
						       (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__result_blocking 
							>> 7U)
						        : 
						       ((2U 
							 & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__size))
							 ? 
							(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__result_blocking 
							 >> 0xfU)
							 : 
							(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__result_blocking 
							 >> 0x1fU))))) 
						<< 1U)));
			    } else {
				if ((8U & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__decoder_alu_reg)) {
				    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__sr 
					= ((0xfffeU 
					    & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__sr)) 
					   | (1U & 
					      (((((1U 
						   & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__size))
						   ? 
						  (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand2 
						   >> 7U)
						   : 
						  ((2U 
						    & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__size))
						    ? 
						   (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand2 
						    >> 0xfU)
						    : 
						   (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand2 
						    >> 0x1fU))) 
						 & ((1U 
						     & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__size))
						     ? 
						    (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand1 
						     >> 7U)
						     : 
						    ((2U 
						      & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__size))
						      ? 
						     (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand1 
						      >> 0xfU)
						      : 
						     (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand1 
						      >> 0x1fU)))) 
						| ((~ 
						    ((1U 
						      & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__size))
						      ? 
						     (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__result_blocking 
						      >> 7U)
						      : 
						     ((2U 
						       & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__size))
						       ? 
						      (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__result_blocking 
						       >> 0xfU)
						       : 
						      (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__result_blocking 
						       >> 0x1fU)))) 
						   & ((1U 
						       & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__size))
						       ? 
						      (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand1 
						       >> 7U)
						       : 
						      ((2U 
							& (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__size))
						        ? 
						       (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand1 
							>> 0xfU)
						        : 
						       (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand1 
							>> 0x1fU))))) 
					       | (((1U 
						    & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__size))
						    ? 
						   (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand2 
						    >> 7U)
						    : 
						   ((2U 
						     & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__size))
						     ? 
						    (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand2 
						     >> 0xfU)
						     : 
						    (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand2 
						     >> 0x1fU))) 
						  & (~ 
						     ((1U 
						       & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__size))
						       ? 
						      (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__result_blocking 
						       >> 7U)
						       : 
						      ((2U 
							& (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__size))
						        ? 
						       (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__result_blocking 
							>> 0xfU)
						        : 
						       (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__result_blocking 
							>> 0x1fU))))))));
				    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__sr 
					= ((0xffefU 
					    & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__sr)) 
					   | (0x10U 
					      & ((((((1U 
						      & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__size))
						      ? 
						     (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand2 
						      >> 7U)
						      : 
						     ((2U 
						       & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__size))
						       ? 
						      (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand2 
						       >> 0xfU)
						       : 
						      (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand2 
						       >> 0x1fU))) 
						    & ((1U 
							& (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__size))
						        ? 
						       (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand1 
							>> 7U)
						        : 
						       ((2U 
							 & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__size))
							 ? 
							(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand1 
							 >> 0xfU)
							 : 
							(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand1 
							 >> 0x1fU)))) 
						   | ((~ 
						       ((1U 
							 & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__size))
							 ? 
							(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__result_blocking 
							 >> 7U)
							 : 
							((2U 
							  & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__size))
							  ? 
							 (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__result_blocking 
							  >> 0xfU)
							  : 
							 (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__result_blocking 
							  >> 0x1fU)))) 
						      & ((1U 
							  & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__size))
							  ? 
							 (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand1 
							  >> 7U)
							  : 
							 ((2U 
							   & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__size))
							   ? 
							  (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand1 
							   >> 0xfU)
							   : 
							  (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand1 
							   >> 0x1fU))))) 
						  | (((1U 
						       & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__size))
						       ? 
						      (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand2 
						       >> 7U)
						       : 
						      ((2U 
							& (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__size))
						        ? 
						       (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand2 
							>> 0xfU)
						        : 
						       (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand2 
							>> 0x1fU))) 
						     & (~ 
							((1U 
							  & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__size))
							  ? 
							 (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__result_blocking 
							  >> 7U)
							  : 
							 ((2U 
							   & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__size))
							   ? 
							  (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__result_blocking 
							   >> 0xfU)
							   : 
							  (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__result_blocking 
							   >> 0x1fU)))))) 
						 << 4U)));
				    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__sr 
					= ((0xfffdU 
					    & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__sr)) 
					   | (2U & 
					      ((((((1U 
						    & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__size))
						    ? 
						   (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand2 
						    >> 7U)
						    : 
						   ((2U 
						     & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__size))
						     ? 
						    (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand2 
						     >> 0xfU)
						     : 
						    (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand2 
						     >> 0x1fU))) 
						  & ((1U 
						      & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__size))
						      ? 
						     (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand1 
						      >> 7U)
						      : 
						     ((2U 
						       & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__size))
						       ? 
						      (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand1 
						       >> 0xfU)
						       : 
						      (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand1 
						       >> 0x1fU)))) 
						 & (~ 
						    ((1U 
						      & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__size))
						      ? 
						     (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__result_blocking 
						      >> 7U)
						      : 
						     ((2U 
						       & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__size))
						       ? 
						      (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__result_blocking 
						       >> 0xfU)
						       : 
						      (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__result_blocking 
						       >> 0x1fU))))) 
						| (((~ 
						     ((1U 
						       & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__size))
						       ? 
						      (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand2 
						       >> 7U)
						       : 
						      ((2U 
							& (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__size))
						        ? 
						       (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand2 
							>> 0xfU)
						        : 
						       (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand2 
							>> 0x1fU)))) 
						    & (~ 
						       ((1U 
							 & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__size))
							 ? 
							(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand1 
							 >> 7U)
							 : 
							((2U 
							  & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__size))
							  ? 
							 (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand1 
							  >> 0xfU)
							  : 
							 (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand1 
							  >> 0x1fU))))) 
						   & ((1U 
						       & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__size))
						       ? 
						      (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__result_blocking 
						       >> 7U)
						       : 
						      ((2U 
							& (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__size))
						        ? 
						       (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__result_blocking 
							>> 0xfU)
						        : 
						       (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__result_blocking 
							>> 0x1fU))))) 
					       << 1U)));
				} else {
				    if ((0x10U & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__decoder_alu_reg)) {
					vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__sr 
					    = ((0xfffeU 
						& (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__sr)) 
					       | (1U 
						  & (((((1U 
							 & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__size))
							 ? 
							(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand2 
							 >> 7U)
							 : 
							((2U 
							  & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__size))
							  ? 
							 (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand2 
							  >> 0xfU)
							  : 
							 (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand2 
							  >> 0x1fU))) 
						       & (~ 
							  ((1U 
							    & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__size))
							    ? 
							   (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand1 
							    >> 7U)
							    : 
							   ((2U 
							     & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__size))
							     ? 
							    (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand1 
							     >> 0xfU)
							     : 
							    (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand1 
							     >> 0x1fU))))) 
						      | (((1U 
							   & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__size))
							   ? 
							  (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__result_blocking 
							   >> 7U)
							   : 
							  ((2U 
							    & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__size))
							    ? 
							   (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__result_blocking 
							    >> 0xfU)
							    : 
							   (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__result_blocking 
							    >> 0x1fU))) 
							 & (~ 
							    ((1U 
							      & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__size))
							      ? 
							     (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand1 
							      >> 7U)
							      : 
							     ((2U 
							       & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__size))
							       ? 
							      (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand1 
							       >> 0xfU)
							       : 
							      (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand1 
							       >> 0x1fU)))))) 
						     | (((1U 
							  & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__size))
							  ? 
							 (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand2 
							  >> 7U)
							  : 
							 ((2U 
							   & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__size))
							   ? 
							  (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand2 
							   >> 0xfU)
							   : 
							  (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand2 
							   >> 0x1fU))) 
							& ((1U 
							    & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__size))
							    ? 
							   (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__result_blocking 
							    >> 7U)
							    : 
							   ((2U 
							     & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__size))
							     ? 
							    (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__result_blocking 
							     >> 0xfU)
							     : 
							    (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__result_blocking 
							     >> 0x1fU)))))));
					vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__sr 
					    = ((0xffefU 
						& (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__sr)) 
					       | (0x10U 
						  & ((((((1U 
							  & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__size))
							  ? 
							 (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand2 
							  >> 7U)
							  : 
							 ((2U 
							   & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__size))
							   ? 
							  (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand2 
							   >> 0xfU)
							   : 
							  (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand2 
							   >> 0x1fU))) 
							& (~ 
							   ((1U 
							     & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__size))
							     ? 
							    (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand1 
							     >> 7U)
							     : 
							    ((2U 
							      & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__size))
							      ? 
							     (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand1 
							      >> 0xfU)
							      : 
							     (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand1 
							      >> 0x1fU))))) 
						       | (((1U 
							    & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__size))
							    ? 
							   (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__result_blocking 
							    >> 7U)
							    : 
							   ((2U 
							     & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__size))
							     ? 
							    (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__result_blocking 
							     >> 0xfU)
							     : 
							    (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__result_blocking 
							     >> 0x1fU))) 
							  & (~ 
							     ((1U 
							       & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__size))
							       ? 
							      (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand1 
							       >> 7U)
							       : 
							      ((2U 
								& (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__size))
							        ? 
							       (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand1 
								>> 0xfU)
							        : 
							       (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand1 
								>> 0x1fU)))))) 
						      | (((1U 
							   & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__size))
							   ? 
							  (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand2 
							   >> 7U)
							   : 
							  ((2U 
							    & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__size))
							    ? 
							   (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand2 
							    >> 0xfU)
							    : 
							   (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand2 
							    >> 0x1fU))) 
							 & ((1U 
							     & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__size))
							     ? 
							    (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__result_blocking 
							     >> 7U)
							     : 
							    ((2U 
							      & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__size))
							      ? 
							     (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__result_blocking 
							      >> 0xfU)
							      : 
							     (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__result_blocking 
							      >> 0x1fU))))) 
						     << 4U)));
					vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__sr 
					    = ((0xfffdU 
						& (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__sr)) 
					       | (2U 
						  & (((((~ 
							 ((1U 
							   & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__size))
							   ? 
							  (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand2 
							   >> 7U)
							   : 
							  ((2U 
							    & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__size))
							    ? 
							   (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand2 
							    >> 0xfU)
							    : 
							   (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand2 
							    >> 0x1fU)))) 
							& ((1U 
							    & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__size))
							    ? 
							   (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand1 
							    >> 7U)
							    : 
							   ((2U 
							     & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__size))
							     ? 
							    (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand1 
							     >> 0xfU)
							     : 
							    (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand1 
							     >> 0x1fU)))) 
						       & (~ 
							  ((1U 
							    & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__size))
							    ? 
							   (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__result_blocking 
							    >> 7U)
							    : 
							   ((2U 
							     & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__size))
							     ? 
							    (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__result_blocking 
							     >> 0xfU)
							     : 
							    (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__result_blocking 
							     >> 0x1fU))))) 
						      | ((((1U 
							    & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__size))
							    ? 
							   (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand2 
							    >> 7U)
							    : 
							   ((2U 
							     & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__size))
							     ? 
							    (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand2 
							     >> 0xfU)
							     : 
							    (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand2 
							     >> 0x1fU))) 
							  & (~ 
							     ((1U 
							       & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__size))
							       ? 
							      (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand1 
							       >> 7U)
							       : 
							      ((2U 
								& (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__size))
							        ? 
							       (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand1 
								>> 0xfU)
							        : 
							       (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand1 
								>> 0x1fU))))) 
							 & ((1U 
							     & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__size))
							     ? 
							    (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__result_blocking 
							     >> 7U)
							     : 
							    ((2U 
							      & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__size))
							      ? 
							     (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__result_blocking 
							      >> 0xfU)
							      : 
							     (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__result_blocking 
							      >> 0x1fU))))) 
						     << 1U)));
				    } else {
					vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__sr 
					    = (0xfffeU 
					       & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__sr));
					vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__sr 
					    = (0xfffdU 
					       & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__sr));
				    }
				}
			    }
			}
		    }
		} else {
		    if ((0x1000U & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[2U])) {
			if ((0x800U & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[2U])) {
			    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__result 
				= ((2U & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__size))
				    ? ((0xffff0000U 
					& (VL_NEGATE_I((IData)(
							       (1U 
								& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand1 
								   >> 0xfU)))) 
					   << 0x10U)) 
				       | (0xffffU & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand1))
				    : vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand1);
			} else {
			    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__result 
				= ((0xffffff00U & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__result) 
				   | (0xffU & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand1));
			}
		    } else {
			vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__result 
			    = ((0x800U & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[2U])
			        ? ((0xffffff00U & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__result) 
				   | (0xffU & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand1 
					       >> 8U)))
			        : ((0x40U & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ir))
				    ? ((0xffffff00U 
					& vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__result) 
				       | (0xffU & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand1 
						   >> 0x10U)))
				    : ((0xffffff00U 
					& vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__result) 
				       | (0xffU & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand1))));
		    }
		}
	    } else {
		if ((0x2000U & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[2U])) {
		    if ((0x1000U & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[2U])) {
			if ((0x800U & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[2U])) {
			    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__result 
				= ((0x40U & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ir))
				    ? ((0xffffff00U 
					& vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__result) 
				       | (0xffU & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand1 
						   >> 0x18U)))
				    : ((0xffffff00U 
					& vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__result) 
				       | (0xffU & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand1 
						   >> 8U))));
			} else {
			    if ((0x40U & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ir))) {
				vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__result 
				    = ((0xffffff00U 
					& vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__result) 
				       | (0xffU & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand1));
			    }
			}
		    } else {
			if ((0x800U & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[2U])) {
			    if ((0x40U & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ir))) {
				vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__result 
				    = ((0xffff00ffU 
					& vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__result) 
				       | (0xff00U & 
					  (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand1 
					   << 8U)));
			    }
			} else {
			    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__result 
				= ((0x40U & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ir))
				    ? ((0xff00ffffU 
					& vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__result) 
				       | (0xff0000U 
					  & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand1 
					     << 0x10U)))
				    : ((0xffffff00U 
					& vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__result) 
				       | (0xffU & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand1)));
			}
		    }
		} else {
		    if ((0x1000U & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[2U])) {
			if ((0x800U & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[2U])) {
			    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__result 
				= ((0x40U & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ir))
				    ? ((0xffffffU & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__result) 
				       | (0xff000000U 
					  & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand1 
					     << 0x18U)))
				    : ((0xffff00ffU 
					& vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__result) 
				       | (0xff00U & 
					  (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand1 
					   << 8U))));
			} else {
			    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__sr 
				= ((IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__was_interrupt)
				    ? (0x2000U | ((0x4000U 
						   & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__sr)) 
						  | ((0x1800U 
						      & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__sr)) 
						     | (((IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__interrupt_mask_copy) 
							 << 8U) 
							| (0xffU 
							   & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__sr))))))
				    : (0x2000U | (0x5fffU 
						  & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__sr))));
			    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__alu_m__DOT__was_interrupt = 0U;
			}
		    } else {
			if ((0x800U & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[2U])) {
			    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__alu_m__DOT__interrupt_mask_copy 
				= vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__interrupt_mask;
			    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__alu_m__DOT__was_interrupt = 1U;
			}
		    }
		}
	    }
	}
    } else {
	vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__sr = 0x2700U;
	vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__result = 0U;
	vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_signal = 0U;
	vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__alu_m__DOT__interrupt_mask_copy = 0U;
	vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__alu_m__DOT__was_interrupt = 0U;
    }
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__was_interrupt 
	= vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__alu_m__DOT__was_interrupt;
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__interrupt_mask_copy 
	= vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__alu_m__DOT__interrupt_mask_copy;
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__interrupt_mask 
	= vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__interrupt_mask;
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__sr 
	= vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__sr;
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__result_ABCD2_19_14a 
	= (0x3fU & ((0x1fU < (0x3fU & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__result 
				       >> 8U))) ? ((IData)(2U) 
						   + 
						   (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__result 
						    >> 0xeU))
		     : ((0xfU < (0x3fU & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__result 
					  >> 8U))) ? 
			((IData)(1U) + (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__result 
					>> 0xeU)) : 
			(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__result 
			 >> 0xeU))));
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__result_SBCD2_19_14a 
	= (0x3fU & ((0x10U > (0x3fU & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__result 
				       >> 8U))) ? (
						   (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__result 
						    >> 0xeU) 
						   - (IData)(2U))
		     : ((0x20U > (0x3fU & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__result 
					   >> 8U)))
			 ? ((vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__result 
			     >> 0xeU) - (IData)(1U))
			 : (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__result 
			    >> 0xeU))));
    // ALWAYS at registers.v:335
    if (vlSymsp->TOP__tb_m68k_ram_uart.rst_n) {
	if ((((1U == (3U & ((vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[2U] 
			     << 0x1fU) | (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[1U] 
					  >> 1U)))) 
	      & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir_valid)) 
	     & (~ (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__stop_flag)))) {
	    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__decoder_alu_reg 
		= vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__decoder_alu;
	}
    } else {
	vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__decoder_alu_reg = 0U;
    }
    // ALWAYS at registers.v:181
    if (vlSymsp->TOP__tb_m68k_ram_uart.rst_n) {
	if ((0U != (0xfU & ((vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[1U] 
			     << 0xaU) | (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[0U] 
					 >> 0x16U))))) {
	    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__size 
		= ((6U & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__size)) 
		   | ((((1U == (0xfU & ((vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[1U] 
					 << 0xaU) | 
					(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[0U] 
					 >> 0x16U)))) 
			| ((7U == (0xfU & ((vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[1U] 
					    << 0xaU) 
					   | (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[0U] 
					      >> 0x16U)))) 
			   & (0U == (3U & ((IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ir) 
					   >> 6U))))) 
		       | ((8U == (0xfU & ((vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[1U] 
					   << 0xaU) 
					  | (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[0U] 
					     >> 0x16U)))) 
			  & (1U == (3U & ((IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ir) 
					  >> 0xcU))))) 
		      | ((0xaU == (0xfU & ((vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[1U] 
					    << 0xaU) 
					   | (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[0U] 
					      >> 0x16U)))) 
			 & (0U != (7U & ((IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ir) 
					 >> 3U))))));
	    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__size 
		= ((5U & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__size)) 
		   | ((((((((2U == (0xfU & ((vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[1U] 
					     << 0xaU) 
					    | (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[0U] 
					       >> 0x16U)))) 
			    | ((4U == (0xfU & ((vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[1U] 
						<< 0xaU) 
					       | (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[0U] 
						  >> 0x16U)))) 
			       & (0U == (3U & ((IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ir) 
					       >> 6U))))) 
			   | ((5U == (0xfU & ((vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[1U] 
					       << 0xaU) 
					      | (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[0U] 
						 >> 0x16U)))) 
			      & (2U == (3U & ((IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ir) 
					      >> 6U))))) 
			  | ((6U == (0xfU & ((vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[1U] 
					      << 0xaU) 
					     | (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[0U] 
						>> 0x16U)))) 
			     & (~ ((IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ir) 
				   >> 6U)))) | ((7U 
						 == 
						 (0xfU 
						  & ((vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[1U] 
						      << 0xaU) 
						     | (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[0U] 
							>> 0x16U)))) 
						& (1U 
						   == 
						   (3U 
						    & ((IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ir) 
						       >> 6U))))) 
			| ((8U == (0xfU & ((vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[1U] 
					    << 0xaU) 
					   | (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[0U] 
					      >> 0x16U)))) 
			   & (3U == (3U & ((IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ir) 
					   >> 0xcU))))) 
		       | ((9U == (0xfU & ((vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[1U] 
					   << 0xaU) 
					  | (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[0U] 
					     >> 0x16U)))) 
			  & (~ ((IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ir) 
				>> 8U)))) << 1U));
	    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__size 
		= ((3U & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__size)) 
		   | (((((((((3U == (0xfU & ((vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[1U] 
					      << 0xaU) 
					     | (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[0U] 
						>> 0x16U)))) 
			     | ((4U == (0xfU & ((vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[1U] 
						 << 0xaU) 
						| (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[0U] 
						   >> 0x16U)))) 
				& (0U != (3U & ((IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ir) 
						>> 6U))))) 
			    | ((5U == (0xfU & ((vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[1U] 
						<< 0xaU) 
					       | (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[0U] 
						  >> 0x16U)))) 
			       & (2U != (3U & ((IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ir) 
					       >> 6U))))) 
			   << 2U) | (0xffffffcU & (
						   ((6U 
						     == 
						     (0xfU 
						      & ((vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[1U] 
							  << 0xaU) 
							 | (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[0U] 
							    >> 0x16U)))) 
						    << 2U) 
						   & ((IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ir) 
						      >> 4U)))) 
			 | (0x7fffffcU & (((7U == (0xfU 
						   & ((vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[1U] 
						       << 0xaU) 
						      | (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[0U] 
							 >> 0x16U)))) 
					   << 2U) & 
					  ((IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ir) 
					   >> 5U)))) 
			| (((8U == (0xfU & ((vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[1U] 
					     << 0xaU) 
					    | (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[0U] 
					       >> 0x16U)))) 
			    & (~ ((IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ir) 
				  >> 0xcU))) << 2U)) 
		       | (0x3fffffcU & (((9U == (0xfU 
						 & ((vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[1U] 
						     << 0xaU) 
						    | (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[0U] 
						       >> 0x16U)))) 
					 << 2U) & ((IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ir) 
						   >> 6U)))) 
		      | (((0xaU == (0xfU & ((vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[1U] 
					     << 0xaU) 
					    | (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[0U] 
					       >> 0x16U)))) 
			  & (0U == (7U & ((IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ir) 
					  >> 3U)))) 
			 << 2U)));
	}
    } else {
	vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__size = 0U;
    }
    // ALWAYS at alu.v:75
    if (vlSymsp->TOP__tb_m68k_ram_uart.rst_n) {
	if ((((0x14U == (0x1fU & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[2U] 
				  >> 0xbU))) & (8U 
						== 
						(0xfU 
						 & ((IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ir) 
						    >> 0xcU)))) 
	     & (0U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__div_count)))) {
	    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__alu_m__DOT__div_count = 0x12U;
	    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__alu_m__DOT__quotient = 0U;
	    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__dividend 
		= ((1U & ((~ ((IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ir) 
			      >> 8U)) | (~ (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand1 
					    >> 0x1fU))))
		    ? vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand1
		    : VL_NEGATE_I(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand1));
	    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__alu_m__DOT__divider 
		= ((1U & ((~ ((IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ir) 
			      >> 8U)) | (~ (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand2 
					    >> 0xfU))))
		    ? (0xffff0000U & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand2 
				      << 0x10U)) : 
		   (0xffff0000U & (VL_NEGATE_I(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand2) 
				   << 0x10U)));
	} else {
	    if ((1U < (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__div_count))) {
		vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__alu_m__DOT__divider 
		    = (0x7fffffffU & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__divider 
				      >> 1U));
		vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__alu_m__DOT__div_count 
		    = (0x1fU & ((IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__div_count) 
				- (IData)(1U)));
		if ((1U & (IData)((vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__div_diff 
				   >> 0x20U)))) {
		    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__alu_m__DOT__quotient 
			= (0x1fffeU & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__quotient 
				       << 1U));
		} else {
		    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__alu_m__DOT__quotient 
			= (1U | (0x1fffeU & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__quotient 
					     << 1U)));
		    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__dividend 
			= (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__div_diff);
		}
	    } else {
		if ((((0x14U == (0x1fU & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[2U] 
					  >> 0xbU))) 
		      & (8U == (0xfU & ((IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ir) 
					>> 0xcU)))) 
		     & (1U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__div_count)))) {
		    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__alu_m__DOT__div_count 
			= (0x1fU & ((IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__div_count) 
				    - (IData)(1U)));
		}
	    }
	}
    } else {
	vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__alu_m__DOT__div_count = 0U;
    }
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__divider 
	= vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__alu_m__DOT__divider;
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__quotient 
	= vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__alu_m__DOT__quotient;
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__div_count 
	= vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__alu_m__DOT__div_count;
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand2 
	= vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__operand2;
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand1 
	= vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__operand1;
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__div_diff 
	= (VL_ULL(0x1ffffffff) & ((QData)((IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__dividend)) 
				  - (QData)((IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__divider))));
    // ALWAYS at registers.v:329
    if (vlSymsp->TOP__tb_m68k_ram_uart.rst_n) {
	if ((((1U == (3U & ((vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[2U] 
			     << 0x1fU) | (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[1U] 
					  >> 1U)))) 
	      & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir_valid)) 
	     & (~ (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__stop_flag)))) {
	    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ir 
		= (0xffffU & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U]);
	}
    } else {
	vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ir = 0U;
    }
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir_valid 
	= vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__prefetch_ir_valid;
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[0U] 
	= vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__prefetch_ir[0U];
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[1U] 
	= vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__prefetch_ir[1U];
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
	= vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__prefetch_ir[2U];
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__condition 
	= ((0U == (0xfU & ((IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ir) 
			   >> 8U))) | ((1U != (0xfU 
					       & ((IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ir) 
						  >> 8U))) 
				       & ((2U == (0xfU 
						  & ((IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ir) 
						     >> 8U)))
					   ? ((~ (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__sr)) 
					      & (~ 
						 ((IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__sr) 
						  >> 2U)))
					   : ((3U == 
					       (0xfU 
						& ((IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ir) 
						   >> 8U)))
					       ? ((IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__sr) 
						  | ((IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__sr) 
						     >> 2U))
					       : ((4U 
						   == 
						   (0xfU 
						    & ((IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ir) 
						       >> 8U)))
						   ? 
						  (~ (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__sr))
						   : 
						  ((5U 
						    == 
						    (0xfU 
						     & ((IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ir) 
							>> 8U)))
						    ? (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__sr)
						    : 
						   ((6U 
						     == 
						     (0xfU 
						      & ((IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ir) 
							 >> 8U)))
						     ? 
						    (~ 
						     ((IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__sr) 
						      >> 2U))
						     : 
						    ((7U 
						      == 
						      (0xfU 
						       & ((IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ir) 
							  >> 8U)))
						      ? 
						     ((IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__sr) 
						      >> 2U)
						      : 
						     ((8U 
						       == 
						       (0xfU 
							& ((IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ir) 
							   >> 8U)))
						       ? 
						      (~ 
						       ((IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__sr) 
							>> 1U))
						       : 
						      ((9U 
							== 
							(0xfU 
							 & ((IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ir) 
							    >> 8U)))
						        ? 
						       ((IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__sr) 
							>> 1U)
						        : 
						       ((0xaU 
							 == 
							 (0xfU 
							  & ((IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ir) 
							     >> 8U)))
							 ? 
							(~ 
							 ((IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__sr) 
							  >> 3U))
							 : 
							((0xbU 
							  == 
							  (0xfU 
							   & ((IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ir) 
							      >> 8U)))
							  ? 
							 ((IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__sr) 
							  >> 3U)
							  : 
							 ((0xcU 
							   == 
							   (0xfU 
							    & ((IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ir) 
							       >> 8U)))
							   ? 
							  ((((IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__sr) 
							     >> 3U) 
							    & ((IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__sr) 
							       >> 1U)) 
							   | ((~ 
							       ((IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__sr) 
								>> 3U)) 
							      & (~ 
								 ((IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__sr) 
								  >> 1U))))
							   : 
							  ((0xdU 
							    == 
							    (0xfU 
							     & ((IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ir) 
								>> 8U)))
							    ? 
							   ((((IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__sr) 
							      >> 3U) 
							     & (~ 
								((IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__sr) 
								 >> 1U))) 
							    | ((~ 
								((IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__sr) 
								 >> 3U)) 
							       & ((IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__sr) 
								  >> 1U)))
							    : 
							   ((0xeU 
							     == 
							     (0xfU 
							      & ((IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ir) 
								 >> 8U)))
							     ? 
							    (((((IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__sr) 
								>> 3U) 
							       & ((IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__sr) 
								  >> 1U)) 
							      & (~ 
								 ((IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__sr) 
								  >> 2U))) 
							     | (((~ 
								  ((IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__sr) 
								   >> 3U)) 
								 & (~ 
								    ((IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__sr) 
								     >> 1U))) 
								& (~ 
								   ((IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__sr) 
								    >> 2U))))
							     : 
							    ((0xfU 
							      == 
							      (0xfU 
							       & ((IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ir) 
								  >> 8U))) 
							     & ((((IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__sr) 
								  >> 2U) 
								 | (((IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__sr) 
								     >> 3U) 
								    & (~ 
								       ((IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__sr) 
									>> 1U)))) 
								| ((~ 
								    ((IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__sr) 
								     >> 3U)) 
								   & ((IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__sr) 
								      >> 1U)))))))))))))))))));
    // ALWAYS at registers.v:373
    if (vlSymsp->TOP__tb_m68k_ram_uart.rst_n) {
	if ((1U == (3U & ((vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[2U] 
			   << 0x12U) | (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[1U] 
					>> 0xeU))))) {
	    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__stop_flag = 1U;
	} else {
	    if ((2U == (3U & ((vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[2U] 
			       << 0x12U) | (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[1U] 
					    >> 0xeU))))) {
		vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__stop_flag = 0U;
	    }
	}
    } else {
	vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__stop_flag = 0U;
    }
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__decoder_alu 
	= ((0x3fffeU & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__decoder_alu) 
	   | (((0U == (0xfU & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
			       >> 0xcU))) & (0U == 
					     (7U & 
					      (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
					       >> 9U)))) 
	      | (8U == (0xfU & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
				>> 0xcU)))));
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__decoder_alu 
	= ((0x3fffdU & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__decoder_alu) 
	   | ((((0U == (0xfU & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
				>> 0xcU))) & (1U == 
					      (7U & 
					       (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
						>> 9U)))) 
	       | (0xcU == (0xfU & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
				   >> 0xcU)))) << 1U));
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__decoder_alu 
	= ((0x3fffbU & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__decoder_alu) 
	   | ((((0U == (0xfU & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
				>> 0xcU))) & (5U == 
					      (7U & 
					       (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
						>> 9U)))) 
	       | (((0xbU == (0xfU & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
				     >> 0xcU))) & (
						   (2U 
						    == 
						    (3U 
						     & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
							>> 7U))) 
						   | (6U 
						      == 
						      (7U 
						       & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
							  >> 6U))))) 
		  & (1U != (7U & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
				  >> 3U))))) << 2U));
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__decoder_alu 
	= ((0x3fff7U & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__decoder_alu) 
	   | (((((0U == (0xfU & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
				 >> 0xcU))) & (3U == 
					       (7U 
						& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
						   >> 9U)))) 
		| (0xdU == (0xfU & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
				    >> 0xcU)))) | (
						   (5U 
						    == 
						    (0xfU 
						     & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
							>> 0xcU))) 
						   & (~ 
						      (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
						       >> 8U)))) 
	      << 3U));
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__decoder_alu 
	= ((0x3ffefU & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__decoder_alu) 
	   | (((((0U == (0xfU & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
				 >> 0xcU))) & (2U == 
					       (7U 
						& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
						   >> 9U)))) 
		| (9U == (0xfU & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
				  >> 0xcU)))) << 4U) 
	      | (0xffffff0U & (((5U == (0xfU & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
						>> 0xcU))) 
				<< 4U) & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
					  >> 4U)))));
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__decoder_alu 
	= ((0x3ffdfU & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__decoder_alu) 
	   | (((((0U == (0xfU & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
				 >> 0xcU))) & (6U == 
					       (7U 
						& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
						   >> 9U)))) 
		| (((0xbU == (0xfU & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
				      >> 0xcU))) & 
		    ((2U == (3U & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
				   >> 7U))) | (6U == 
					       (7U 
						& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
						   >> 6U))))) 
		   & (1U == (7U & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
				   >> 3U))))) | ((0xbU 
						  == 
						  (0xfU 
						   & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
						      >> 0xcU))) 
						 & ((0U 
						     == 
						     (3U 
						      & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
							 >> 7U))) 
						    | (2U 
						       == 
						       (7U 
							& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
							   >> 6U)))))) 
	      << 5U));
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__decoder_alu 
	= ((0x3ffbfU & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__decoder_alu) 
	   | (((0xdU == (0xfU & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
				 >> 0xcU))) | ((5U 
						== 
						(0xfU 
						 & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
						    >> 0xcU))) 
					       & (~ 
						  (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
						   >> 8U)))) 
	      << 6U));
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__decoder_alu 
	= ((0x3ff7fU & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__decoder_alu) 
	   | ((((9U == (0xfU & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
				>> 0xcU))) | (0xbU 
					      == (0xfU 
						  & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
						     >> 0xcU)))) 
	       << 7U) | (0x7fffff80U & (((5U == (0xfU 
						 & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
						    >> 0xcU))) 
					 << 7U) & (
						   vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
						   >> 1U)))));
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__decoder_alu 
	= ((0x3feffU & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__decoder_alu) 
	   | (0xffffff00U & (((((3U == (3U & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
					      >> 6U))) 
				& (0U == (3U & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
						>> 9U)))) 
			       | ((3U != (3U & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
						>> 6U))) 
				  & (0U == (3U & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
						  >> 3U))))) 
			      << 8U) & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U])));
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__decoder_alu 
	= ((0x3fdffU & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__decoder_alu) 
	   | (0xfffffe00U & (((((3U == (3U & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
					      >> 6U))) 
				& (1U == (3U & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
						>> 9U)))) 
			       | ((3U != (3U & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
						>> 6U))) 
				  & (1U == (3U & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
						  >> 3U))))) 
			      << 9U) & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
					<< 1U))));
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__decoder_alu 
	= ((0x3fbffU & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__decoder_alu) 
	   | (0xfffffc00U & (((((3U == (3U & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
					      >> 6U))) 
				& (3U == (3U & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
						>> 9U)))) 
			       | ((3U != (3U & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
						>> 6U))) 
				  & (3U == (3U & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
						  >> 3U))))) 
			      << 0xaU) & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
					  << 2U))));
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__decoder_alu 
	= ((0x3f7ffU & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__decoder_alu) 
	   | (0xfffff800U & (((((3U == (3U & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
					      >> 6U))) 
				& (2U == (3U & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
						>> 9U)))) 
			       | ((3U != (3U & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
						>> 6U))) 
				  & (2U == (3U & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
						  >> 3U))))) 
			      << 0xbU) & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
					  << 3U))));
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__decoder_alu 
	= ((0x3efffU & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__decoder_alu) 
	   | (((((3U == (3U & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
			       >> 6U))) & (0U == (3U 
						  & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
						     >> 9U)))) 
		| ((3U != (3U & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
				 >> 6U))) & (0U == 
					     (3U & 
					      (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
					       >> 3U))))) 
	       & (~ (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
		     >> 8U))) << 0xcU));
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__decoder_alu 
	= ((0x3dfffU & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__decoder_alu) 
	   | (((((3U == (3U & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
			       >> 6U))) & (1U == (3U 
						  & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
						     >> 9U)))) 
		| ((3U != (3U & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
				 >> 6U))) & (1U == 
					     (3U & 
					      (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
					       >> 3U))))) 
	       & (~ (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
		     >> 8U))) << 0xdU));
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__decoder_alu 
	= ((0x3bfffU & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__decoder_alu) 
	   | (((((3U == (3U & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
			       >> 6U))) & (3U == (3U 
						  & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
						     >> 9U)))) 
		| ((3U != (3U & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
				 >> 6U))) & (3U == 
					     (3U & 
					      (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
					       >> 3U))))) 
	       & (~ (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
		     >> 8U))) << 0xeU));
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__decoder_alu 
	= ((0x37fffU & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__decoder_alu) 
	   | (((((3U == (3U & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
			       >> 6U))) & (2U == (3U 
						  & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
						     >> 9U)))) 
		| ((3U != (3U & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
				 >> 6U))) & (2U == 
					     (3U & 
					      (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
					       >> 3U))))) 
	       & (~ (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
		     >> 8U))) << 0xfU));
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__decoder_alu 
	= ((0x2ffffU & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__decoder_alu) 
	   | (((((((0x46U == (0xffU & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
				       >> 8U))) | (0x4e73U 
						   == 
						   (0xffffU 
						    & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U]))) 
		  | (0x4e72U == (0xffffU & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U]))) 
		 | (0x7cU == (0xffffU & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U]))) 
		| (0x27cU == (0xffffU & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U]))) 
	       | (0xa7cU == (0xffffU & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U]))) 
	      << 0x10U));
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__decoder_alu 
	= ((0x1ffffU & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__decoder_alu) 
	   | ((((((0x44U == (0xffU & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
				      >> 8U))) | (0x4e77U 
						  == 
						  (0xffffU 
						   & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U]))) 
		 | (0x3cU == (0xffffU & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U]))) 
		| (0x23cU == (0xffffU & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U]))) 
	       | (0xa3cU == (0xffffU & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U]))) 
	      << 0x11U));
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__decoder_trap 
	= (0xffU & (((IData)(vlSymsp->TOP__tb_m68k_ram_uart.rst_n)
		      ? (((((((((((0x27cU == (0xffffU 
					      & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U])) 
				  | (0xa7cU == (0xffffU 
						& vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U]))) 
				 | (0x7cU == (0xffffU 
					      & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U]))) 
				| (0x4e70U == (0xffffU 
					       & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U]))) 
			       | (0x4e72U == (0xffffU 
					      & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U]))) 
			      | (0x4e73U == (0xffffU 
					     & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U]))) 
			     | (((((0x11bU == (0x3ffU 
					       & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
						  >> 6U))) 
				   & (1U != (7U & (
						   vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
						   >> 3U)))) 
				  & (0x3dU != (0x3fU 
					       & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U]))) 
				 & (0x3eU != (0x3fU 
					      & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U]))) 
				& (0x3fU != (0x3fU 
					     & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U])))) 
			    | (0x9ccU == (0x1fffU & 
					  (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
					   >> 3U)))) 
			   | (0x9cdU == (0x1fffU & 
					 (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
					  >> 3U)))) 
			  & (~ ((IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__sr) 
				>> 0xdU))) ? 0x1000U
			  : ((0x4afcU == (0xffffU & 
					  vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U]))
			      ? 0x800U : ((0xaU == 
					   (0xfU & 
					    (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
					     >> 0xcU)))
					   ? 0x1400U
					   : ((0xfU 
					       == (0xfU 
						   & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
						      >> 0xcU)))
					       ? 0x1600U
					       : ((
						   (((((((((((((0U 
								== 
								(0xfU 
								 & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
								    >> 0xcU))) 
							       & (4U 
								  != 
								  (7U 
								   & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
								      >> 9U)))) 
							      & (6U 
								 != 
								 (7U 
								  & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
								     >> 9U)))) 
							     & (7U 
								!= 
								(7U 
								 & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
								    >> 9U)))) 
							    & (~ 
							       (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
								>> 8U))) 
							   & (((0U 
								== 
								(3U 
								 & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
								    >> 6U))) 
							       | (1U 
								  == 
								  (3U 
								   & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
								      >> 6U)))) 
							      | (2U 
								 == 
								 (3U 
								  & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
								     >> 6U))))) 
							  & (1U 
							     != 
							     (7U 
							      & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
								 >> 3U)))) 
							 & ((7U 
							     != 
							     (7U 
							      & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
								 >> 3U))) 
							    | ((0x38U 
								== 
								(0x3fU 
								 & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U])) 
							       | (0x39U 
								  == 
								  (0x3fU 
								   & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U]))))) 
							& (0x3cU 
							   != 
							   (0xffffU 
							    & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U]))) 
						       & (0x7cU 
							  != 
							  (0xffffU 
							   & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U]))) 
						      & (0x23cU 
							 != 
							 (0xffffU 
							  & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U]))) 
						     & (0x27cU 
							!= 
							(0xffffU 
							 & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U]))) 
						    & (0xa3cU 
						       != 
						       (0xffffU 
							& vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U]))) 
						   & (0xa7cU 
						      != 
						      (0xffffU 
						       & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U])))
						   ? 0xaeU
						   : 
						  (((((((0x3cU 
							 == 
							 (0xffffU 
							  & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U])) 
							| (0x7cU 
							   == 
							   (0xffffU 
							    & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U]))) 
						       | (0x23cU 
							  == 
							  (0xffffU 
							   & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U]))) 
						      | (0x27cU 
							 == 
							 (0xffffU 
							  & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U]))) 
						     | (0xa3cU 
							== 
							(0xffffU 
							 & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U]))) 
						    | (0xa7cU 
						       == 
						       (0xffffU 
							& vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U])))
						    ? 0xb2U
						    : 
						   (((((0U 
							== 
							(0xfU 
							 & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
							    >> 0xcU))) 
						       & (4U 
							  == 
							  (7U 
							   & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
							      >> 6U)))) 
						      & (1U 
							 != 
							 (7U 
							  & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
							     >> 3U)))) 
						     & ((7U 
							 != 
							 (7U 
							  & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
							     >> 3U))) 
							| (((((0x38U 
							       == 
							       (0x3fU 
								& vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U])) 
							      | (0x39U 
								 == 
								 (0x3fU 
								  & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U]))) 
							     | (0x3aU 
								== 
								(0x3fU 
								 & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U]))) 
							    | (0x3bU 
							       == 
							       (0x3fU 
								& vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U]))) 
							   | (0x3cU 
							      == 
							      (0x3fU 
							       & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U])))))
						     ? 0x147U
						     : 
						    (((((0U 
							 == 
							 (0xfU 
							  & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
							     >> 0xcU))) 
							& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
							   >> 8U)) 
						       & (1U 
							  == 
							  (7U 
							   & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
							      >> 3U)))) 
						      & ((0U 
							  == 
							  (3U 
							   & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
							      >> 6U))) 
							 | (1U 
							    == 
							    (3U 
							     & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
								>> 6U)))))
						      ? 0x62U
						      : 
						     (((((0U 
							  == 
							  (0xfU 
							   & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
							      >> 0xcU))) 
							 & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
							    >> 8U)) 
							& (1U 
							   == 
							   (7U 
							    & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
							       >> 3U)))) 
						       & ((2U 
							   == 
							   (3U 
							    & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
							       >> 6U))) 
							  | (3U 
							     == 
							     (3U 
							      & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
								 >> 6U)))))
						       ? 0x6aU
						       : 
						      ((((((0U 
							    == 
							    (0xfU 
							     & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
								>> 0xcU))) 
							   & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
							      >> 8U)) 
							  & (1U 
							     != 
							     (7U 
							      & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
								 >> 3U)))) 
							 & (4U 
							    != 
							    (7U 
							     & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
								>> 6U)))) 
							& ((7U 
							    != 
							    (7U 
							     & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
								>> 3U))) 
							   | ((0x38U 
							       == 
							       (0x3fU 
								& vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U])) 
							      | (0x39U 
								 == 
								 (0x3fU 
								  & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U])))))
						        ? 0x142U
						        : 
						       ((((((0U 
							     == 
							     (0xfU 
							      & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
								 >> 0xcU))) 
							    & (8U 
							       == 
							       (0xfU 
								& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
								   >> 8U)))) 
							   & (0U 
							      == 
							      (3U 
							       & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
								  >> 6U)))) 
							  & (1U 
							     != 
							     (7U 
							      & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
								 >> 3U)))) 
							 & ((7U 
							     != 
							     (7U 
							      & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
								 >> 3U))) 
							    | ((((0x38U 
								  == 
								  (0x3fU 
								   & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U])) 
								 | (0x39U 
								    == 
								    (0x3fU 
								     & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U]))) 
								| (0x3aU 
								   == 
								   (0x3fU 
								    & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U]))) 
							       | (0x3bU 
								  == 
								  (0x3fU 
								   & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U])))))
							 ? 0x13cU
							 : 
							((((((0U 
							      == 
							      (0xfU 
							       & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
								  >> 0xcU))) 
							     & (8U 
								== 
								(0xfU 
								 & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
								    >> 8U)))) 
							    & (0U 
							       != 
							       (3U 
								& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
								   >> 6U)))) 
							   & (1U 
							      != 
							      (7U 
							       & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
								  >> 3U)))) 
							  & ((7U 
							      != 
							      (7U 
							       & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
								  >> 3U))) 
							     | ((0x38U 
								 == 
								 (0x3fU 
								  & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U])) 
								| (0x39U 
								   == 
								   (0x3fU 
								    & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U])))))
							  ? 0x137U
							  : 
							 (((((((0U 
								== 
								(0xfU 
								 & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
								    >> 0xcU))) 
							       & (~ 
								  (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
								   >> 8U))) 
							      & (6U 
								 == 
								 (7U 
								  & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
								     >> 9U)))) 
							     & (3U 
								!= 
								(3U 
								 & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
								    >> 6U)))) 
							    & (1U 
							       != 
							       (7U 
								& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
								   >> 3U)))) 
							   & ((7U 
							       != 
							       (7U 
								& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
								   >> 3U))) 
							      | ((0x38U 
								  == 
								  (0x3fU 
								   & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U])) 
								 | (0x39U 
								    == 
								    (0x3fU 
								     & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U])))))
							   ? 0xb8U
							   : 
							  (((((((0U 
								 == 
								 (3U 
								  & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
								     >> 0xeU))) 
								& (0U 
								   != 
								   (3U 
								    & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
								       >> 0xcU)))) 
							       & (1U 
								  != 
								  (7U 
								   & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
								      >> 6U)))) 
							      & ((7U 
								  != 
								  (7U 
								   & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
								      >> 6U))) 
								 | ((7U 
								     == 
								     (0x3fU 
								      & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
									 >> 6U))) 
								    | (0xfU 
								       == 
								       (0x3fU 
									& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
									   >> 6U)))))) 
							     & ((1U 
								 != 
								 (3U 
								  & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
								     >> 0xcU))) 
								| (1U 
								   != 
								   (7U 
								    & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
								       >> 3U))))) 
							    & ((7U 
								!= 
								(7U 
								 & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
								    >> 3U))) 
							       | (((((0x38U 
								      == 
								      (0x3fU 
								       & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U])) 
								     | (0x39U 
									== 
									(0x3fU 
									 & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U]))) 
								    | (0x3aU 
								       == 
								       (0x3fU 
									& vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U]))) 
								   | (0x3bU 
								      == 
								      (0x3fU 
								       & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U]))) 
								  | (0x3cU 
								     == 
								     (0x3fU 
								      & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U])))))
							    ? 0xe8U
							    : 
							   (((((0U 
								== 
								(3U 
								 & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
								    >> 0xeU))) 
							       & ((3U 
								   == 
								   (3U 
								    & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
								       >> 0xcU))) 
								  | (2U 
								     == 
								     (3U 
								      & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
									 >> 0xcU))))) 
							      & (1U 
								 == 
								 (7U 
								  & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
								     >> 6U)))) 
							     & ((7U 
								 != 
								 (7U 
								  & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
								     >> 3U))) 
								| (((((0x38U 
								       == 
								       (0x3fU 
									& vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U])) 
								      | (0x39U 
									 == 
									 (0x3fU 
									  & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U]))) 
								     | (0x3aU 
									== 
									(0x3fU 
									 & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U]))) 
								    | (0x3bU 
								       == 
								       (0x3fU 
									& vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U]))) 
								   | (0x3cU 
								      == 
								      (0x3fU 
								       & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U])))))
							     ? 0xf0U
							     : 
							    (((((4U 
								 == 
								 (0xfU 
								  & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
								     >> 0xcU))) 
								& (1U 
								   != 
								   (7U 
								    & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
								       >> 3U)))) 
							       & (((7U 
								    != 
								    (7U 
								     & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
									>> 3U))) 
								   | (0x38U 
								      == 
								      (0x3fU 
								       & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U]))) 
								  | (0x39U 
								     == 
								     (0x3fU 
								      & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U])))) 
							      & ((((((0U 
								      == 
								      (0xfU 
								       & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
									  >> 8U))) 
								     & (3U 
									!= 
									(3U 
									 & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
									    >> 6U)))) 
								    | ((2U 
									== 
									(0xfU 
									 & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
									    >> 8U))) 
								       & (3U 
									  != 
									  (3U 
									   & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
									      >> 6U))))) 
								   | ((4U 
								       == 
								       (0xfU 
									& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
									   >> 8U))) 
								      & (3U 
									 != 
									 (3U 
									  & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
									     >> 6U))))) 
								  | ((6U 
								      == 
								      (0xfU 
								       & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
									  >> 8U))) 
								     & (3U 
									!= 
									(3U 
									 & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
									    >> 6U))))) 
								 | (0x20U 
								    == 
								    (0x3fU 
								     & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
									>> 6U)))))
							      ? 0x152U
							      : 
							     ((((0x103U 
								 == 
								 (0x3ffU 
								  & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
								     >> 6U))) 
								& (1U 
								   != 
								   (7U 
								    & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
								       >> 3U)))) 
							       & (((7U 
								    != 
								    (7U 
								     & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
									>> 3U))) 
								   | (0x38U 
								      == 
								      (0x3fU 
								       & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U]))) 
								  | (0x39U 
								     == 
								     (0x3fU 
								      & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U]))))
							       ? 0x185U
							       : 
							      (((((4U 
								   == 
								   (0xfU 
								    & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
								       >> 0xcU))) 
								  & (6U 
								     == 
								     (7U 
								      & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
									 >> 6U)))) 
								 & (1U 
								    != 
								    (7U 
								     & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
									>> 3U)))) 
								& ((7U 
								    != 
								    (7U 
								     & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
									>> 3U))) 
								   | (((((0x38U 
									  == 
									  (0x3fU 
									   & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U])) 
									 | (0x39U 
									    == 
									    (0x3fU 
									     & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U]))) 
									| (0x3aU 
									   == 
									   (0x3fU 
									    & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U]))) 
								       | (0x3bU 
									  == 
									  (0x3fU 
									   & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U]))) 
								      | (0x3cU 
									 == 
									 (0x3fU 
									  & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U])))))
							        ? 0x11aU
							        : 
							       (((((4U 
								    == 
								    (0xfU 
								     & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
									>> 0xcU))) 
								   & (7U 
								      == 
								      (7U 
								       & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
									  >> 6U)))) 
								  & ((((2U 
									== 
									(7U 
									 & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
									    >> 3U))) 
								       | (5U 
									  == 
									  (7U 
									   & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
									      >> 3U)))) 
								      | (6U 
									 == 
									 (7U 
									  & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
									     >> 3U)))) 
								     | (7U 
									== 
									(7U 
									 & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
									    >> 3U))))) 
								 & ((7U 
								     != 
								     (7U 
								      & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
									 >> 3U))) 
								    | ((((0x38U 
									  == 
									  (0x3fU 
									   & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U])) 
									 | (0x39U 
									    == 
									    (0x3fU 
									     & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U]))) 
									| (0x3aU 
									   == 
									   (0x3fU 
									    & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U]))) 
								       | (0x3bU 
									  == 
									  (0x3fU 
									   & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U])))))
								 ? 0xa2U
								 : 
								(((((0x113U 
								     == 
								     (0x3ffU 
								      & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
									 >> 6U))) 
								    | (0x11bU 
								       == 
								       (0x3ffU 
									& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
									   >> 6U)))) 
								   & (1U 
								      != 
								      (7U 
								       & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
									  >> 3U)))) 
								  & ((7U 
								      != 
								      (7U 
								       & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
									  >> 3U))) 
								     | (((((0x38U 
									    == 
									    (0x3fU 
									     & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U])) 
									   | (0x39U 
									      == 
									      (0x3fU 
									       & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U]))) 
									  | (0x3aU 
									     == 
									     (0x3fU 
									      & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U]))) 
									 | (0x3bU 
									    == 
									    (0x3fU 
									     & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U]))) 
									| (0x3cU 
									   == 
									   (0x3fU 
									    & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U])))))
								  ? 0x188U
								  : 
								 (((4U 
								    == 
								    (0xfU 
								     & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
									>> 0xcU))) 
								   & ((0x108U 
								       == 
								       (0x1ffU 
									& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
									   >> 3U))) 
								      | ((0x11U 
									  == 
									  (0x1fU 
									   & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
									      >> 7U))) 
									 & (0U 
									    == 
									    (7U 
									     & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 3U))))))
								   ? 0x155U
								   : 
								  (((((0x121U 
								       == 
								       (0x3ffU 
									& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
									   >> 6U))) 
								      & (0U 
									 != 
									 (7U 
									  & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
									     >> 3U)))) 
								     & ((((2U 
									   == 
									   (7U 
									    & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
									       >> 3U))) 
									  | (5U 
									     == 
									     (7U 
									      & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 3U)))) 
									 | (6U 
									    == 
									    (7U 
									     & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 3U)))) 
									| (7U 
									   == 
									   (7U 
									    & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
									       >> 3U))))) 
								    & ((7U 
									!= 
									(7U 
									 & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
									    >> 3U))) 
								       | ((((0x38U 
									     == 
									     (0x3fU 
									      & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U])) 
									    | (0x39U 
									       == 
									       (0x3fU 
										& vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U]))) 
									   | (0x3aU 
									      == 
									      (0x3fU 
									       & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U]))) 
									  | (0x3bU 
									     == 
									     (0x3fU 
									      & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U])))))
								    ? 0xa8U
								    : 
								   (((0x91U 
								      == 
								      (0x1ffU 
								       & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
									  >> 7U))) 
								     & (4U 
									== 
									(7U 
									 & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
									    >> 3U))))
								     ? 0x83U
								     : 
								    ((((0x91U 
									== 
									(0x1ffU 
									 & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
									    >> 7U))) 
								       & ((((2U 
									     == 
									     (7U 
									      & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 3U))) 
									    | (5U 
									       == 
									       (7U 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 3U)))) 
									   | (6U 
									      == 
									      (7U 
									       & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 3U)))) 
									  | (7U 
									     == 
									     (7U 
									      & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 3U))))) 
								      & (((7U 
									   != 
									   (7U 
									    & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
									       >> 3U))) 
									  | (0x38U 
									     == 
									     (0x3fU 
									      & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U]))) 
									 | (0x39U 
									    == 
									    (0x3fU 
									     & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U]))))
								      ? 0x93U
								      : 
								     (((((0x4aU 
									  == 
									  (0xffU 
									   & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
									      >> 8U))) 
									 & (3U 
									    != 
									    (3U 
									     & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 6U)))) 
									& (1U 
									   != 
									   (7U 
									    & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
									       >> 3U)))) 
								       & ((7U 
									   != 
									   (7U 
									    & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
									       >> 3U))) 
									  | ((0x38U 
									      == 
									      (0x3fU 
									       & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U])) 
									     | (0x39U 
										== 
										(0x3fU 
										& vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U])))))
								       ? 0x159U
								       : 
								      ((((0x12bU 
									  == 
									  (0x3ffU 
									   & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
									      >> 6U))) 
									 & (1U 
									    != 
									    (7U 
									     & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 3U)))) 
									& ((7U 
									    != 
									    (7U 
									     & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 3U))) 
									   | ((0x38U 
									       == 
									       (0x3fU 
										& vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U])) 
									      | (0x39U 
										== 
										(0x3fU 
										& vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U])))))
								        ? 0x14dU
								        : 
								       ((((0x99U 
									   == 
									   (0x1ffU 
									    & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
									       >> 7U))) 
									  & (((((2U 
										== 
										(7U 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 3U))) 
										| (3U 
										== 
										(7U 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 3U)))) 
									       | (5U 
										== 
										(7U 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 3U)))) 
									      | (6U 
										== 
										(7U 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 3U)))) 
									     | (7U 
										== 
										(7U 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 3U))))) 
									 & ((7U 
									     != 
									     (7U 
									      & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 3U))) 
									    | ((((0x38U 
										== 
										(0x3fU 
										& vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U])) 
										| (0x39U 
										== 
										(0x3fU 
										& vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U]))) 
										| (0x3aU 
										== 
										(0x3fU 
										& vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U]))) 
									       | (0x3bU 
										== 
										(0x3fU 
										& vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U])))))
									 ? 0x74U
									 : 
									((0x4e4U 
									  == 
									  (0xfffU 
									   & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
									      >> 4U)))
									  ? 0x1e1U
									  : 
									 ((0x9caU 
									   == 
									   (0x1fffU 
									    & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
									       >> 3U)))
									   ? 0x194U
									   : 
									  ((0x9cbU 
									    == 
									    (0x1fffU 
									     & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 3U)))
									    ? 0x1a4U
									    : 
									   ((0x9ccU 
									     == 
									     (0x1fffU 
									      & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 3U)))
									     ? 0x18cU
									     : 
									    ((0x9cdU 
									      == 
									      (0x1fffU 
									       & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 3U)))
									      ? 0x191U
									      : 
									     ((0x4e70U 
									       == 
									       (0xffffU 
										& vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U]))
									       ? 0x1e6U
									       : 
									      ((0x4e71U 
										== 
										(0xffffU 
										& vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U]))
									        ? 0x1e0U
									        : 
									       ((0x4e72U 
										== 
										(0xffffU 
										& vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U]))
										 ? 0x1e9U
										 : 
										(((0x4e73U 
										== 
										(0xffffU 
										& vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U])) 
										| (0x4e77U 
										== 
										(0xffffU 
										& vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U])))
										 ? 0x1ccU
										 : 
										((0x4e75U 
										== 
										(0xffffU 
										& vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U]))
										 ? 0x1d8U
										 : 
										((0x4e76U 
										== 
										(0xffffU 
										& vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U]))
										 ? 0x1e3U
										 : 
										((((0x13aU 
										== 
										(0x3ffU 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 6U))) 
										& ((((2U 
										== 
										(7U 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 3U))) 
										| (5U 
										== 
										(7U 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 3U)))) 
										| (6U 
										== 
										(7U 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 3U)))) 
										| (7U 
										== 
										(7U 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 3U))))) 
										& ((7U 
										!= 
										(7U 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 3U))) 
										| ((((0x38U 
										== 
										(0x3fU 
										& vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U])) 
										| (0x39U 
										== 
										(0x3fU 
										& vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U]))) 
										| (0x3aU 
										== 
										(0x3fU 
										& vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U]))) 
										| (0x3bU 
										== 
										(0x3fU 
										& vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U])))))
										 ? 0x1c3U
										 : 
										((((0x13bU 
										== 
										(0x3ffU 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 6U))) 
										& ((((2U 
										== 
										(7U 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 3U))) 
										| (5U 
										== 
										(7U 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 3U)))) 
										| (6U 
										== 
										(7U 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 3U)))) 
										| (7U 
										== 
										(7U 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 3U))))) 
										& ((7U 
										!= 
										(7U 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 3U))) 
										| ((((0x38U 
										== 
										(0x3fU 
										& vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U])) 
										| (0x39U 
										== 
										(0x3fU 
										& vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U]))) 
										| (0x3aU 
										== 
										(0x3fU 
										& vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U]))) 
										| (0x3bU 
										== 
										(0x3fU 
										& vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U])))))
										 ? 0x1bbU
										 : 
										(((((5U 
										== 
										(0xfU 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 0xcU))) 
										& (3U 
										!= 
										(3U 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 6U)))) 
										& (1U 
										!= 
										(7U 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 3U)))) 
										& ((7U 
										!= 
										(7U 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 3U))) 
										| ((0x38U 
										== 
										(0x3fU 
										& vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U])) 
										| (0x39U 
										== 
										(0x3fU 
										& vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U])))))
										 ? 0x15dU
										 : 
										(((((5U 
										== 
										(0xfU 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 0xcU))) 
										& (3U 
										!= 
										(3U 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 6U)))) 
										& (0U 
										!= 
										(3U 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 6U)))) 
										& (1U 
										== 
										(7U 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 3U))))
										 ? 0x160U
										 : 
										(((((5U 
										== 
										(0xfU 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 0xcU))) 
										& (3U 
										== 
										(3U 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 6U)))) 
										& (1U 
										!= 
										(7U 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 3U)))) 
										& ((7U 
										!= 
										(7U 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 3U))) 
										| ((0x38U 
										== 
										(0x3fU 
										& vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U])) 
										| (0x39U 
										== 
										(0x3fU 
										& vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U])))))
										 ? 0x164U
										 : 
										((((5U 
										== 
										(0xfU 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 0xcU))) 
										& (3U 
										== 
										(3U 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 6U)))) 
										& (1U 
										== 
										(7U 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 3U))))
										 ? 0x177U
										 : 
										(((6U 
										== 
										(0xfU 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 0xcU))) 
										& (1U 
										== 
										(0xfU 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 8U))))
										 ? 0x1afU
										 : 
										(((6U 
										== 
										(0xfU 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 0xcU))) 
										& (1U 
										!= 
										(0xfU 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 8U))))
										 ? 0x16bU
										 : 
										(((7U 
										== 
										(0xfU 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 0xcU))) 
										& (~ 
										(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 8U)))
										 ? 0x134U
										 : 
										(((((0xbU 
										== 
										(0xfU 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 0xcU))) 
										& (((0U 
										== 
										(7U 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 6U))) 
										| (1U 
										== 
										(7U 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 6U)))) 
										| (2U 
										== 
										(7U 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 6U))))) 
										& ((0U 
										!= 
										(7U 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 6U))) 
										| (1U 
										!= 
										(7U 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 3U))))) 
										& ((7U 
										!= 
										(7U 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 3U))) 
										| (((((0x38U 
										== 
										(0x3fU 
										& vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U])) 
										| (0x39U 
										== 
										(0x3fU 
										& vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U]))) 
										| (0x3aU 
										== 
										(0x3fU 
										& vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U]))) 
										| (0x3bU 
										== 
										(0x3fU 
										& vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U]))) 
										| (0x3cU 
										== 
										(0x3fU 
										& vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U])))))
										 ? 0x107U
										 : 
										((((0xbU 
										== 
										(0xfU 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 0xcU))) 
										& ((3U 
										== 
										(7U 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 6U))) 
										| (7U 
										== 
										(7U 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 6U))))) 
										& ((7U 
										!= 
										(7U 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 3U))) 
										| (((((0x38U 
										== 
										(0x3fU 
										& vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U])) 
										| (0x39U 
										== 
										(0x3fU 
										& vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U]))) 
										| (0x3aU 
										== 
										(0x3fU 
										& vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U]))) 
										| (0x3bU 
										== 
										(0x3fU 
										& vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U]))) 
										| (0x3cU 
										== 
										(0x3fU 
										& vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U])))))
										 ? 0x114U
										 : 
										((((0xbU 
										== 
										(0xfU 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 0xcU))) 
										& (((4U 
										== 
										(7U 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 6U))) 
										| (5U 
										== 
										(7U 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 6U)))) 
										| (6U 
										== 
										(7U 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 6U))))) 
										& (1U 
										== 
										(7U 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 3U))))
										 ? 0xceU
										 : 
										(((((0xbU 
										== 
										(0xfU 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 0xcU))) 
										& (((4U 
										== 
										(7U 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 6U))) 
										| (5U 
										== 
										(7U 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 6U)))) 
										| (6U 
										== 
										(7U 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 6U))))) 
										& (1U 
										!= 
										(7U 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 3U)))) 
										& ((7U 
										!= 
										(7U 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 3U))) 
										| ((0x38U 
										== 
										(0x3fU 
										& vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U])) 
										| (0x39U 
										== 
										(0x3fU 
										& vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U])))))
										 ? 0xf6U
										 : 
										(((((((0xdU 
										== 
										(0xfU 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 0xcU))) 
										| (9U 
										== 
										(0xfU 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 0xcU)))) 
										| (0xcU 
										== 
										(0xfU 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 0xcU)))) 
										| (8U 
										== 
										(0xfU 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 0xcU)))) 
										& (((((((((0x11U 
										== 
										(0x1fU 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 4U))) 
										| (0x12U 
										== 
										(0x1fU 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 4U)))) 
										| (0x13U 
										== 
										(0x1fU 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 4U)))) 
										| (0x15U 
										== 
										(0x1fU 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 4U)))) 
										| (0x16U 
										== 
										(0x1fU 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 4U)))) 
										| (0x17U 
										== 
										(0x1fU 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 4U)))) 
										| (0x19U 
										== 
										(0x1fU 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 4U)))) 
										| (0x1aU 
										== 
										(0x1fU 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 4U)))) 
										| (0x1bU 
										== 
										(0x1fU 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 4U))))) 
										& ((7U 
										!= 
										(7U 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 3U))) 
										| ((0x38U 
										== 
										(0x3fU 
										& vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U])) 
										| (0x39U 
										== 
										(0x3fU 
										& vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U])))))
										 ? 0xfbU
										 : 
										(((((((((0xdU 
										== 
										(0xfU 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 0xcU))) 
										| (9U 
										== 
										(0xfU 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 0xcU)))) 
										| (0xcU 
										== 
										(0xfU 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 0xcU)))) 
										| (8U 
										== 
										(0xfU 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 0xcU)))) 
										& (((0U 
										== 
										(7U 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 6U))) 
										| (1U 
										== 
										(7U 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 6U)))) 
										| (2U 
										== 
										(7U 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 6U))))) 
										& (((~ 
										(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 0xcU)) 
										| (0U 
										!= 
										(7U 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 6U)))) 
										| (1U 
										!= 
										(7U 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 3U))))) 
										& ((vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 0xcU) 
										| (1U 
										!= 
										(7U 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 3U))))) 
										& ((7U 
										!= 
										(7U 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 3U))) 
										| (((((0x38U 
										== 
										(0x3fU 
										& vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U])) 
										| (0x39U 
										== 
										(0x3fU 
										& vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U]))) 
										| (0x3aU 
										== 
										(0x3fU 
										& vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U]))) 
										| (0x3bU 
										== 
										(0x3fU 
										& vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U]))) 
										| (0x3cU 
										== 
										(0x3fU 
										& vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U])))))
										 ? 0x100U
										 : 
										(((((0xdU 
										== 
										(0xfU 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 0xcU))) 
										| (9U 
										== 
										(0xfU 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 0xcU)))) 
										& ((3U 
										== 
										(7U 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 6U))) 
										| (7U 
										== 
										(7U 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 6U))))) 
										& ((7U 
										!= 
										(7U 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 3U))) 
										| (((((0x38U 
										== 
										(0x3fU 
										& vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U])) 
										| (0x39U 
										== 
										(0x3fU 
										& vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U]))) 
										| (0x3aU 
										== 
										(0x3fU 
										& vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U]))) 
										| (0x3bU 
										== 
										(0x3fU 
										& vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U]))) 
										| (0x3cU 
										== 
										(0x3fU 
										& vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U])))))
										 ? 0x10dU
										 : 
										(((((0xcU 
										== 
										(0xfU 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 0xcU))) 
										| (8U 
										== 
										(0xfU 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 0xcU)))) 
										& (0x10U 
										== 
										(0x1fU 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 4U)))) 
										| (((0xdU 
										== 
										(0xfU 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 0xcU))) 
										| (9U 
										== 
										(0xfU 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 0xcU)))) 
										& (((0x10U 
										== 
										(0x1fU 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 4U))) 
										| (0x14U 
										== 
										(0x1fU 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 4U)))) 
										| (0x18U 
										== 
										(0x1fU 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 4U))))))
										 ? 0xbdU
										 : 
										(((0xcU 
										== 
										(0xfU 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 0xcU))) 
										& (((0x28U 
										== 
										(0x3fU 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 3U))) 
										| (0x29U 
										== 
										(0x3fU 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 3U)))) 
										| (0x31U 
										== 
										(0x3fU 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 3U)))))
										 ? 0xc6U
										 : 
										((((((0xcU 
										== 
										(0xfU 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 0xcU))) 
										| (8U 
										== 
										(0xfU 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 0xcU)))) 
										& (3U 
										== 
										(3U 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 6U)))) 
										& (1U 
										!= 
										(7U 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 3U)))) 
										& ((7U 
										!= 
										(7U 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 3U))) 
										| (((((0x38U 
										== 
										(0x3fU 
										& vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U])) 
										| (0x39U 
										== 
										(0x3fU 
										& vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U]))) 
										| (0x3aU 
										== 
										(0x3fU 
										& vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U]))) 
										| (0x3bU 
										== 
										(0x3fU 
										& vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U]))) 
										| (0x3cU 
										== 
										(0x3fU 
										& vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U])))))
										 ? 0x123U
										 : 
										(((((((0xeU 
										== 
										(0xfU 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 0xcU))) 
										& (~ 
										(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 0xbU))) 
										& (3U 
										== 
										(3U 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 6U)))) 
										& (0U 
										!= 
										(7U 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 3U)))) 
										& (1U 
										!= 
										(7U 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 3U)))) 
										& ((7U 
										!= 
										(7U 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 3U))) 
										| ((0x38U 
										== 
										(0x3fU 
										& vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U])) 
										| (0x39U 
										== 
										(0x3fU 
										& vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U])))))
										 ? 0xe2U
										 : 
										(((0xeU 
										== 
										(0xfU 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 0xcU))) 
										& (((0U 
										== 
										(3U 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 6U))) 
										| (1U 
										== 
										(3U 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 6U)))) 
										| (2U 
										== 
										(3U 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 6U)))))
										 ? 0xd5U
										 : 0x800U)))))))))))))))))))))))))))))))))))))))))))))))))))))))))))
		      : 0U) >> 9U));
}

void Vcpu_ram_uart_sim_ao68000::_initial__TOP__tb_m68k_ram_uart__ao68000_m__3(Vcpu_ram_uart_sim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        Vcpu_ram_uart_sim_ao68000::_initial__TOP__tb_m68k_ram_uart__ao68000_m__3\n"); );
    Vcpu_ram_uart_sim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // INITIAL at microcode_branch.v:53
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__microcode_branch_m__DOT__micro_pc_0 = 0U;
    // INITIAL at bus_control.v:92
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__interrupt_trap = 0U;
    // INITIAL at bus_control.v:79
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__bus_control_m__DOT__prefetch_ir_valid_80_o = 0U;
    // INITIAL at bus_control.v:115
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__bus_control_m__DOT__saved_pc_change = 0U;
    // INITIAL at bus_control.v:77
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir_valid_32 = 0U;
    // INITIAL at bus_control.v:93
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__interrupt_mask = 0U;
    // INITIAL at registers.v:54
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand2 = 0xffffffffU;
    // INITIAL at registers.v:51
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand1 = 0xffffffffU;
    // INITIAL at bus_control.v:78
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir_valid = 0U;
}

void Vcpu_ram_uart_sim_ao68000::_settle__TOP__tb_m68k_ram_uart__ao68000_m__4(Vcpu_ram_uart_sim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        Vcpu_ram_uart_sim_ao68000::_settle__TOP__tb_m68k_ram_uart__ao68000_m__4\n"); );
    Vcpu_ram_uart_sim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__perform_ea_write 
	= (((0U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ea_mod)) 
	    & ((((1U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ea_type)) 
		 | (5U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ea_type))) 
		| (6U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ea_type))) 
	       | (8U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ea_type))))
	    ? 0x5bU : (((1U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ea_mod)) 
			& ((1U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ea_type)) 
			   | (6U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ea_type))))
		        ? 0x5cU : 0x5dU));
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__save_ea 
	= (((3U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ea_mod)) 
	    & (((((1U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ea_type)) 
		  | (2U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ea_type))) 
		 | (7U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ea_type))) 
		| (5U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ea_type))) 
	       | (8U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ea_type))))
	    ? 0x5fU : (((4U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ea_mod)) 
			& (((((1U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ea_type)) 
			      | (3U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ea_type))) 
			     | (5U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ea_type))) 
			    | (7U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ea_type))) 
			   | (8U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ea_type))))
		        ? 0x61U : 0U));
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__load_ea 
	= ((((((1U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ea_type)) 
	       & (((0U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ea_mod)) 
		   | (1U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ea_mod))) 
		  | ((7U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ea_mod)) 
		     & (4U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ea_reg))))) 
	      | ((5U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ea_type)) 
		 & (0U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ea_mod)))) 
	     | ((6U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ea_type)) 
		& ((0U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ea_mod)) 
		   | (1U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ea_mod))))) 
	    | ((8U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ea_type)) 
	       & ((0U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ea_mod)) 
		  | ((7U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ea_mod)) 
		     & (4U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ea_reg))))))
	    ? 0U : (((2U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ea_mod)) 
		     & (((((((1U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ea_type)) 
			     | (2U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ea_type))) 
			    | (3U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ea_type))) 
			   | (4U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ea_type))) 
			  | (5U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ea_type))) 
			 | (7U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ea_type))) 
			| (8U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ea_type))))
		     ? 0x3eU : (((3U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ea_mod)) 
				 & (((((1U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ea_type)) 
				       | (2U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ea_type))) 
				      | (7U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ea_type))) 
				     | (5U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ea_type))) 
				    | (8U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ea_type))))
				 ? 0x3eU : (((4U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ea_mod)) 
					     & (((((1U 
						    == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ea_type)) 
						   | (3U 
						      == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ea_type))) 
						  | (5U 
						     == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ea_type))) 
						 | (7U 
						    == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ea_type))) 
						| (8U 
						   == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ea_type))))
					     ? 0x3fU
					     : (((5U 
						  == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ea_mod)) 
						 & (((((((1U 
							  == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ea_type)) 
							 | (2U 
							    == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ea_type))) 
							| (3U 
							   == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ea_type))) 
						       | (4U 
							  == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ea_type))) 
						      | (5U 
							 == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ea_type))) 
						     | (7U 
							== (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ea_type))) 
						    | (8U 
						       == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ea_type))))
						 ? 0x41U
						 : 
						(((6U 
						   == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ea_mod)) 
						  & (((((((1U 
							   == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ea_type)) 
							  | (2U 
							     == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ea_type))) 
							 | (3U 
							    == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ea_type))) 
							| (4U 
							   == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ea_type))) 
						       | (5U 
							  == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ea_type))) 
						      | (7U 
							 == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ea_type))) 
						     | (8U 
							== (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ea_type))))
						  ? 0x44U
						  : 
						 ((((7U 
						     == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ea_mod)) 
						    & (0U 
						       == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ea_reg))) 
						   & (((((((1U 
							    == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ea_type)) 
							   | (2U 
							      == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ea_type))) 
							  | (3U 
							     == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ea_type))) 
							 | (4U 
							    == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ea_type))) 
							| (5U 
							   == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ea_type))) 
						       | (7U 
							  == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ea_type))) 
						      | (8U 
							 == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ea_type))))
						   ? 0x48U
						   : 
						  ((((7U 
						      == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ea_mod)) 
						     & (1U 
							== (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ea_reg))) 
						    & (((((((1U 
							     == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ea_type)) 
							    | (2U 
							       == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ea_type))) 
							   | (3U 
							      == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ea_type))) 
							  | (4U 
							     == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ea_type))) 
							 | (5U 
							    == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ea_type))) 
							| (7U 
							   == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ea_type))) 
						       | (8U 
							  == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ea_type))))
						    ? 0x4aU
						    : 
						   ((((7U 
						       == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ea_mod)) 
						      & (2U 
							 == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ea_reg))) 
						     & ((((1U 
							   == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ea_type)) 
							  | (2U 
							     == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ea_type))) 
							 | (4U 
							    == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ea_type))) 
							| (8U 
							   == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ea_type))))
						     ? 0x4cU
						     : 
						    ((((7U 
							== (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ea_mod)) 
						       & (3U 
							  == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ea_reg))) 
						      & ((((1U 
							    == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ea_type)) 
							   | (2U 
							      == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ea_type))) 
							  | (4U 
							     == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ea_type))) 
							 | (8U 
							    == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ea_type))))
						      ? 0x4fU
						      : 0x53U))))))))));
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__perform_ea_read 
	= (((0U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ea_mod)) 
	    & ((((1U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ea_type)) 
		 | (5U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ea_type))) 
		| (6U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ea_type))) 
	       | (8U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ea_type))))
	    ? 0x55U : (((1U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ea_mod)) 
			& ((1U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ea_type)) 
			   | (6U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ea_type))))
		        ? 0x56U : ((((7U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ea_mod)) 
				     & (4U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ea_reg))) 
				    & ((1U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ea_type)) 
				       | (8U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ea_type))))
				    ? 0x57U : 0x59U)));
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__result_ABCD2_19_14a 
	= (0x3fU & ((0x1fU < (0x3fU & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__result 
				       >> 8U))) ? ((IData)(2U) 
						   + 
						   (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__result 
						    >> 0xeU))
		     : ((0xfU < (0x3fU & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__result 
					  >> 8U))) ? 
			((IData)(1U) + (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__result 
					>> 0xeU)) : 
			(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__result 
			 >> 0xeU))));
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__result_SBCD2_19_14a 
	= (0x3fU & ((0x10U > (0x3fU & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__result 
				       >> 8U))) ? (
						   (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__result 
						    >> 0xeU) 
						   - (IData)(2U))
		     : ((0x20U > (0x3fU & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__result 
					   >> 8U)))
			 ? ((vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__result 
			     >> 0xeU) - (IData)(1U))
			 : (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__result 
			    >> 0xeU))));
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__div_diff 
	= (VL_ULL(0x1ffffffff) & ((QData)((IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__dividend)) 
				  - (QData)((IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__divider))));
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__condition 
	= ((0U == (0xfU & ((IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ir) 
			   >> 8U))) | ((1U != (0xfU 
					       & ((IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ir) 
						  >> 8U))) 
				       & ((2U == (0xfU 
						  & ((IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ir) 
						     >> 8U)))
					   ? ((~ (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__sr)) 
					      & (~ 
						 ((IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__sr) 
						  >> 2U)))
					   : ((3U == 
					       (0xfU 
						& ((IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ir) 
						   >> 8U)))
					       ? ((IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__sr) 
						  | ((IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__sr) 
						     >> 2U))
					       : ((4U 
						   == 
						   (0xfU 
						    & ((IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ir) 
						       >> 8U)))
						   ? 
						  (~ (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__sr))
						   : 
						  ((5U 
						    == 
						    (0xfU 
						     & ((IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ir) 
							>> 8U)))
						    ? (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__sr)
						    : 
						   ((6U 
						     == 
						     (0xfU 
						      & ((IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ir) 
							 >> 8U)))
						     ? 
						    (~ 
						     ((IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__sr) 
						      >> 2U))
						     : 
						    ((7U 
						      == 
						      (0xfU 
						       & ((IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ir) 
							  >> 8U)))
						      ? 
						     ((IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__sr) 
						      >> 2U)
						      : 
						     ((8U 
						       == 
						       (0xfU 
							& ((IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ir) 
							   >> 8U)))
						       ? 
						      (~ 
						       ((IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__sr) 
							>> 1U))
						       : 
						      ((9U 
							== 
							(0xfU 
							 & ((IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ir) 
							    >> 8U)))
						        ? 
						       ((IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__sr) 
							>> 1U)
						        : 
						       ((0xaU 
							 == 
							 (0xfU 
							  & ((IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ir) 
							     >> 8U)))
							 ? 
							(~ 
							 ((IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__sr) 
							  >> 3U))
							 : 
							((0xbU 
							  == 
							  (0xfU 
							   & ((IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ir) 
							      >> 8U)))
							  ? 
							 ((IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__sr) 
							  >> 3U)
							  : 
							 ((0xcU 
							   == 
							   (0xfU 
							    & ((IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ir) 
							       >> 8U)))
							   ? 
							  ((((IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__sr) 
							     >> 3U) 
							    & ((IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__sr) 
							       >> 1U)) 
							   | ((~ 
							       ((IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__sr) 
								>> 3U)) 
							      & (~ 
								 ((IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__sr) 
								  >> 1U))))
							   : 
							  ((0xdU 
							    == 
							    (0xfU 
							     & ((IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ir) 
								>> 8U)))
							    ? 
							   ((((IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__sr) 
							      >> 3U) 
							     & (~ 
								((IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__sr) 
								 >> 1U))) 
							    | ((~ 
								((IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__sr) 
								 >> 3U)) 
							       & ((IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__sr) 
								  >> 1U)))
							    : 
							   ((0xeU 
							     == 
							     (0xfU 
							      & ((IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ir) 
								 >> 8U)))
							     ? 
							    (((((IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__sr) 
								>> 3U) 
							       & ((IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__sr) 
								  >> 1U)) 
							      & (~ 
								 ((IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__sr) 
								  >> 2U))) 
							     | (((~ 
								  ((IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__sr) 
								   >> 3U)) 
								 & (~ 
								    ((IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__sr) 
								     >> 1U))) 
								& (~ 
								   ((IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__sr) 
								    >> 2U))))
							     : 
							    ((0xfU 
							      == 
							      (0xfU 
							       & ((IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ir) 
								  >> 8U))) 
							     & ((((IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__sr) 
								  >> 2U) 
								 | (((IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__sr) 
								     >> 3U) 
								    & (~ 
								       ((IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__sr) 
									>> 1U)))) 
								| ((~ 
								    ((IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__sr) 
								     >> 3U)) 
								   & ((IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__sr) 
								      >> 1U)))))))))))))))))));
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__decoder_alu 
	= ((0x3fffeU & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__decoder_alu) 
	   | (((0U == (0xfU & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
			       >> 0xcU))) & (0U == 
					     (7U & 
					      (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
					       >> 9U)))) 
	      | (8U == (0xfU & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
				>> 0xcU)))));
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__decoder_alu 
	= ((0x3fffdU & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__decoder_alu) 
	   | ((((0U == (0xfU & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
				>> 0xcU))) & (1U == 
					      (7U & 
					       (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
						>> 9U)))) 
	       | (0xcU == (0xfU & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
				   >> 0xcU)))) << 1U));
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__decoder_alu 
	= ((0x3fffbU & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__decoder_alu) 
	   | ((((0U == (0xfU & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
				>> 0xcU))) & (5U == 
					      (7U & 
					       (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
						>> 9U)))) 
	       | (((0xbU == (0xfU & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
				     >> 0xcU))) & (
						   (2U 
						    == 
						    (3U 
						     & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
							>> 7U))) 
						   | (6U 
						      == 
						      (7U 
						       & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
							  >> 6U))))) 
		  & (1U != (7U & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
				  >> 3U))))) << 2U));
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__decoder_alu 
	= ((0x3fff7U & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__decoder_alu) 
	   | (((((0U == (0xfU & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
				 >> 0xcU))) & (3U == 
					       (7U 
						& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
						   >> 9U)))) 
		| (0xdU == (0xfU & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
				    >> 0xcU)))) | (
						   (5U 
						    == 
						    (0xfU 
						     & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
							>> 0xcU))) 
						   & (~ 
						      (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
						       >> 8U)))) 
	      << 3U));
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__decoder_alu 
	= ((0x3ffefU & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__decoder_alu) 
	   | (((((0U == (0xfU & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
				 >> 0xcU))) & (2U == 
					       (7U 
						& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
						   >> 9U)))) 
		| (9U == (0xfU & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
				  >> 0xcU)))) << 4U) 
	      | (0xffffff0U & (((5U == (0xfU & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
						>> 0xcU))) 
				<< 4U) & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
					  >> 4U)))));
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__decoder_alu 
	= ((0x3ffdfU & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__decoder_alu) 
	   | (((((0U == (0xfU & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
				 >> 0xcU))) & (6U == 
					       (7U 
						& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
						   >> 9U)))) 
		| (((0xbU == (0xfU & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
				      >> 0xcU))) & 
		    ((2U == (3U & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
				   >> 7U))) | (6U == 
					       (7U 
						& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
						   >> 6U))))) 
		   & (1U == (7U & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
				   >> 3U))))) | ((0xbU 
						  == 
						  (0xfU 
						   & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
						      >> 0xcU))) 
						 & ((0U 
						     == 
						     (3U 
						      & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
							 >> 7U))) 
						    | (2U 
						       == 
						       (7U 
							& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
							   >> 6U)))))) 
	      << 5U));
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__decoder_alu 
	= ((0x3ffbfU & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__decoder_alu) 
	   | (((0xdU == (0xfU & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
				 >> 0xcU))) | ((5U 
						== 
						(0xfU 
						 & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
						    >> 0xcU))) 
					       & (~ 
						  (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
						   >> 8U)))) 
	      << 6U));
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__decoder_alu 
	= ((0x3ff7fU & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__decoder_alu) 
	   | ((((9U == (0xfU & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
				>> 0xcU))) | (0xbU 
					      == (0xfU 
						  & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
						     >> 0xcU)))) 
	       << 7U) | (0x7fffff80U & (((5U == (0xfU 
						 & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
						    >> 0xcU))) 
					 << 7U) & (
						   vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
						   >> 1U)))));
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__decoder_alu 
	= ((0x3feffU & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__decoder_alu) 
	   | (0xffffff00U & (((((3U == (3U & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
					      >> 6U))) 
				& (0U == (3U & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
						>> 9U)))) 
			       | ((3U != (3U & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
						>> 6U))) 
				  & (0U == (3U & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
						  >> 3U))))) 
			      << 8U) & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U])));
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__decoder_alu 
	= ((0x3fdffU & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__decoder_alu) 
	   | (0xfffffe00U & (((((3U == (3U & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
					      >> 6U))) 
				& (1U == (3U & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
						>> 9U)))) 
			       | ((3U != (3U & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
						>> 6U))) 
				  & (1U == (3U & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
						  >> 3U))))) 
			      << 9U) & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
					<< 1U))));
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__decoder_alu 
	= ((0x3fbffU & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__decoder_alu) 
	   | (0xfffffc00U & (((((3U == (3U & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
					      >> 6U))) 
				& (3U == (3U & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
						>> 9U)))) 
			       | ((3U != (3U & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
						>> 6U))) 
				  & (3U == (3U & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
						  >> 3U))))) 
			      << 0xaU) & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
					  << 2U))));
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__decoder_alu 
	= ((0x3f7ffU & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__decoder_alu) 
	   | (0xfffff800U & (((((3U == (3U & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
					      >> 6U))) 
				& (2U == (3U & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
						>> 9U)))) 
			       | ((3U != (3U & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
						>> 6U))) 
				  & (2U == (3U & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
						  >> 3U))))) 
			      << 0xbU) & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
					  << 3U))));
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__decoder_alu 
	= ((0x3efffU & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__decoder_alu) 
	   | (((((3U == (3U & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
			       >> 6U))) & (0U == (3U 
						  & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
						     >> 9U)))) 
		| ((3U != (3U & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
				 >> 6U))) & (0U == 
					     (3U & 
					      (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
					       >> 3U))))) 
	       & (~ (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
		     >> 8U))) << 0xcU));
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__decoder_alu 
	= ((0x3dfffU & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__decoder_alu) 
	   | (((((3U == (3U & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
			       >> 6U))) & (1U == (3U 
						  & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
						     >> 9U)))) 
		| ((3U != (3U & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
				 >> 6U))) & (1U == 
					     (3U & 
					      (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
					       >> 3U))))) 
	       & (~ (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
		     >> 8U))) << 0xdU));
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__decoder_alu 
	= ((0x3bfffU & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__decoder_alu) 
	   | (((((3U == (3U & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
			       >> 6U))) & (3U == (3U 
						  & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
						     >> 9U)))) 
		| ((3U != (3U & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
				 >> 6U))) & (3U == 
					     (3U & 
					      (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
					       >> 3U))))) 
	       & (~ (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
		     >> 8U))) << 0xeU));
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__decoder_alu 
	= ((0x37fffU & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__decoder_alu) 
	   | (((((3U == (3U & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
			       >> 6U))) & (2U == (3U 
						  & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
						     >> 9U)))) 
		| ((3U != (3U & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
				 >> 6U))) & (2U == 
					     (3U & 
					      (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
					       >> 3U))))) 
	       & (~ (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
		     >> 8U))) << 0xfU));
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__decoder_alu 
	= ((0x2ffffU & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__decoder_alu) 
	   | (((((((0x46U == (0xffU & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
				       >> 8U))) | (0x4e73U 
						   == 
						   (0xffffU 
						    & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U]))) 
		  | (0x4e72U == (0xffffU & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U]))) 
		 | (0x7cU == (0xffffU & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U]))) 
		| (0x27cU == (0xffffU & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U]))) 
	       | (0xa7cU == (0xffffU & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U]))) 
	      << 0x10U));
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__decoder_alu 
	= ((0x1ffffU & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__decoder_alu) 
	   | ((((((0x44U == (0xffU & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
				      >> 8U))) | (0x4e77U 
						  == 
						  (0xffffU 
						   & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U]))) 
		 | (0x3cU == (0xffffU & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U]))) 
		| (0x23cU == (0xffffU & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U]))) 
	       | (0xa3cU == (0xffffU & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U]))) 
	      << 0x11U));
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__decoder_trap 
	= (0xffU & (((IData)(vlSymsp->TOP__tb_m68k_ram_uart.rst_n)
		      ? (((((((((((0x27cU == (0xffffU 
					      & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U])) 
				  | (0xa7cU == (0xffffU 
						& vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U]))) 
				 | (0x7cU == (0xffffU 
					      & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U]))) 
				| (0x4e70U == (0xffffU 
					       & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U]))) 
			       | (0x4e72U == (0xffffU 
					      & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U]))) 
			      | (0x4e73U == (0xffffU 
					     & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U]))) 
			     | (((((0x11bU == (0x3ffU 
					       & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
						  >> 6U))) 
				   & (1U != (7U & (
						   vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
						   >> 3U)))) 
				  & (0x3dU != (0x3fU 
					       & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U]))) 
				 & (0x3eU != (0x3fU 
					      & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U]))) 
				& (0x3fU != (0x3fU 
					     & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U])))) 
			    | (0x9ccU == (0x1fffU & 
					  (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
					   >> 3U)))) 
			   | (0x9cdU == (0x1fffU & 
					 (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
					  >> 3U)))) 
			  & (~ ((IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__sr) 
				>> 0xdU))) ? 0x1000U
			  : ((0x4afcU == (0xffffU & 
					  vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U]))
			      ? 0x800U : ((0xaU == 
					   (0xfU & 
					    (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
					     >> 0xcU)))
					   ? 0x1400U
					   : ((0xfU 
					       == (0xfU 
						   & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
						      >> 0xcU)))
					       ? 0x1600U
					       : ((
						   (((((((((((((0U 
								== 
								(0xfU 
								 & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
								    >> 0xcU))) 
							       & (4U 
								  != 
								  (7U 
								   & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
								      >> 9U)))) 
							      & (6U 
								 != 
								 (7U 
								  & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
								     >> 9U)))) 
							     & (7U 
								!= 
								(7U 
								 & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
								    >> 9U)))) 
							    & (~ 
							       (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
								>> 8U))) 
							   & (((0U 
								== 
								(3U 
								 & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
								    >> 6U))) 
							       | (1U 
								  == 
								  (3U 
								   & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
								      >> 6U)))) 
							      | (2U 
								 == 
								 (3U 
								  & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
								     >> 6U))))) 
							  & (1U 
							     != 
							     (7U 
							      & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
								 >> 3U)))) 
							 & ((7U 
							     != 
							     (7U 
							      & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
								 >> 3U))) 
							    | ((0x38U 
								== 
								(0x3fU 
								 & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U])) 
							       | (0x39U 
								  == 
								  (0x3fU 
								   & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U]))))) 
							& (0x3cU 
							   != 
							   (0xffffU 
							    & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U]))) 
						       & (0x7cU 
							  != 
							  (0xffffU 
							   & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U]))) 
						      & (0x23cU 
							 != 
							 (0xffffU 
							  & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U]))) 
						     & (0x27cU 
							!= 
							(0xffffU 
							 & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U]))) 
						    & (0xa3cU 
						       != 
						       (0xffffU 
							& vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U]))) 
						   & (0xa7cU 
						      != 
						      (0xffffU 
						       & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U])))
						   ? 0xaeU
						   : 
						  (((((((0x3cU 
							 == 
							 (0xffffU 
							  & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U])) 
							| (0x7cU 
							   == 
							   (0xffffU 
							    & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U]))) 
						       | (0x23cU 
							  == 
							  (0xffffU 
							   & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U]))) 
						      | (0x27cU 
							 == 
							 (0xffffU 
							  & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U]))) 
						     | (0xa3cU 
							== 
							(0xffffU 
							 & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U]))) 
						    | (0xa7cU 
						       == 
						       (0xffffU 
							& vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U])))
						    ? 0xb2U
						    : 
						   (((((0U 
							== 
							(0xfU 
							 & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
							    >> 0xcU))) 
						       & (4U 
							  == 
							  (7U 
							   & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
							      >> 6U)))) 
						      & (1U 
							 != 
							 (7U 
							  & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
							     >> 3U)))) 
						     & ((7U 
							 != 
							 (7U 
							  & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
							     >> 3U))) 
							| (((((0x38U 
							       == 
							       (0x3fU 
								& vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U])) 
							      | (0x39U 
								 == 
								 (0x3fU 
								  & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U]))) 
							     | (0x3aU 
								== 
								(0x3fU 
								 & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U]))) 
							    | (0x3bU 
							       == 
							       (0x3fU 
								& vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U]))) 
							   | (0x3cU 
							      == 
							      (0x3fU 
							       & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U])))))
						     ? 0x147U
						     : 
						    (((((0U 
							 == 
							 (0xfU 
							  & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
							     >> 0xcU))) 
							& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
							   >> 8U)) 
						       & (1U 
							  == 
							  (7U 
							   & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
							      >> 3U)))) 
						      & ((0U 
							  == 
							  (3U 
							   & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
							      >> 6U))) 
							 | (1U 
							    == 
							    (3U 
							     & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
								>> 6U)))))
						      ? 0x62U
						      : 
						     (((((0U 
							  == 
							  (0xfU 
							   & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
							      >> 0xcU))) 
							 & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
							    >> 8U)) 
							& (1U 
							   == 
							   (7U 
							    & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
							       >> 3U)))) 
						       & ((2U 
							   == 
							   (3U 
							    & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
							       >> 6U))) 
							  | (3U 
							     == 
							     (3U 
							      & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
								 >> 6U)))))
						       ? 0x6aU
						       : 
						      ((((((0U 
							    == 
							    (0xfU 
							     & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
								>> 0xcU))) 
							   & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
							      >> 8U)) 
							  & (1U 
							     != 
							     (7U 
							      & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
								 >> 3U)))) 
							 & (4U 
							    != 
							    (7U 
							     & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
								>> 6U)))) 
							& ((7U 
							    != 
							    (7U 
							     & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
								>> 3U))) 
							   | ((0x38U 
							       == 
							       (0x3fU 
								& vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U])) 
							      | (0x39U 
								 == 
								 (0x3fU 
								  & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U])))))
						        ? 0x142U
						        : 
						       ((((((0U 
							     == 
							     (0xfU 
							      & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
								 >> 0xcU))) 
							    & (8U 
							       == 
							       (0xfU 
								& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
								   >> 8U)))) 
							   & (0U 
							      == 
							      (3U 
							       & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
								  >> 6U)))) 
							  & (1U 
							     != 
							     (7U 
							      & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
								 >> 3U)))) 
							 & ((7U 
							     != 
							     (7U 
							      & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
								 >> 3U))) 
							    | ((((0x38U 
								  == 
								  (0x3fU 
								   & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U])) 
								 | (0x39U 
								    == 
								    (0x3fU 
								     & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U]))) 
								| (0x3aU 
								   == 
								   (0x3fU 
								    & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U]))) 
							       | (0x3bU 
								  == 
								  (0x3fU 
								   & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U])))))
							 ? 0x13cU
							 : 
							((((((0U 
							      == 
							      (0xfU 
							       & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
								  >> 0xcU))) 
							     & (8U 
								== 
								(0xfU 
								 & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
								    >> 8U)))) 
							    & (0U 
							       != 
							       (3U 
								& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
								   >> 6U)))) 
							   & (1U 
							      != 
							      (7U 
							       & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
								  >> 3U)))) 
							  & ((7U 
							      != 
							      (7U 
							       & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
								  >> 3U))) 
							     | ((0x38U 
								 == 
								 (0x3fU 
								  & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U])) 
								| (0x39U 
								   == 
								   (0x3fU 
								    & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U])))))
							  ? 0x137U
							  : 
							 (((((((0U 
								== 
								(0xfU 
								 & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
								    >> 0xcU))) 
							       & (~ 
								  (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
								   >> 8U))) 
							      & (6U 
								 == 
								 (7U 
								  & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
								     >> 9U)))) 
							     & (3U 
								!= 
								(3U 
								 & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
								    >> 6U)))) 
							    & (1U 
							       != 
							       (7U 
								& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
								   >> 3U)))) 
							   & ((7U 
							       != 
							       (7U 
								& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
								   >> 3U))) 
							      | ((0x38U 
								  == 
								  (0x3fU 
								   & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U])) 
								 | (0x39U 
								    == 
								    (0x3fU 
								     & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U])))))
							   ? 0xb8U
							   : 
							  (((((((0U 
								 == 
								 (3U 
								  & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
								     >> 0xeU))) 
								& (0U 
								   != 
								   (3U 
								    & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
								       >> 0xcU)))) 
							       & (1U 
								  != 
								  (7U 
								   & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
								      >> 6U)))) 
							      & ((7U 
								  != 
								  (7U 
								   & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
								      >> 6U))) 
								 | ((7U 
								     == 
								     (0x3fU 
								      & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
									 >> 6U))) 
								    | (0xfU 
								       == 
								       (0x3fU 
									& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
									   >> 6U)))))) 
							     & ((1U 
								 != 
								 (3U 
								  & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
								     >> 0xcU))) 
								| (1U 
								   != 
								   (7U 
								    & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
								       >> 3U))))) 
							    & ((7U 
								!= 
								(7U 
								 & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
								    >> 3U))) 
							       | (((((0x38U 
								      == 
								      (0x3fU 
								       & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U])) 
								     | (0x39U 
									== 
									(0x3fU 
									 & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U]))) 
								    | (0x3aU 
								       == 
								       (0x3fU 
									& vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U]))) 
								   | (0x3bU 
								      == 
								      (0x3fU 
								       & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U]))) 
								  | (0x3cU 
								     == 
								     (0x3fU 
								      & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U])))))
							    ? 0xe8U
							    : 
							   (((((0U 
								== 
								(3U 
								 & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
								    >> 0xeU))) 
							       & ((3U 
								   == 
								   (3U 
								    & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
								       >> 0xcU))) 
								  | (2U 
								     == 
								     (3U 
								      & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
									 >> 0xcU))))) 
							      & (1U 
								 == 
								 (7U 
								  & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
								     >> 6U)))) 
							     & ((7U 
								 != 
								 (7U 
								  & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
								     >> 3U))) 
								| (((((0x38U 
								       == 
								       (0x3fU 
									& vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U])) 
								      | (0x39U 
									 == 
									 (0x3fU 
									  & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U]))) 
								     | (0x3aU 
									== 
									(0x3fU 
									 & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U]))) 
								    | (0x3bU 
								       == 
								       (0x3fU 
									& vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U]))) 
								   | (0x3cU 
								      == 
								      (0x3fU 
								       & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U])))))
							     ? 0xf0U
							     : 
							    (((((4U 
								 == 
								 (0xfU 
								  & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
								     >> 0xcU))) 
								& (1U 
								   != 
								   (7U 
								    & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
								       >> 3U)))) 
							       & (((7U 
								    != 
								    (7U 
								     & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
									>> 3U))) 
								   | (0x38U 
								      == 
								      (0x3fU 
								       & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U]))) 
								  | (0x39U 
								     == 
								     (0x3fU 
								      & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U])))) 
							      & ((((((0U 
								      == 
								      (0xfU 
								       & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
									  >> 8U))) 
								     & (3U 
									!= 
									(3U 
									 & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
									    >> 6U)))) 
								    | ((2U 
									== 
									(0xfU 
									 & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
									    >> 8U))) 
								       & (3U 
									  != 
									  (3U 
									   & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
									      >> 6U))))) 
								   | ((4U 
								       == 
								       (0xfU 
									& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
									   >> 8U))) 
								      & (3U 
									 != 
									 (3U 
									  & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
									     >> 6U))))) 
								  | ((6U 
								      == 
								      (0xfU 
								       & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
									  >> 8U))) 
								     & (3U 
									!= 
									(3U 
									 & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
									    >> 6U))))) 
								 | (0x20U 
								    == 
								    (0x3fU 
								     & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
									>> 6U)))))
							      ? 0x152U
							      : 
							     ((((0x103U 
								 == 
								 (0x3ffU 
								  & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
								     >> 6U))) 
								& (1U 
								   != 
								   (7U 
								    & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
								       >> 3U)))) 
							       & (((7U 
								    != 
								    (7U 
								     & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
									>> 3U))) 
								   | (0x38U 
								      == 
								      (0x3fU 
								       & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U]))) 
								  | (0x39U 
								     == 
								     (0x3fU 
								      & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U]))))
							       ? 0x185U
							       : 
							      (((((4U 
								   == 
								   (0xfU 
								    & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
								       >> 0xcU))) 
								  & (6U 
								     == 
								     (7U 
								      & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
									 >> 6U)))) 
								 & (1U 
								    != 
								    (7U 
								     & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
									>> 3U)))) 
								& ((7U 
								    != 
								    (7U 
								     & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
									>> 3U))) 
								   | (((((0x38U 
									  == 
									  (0x3fU 
									   & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U])) 
									 | (0x39U 
									    == 
									    (0x3fU 
									     & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U]))) 
									| (0x3aU 
									   == 
									   (0x3fU 
									    & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U]))) 
								       | (0x3bU 
									  == 
									  (0x3fU 
									   & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U]))) 
								      | (0x3cU 
									 == 
									 (0x3fU 
									  & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U])))))
							        ? 0x11aU
							        : 
							       (((((4U 
								    == 
								    (0xfU 
								     & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
									>> 0xcU))) 
								   & (7U 
								      == 
								      (7U 
								       & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
									  >> 6U)))) 
								  & ((((2U 
									== 
									(7U 
									 & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
									    >> 3U))) 
								       | (5U 
									  == 
									  (7U 
									   & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
									      >> 3U)))) 
								      | (6U 
									 == 
									 (7U 
									  & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
									     >> 3U)))) 
								     | (7U 
									== 
									(7U 
									 & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
									    >> 3U))))) 
								 & ((7U 
								     != 
								     (7U 
								      & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
									 >> 3U))) 
								    | ((((0x38U 
									  == 
									  (0x3fU 
									   & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U])) 
									 | (0x39U 
									    == 
									    (0x3fU 
									     & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U]))) 
									| (0x3aU 
									   == 
									   (0x3fU 
									    & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U]))) 
								       | (0x3bU 
									  == 
									  (0x3fU 
									   & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U])))))
								 ? 0xa2U
								 : 
								(((((0x113U 
								     == 
								     (0x3ffU 
								      & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
									 >> 6U))) 
								    | (0x11bU 
								       == 
								       (0x3ffU 
									& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
									   >> 6U)))) 
								   & (1U 
								      != 
								      (7U 
								       & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
									  >> 3U)))) 
								  & ((7U 
								      != 
								      (7U 
								       & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
									  >> 3U))) 
								     | (((((0x38U 
									    == 
									    (0x3fU 
									     & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U])) 
									   | (0x39U 
									      == 
									      (0x3fU 
									       & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U]))) 
									  | (0x3aU 
									     == 
									     (0x3fU 
									      & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U]))) 
									 | (0x3bU 
									    == 
									    (0x3fU 
									     & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U]))) 
									| (0x3cU 
									   == 
									   (0x3fU 
									    & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U])))))
								  ? 0x188U
								  : 
								 (((4U 
								    == 
								    (0xfU 
								     & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
									>> 0xcU))) 
								   & ((0x108U 
								       == 
								       (0x1ffU 
									& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
									   >> 3U))) 
								      | ((0x11U 
									  == 
									  (0x1fU 
									   & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
									      >> 7U))) 
									 & (0U 
									    == 
									    (7U 
									     & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 3U))))))
								   ? 0x155U
								   : 
								  (((((0x121U 
								       == 
								       (0x3ffU 
									& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
									   >> 6U))) 
								      & (0U 
									 != 
									 (7U 
									  & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
									     >> 3U)))) 
								     & ((((2U 
									   == 
									   (7U 
									    & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
									       >> 3U))) 
									  | (5U 
									     == 
									     (7U 
									      & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 3U)))) 
									 | (6U 
									    == 
									    (7U 
									     & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 3U)))) 
									| (7U 
									   == 
									   (7U 
									    & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
									       >> 3U))))) 
								    & ((7U 
									!= 
									(7U 
									 & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
									    >> 3U))) 
								       | ((((0x38U 
									     == 
									     (0x3fU 
									      & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U])) 
									    | (0x39U 
									       == 
									       (0x3fU 
										& vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U]))) 
									   | (0x3aU 
									      == 
									      (0x3fU 
									       & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U]))) 
									  | (0x3bU 
									     == 
									     (0x3fU 
									      & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U])))))
								    ? 0xa8U
								    : 
								   (((0x91U 
								      == 
								      (0x1ffU 
								       & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
									  >> 7U))) 
								     & (4U 
									== 
									(7U 
									 & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
									    >> 3U))))
								     ? 0x83U
								     : 
								    ((((0x91U 
									== 
									(0x1ffU 
									 & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
									    >> 7U))) 
								       & ((((2U 
									     == 
									     (7U 
									      & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 3U))) 
									    | (5U 
									       == 
									       (7U 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 3U)))) 
									   | (6U 
									      == 
									      (7U 
									       & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 3U)))) 
									  | (7U 
									     == 
									     (7U 
									      & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 3U))))) 
								      & (((7U 
									   != 
									   (7U 
									    & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
									       >> 3U))) 
									  | (0x38U 
									     == 
									     (0x3fU 
									      & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U]))) 
									 | (0x39U 
									    == 
									    (0x3fU 
									     & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U]))))
								      ? 0x93U
								      : 
								     (((((0x4aU 
									  == 
									  (0xffU 
									   & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
									      >> 8U))) 
									 & (3U 
									    != 
									    (3U 
									     & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 6U)))) 
									& (1U 
									   != 
									   (7U 
									    & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
									       >> 3U)))) 
								       & ((7U 
									   != 
									   (7U 
									    & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
									       >> 3U))) 
									  | ((0x38U 
									      == 
									      (0x3fU 
									       & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U])) 
									     | (0x39U 
										== 
										(0x3fU 
										& vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U])))))
								       ? 0x159U
								       : 
								      ((((0x12bU 
									  == 
									  (0x3ffU 
									   & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
									      >> 6U))) 
									 & (1U 
									    != 
									    (7U 
									     & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 3U)))) 
									& ((7U 
									    != 
									    (7U 
									     & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 3U))) 
									   | ((0x38U 
									       == 
									       (0x3fU 
										& vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U])) 
									      | (0x39U 
										== 
										(0x3fU 
										& vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U])))))
								        ? 0x14dU
								        : 
								       ((((0x99U 
									   == 
									   (0x1ffU 
									    & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
									       >> 7U))) 
									  & (((((2U 
										== 
										(7U 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 3U))) 
										| (3U 
										== 
										(7U 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 3U)))) 
									       | (5U 
										== 
										(7U 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 3U)))) 
									      | (6U 
										== 
										(7U 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 3U)))) 
									     | (7U 
										== 
										(7U 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 3U))))) 
									 & ((7U 
									     != 
									     (7U 
									      & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 3U))) 
									    | ((((0x38U 
										== 
										(0x3fU 
										& vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U])) 
										| (0x39U 
										== 
										(0x3fU 
										& vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U]))) 
										| (0x3aU 
										== 
										(0x3fU 
										& vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U]))) 
									       | (0x3bU 
										== 
										(0x3fU 
										& vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U])))))
									 ? 0x74U
									 : 
									((0x4e4U 
									  == 
									  (0xfffU 
									   & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
									      >> 4U)))
									  ? 0x1e1U
									  : 
									 ((0x9caU 
									   == 
									   (0x1fffU 
									    & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
									       >> 3U)))
									   ? 0x194U
									   : 
									  ((0x9cbU 
									    == 
									    (0x1fffU 
									     & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 3U)))
									    ? 0x1a4U
									    : 
									   ((0x9ccU 
									     == 
									     (0x1fffU 
									      & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 3U)))
									     ? 0x18cU
									     : 
									    ((0x9cdU 
									      == 
									      (0x1fffU 
									       & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 3U)))
									      ? 0x191U
									      : 
									     ((0x4e70U 
									       == 
									       (0xffffU 
										& vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U]))
									       ? 0x1e6U
									       : 
									      ((0x4e71U 
										== 
										(0xffffU 
										& vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U]))
									        ? 0x1e0U
									        : 
									       ((0x4e72U 
										== 
										(0xffffU 
										& vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U]))
										 ? 0x1e9U
										 : 
										(((0x4e73U 
										== 
										(0xffffU 
										& vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U])) 
										| (0x4e77U 
										== 
										(0xffffU 
										& vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U])))
										 ? 0x1ccU
										 : 
										((0x4e75U 
										== 
										(0xffffU 
										& vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U]))
										 ? 0x1d8U
										 : 
										((0x4e76U 
										== 
										(0xffffU 
										& vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U]))
										 ? 0x1e3U
										 : 
										((((0x13aU 
										== 
										(0x3ffU 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 6U))) 
										& ((((2U 
										== 
										(7U 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 3U))) 
										| (5U 
										== 
										(7U 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 3U)))) 
										| (6U 
										== 
										(7U 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 3U)))) 
										| (7U 
										== 
										(7U 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 3U))))) 
										& ((7U 
										!= 
										(7U 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 3U))) 
										| ((((0x38U 
										== 
										(0x3fU 
										& vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U])) 
										| (0x39U 
										== 
										(0x3fU 
										& vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U]))) 
										| (0x3aU 
										== 
										(0x3fU 
										& vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U]))) 
										| (0x3bU 
										== 
										(0x3fU 
										& vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U])))))
										 ? 0x1c3U
										 : 
										((((0x13bU 
										== 
										(0x3ffU 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 6U))) 
										& ((((2U 
										== 
										(7U 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 3U))) 
										| (5U 
										== 
										(7U 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 3U)))) 
										| (6U 
										== 
										(7U 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 3U)))) 
										| (7U 
										== 
										(7U 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 3U))))) 
										& ((7U 
										!= 
										(7U 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 3U))) 
										| ((((0x38U 
										== 
										(0x3fU 
										& vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U])) 
										| (0x39U 
										== 
										(0x3fU 
										& vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U]))) 
										| (0x3aU 
										== 
										(0x3fU 
										& vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U]))) 
										| (0x3bU 
										== 
										(0x3fU 
										& vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U])))))
										 ? 0x1bbU
										 : 
										(((((5U 
										== 
										(0xfU 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 0xcU))) 
										& (3U 
										!= 
										(3U 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 6U)))) 
										& (1U 
										!= 
										(7U 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 3U)))) 
										& ((7U 
										!= 
										(7U 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 3U))) 
										| ((0x38U 
										== 
										(0x3fU 
										& vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U])) 
										| (0x39U 
										== 
										(0x3fU 
										& vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U])))))
										 ? 0x15dU
										 : 
										(((((5U 
										== 
										(0xfU 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 0xcU))) 
										& (3U 
										!= 
										(3U 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 6U)))) 
										& (0U 
										!= 
										(3U 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 6U)))) 
										& (1U 
										== 
										(7U 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 3U))))
										 ? 0x160U
										 : 
										(((((5U 
										== 
										(0xfU 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 0xcU))) 
										& (3U 
										== 
										(3U 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 6U)))) 
										& (1U 
										!= 
										(7U 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 3U)))) 
										& ((7U 
										!= 
										(7U 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 3U))) 
										| ((0x38U 
										== 
										(0x3fU 
										& vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U])) 
										| (0x39U 
										== 
										(0x3fU 
										& vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U])))))
										 ? 0x164U
										 : 
										((((5U 
										== 
										(0xfU 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 0xcU))) 
										& (3U 
										== 
										(3U 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 6U)))) 
										& (1U 
										== 
										(7U 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 3U))))
										 ? 0x177U
										 : 
										(((6U 
										== 
										(0xfU 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 0xcU))) 
										& (1U 
										== 
										(0xfU 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 8U))))
										 ? 0x1afU
										 : 
										(((6U 
										== 
										(0xfU 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 0xcU))) 
										& (1U 
										!= 
										(0xfU 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 8U))))
										 ? 0x16bU
										 : 
										(((7U 
										== 
										(0xfU 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 0xcU))) 
										& (~ 
										(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 8U)))
										 ? 0x134U
										 : 
										(((((0xbU 
										== 
										(0xfU 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 0xcU))) 
										& (((0U 
										== 
										(7U 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 6U))) 
										| (1U 
										== 
										(7U 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 6U)))) 
										| (2U 
										== 
										(7U 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 6U))))) 
										& ((0U 
										!= 
										(7U 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 6U))) 
										| (1U 
										!= 
										(7U 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 3U))))) 
										& ((7U 
										!= 
										(7U 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 3U))) 
										| (((((0x38U 
										== 
										(0x3fU 
										& vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U])) 
										| (0x39U 
										== 
										(0x3fU 
										& vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U]))) 
										| (0x3aU 
										== 
										(0x3fU 
										& vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U]))) 
										| (0x3bU 
										== 
										(0x3fU 
										& vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U]))) 
										| (0x3cU 
										== 
										(0x3fU 
										& vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U])))))
										 ? 0x107U
										 : 
										((((0xbU 
										== 
										(0xfU 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 0xcU))) 
										& ((3U 
										== 
										(7U 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 6U))) 
										| (7U 
										== 
										(7U 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 6U))))) 
										& ((7U 
										!= 
										(7U 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 3U))) 
										| (((((0x38U 
										== 
										(0x3fU 
										& vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U])) 
										| (0x39U 
										== 
										(0x3fU 
										& vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U]))) 
										| (0x3aU 
										== 
										(0x3fU 
										& vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U]))) 
										| (0x3bU 
										== 
										(0x3fU 
										& vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U]))) 
										| (0x3cU 
										== 
										(0x3fU 
										& vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U])))))
										 ? 0x114U
										 : 
										((((0xbU 
										== 
										(0xfU 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 0xcU))) 
										& (((4U 
										== 
										(7U 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 6U))) 
										| (5U 
										== 
										(7U 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 6U)))) 
										| (6U 
										== 
										(7U 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 6U))))) 
										& (1U 
										== 
										(7U 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 3U))))
										 ? 0xceU
										 : 
										(((((0xbU 
										== 
										(0xfU 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 0xcU))) 
										& (((4U 
										== 
										(7U 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 6U))) 
										| (5U 
										== 
										(7U 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 6U)))) 
										| (6U 
										== 
										(7U 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 6U))))) 
										& (1U 
										!= 
										(7U 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 3U)))) 
										& ((7U 
										!= 
										(7U 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 3U))) 
										| ((0x38U 
										== 
										(0x3fU 
										& vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U])) 
										| (0x39U 
										== 
										(0x3fU 
										& vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U])))))
										 ? 0xf6U
										 : 
										(((((((0xdU 
										== 
										(0xfU 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 0xcU))) 
										| (9U 
										== 
										(0xfU 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 0xcU)))) 
										| (0xcU 
										== 
										(0xfU 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 0xcU)))) 
										| (8U 
										== 
										(0xfU 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 0xcU)))) 
										& (((((((((0x11U 
										== 
										(0x1fU 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 4U))) 
										| (0x12U 
										== 
										(0x1fU 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 4U)))) 
										| (0x13U 
										== 
										(0x1fU 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 4U)))) 
										| (0x15U 
										== 
										(0x1fU 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 4U)))) 
										| (0x16U 
										== 
										(0x1fU 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 4U)))) 
										| (0x17U 
										== 
										(0x1fU 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 4U)))) 
										| (0x19U 
										== 
										(0x1fU 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 4U)))) 
										| (0x1aU 
										== 
										(0x1fU 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 4U)))) 
										| (0x1bU 
										== 
										(0x1fU 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 4U))))) 
										& ((7U 
										!= 
										(7U 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 3U))) 
										| ((0x38U 
										== 
										(0x3fU 
										& vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U])) 
										| (0x39U 
										== 
										(0x3fU 
										& vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U])))))
										 ? 0xfbU
										 : 
										(((((((((0xdU 
										== 
										(0xfU 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 0xcU))) 
										| (9U 
										== 
										(0xfU 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 0xcU)))) 
										| (0xcU 
										== 
										(0xfU 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 0xcU)))) 
										| (8U 
										== 
										(0xfU 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 0xcU)))) 
										& (((0U 
										== 
										(7U 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 6U))) 
										| (1U 
										== 
										(7U 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 6U)))) 
										| (2U 
										== 
										(7U 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 6U))))) 
										& (((~ 
										(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 0xcU)) 
										| (0U 
										!= 
										(7U 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 6U)))) 
										| (1U 
										!= 
										(7U 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 3U))))) 
										& ((vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 0xcU) 
										| (1U 
										!= 
										(7U 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 3U))))) 
										& ((7U 
										!= 
										(7U 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 3U))) 
										| (((((0x38U 
										== 
										(0x3fU 
										& vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U])) 
										| (0x39U 
										== 
										(0x3fU 
										& vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U]))) 
										| (0x3aU 
										== 
										(0x3fU 
										& vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U]))) 
										| (0x3bU 
										== 
										(0x3fU 
										& vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U]))) 
										| (0x3cU 
										== 
										(0x3fU 
										& vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U])))))
										 ? 0x100U
										 : 
										(((((0xdU 
										== 
										(0xfU 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 0xcU))) 
										| (9U 
										== 
										(0xfU 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 0xcU)))) 
										& ((3U 
										== 
										(7U 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 6U))) 
										| (7U 
										== 
										(7U 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 6U))))) 
										& ((7U 
										!= 
										(7U 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 3U))) 
										| (((((0x38U 
										== 
										(0x3fU 
										& vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U])) 
										| (0x39U 
										== 
										(0x3fU 
										& vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U]))) 
										| (0x3aU 
										== 
										(0x3fU 
										& vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U]))) 
										| (0x3bU 
										== 
										(0x3fU 
										& vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U]))) 
										| (0x3cU 
										== 
										(0x3fU 
										& vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U])))))
										 ? 0x10dU
										 : 
										(((((0xcU 
										== 
										(0xfU 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 0xcU))) 
										| (8U 
										== 
										(0xfU 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 0xcU)))) 
										& (0x10U 
										== 
										(0x1fU 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 4U)))) 
										| (((0xdU 
										== 
										(0xfU 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 0xcU))) 
										| (9U 
										== 
										(0xfU 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 0xcU)))) 
										& (((0x10U 
										== 
										(0x1fU 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 4U))) 
										| (0x14U 
										== 
										(0x1fU 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 4U)))) 
										| (0x18U 
										== 
										(0x1fU 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 4U))))))
										 ? 0xbdU
										 : 
										(((0xcU 
										== 
										(0xfU 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 0xcU))) 
										& (((0x28U 
										== 
										(0x3fU 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 3U))) 
										| (0x29U 
										== 
										(0x3fU 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 3U)))) 
										| (0x31U 
										== 
										(0x3fU 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 3U)))))
										 ? 0xc6U
										 : 
										((((((0xcU 
										== 
										(0xfU 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 0xcU))) 
										| (8U 
										== 
										(0xfU 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 0xcU)))) 
										& (3U 
										== 
										(3U 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 6U)))) 
										& (1U 
										!= 
										(7U 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 3U)))) 
										& ((7U 
										!= 
										(7U 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 3U))) 
										| (((((0x38U 
										== 
										(0x3fU 
										& vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U])) 
										| (0x39U 
										== 
										(0x3fU 
										& vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U]))) 
										| (0x3aU 
										== 
										(0x3fU 
										& vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U]))) 
										| (0x3bU 
										== 
										(0x3fU 
										& vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U]))) 
										| (0x3cU 
										== 
										(0x3fU 
										& vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U])))))
										 ? 0x123U
										 : 
										(((((((0xeU 
										== 
										(0xfU 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 0xcU))) 
										& (~ 
										(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 0xbU))) 
										& (3U 
										== 
										(3U 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 6U)))) 
										& (0U 
										!= 
										(7U 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 3U)))) 
										& (1U 
										!= 
										(7U 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 3U)))) 
										& ((7U 
										!= 
										(7U 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 3U))) 
										| ((0x38U 
										== 
										(0x3fU 
										& vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U])) 
										| (0x39U 
										== 
										(0x3fU 
										& vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U])))))
										 ? 0xe2U
										 : 
										(((0xeU 
										== 
										(0xfU 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 0xcU))) 
										& (((0U 
										== 
										(3U 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 6U))) 
										| (1U 
										== 
										(3U 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 6U)))) 
										| (2U 
										== 
										(3U 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 6U)))))
										 ? 0xd5U
										 : 0x800U)))))))))))))))))))))))))))))))))))))))))))))))))))))))))))
		      : 0U) >> 9U));
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__result_BITS8_val 
	= (1U & (~ (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand1 
		    >> (7U & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand2))));
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__result_BITS32_val 
	= (1U & (~ (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand1 
		    >> (0x1fU & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand2))));
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__result_NBCD_7_4a 
	= (0x1fU & ((9U < (0xfU & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand1))
		     ? ((IData)(0x18U) - (0xfU & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand1 
						  >> 4U)))
		     : ((IData)(0x19U) - (0xfU & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand1 
						  >> 4U)))));
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__result_ABCD_13_8a 
	= (0x3fU & (((0xfU & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand1) 
		     + (0xfU & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand2)) 
		    + (1U & ((IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__sr) 
			     >> 4U))));
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__result_SBCD_13_8a 
	= (0x3fU & ((((IData)(0x20U) + (0xfU & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand1)) 
		     - (0xfU & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand2)) 
		    - (1U & ((IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__sr) 
			     >> 4U))));
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__rbit 
	= (1U & (((((1U & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__size))
		     ? (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand1 
			>> 7U) : ((2U & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__size))
				   ? (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand1 
				      >> 0xfU) : (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand1 
						  >> 0x1fU))) 
		   & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__decoder_alu_reg 
		      >> 0xcU)) | (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand1 
				   & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__decoder_alu_reg 
				      >> 0xeU))) | 
		 (((IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__sr) 
		   >> 4U) & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__decoder_alu_reg 
			     >> 0xfU))));
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__mult_result 
	= (VL_ULL(0x3ffffffff) & VL_MULS_QQQ(34,34,34, 
					     (VL_ULL(0x3ffffffff) 
					      & VL_EXTENDS_QI(34,17, 
							      ((0x10000U 
								& ((vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand1 
								    << 1U) 
								   & ((IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ir) 
								      << 8U))) 
							       | (0xffffU 
								  & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand1)))), 
					     (VL_ULL(0x3ffffffff) 
					      & VL_EXTENDS_QI(34,17, 
							      ((0x10000U 
								& ((vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand2 
								    << 1U) 
								   & ((IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ir) 
								      << 8U))) 
							       | (0xffffU 
								  & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand2))))));
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__div_quotient 
	= (0xffffU & ((1U & (((vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand1 
			       >> 0x1fU) ^ (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand2 
					    >> 0xfU)) 
			     & ((IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ir) 
				>> 8U))) ? VL_NEGATE_I(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__quotient)
		       : vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__quotient));
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__result_ABCD2_19_14b 
	= (0x3fU & ((9U < (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__result_ABCD2_19_14a))
		     ? ((IData)(6U) + (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__result_ABCD2_19_14a))
		     : (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__result_ABCD2_19_14a)));
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__result_SBCD2_19_14b 
	= (0x3fU & (((0x20U > (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__result_SBCD2_19_14a)) 
		     & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__result 
			>> 0x1fU)) ? ((IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__result_SBCD2_19_14a) 
				      - (IData)(6U))
		     : (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__result_SBCD2_19_14a)));
}

VL_INLINE_OPT void Vcpu_ram_uart_sim_ao68000::_sequent__TOP__tb_m68k_ram_uart__ao68000_m__5(Vcpu_ram_uart_sim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        Vcpu_ram_uart_sim_ao68000::_sequent__TOP__tb_m68k_ram_uart__ao68000_m__5\n"); );
    Vcpu_ram_uart_sim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__result_BITS8_val 
	= (1U & (~ (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand1 
		    >> (7U & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand2))));
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__result_BITS32_val 
	= (1U & (~ (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand1 
		    >> (0x1fU & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand2))));
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__result_NBCD_7_4a 
	= (0x1fU & ((9U < (0xfU & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand1))
		     ? ((IData)(0x18U) - (0xfU & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand1 
						  >> 4U)))
		     : ((IData)(0x19U) - (0xfU & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand1 
						  >> 4U)))));
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__result_ABCD_13_8a 
	= (0x3fU & (((0xfU & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand1) 
		     + (0xfU & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand2)) 
		    + (1U & ((IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__sr) 
			     >> 4U))));
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__result_SBCD_13_8a 
	= (0x3fU & ((((IData)(0x20U) + (0xfU & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand1)) 
		     - (0xfU & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand2)) 
		    - (1U & ((IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__sr) 
			     >> 4U))));
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__rbit 
	= (1U & (((((1U & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__size))
		     ? (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand1 
			>> 7U) : ((2U & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__size))
				   ? (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand1 
				      >> 0xfU) : (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand1 
						  >> 0x1fU))) 
		   & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__decoder_alu_reg 
		      >> 0xcU)) | (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand1 
				   & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__decoder_alu_reg 
				      >> 0xeU))) | 
		 (((IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__sr) 
		   >> 4U) & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__decoder_alu_reg 
			     >> 0xfU))));
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__mult_result 
	= (VL_ULL(0x3ffffffff) & VL_MULS_QQQ(34,34,34, 
					     (VL_ULL(0x3ffffffff) 
					      & VL_EXTENDS_QI(34,17, 
							      ((0x10000U 
								& ((vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand1 
								    << 1U) 
								   & ((IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ir) 
								      << 8U))) 
							       | (0xffffU 
								  & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand1)))), 
					     (VL_ULL(0x3ffffffff) 
					      & VL_EXTENDS_QI(34,17, 
							      ((0x10000U 
								& ((vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand2 
								    << 1U) 
								   & ((IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ir) 
								      << 8U))) 
							       | (0xffffU 
								  & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand2))))));
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__div_quotient 
	= (0xffffU & ((1U & (((vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand1 
			       >> 0x1fU) ^ (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand2 
					    >> 0xfU)) 
			     & ((IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ir) 
				>> 8U))) ? VL_NEGATE_I(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__quotient)
		       : vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__quotient));
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__result_ABCD2_19_14b 
	= (0x3fU & ((9U < (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__result_ABCD2_19_14a))
		     ? ((IData)(6U) + (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__result_ABCD2_19_14a))
		     : (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__result_ABCD2_19_14a)));
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__result_SBCD2_19_14b 
	= (0x3fU & (((0x20U > (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__result_SBCD2_19_14a)) 
		     & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__result 
			>> 0x1fU)) ? ((IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__result_SBCD2_19_14a) 
				      - (IData)(6U))
		     : (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__result_SBCD2_19_14a)));
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__CYC_O 
	= vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__CYC_O;
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__SEL_O 
	= vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__SEL_O;
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__DAT_O 
	= vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__DAT_O;
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__WE_O 
	= vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__WE_O;
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__STB_O 
	= vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__Vdly__STB_O;
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__Dn_address 
	= (7U & ((0x200U & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[2U])
		  ? (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
		     >> 0xcU) : (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ea_reg)));
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__An_input 
	= ((1U == (3U & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[2U] 
			 >> 7U))) ? vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__address
	    : ((2U == (3U & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[2U] 
			     >> 7U))) ? ((vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
					  << 0x10U) 
					 | (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[1U] 
					    >> 0x10U))
	        : vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__result));
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__pc_change 
	= (((1U == (7U & ((vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[2U] 
			   << 0x1dU) | (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[1U] 
					>> 3U)))) | 
	    (5U == (7U & ((vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[2U] 
			   << 0x1dU) | (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[1U] 
					>> 3U))))) ? 3U
	    : (((3U == (7U & ((vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[2U] 
			       << 0x1dU) | (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[1U] 
					    >> 3U)))) 
		| ((4U == (7U & ((vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[2U] 
				  << 0x1dU) | (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[1U] 
					       >> 3U)))) 
		   & ((IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__size) 
		      >> 2U))) ? 2U : ((((2U == (7U 
						 & ((vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[2U] 
						     << 0x1dU) 
						    | (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[1U] 
						       >> 3U)))) 
					 | ((4U == 
					     (7U & 
					      ((vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[2U] 
						<< 0x1dU) 
					       | (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[1U] 
						  >> 3U)))) 
					    & (~ ((IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__size) 
						  >> 2U)))) 
					| ((((6U == 
					      (7U & 
					       ((vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[2U] 
						 << 0x1dU) 
						| (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[1U] 
						   >> 3U)))) 
					     & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir_valid)) 
					    & (0U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__decoder_trap))) 
					   & (~ (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__stop_flag))))
				        ? 1U : 0U)));
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__registers_m__DOT__pc_next 
	= ((1U == (7U & ((vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[2U] 
			  << 0x1dU) | (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[1U] 
				       >> 3U)))) ? vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__result
	    : ((2U == (7U & ((vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[2U] 
			      << 0x1dU) | (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[1U] 
					   >> 3U))))
	        ? ((IData)(2U) + vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__pc)
	        : ((3U == (7U & ((vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[2U] 
				  << 0x1dU) | (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[1U] 
					       >> 3U))))
		    ? ((IData)(4U) + vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__pc)
		    : ((4U == (7U & ((vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[2U] 
				      << 0x1dU) | (
						   vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[1U] 
						   >> 3U))))
		        ? ((4U & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__size))
			    ? ((IData)(4U) + vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__pc)
			    : ((IData)(2U) + vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__pc))
		        : ((5U == (7U & ((vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[2U] 
					  << 0x1dU) 
					 | (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[1U] 
					    >> 3U))))
			    ? ((vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[1U] 
				<< 0x10U) | (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[0U] 
					     >> 0x10U))
			    : (((((6U == (7U & ((vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[2U] 
						 << 0x1dU) 
						| (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[1U] 
						   >> 3U)))) 
				  & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir_valid)) 
				 & (0U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__decoder_trap))) 
				& (~ (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__stop_flag)))
			        ? ((IData)(2U) + vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__pc)
			        : vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__pc))))));
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__An_address 
	= ((1U == (3U & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[2U] 
			 >> 4U))) ? ((8U & ((IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__sr) 
					    >> 0xaU)) 
				     | (7U & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
					      >> 0xcU)))
	    : ((2U == (3U & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[2U] 
			     >> 4U))) ? 7U : ((3U == 
					       (3U 
						& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[2U] 
						   >> 4U)))
					       ? 0xfU
					       : ((8U 
						   & ((IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__sr) 
						      >> 0xaU)) 
						  | (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ea_reg)))));
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__micro_pc 
	= (0x1ffU & ((IData)(vlSymsp->TOP__tb_m68k_ram_uart.rst_n)
		      ? (((IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__jmp_address_trap) 
			  | (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__jmp_bus_trap))
			  ? 3U : ((((((((((((((((1U 
						 == 
						 (0xfU 
						  & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[2U] 
						     >> 0x10U))) 
						& (0x10U 
						   == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__movem_loop))) 
					       | ((2U 
						   == 
						   (0xfU 
						    & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[2U] 
						       >> 0x10U))) 
						  & (~ (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__movem_reg)))) 
					      | ((3U 
						  == 
						  (0xfU 
						   & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[2U] 
						      >> 0x10U))) 
						 & (0U 
						    == 
						    (0x3fU 
						     & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand2)))) 
					     | ((4U 
						 == 
						 (0xfU 
						  & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[2U] 
						     >> 0x10U))) 
						& (~ (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_signal)))) 
					    | ((5U 
						== 
						(0xfU 
						 & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[2U] 
						    >> 0x10U))) 
					       & ((1U 
						   == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__div_count)) 
						  | (0U 
						     == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__div_count))))) 
					   | ((6U == 
					       (0xfU 
						& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[2U] 
						   >> 0x10U))) 
					      & (~ (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__condition)))) 
					  | ((7U == 
					      (0xfU 
					       & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[2U] 
						  >> 0x10U))) 
					     & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__condition))) 
					 | ((8U == 
					     (0xfU 
					      & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[2U] 
						 >> 0x10U))) 
					    & (0xffffU 
					       == (0xffffU 
						   & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__result)))) 
					| ((9U == (0xfU 
						   & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[2U] 
						      >> 0x10U))) 
					   & (~ ((IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__sr) 
						 >> 1U)))) 
				       | ((0xaU == 
					   (0xfU & 
					    (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[2U] 
					     >> 0x10U))) 
					  & (~ ((IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ir) 
						>> 6U)))) 
				      | ((0xbU == (0xfU 
						   & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[2U] 
						      >> 0x10U))) 
					 & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__stop_flag))) 
				     | ((0xcU == (0xfU 
						  & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[2U] 
						     >> 0x10U))) 
					& (0U != (0xffU 
						  & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ir))))) 
				    | (((0xdU == (0xfU 
						  & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[2U] 
						     >> 0x10U))) 
					& (~ (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__trace_flag))) 
				       & (0U != (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__interrupt_mask)))) 
				   | ((0xeU == (0xfU 
						& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[2U] 
						   >> 0x10U))) 
				      & (~ (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__group_0_flag))))
				   ? ((IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__microcode_branch_m__DOT__micro_pc_0) 
				      + (0xfU & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[2U] 
						 >> 0x14U)))
				   : ((((0xbU == (0xfU 
						  & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[2U] 
						     >> 0x10U))) 
					& (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir_valid)) 
				       & (0U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__decoder_trap)))
				       ? ((IData)(vlSymsp->TOP__tb_m68k_ram_uart.rst_n)
					   ? ((((((
						   (((((0x27cU 
							== 
							(0xffffU 
							 & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U])) 
						       | (0xa7cU 
							  == 
							  (0xffffU 
							   & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U]))) 
						      | (0x7cU 
							 == 
							 (0xffffU 
							  & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U]))) 
						     | (0x4e70U 
							== 
							(0xffffU 
							 & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U]))) 
						    | (0x4e72U 
						       == 
						       (0xffffU 
							& vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U]))) 
						   | (0x4e73U 
						      == 
						      (0xffffU 
						       & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U]))) 
						  | (((((0x11bU 
							 == 
							 (0x3ffU 
							  & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
							     >> 6U))) 
							& (1U 
							   != 
							   (7U 
							    & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
							       >> 3U)))) 
						       & (0x3dU 
							  != 
							  (0x3fU 
							   & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U]))) 
						      & (0x3eU 
							 != 
							 (0x3fU 
							  & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U]))) 
						     & (0x3fU 
							!= 
							(0x3fU 
							 & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U])))) 
						 | (0x9ccU 
						    == 
						    (0x1fffU 
						     & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
							>> 3U)))) 
						| (0x9cdU 
						   == 
						   (0x1fffU 
						    & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
						       >> 3U)))) 
					       & (~ 
						  ((IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__sr) 
						   >> 0xdU)))
					       ? 0x1000U
					       : ((0x4afcU 
						   == 
						   (0xffffU 
						    & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U]))
						   ? 0x800U
						   : 
						  ((0xaU 
						    == 
						    (0xfU 
						     & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
							>> 0xcU)))
						    ? 0x1400U
						    : 
						   ((0xfU 
						     == 
						     (0xfU 
						      & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
							 >> 0xcU)))
						     ? 0x1600U
						     : 
						    (((((((((((((((0U 
								   == 
								   (0xfU 
								    & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
								       >> 0xcU))) 
								  & (4U 
								     != 
								     (7U 
								      & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
									 >> 9U)))) 
								 & (6U 
								    != 
								    (7U 
								     & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
									>> 9U)))) 
								& (7U 
								   != 
								   (7U 
								    & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
								       >> 9U)))) 
							       & (~ 
								  (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
								   >> 8U))) 
							      & (((0U 
								   == 
								   (3U 
								    & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
								       >> 6U))) 
								  | (1U 
								     == 
								     (3U 
								      & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
									 >> 6U)))) 
								 | (2U 
								    == 
								    (3U 
								     & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
									>> 6U))))) 
							     & (1U 
								!= 
								(7U 
								 & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
								    >> 3U)))) 
							    & ((7U 
								!= 
								(7U 
								 & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
								    >> 3U))) 
							       | ((0x38U 
								   == 
								   (0x3fU 
								    & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U])) 
								  | (0x39U 
								     == 
								     (0x3fU 
								      & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U]))))) 
							   & (0x3cU 
							      != 
							      (0xffffU 
							       & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U]))) 
							  & (0x7cU 
							     != 
							     (0xffffU 
							      & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U]))) 
							 & (0x23cU 
							    != 
							    (0xffffU 
							     & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U]))) 
							& (0x27cU 
							   != 
							   (0xffffU 
							    & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U]))) 
						       & (0xa3cU 
							  != 
							  (0xffffU 
							   & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U]))) 
						      & (0xa7cU 
							 != 
							 (0xffffU 
							  & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U])))
						      ? 0xaeU
						      : 
						     (((((((0x3cU 
							    == 
							    (0xffffU 
							     & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U])) 
							   | (0x7cU 
							      == 
							      (0xffffU 
							       & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U]))) 
							  | (0x23cU 
							     == 
							     (0xffffU 
							      & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U]))) 
							 | (0x27cU 
							    == 
							    (0xffffU 
							     & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U]))) 
							| (0xa3cU 
							   == 
							   (0xffffU 
							    & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U]))) 
						       | (0xa7cU 
							  == 
							  (0xffffU 
							   & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U])))
						       ? 0xb2U
						       : 
						      (((((0U 
							   == 
							   (0xfU 
							    & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
							       >> 0xcU))) 
							  & (4U 
							     == 
							     (7U 
							      & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
								 >> 6U)))) 
							 & (1U 
							    != 
							    (7U 
							     & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
								>> 3U)))) 
							& ((7U 
							    != 
							    (7U 
							     & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
								>> 3U))) 
							   | (((((0x38U 
								  == 
								  (0x3fU 
								   & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U])) 
								 | (0x39U 
								    == 
								    (0x3fU 
								     & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U]))) 
								| (0x3aU 
								   == 
								   (0x3fU 
								    & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U]))) 
							       | (0x3bU 
								  == 
								  (0x3fU 
								   & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U]))) 
							      | (0x3cU 
								 == 
								 (0x3fU 
								  & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U])))))
						        ? 0x147U
						        : 
						       (((((0U 
							    == 
							    (0xfU 
							     & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
								>> 0xcU))) 
							   & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
							      >> 8U)) 
							  & (1U 
							     == 
							     (7U 
							      & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
								 >> 3U)))) 
							 & ((0U 
							     == 
							     (3U 
							      & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
								 >> 6U))) 
							    | (1U 
							       == 
							       (3U 
								& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
								   >> 6U)))))
							 ? 0x62U
							 : 
							(((((0U 
							     == 
							     (0xfU 
							      & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
								 >> 0xcU))) 
							    & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
							       >> 8U)) 
							   & (1U 
							      == 
							      (7U 
							       & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
								  >> 3U)))) 
							  & ((2U 
							      == 
							      (3U 
							       & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
								  >> 6U))) 
							     | (3U 
								== 
								(3U 
								 & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
								    >> 6U)))))
							  ? 0x6aU
							  : 
							 ((((((0U 
							       == 
							       (0xfU 
								& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
								   >> 0xcU))) 
							      & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
								 >> 8U)) 
							     & (1U 
								!= 
								(7U 
								 & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
								    >> 3U)))) 
							    & (4U 
							       != 
							       (7U 
								& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
								   >> 6U)))) 
							   & ((7U 
							       != 
							       (7U 
								& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
								   >> 3U))) 
							      | ((0x38U 
								  == 
								  (0x3fU 
								   & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U])) 
								 | (0x39U 
								    == 
								    (0x3fU 
								     & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U])))))
							   ? 0x142U
							   : 
							  ((((((0U 
								== 
								(0xfU 
								 & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
								    >> 0xcU))) 
							       & (8U 
								  == 
								  (0xfU 
								   & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
								      >> 8U)))) 
							      & (0U 
								 == 
								 (3U 
								  & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
								     >> 6U)))) 
							     & (1U 
								!= 
								(7U 
								 & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
								    >> 3U)))) 
							    & ((7U 
								!= 
								(7U 
								 & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
								    >> 3U))) 
							       | ((((0x38U 
								     == 
								     (0x3fU 
								      & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U])) 
								    | (0x39U 
								       == 
								       (0x3fU 
									& vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U]))) 
								   | (0x3aU 
								      == 
								      (0x3fU 
								       & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U]))) 
								  | (0x3bU 
								     == 
								     (0x3fU 
								      & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U])))))
							    ? 0x13cU
							    : 
							   ((((((0U 
								 == 
								 (0xfU 
								  & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
								     >> 0xcU))) 
								& (8U 
								   == 
								   (0xfU 
								    & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
								       >> 8U)))) 
							       & (0U 
								  != 
								  (3U 
								   & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
								      >> 6U)))) 
							      & (1U 
								 != 
								 (7U 
								  & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
								     >> 3U)))) 
							     & ((7U 
								 != 
								 (7U 
								  & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
								     >> 3U))) 
								| ((0x38U 
								    == 
								    (0x3fU 
								     & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U])) 
								   | (0x39U 
								      == 
								      (0x3fU 
								       & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U])))))
							     ? 0x137U
							     : 
							    (((((((0U 
								   == 
								   (0xfU 
								    & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
								       >> 0xcU))) 
								  & (~ 
								     (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
								      >> 8U))) 
								 & (6U 
								    == 
								    (7U 
								     & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
									>> 9U)))) 
								& (3U 
								   != 
								   (3U 
								    & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
								       >> 6U)))) 
							       & (1U 
								  != 
								  (7U 
								   & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
								      >> 3U)))) 
							      & ((7U 
								  != 
								  (7U 
								   & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
								      >> 3U))) 
								 | ((0x38U 
								     == 
								     (0x3fU 
								      & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U])) 
								    | (0x39U 
								       == 
								       (0x3fU 
									& vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U])))))
							      ? 0xb8U
							      : 
							     (((((((0U 
								    == 
								    (3U 
								     & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
									>> 0xeU))) 
								   & (0U 
								      != 
								      (3U 
								       & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
									  >> 0xcU)))) 
								  & (1U 
								     != 
								     (7U 
								      & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
									 >> 6U)))) 
								 & ((7U 
								     != 
								     (7U 
								      & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
									 >> 6U))) 
								    | ((7U 
									== 
									(0x3fU 
									 & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
									    >> 6U))) 
								       | (0xfU 
									  == 
									  (0x3fU 
									   & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
									      >> 6U)))))) 
								& ((1U 
								    != 
								    (3U 
								     & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
									>> 0xcU))) 
								   | (1U 
								      != 
								      (7U 
								       & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
									  >> 3U))))) 
							       & ((7U 
								   != 
								   (7U 
								    & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
								       >> 3U))) 
								  | (((((0x38U 
									 == 
									 (0x3fU 
									  & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U])) 
									| (0x39U 
									   == 
									   (0x3fU 
									    & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U]))) 
								       | (0x3aU 
									  == 
									  (0x3fU 
									   & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U]))) 
								      | (0x3bU 
									 == 
									 (0x3fU 
									  & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U]))) 
								     | (0x3cU 
									== 
									(0x3fU 
									 & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U])))))
							       ? 0xe8U
							       : 
							      (((((0U 
								   == 
								   (3U 
								    & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
								       >> 0xeU))) 
								  & ((3U 
								      == 
								      (3U 
								       & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
									  >> 0xcU))) 
								     | (2U 
									== 
									(3U 
									 & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
									    >> 0xcU))))) 
								 & (1U 
								    == 
								    (7U 
								     & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
									>> 6U)))) 
								& ((7U 
								    != 
								    (7U 
								     & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
									>> 3U))) 
								   | (((((0x38U 
									  == 
									  (0x3fU 
									   & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U])) 
									 | (0x39U 
									    == 
									    (0x3fU 
									     & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U]))) 
									| (0x3aU 
									   == 
									   (0x3fU 
									    & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U]))) 
								       | (0x3bU 
									  == 
									  (0x3fU 
									   & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U]))) 
								      | (0x3cU 
									 == 
									 (0x3fU 
									  & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U])))))
							        ? 0xf0U
							        : 
							       (((((4U 
								    == 
								    (0xfU 
								     & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
									>> 0xcU))) 
								   & (1U 
								      != 
								      (7U 
								       & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
									  >> 3U)))) 
								  & (((7U 
								       != 
								       (7U 
									& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
									   >> 3U))) 
								      | (0x38U 
									 == 
									 (0x3fU 
									  & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U]))) 
								     | (0x39U 
									== 
									(0x3fU 
									 & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U])))) 
								 & ((((((0U 
									 == 
									 (0xfU 
									  & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
									     >> 8U))) 
									& (3U 
									   != 
									   (3U 
									    & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
									       >> 6U)))) 
								       | ((2U 
									   == 
									   (0xfU 
									    & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
									       >> 8U))) 
									  & (3U 
									     != 
									     (3U 
									      & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 6U))))) 
								      | ((4U 
									  == 
									  (0xfU 
									   & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
									      >> 8U))) 
									 & (3U 
									    != 
									    (3U 
									     & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 6U))))) 
								     | ((6U 
									 == 
									 (0xfU 
									  & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
									     >> 8U))) 
									& (3U 
									   != 
									   (3U 
									    & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
									       >> 6U))))) 
								    | (0x20U 
								       == 
								       (0x3fU 
									& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
									   >> 6U)))))
								 ? 0x152U
								 : 
								((((0x103U 
								    == 
								    (0x3ffU 
								     & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
									>> 6U))) 
								   & (1U 
								      != 
								      (7U 
								       & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
									  >> 3U)))) 
								  & (((7U 
								       != 
								       (7U 
									& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
									   >> 3U))) 
								      | (0x38U 
									 == 
									 (0x3fU 
									  & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U]))) 
								     | (0x39U 
									== 
									(0x3fU 
									 & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U]))))
								  ? 0x185U
								  : 
								 (((((4U 
								      == 
								      (0xfU 
								       & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
									  >> 0xcU))) 
								     & (6U 
									== 
									(7U 
									 & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
									    >> 6U)))) 
								    & (1U 
								       != 
								       (7U 
									& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
									   >> 3U)))) 
								   & ((7U 
								       != 
								       (7U 
									& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
									   >> 3U))) 
								      | (((((0x38U 
									     == 
									     (0x3fU 
									      & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U])) 
									    | (0x39U 
									       == 
									       (0x3fU 
										& vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U]))) 
									   | (0x3aU 
									      == 
									      (0x3fU 
									       & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U]))) 
									  | (0x3bU 
									     == 
									     (0x3fU 
									      & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U]))) 
									 | (0x3cU 
									    == 
									    (0x3fU 
									     & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U])))))
								   ? 0x11aU
								   : 
								  (((((4U 
								       == 
								       (0xfU 
									& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
									   >> 0xcU))) 
								      & (7U 
									 == 
									 (7U 
									  & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
									     >> 6U)))) 
								     & ((((2U 
									   == 
									   (7U 
									    & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
									       >> 3U))) 
									  | (5U 
									     == 
									     (7U 
									      & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 3U)))) 
									 | (6U 
									    == 
									    (7U 
									     & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 3U)))) 
									| (7U 
									   == 
									   (7U 
									    & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
									       >> 3U))))) 
								    & ((7U 
									!= 
									(7U 
									 & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
									    >> 3U))) 
								       | ((((0x38U 
									     == 
									     (0x3fU 
									      & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U])) 
									    | (0x39U 
									       == 
									       (0x3fU 
										& vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U]))) 
									   | (0x3aU 
									      == 
									      (0x3fU 
									       & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U]))) 
									  | (0x3bU 
									     == 
									     (0x3fU 
									      & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U])))))
								    ? 0xa2U
								    : 
								   (((((0x113U 
									== 
									(0x3ffU 
									 & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
									    >> 6U))) 
								       | (0x11bU 
									  == 
									  (0x3ffU 
									   & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
									      >> 6U)))) 
								      & (1U 
									 != 
									 (7U 
									  & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
									     >> 3U)))) 
								     & ((7U 
									 != 
									 (7U 
									  & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
									     >> 3U))) 
									| (((((0x38U 
									       == 
									       (0x3fU 
										& vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U])) 
									      | (0x39U 
										== 
										(0x3fU 
										& vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U]))) 
									     | (0x3aU 
										== 
										(0x3fU 
										& vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U]))) 
									    | (0x3bU 
									       == 
									       (0x3fU 
										& vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U]))) 
									   | (0x3cU 
									      == 
									      (0x3fU 
									       & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U])))))
								     ? 0x188U
								     : 
								    (((4U 
								       == 
								       (0xfU 
									& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
									   >> 0xcU))) 
								      & ((0x108U 
									  == 
									  (0x1ffU 
									   & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
									      >> 3U))) 
									 | ((0x11U 
									     == 
									     (0x1fU 
									      & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 7U))) 
									    & (0U 
									       == 
									       (7U 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 3U))))))
								      ? 0x155U
								      : 
								     (((((0x121U 
									  == 
									  (0x3ffU 
									   & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
									      >> 6U))) 
									 & (0U 
									    != 
									    (7U 
									     & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 3U)))) 
									& ((((2U 
									      == 
									      (7U 
									       & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 3U))) 
									     | (5U 
										== 
										(7U 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 3U)))) 
									    | (6U 
									       == 
									       (7U 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 3U)))) 
									   | (7U 
									      == 
									      (7U 
									       & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 3U))))) 
								       & ((7U 
									   != 
									   (7U 
									    & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
									       >> 3U))) 
									  | ((((0x38U 
										== 
										(0x3fU 
										& vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U])) 
									       | (0x39U 
										== 
										(0x3fU 
										& vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U]))) 
									      | (0x3aU 
										== 
										(0x3fU 
										& vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U]))) 
									     | (0x3bU 
										== 
										(0x3fU 
										& vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U])))))
								       ? 0xa8U
								       : 
								      (((0x91U 
									 == 
									 (0x1ffU 
									  & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
									     >> 7U))) 
									& (4U 
									   == 
									   (7U 
									    & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
									       >> 3U))))
								        ? 0x83U
								        : 
								       ((((0x91U 
									   == 
									   (0x1ffU 
									    & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
									       >> 7U))) 
									  & ((((2U 
										== 
										(7U 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 3U))) 
									       | (5U 
										== 
										(7U 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 3U)))) 
									      | (6U 
										== 
										(7U 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 3U)))) 
									     | (7U 
										== 
										(7U 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 3U))))) 
									 & (((7U 
									      != 
									      (7U 
									       & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 3U))) 
									     | (0x38U 
										== 
										(0x3fU 
										& vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U]))) 
									    | (0x39U 
									       == 
									       (0x3fU 
										& vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U]))))
									 ? 0x93U
									 : 
									(((((0x4aU 
									     == 
									     (0xffU 
									      & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 8U))) 
									    & (3U 
									       != 
									       (3U 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 6U)))) 
									   & (1U 
									      != 
									      (7U 
									       & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 3U)))) 
									  & ((7U 
									      != 
									      (7U 
									       & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 3U))) 
									     | ((0x38U 
										== 
										(0x3fU 
										& vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U])) 
										| (0x39U 
										== 
										(0x3fU 
										& vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U])))))
									  ? 0x159U
									  : 
									 ((((0x12bU 
									     == 
									     (0x3ffU 
									      & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 6U))) 
									    & (1U 
									       != 
									       (7U 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 3U)))) 
									   & ((7U 
									       != 
									       (7U 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 3U))) 
									      | ((0x38U 
										== 
										(0x3fU 
										& vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U])) 
										| (0x39U 
										== 
										(0x3fU 
										& vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U])))))
									   ? 0x14dU
									   : 
									  ((((0x99U 
									      == 
									      (0x1ffU 
									       & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 7U))) 
									     & (((((2U 
										== 
										(7U 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 3U))) 
										| (3U 
										== 
										(7U 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 3U)))) 
										| (5U 
										== 
										(7U 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 3U)))) 
										| (6U 
										== 
										(7U 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 3U)))) 
										| (7U 
										== 
										(7U 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 3U))))) 
									    & ((7U 
										!= 
										(7U 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 3U))) 
									       | ((((0x38U 
										== 
										(0x3fU 
										& vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U])) 
										| (0x39U 
										== 
										(0x3fU 
										& vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U]))) 
										| (0x3aU 
										== 
										(0x3fU 
										& vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U]))) 
										| (0x3bU 
										== 
										(0x3fU 
										& vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U])))))
									    ? 0x74U
									    : 
									   ((0x4e4U 
									     == 
									     (0xfffU 
									      & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 4U)))
									     ? 0x1e1U
									     : 
									    ((0x9caU 
									      == 
									      (0x1fffU 
									       & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 3U)))
									      ? 0x194U
									      : 
									     ((0x9cbU 
									       == 
									       (0x1fffU 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 3U)))
									       ? 0x1a4U
									       : 
									      ((0x9ccU 
										== 
										(0x1fffU 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 3U)))
									        ? 0x18cU
									        : 
									       ((0x9cdU 
										== 
										(0x1fffU 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 3U)))
										 ? 0x191U
										 : 
										((0x4e70U 
										== 
										(0xffffU 
										& vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U]))
										 ? 0x1e6U
										 : 
										((0x4e71U 
										== 
										(0xffffU 
										& vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U]))
										 ? 0x1e0U
										 : 
										((0x4e72U 
										== 
										(0xffffU 
										& vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U]))
										 ? 0x1e9U
										 : 
										(((0x4e73U 
										== 
										(0xffffU 
										& vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U])) 
										| (0x4e77U 
										== 
										(0xffffU 
										& vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U])))
										 ? 0x1ccU
										 : 
										((0x4e75U 
										== 
										(0xffffU 
										& vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U]))
										 ? 0x1d8U
										 : 
										((0x4e76U 
										== 
										(0xffffU 
										& vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U]))
										 ? 0x1e3U
										 : 
										((((0x13aU 
										== 
										(0x3ffU 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 6U))) 
										& ((((2U 
										== 
										(7U 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 3U))) 
										| (5U 
										== 
										(7U 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 3U)))) 
										| (6U 
										== 
										(7U 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 3U)))) 
										| (7U 
										== 
										(7U 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 3U))))) 
										& ((7U 
										!= 
										(7U 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 3U))) 
										| ((((0x38U 
										== 
										(0x3fU 
										& vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U])) 
										| (0x39U 
										== 
										(0x3fU 
										& vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U]))) 
										| (0x3aU 
										== 
										(0x3fU 
										& vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U]))) 
										| (0x3bU 
										== 
										(0x3fU 
										& vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U])))))
										 ? 0x1c3U
										 : 
										((((0x13bU 
										== 
										(0x3ffU 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 6U))) 
										& ((((2U 
										== 
										(7U 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 3U))) 
										| (5U 
										== 
										(7U 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 3U)))) 
										| (6U 
										== 
										(7U 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 3U)))) 
										| (7U 
										== 
										(7U 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 3U))))) 
										& ((7U 
										!= 
										(7U 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 3U))) 
										| ((((0x38U 
										== 
										(0x3fU 
										& vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U])) 
										| (0x39U 
										== 
										(0x3fU 
										& vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U]))) 
										| (0x3aU 
										== 
										(0x3fU 
										& vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U]))) 
										| (0x3bU 
										== 
										(0x3fU 
										& vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U])))))
										 ? 0x1bbU
										 : 
										(((((5U 
										== 
										(0xfU 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 0xcU))) 
										& (3U 
										!= 
										(3U 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 6U)))) 
										& (1U 
										!= 
										(7U 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 3U)))) 
										& ((7U 
										!= 
										(7U 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 3U))) 
										| ((0x38U 
										== 
										(0x3fU 
										& vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U])) 
										| (0x39U 
										== 
										(0x3fU 
										& vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U])))))
										 ? 0x15dU
										 : 
										(((((5U 
										== 
										(0xfU 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 0xcU))) 
										& (3U 
										!= 
										(3U 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 6U)))) 
										& (0U 
										!= 
										(3U 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 6U)))) 
										& (1U 
										== 
										(7U 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 3U))))
										 ? 0x160U
										 : 
										(((((5U 
										== 
										(0xfU 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 0xcU))) 
										& (3U 
										== 
										(3U 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 6U)))) 
										& (1U 
										!= 
										(7U 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 3U)))) 
										& ((7U 
										!= 
										(7U 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 3U))) 
										| ((0x38U 
										== 
										(0x3fU 
										& vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U])) 
										| (0x39U 
										== 
										(0x3fU 
										& vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U])))))
										 ? 0x164U
										 : 
										((((5U 
										== 
										(0xfU 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 0xcU))) 
										& (3U 
										== 
										(3U 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 6U)))) 
										& (1U 
										== 
										(7U 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 3U))))
										 ? 0x177U
										 : 
										(((6U 
										== 
										(0xfU 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 0xcU))) 
										& (1U 
										== 
										(0xfU 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 8U))))
										 ? 0x1afU
										 : 
										(((6U 
										== 
										(0xfU 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 0xcU))) 
										& (1U 
										!= 
										(0xfU 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 8U))))
										 ? 0x16bU
										 : 
										(((7U 
										== 
										(0xfU 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 0xcU))) 
										& (~ 
										(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 8U)))
										 ? 0x134U
										 : 
										(((((0xbU 
										== 
										(0xfU 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 0xcU))) 
										& (((0U 
										== 
										(7U 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 6U))) 
										| (1U 
										== 
										(7U 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 6U)))) 
										| (2U 
										== 
										(7U 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 6U))))) 
										& ((0U 
										!= 
										(7U 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 6U))) 
										| (1U 
										!= 
										(7U 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 3U))))) 
										& ((7U 
										!= 
										(7U 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 3U))) 
										| (((((0x38U 
										== 
										(0x3fU 
										& vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U])) 
										| (0x39U 
										== 
										(0x3fU 
										& vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U]))) 
										| (0x3aU 
										== 
										(0x3fU 
										& vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U]))) 
										| (0x3bU 
										== 
										(0x3fU 
										& vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U]))) 
										| (0x3cU 
										== 
										(0x3fU 
										& vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U])))))
										 ? 0x107U
										 : 
										((((0xbU 
										== 
										(0xfU 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 0xcU))) 
										& ((3U 
										== 
										(7U 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 6U))) 
										| (7U 
										== 
										(7U 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 6U))))) 
										& ((7U 
										!= 
										(7U 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 3U))) 
										| (((((0x38U 
										== 
										(0x3fU 
										& vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U])) 
										| (0x39U 
										== 
										(0x3fU 
										& vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U]))) 
										| (0x3aU 
										== 
										(0x3fU 
										& vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U]))) 
										| (0x3bU 
										== 
										(0x3fU 
										& vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U]))) 
										| (0x3cU 
										== 
										(0x3fU 
										& vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U])))))
										 ? 0x114U
										 : 
										((((0xbU 
										== 
										(0xfU 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 0xcU))) 
										& (((4U 
										== 
										(7U 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 6U))) 
										| (5U 
										== 
										(7U 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 6U)))) 
										| (6U 
										== 
										(7U 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 6U))))) 
										& (1U 
										== 
										(7U 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 3U))))
										 ? 0xceU
										 : 
										(((((0xbU 
										== 
										(0xfU 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 0xcU))) 
										& (((4U 
										== 
										(7U 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 6U))) 
										| (5U 
										== 
										(7U 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 6U)))) 
										| (6U 
										== 
										(7U 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 6U))))) 
										& (1U 
										!= 
										(7U 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 3U)))) 
										& ((7U 
										!= 
										(7U 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 3U))) 
										| ((0x38U 
										== 
										(0x3fU 
										& vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U])) 
										| (0x39U 
										== 
										(0x3fU 
										& vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U])))))
										 ? 0xf6U
										 : 
										(((((((0xdU 
										== 
										(0xfU 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 0xcU))) 
										| (9U 
										== 
										(0xfU 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 0xcU)))) 
										| (0xcU 
										== 
										(0xfU 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 0xcU)))) 
										| (8U 
										== 
										(0xfU 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 0xcU)))) 
										& (((((((((0x11U 
										== 
										(0x1fU 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 4U))) 
										| (0x12U 
										== 
										(0x1fU 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 4U)))) 
										| (0x13U 
										== 
										(0x1fU 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 4U)))) 
										| (0x15U 
										== 
										(0x1fU 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 4U)))) 
										| (0x16U 
										== 
										(0x1fU 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 4U)))) 
										| (0x17U 
										== 
										(0x1fU 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 4U)))) 
										| (0x19U 
										== 
										(0x1fU 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 4U)))) 
										| (0x1aU 
										== 
										(0x1fU 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 4U)))) 
										| (0x1bU 
										== 
										(0x1fU 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 4U))))) 
										& ((7U 
										!= 
										(7U 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 3U))) 
										| ((0x38U 
										== 
										(0x3fU 
										& vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U])) 
										| (0x39U 
										== 
										(0x3fU 
										& vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U])))))
										 ? 0xfbU
										 : 
										(((((((((0xdU 
										== 
										(0xfU 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 0xcU))) 
										| (9U 
										== 
										(0xfU 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 0xcU)))) 
										| (0xcU 
										== 
										(0xfU 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 0xcU)))) 
										| (8U 
										== 
										(0xfU 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 0xcU)))) 
										& (((0U 
										== 
										(7U 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 6U))) 
										| (1U 
										== 
										(7U 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 6U)))) 
										| (2U 
										== 
										(7U 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 6U))))) 
										& (((~ 
										(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 0xcU)) 
										| (0U 
										!= 
										(7U 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 6U)))) 
										| (1U 
										!= 
										(7U 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 3U))))) 
										& ((vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 0xcU) 
										| (1U 
										!= 
										(7U 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 3U))))) 
										& ((7U 
										!= 
										(7U 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 3U))) 
										| (((((0x38U 
										== 
										(0x3fU 
										& vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U])) 
										| (0x39U 
										== 
										(0x3fU 
										& vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U]))) 
										| (0x3aU 
										== 
										(0x3fU 
										& vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U]))) 
										| (0x3bU 
										== 
										(0x3fU 
										& vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U]))) 
										| (0x3cU 
										== 
										(0x3fU 
										& vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U])))))
										 ? 0x100U
										 : 
										(((((0xdU 
										== 
										(0xfU 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 0xcU))) 
										| (9U 
										== 
										(0xfU 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 0xcU)))) 
										& ((3U 
										== 
										(7U 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 6U))) 
										| (7U 
										== 
										(7U 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 6U))))) 
										& ((7U 
										!= 
										(7U 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 3U))) 
										| (((((0x38U 
										== 
										(0x3fU 
										& vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U])) 
										| (0x39U 
										== 
										(0x3fU 
										& vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U]))) 
										| (0x3aU 
										== 
										(0x3fU 
										& vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U]))) 
										| (0x3bU 
										== 
										(0x3fU 
										& vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U]))) 
										| (0x3cU 
										== 
										(0x3fU 
										& vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U])))))
										 ? 0x10dU
										 : 
										(((((0xcU 
										== 
										(0xfU 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 0xcU))) 
										| (8U 
										== 
										(0xfU 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 0xcU)))) 
										& (0x10U 
										== 
										(0x1fU 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 4U)))) 
										| (((0xdU 
										== 
										(0xfU 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 0xcU))) 
										| (9U 
										== 
										(0xfU 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 0xcU)))) 
										& (((0x10U 
										== 
										(0x1fU 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 4U))) 
										| (0x14U 
										== 
										(0x1fU 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 4U)))) 
										| (0x18U 
										== 
										(0x1fU 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 4U))))))
										 ? 0xbdU
										 : 
										(((0xcU 
										== 
										(0xfU 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 0xcU))) 
										& (((0x28U 
										== 
										(0x3fU 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 3U))) 
										| (0x29U 
										== 
										(0x3fU 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 3U)))) 
										| (0x31U 
										== 
										(0x3fU 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 3U)))))
										 ? 0xc6U
										 : 
										((((((0xcU 
										== 
										(0xfU 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 0xcU))) 
										| (8U 
										== 
										(0xfU 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 0xcU)))) 
										& (3U 
										== 
										(3U 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 6U)))) 
										& (1U 
										!= 
										(7U 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 3U)))) 
										& ((7U 
										!= 
										(7U 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 3U))) 
										| (((((0x38U 
										== 
										(0x3fU 
										& vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U])) 
										| (0x39U 
										== 
										(0x3fU 
										& vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U]))) 
										| (0x3aU 
										== 
										(0x3fU 
										& vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U]))) 
										| (0x3bU 
										== 
										(0x3fU 
										& vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U]))) 
										| (0x3cU 
										== 
										(0x3fU 
										& vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U])))))
										 ? 0x123U
										 : 
										(((((((0xeU 
										== 
										(0xfU 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 0xcU))) 
										& (~ 
										(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 0xbU))) 
										& (3U 
										== 
										(3U 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 6U)))) 
										& (0U 
										!= 
										(7U 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 3U)))) 
										& (1U 
										!= 
										(7U 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 3U)))) 
										& ((7U 
										!= 
										(7U 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 3U))) 
										| ((0x38U 
										== 
										(0x3fU 
										& vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U])) 
										| (0x39U 
										== 
										(0x3fU 
										& vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U])))))
										 ? 0xe2U
										 : 
										(((0xeU 
										== 
										(0xfU 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 0xcU))) 
										& (((0U 
										== 
										(3U 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 6U))) 
										| (1U 
										== 
										(3U 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 6U)))) 
										| (2U 
										== 
										(3U 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 6U)))))
										 ? 0xd5U
										 : 0x800U)))))))))))))))))))))))))))))))))))))))))))))))))))))))))))
					   : 0U) : 
				      ((((0xdU == (0xfU 
						   & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[2U] 
						      >> 0x10U))) 
					 & (~ (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__trace_flag))) 
					& (0U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__interrupt_mask)))
				        ? 0x35U : (
						   ((0xfU 
						     == 
						     (0xfU 
						      & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[2U] 
							 >> 0x10U))) 
						    & (9U 
						       == 
						       (0xfU 
							& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[2U] 
							   >> 0x14U))))
						    ? 0x35U
						    : 
						   ((((0xfU 
						       == 
						       (0xfU 
							& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[2U] 
							   >> 0x10U))) 
						      & (1U 
							 == 
							 (0xfU 
							  & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[2U] 
							     >> 0x14U)))) 
						     & (0U 
							!= (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__load_ea)))
						     ? (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__load_ea)
						     : 
						    (((0xfU 
						       == 
						       (0xfU 
							& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[2U] 
							   >> 0x10U))) 
						      & (2U 
							 == 
							 (0xfU 
							  & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[2U] 
							     >> 0x14U))))
						      ? (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__perform_ea_read)
						      : 
						     (((0xfU 
							== 
							(0xfU 
							 & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[2U] 
							    >> 0x10U))) 
						       & (3U 
							  == 
							  (0xfU 
							   & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[2U] 
							      >> 0x14U))))
						       ? (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__perform_ea_write)
						       : 
						      ((((0xfU 
							  == 
							  (0xfU 
							   & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[2U] 
							      >> 0x10U))) 
							 & (4U 
							    == 
							    (0xfU 
							     & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[2U] 
								>> 0x14U)))) 
							& (0U 
							   != (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__save_ea)))
						        ? (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__save_ea)
						        : 
						       ((((0xfU 
							   == 
							   (0xfU 
							    & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[2U] 
							       >> 0x10U))) 
							  & (0xeU 
							     == 
							     (0xfU 
							      & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[2U] 
								 >> 0x14U)))) 
							 & (0U 
							    != (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__load_ea)))
							 ? (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__load_ea)
							 : 
							((((0xfU 
							    == 
							    (0xfU 
							     & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[2U] 
								>> 0x10U))) 
							   & (0xeU 
							      == 
							      (0xfU 
							       & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[2U] 
								  >> 0x14U)))) 
							  & (0U 
							     == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__load_ea)))
							  ? (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__perform_ea_read)
							  : 
							 (((0xfU 
							    == 
							    (0xfU 
							     & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[2U] 
								>> 0x10U))) 
							   & (0xfU 
							      == 
							      (0xfU 
							       & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[2U] 
								  >> 0x14U))))
							   ? (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__perform_ea_write)
							   : 
							  (((0xfU 
							     == 
							     (0xfU 
							      & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[2U] 
								 >> 0x10U))) 
							    & (0xbU 
							       == 
							       (0xfU 
								& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[2U] 
								   >> 0x14U))))
							    ? 0x23U
							    : 
							   (((0xfU 
							      == 
							      (0xfU 
							       & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[2U] 
								  >> 0x10U))) 
							     & (5U 
								== 
								(0xfU 
								 & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[2U] 
								    >> 0x14U))))
							     ? (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__microcode_branch_m__DOT__micro_pc_1)
							     : 
							    ((((0xfU 
								== 
								(0xfU 
								 & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[2U] 
								    >> 0x10U))) 
							       & (0xdU 
								  == 
								  (0xfU 
								   & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[2U] 
								      >> 0x14U)))) 
							      & (0U 
								 == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__interrupt_mask)))
							      ? 0x35U
							      : 
							     (((((((0xfU 
								    == 
								    (0xfU 
								     & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[2U] 
									>> 0x10U))) 
								   & (6U 
								      == 
								      (0xfU 
								       & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[2U] 
									  >> 0x14U)))) 
								  & (~ (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__finished))) 
								 | (((0xfU 
								      == 
								      (0xfU 
								       & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[2U] 
									  >> 0x10U))) 
								     & (7U 
									== 
									(0xfU 
									 & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[2U] 
									    >> 0x14U)))) 
								    & (~ (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir_valid)))) 
								| (((0xfU 
								     == 
								     (0xfU 
								      & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[2U] 
									 >> 0x10U))) 
								    & (8U 
								       == 
								       (0xfU 
									& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[2U] 
									   >> 0x14U)))) 
								   & (~ (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir_valid_32)))) 
							       | ((0xbU 
								   == 
								   (0xfU 
								    & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[2U] 
								       >> 0x10U))) 
								  & (~ (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir_valid))))
							       ? (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__microcode_branch_m__DOT__micro_pc_0)
							       : 
							      ((IData)(1U) 
							       + (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__microcode_branch_m__DOT__micro_pc_0))))))))))))))))))
		      : 0U));
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__result_BITS8_bit 
	= ((1U == (3U & ((IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ir) 
			 >> 6U))) ? (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__result_BITS8_val)
	    : (2U != (3U & ((IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ir) 
			    >> 6U))));
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__result_BITS32_bit 
	= ((1U == (3U & ((IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ir) 
			 >> 6U))) ? (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__result_BITS32_val)
	    : (2U != (3U & ((IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ir) 
			    >> 6U))));
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__result_ABCD2 
	= ((0xfff00000U & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__result) 
	   | (((IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__result_ABCD2_19_14b) 
	       << 0xeU) | ((0x3f00U & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__result) 
			   | ((0xf0U & ((IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__result_ABCD2_19_14b) 
					<< 4U)) | (0xfU 
						   & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__result 
						      >> 8U))))));
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__result_SBCD2 
	= ((0xfff00000U & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__result) 
	   | (((IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__result_SBCD2_19_14b) 
	       << 0xeU) | ((0x3f00U & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__result) 
			   | ((0xf0U & ((IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__result_SBCD2_19_14b) 
					<< 4U)) | (0xfU 
						   & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__result 
						      >> 8U))))));
}

void Vcpu_ram_uart_sim_ao68000::_settle__TOP__tb_m68k_ram_uart__ao68000_m__6(Vcpu_ram_uart_sim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        Vcpu_ram_uart_sim_ao68000::_settle__TOP__tb_m68k_ram_uart__ao68000_m__6\n"); );
    Vcpu_ram_uart_sim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__Dn_address 
	= (7U & ((0x200U & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[2U])
		  ? (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
		     >> 0xcU) : (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ea_reg)));
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__An_input 
	= ((1U == (3U & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[2U] 
			 >> 7U))) ? vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__address
	    : ((2U == (3U & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[2U] 
			     >> 7U))) ? ((vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
					  << 0x10U) 
					 | (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[1U] 
					    >> 0x10U))
	        : vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__result));
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__pc_change 
	= (((1U == (7U & ((vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[2U] 
			   << 0x1dU) | (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[1U] 
					>> 3U)))) | 
	    (5U == (7U & ((vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[2U] 
			   << 0x1dU) | (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[1U] 
					>> 3U))))) ? 3U
	    : (((3U == (7U & ((vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[2U] 
			       << 0x1dU) | (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[1U] 
					    >> 3U)))) 
		| ((4U == (7U & ((vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[2U] 
				  << 0x1dU) | (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[1U] 
					       >> 3U)))) 
		   & ((IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__size) 
		      >> 2U))) ? 2U : ((((2U == (7U 
						 & ((vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[2U] 
						     << 0x1dU) 
						    | (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[1U] 
						       >> 3U)))) 
					 | ((4U == 
					     (7U & 
					      ((vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[2U] 
						<< 0x1dU) 
					       | (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[1U] 
						  >> 3U)))) 
					    & (~ ((IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__size) 
						  >> 2U)))) 
					| ((((6U == 
					      (7U & 
					       ((vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[2U] 
						 << 0x1dU) 
						| (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[1U] 
						   >> 3U)))) 
					     & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir_valid)) 
					    & (0U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__decoder_trap))) 
					   & (~ (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__stop_flag))))
				        ? 1U : 0U)));
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__registers_m__DOT__pc_next 
	= ((1U == (7U & ((vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[2U] 
			  << 0x1dU) | (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[1U] 
				       >> 3U)))) ? vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__result
	    : ((2U == (7U & ((vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[2U] 
			      << 0x1dU) | (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[1U] 
					   >> 3U))))
	        ? ((IData)(2U) + vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__pc)
	        : ((3U == (7U & ((vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[2U] 
				  << 0x1dU) | (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[1U] 
					       >> 3U))))
		    ? ((IData)(4U) + vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__pc)
		    : ((4U == (7U & ((vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[2U] 
				      << 0x1dU) | (
						   vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[1U] 
						   >> 3U))))
		        ? ((4U & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__size))
			    ? ((IData)(4U) + vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__pc)
			    : ((IData)(2U) + vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__pc))
		        : ((5U == (7U & ((vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[2U] 
					  << 0x1dU) 
					 | (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[1U] 
					    >> 3U))))
			    ? ((vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[1U] 
				<< 0x10U) | (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[0U] 
					     >> 0x10U))
			    : (((((6U == (7U & ((vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[2U] 
						 << 0x1dU) 
						| (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[1U] 
						   >> 3U)))) 
				  & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir_valid)) 
				 & (0U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__decoder_trap))) 
				& (~ (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__stop_flag)))
			        ? ((IData)(2U) + vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__pc)
			        : vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__pc))))));
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__An_address 
	= ((1U == (3U & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[2U] 
			 >> 4U))) ? ((8U & ((IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__sr) 
					    >> 0xaU)) 
				     | (7U & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
					      >> 0xcU)))
	    : ((2U == (3U & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[2U] 
			     >> 4U))) ? 7U : ((3U == 
					       (3U 
						& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[2U] 
						   >> 4U)))
					       ? 0xfU
					       : ((8U 
						   & ((IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__sr) 
						      >> 0xaU)) 
						  | (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ea_reg)))));
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__micro_pc 
	= (0x1ffU & ((IData)(vlSymsp->TOP__tb_m68k_ram_uart.rst_n)
		      ? (((IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__jmp_address_trap) 
			  | (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__jmp_bus_trap))
			  ? 3U : ((((((((((((((((1U 
						 == 
						 (0xfU 
						  & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[2U] 
						     >> 0x10U))) 
						& (0x10U 
						   == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__movem_loop))) 
					       | ((2U 
						   == 
						   (0xfU 
						    & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[2U] 
						       >> 0x10U))) 
						  & (~ (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__movem_reg)))) 
					      | ((3U 
						  == 
						  (0xfU 
						   & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[2U] 
						      >> 0x10U))) 
						 & (0U 
						    == 
						    (0x3fU 
						     & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand2)))) 
					     | ((4U 
						 == 
						 (0xfU 
						  & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[2U] 
						     >> 0x10U))) 
						& (~ (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_signal)))) 
					    | ((5U 
						== 
						(0xfU 
						 & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[2U] 
						    >> 0x10U))) 
					       & ((1U 
						   == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__div_count)) 
						  | (0U 
						     == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__div_count))))) 
					   | ((6U == 
					       (0xfU 
						& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[2U] 
						   >> 0x10U))) 
					      & (~ (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__condition)))) 
					  | ((7U == 
					      (0xfU 
					       & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[2U] 
						  >> 0x10U))) 
					     & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__condition))) 
					 | ((8U == 
					     (0xfU 
					      & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[2U] 
						 >> 0x10U))) 
					    & (0xffffU 
					       == (0xffffU 
						   & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__result)))) 
					| ((9U == (0xfU 
						   & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[2U] 
						      >> 0x10U))) 
					   & (~ ((IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__sr) 
						 >> 1U)))) 
				       | ((0xaU == 
					   (0xfU & 
					    (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[2U] 
					     >> 0x10U))) 
					  & (~ ((IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ir) 
						>> 6U)))) 
				      | ((0xbU == (0xfU 
						   & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[2U] 
						      >> 0x10U))) 
					 & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__stop_flag))) 
				     | ((0xcU == (0xfU 
						  & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[2U] 
						     >> 0x10U))) 
					& (0U != (0xffU 
						  & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ir))))) 
				    | (((0xdU == (0xfU 
						  & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[2U] 
						     >> 0x10U))) 
					& (~ (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__trace_flag))) 
				       & (0U != (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__interrupt_mask)))) 
				   | ((0xeU == (0xfU 
						& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[2U] 
						   >> 0x10U))) 
				      & (~ (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__group_0_flag))))
				   ? ((IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__microcode_branch_m__DOT__micro_pc_0) 
				      + (0xfU & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[2U] 
						 >> 0x14U)))
				   : ((((0xbU == (0xfU 
						  & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[2U] 
						     >> 0x10U))) 
					& (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir_valid)) 
				       & (0U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__decoder_trap)))
				       ? ((IData)(vlSymsp->TOP__tb_m68k_ram_uart.rst_n)
					   ? ((((((
						   (((((0x27cU 
							== 
							(0xffffU 
							 & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U])) 
						       | (0xa7cU 
							  == 
							  (0xffffU 
							   & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U]))) 
						      | (0x7cU 
							 == 
							 (0xffffU 
							  & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U]))) 
						     | (0x4e70U 
							== 
							(0xffffU 
							 & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U]))) 
						    | (0x4e72U 
						       == 
						       (0xffffU 
							& vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U]))) 
						   | (0x4e73U 
						      == 
						      (0xffffU 
						       & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U]))) 
						  | (((((0x11bU 
							 == 
							 (0x3ffU 
							  & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
							     >> 6U))) 
							& (1U 
							   != 
							   (7U 
							    & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
							       >> 3U)))) 
						       & (0x3dU 
							  != 
							  (0x3fU 
							   & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U]))) 
						      & (0x3eU 
							 != 
							 (0x3fU 
							  & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U]))) 
						     & (0x3fU 
							!= 
							(0x3fU 
							 & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U])))) 
						 | (0x9ccU 
						    == 
						    (0x1fffU 
						     & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
							>> 3U)))) 
						| (0x9cdU 
						   == 
						   (0x1fffU 
						    & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
						       >> 3U)))) 
					       & (~ 
						  ((IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__sr) 
						   >> 0xdU)))
					       ? 0x1000U
					       : ((0x4afcU 
						   == 
						   (0xffffU 
						    & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U]))
						   ? 0x800U
						   : 
						  ((0xaU 
						    == 
						    (0xfU 
						     & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
							>> 0xcU)))
						    ? 0x1400U
						    : 
						   ((0xfU 
						     == 
						     (0xfU 
						      & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
							 >> 0xcU)))
						     ? 0x1600U
						     : 
						    (((((((((((((((0U 
								   == 
								   (0xfU 
								    & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
								       >> 0xcU))) 
								  & (4U 
								     != 
								     (7U 
								      & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
									 >> 9U)))) 
								 & (6U 
								    != 
								    (7U 
								     & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
									>> 9U)))) 
								& (7U 
								   != 
								   (7U 
								    & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
								       >> 9U)))) 
							       & (~ 
								  (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
								   >> 8U))) 
							      & (((0U 
								   == 
								   (3U 
								    & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
								       >> 6U))) 
								  | (1U 
								     == 
								     (3U 
								      & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
									 >> 6U)))) 
								 | (2U 
								    == 
								    (3U 
								     & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
									>> 6U))))) 
							     & (1U 
								!= 
								(7U 
								 & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
								    >> 3U)))) 
							    & ((7U 
								!= 
								(7U 
								 & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
								    >> 3U))) 
							       | ((0x38U 
								   == 
								   (0x3fU 
								    & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U])) 
								  | (0x39U 
								     == 
								     (0x3fU 
								      & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U]))))) 
							   & (0x3cU 
							      != 
							      (0xffffU 
							       & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U]))) 
							  & (0x7cU 
							     != 
							     (0xffffU 
							      & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U]))) 
							 & (0x23cU 
							    != 
							    (0xffffU 
							     & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U]))) 
							& (0x27cU 
							   != 
							   (0xffffU 
							    & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U]))) 
						       & (0xa3cU 
							  != 
							  (0xffffU 
							   & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U]))) 
						      & (0xa7cU 
							 != 
							 (0xffffU 
							  & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U])))
						      ? 0xaeU
						      : 
						     (((((((0x3cU 
							    == 
							    (0xffffU 
							     & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U])) 
							   | (0x7cU 
							      == 
							      (0xffffU 
							       & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U]))) 
							  | (0x23cU 
							     == 
							     (0xffffU 
							      & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U]))) 
							 | (0x27cU 
							    == 
							    (0xffffU 
							     & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U]))) 
							| (0xa3cU 
							   == 
							   (0xffffU 
							    & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U]))) 
						       | (0xa7cU 
							  == 
							  (0xffffU 
							   & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U])))
						       ? 0xb2U
						       : 
						      (((((0U 
							   == 
							   (0xfU 
							    & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
							       >> 0xcU))) 
							  & (4U 
							     == 
							     (7U 
							      & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
								 >> 6U)))) 
							 & (1U 
							    != 
							    (7U 
							     & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
								>> 3U)))) 
							& ((7U 
							    != 
							    (7U 
							     & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
								>> 3U))) 
							   | (((((0x38U 
								  == 
								  (0x3fU 
								   & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U])) 
								 | (0x39U 
								    == 
								    (0x3fU 
								     & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U]))) 
								| (0x3aU 
								   == 
								   (0x3fU 
								    & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U]))) 
							       | (0x3bU 
								  == 
								  (0x3fU 
								   & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U]))) 
							      | (0x3cU 
								 == 
								 (0x3fU 
								  & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U])))))
						        ? 0x147U
						        : 
						       (((((0U 
							    == 
							    (0xfU 
							     & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
								>> 0xcU))) 
							   & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
							      >> 8U)) 
							  & (1U 
							     == 
							     (7U 
							      & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
								 >> 3U)))) 
							 & ((0U 
							     == 
							     (3U 
							      & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
								 >> 6U))) 
							    | (1U 
							       == 
							       (3U 
								& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
								   >> 6U)))))
							 ? 0x62U
							 : 
							(((((0U 
							     == 
							     (0xfU 
							      & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
								 >> 0xcU))) 
							    & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
							       >> 8U)) 
							   & (1U 
							      == 
							      (7U 
							       & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
								  >> 3U)))) 
							  & ((2U 
							      == 
							      (3U 
							       & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
								  >> 6U))) 
							     | (3U 
								== 
								(3U 
								 & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
								    >> 6U)))))
							  ? 0x6aU
							  : 
							 ((((((0U 
							       == 
							       (0xfU 
								& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
								   >> 0xcU))) 
							      & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
								 >> 8U)) 
							     & (1U 
								!= 
								(7U 
								 & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
								    >> 3U)))) 
							    & (4U 
							       != 
							       (7U 
								& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
								   >> 6U)))) 
							   & ((7U 
							       != 
							       (7U 
								& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
								   >> 3U))) 
							      | ((0x38U 
								  == 
								  (0x3fU 
								   & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U])) 
								 | (0x39U 
								    == 
								    (0x3fU 
								     & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U])))))
							   ? 0x142U
							   : 
							  ((((((0U 
								== 
								(0xfU 
								 & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
								    >> 0xcU))) 
							       & (8U 
								  == 
								  (0xfU 
								   & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
								      >> 8U)))) 
							      & (0U 
								 == 
								 (3U 
								  & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
								     >> 6U)))) 
							     & (1U 
								!= 
								(7U 
								 & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
								    >> 3U)))) 
							    & ((7U 
								!= 
								(7U 
								 & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
								    >> 3U))) 
							       | ((((0x38U 
								     == 
								     (0x3fU 
								      & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U])) 
								    | (0x39U 
								       == 
								       (0x3fU 
									& vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U]))) 
								   | (0x3aU 
								      == 
								      (0x3fU 
								       & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U]))) 
								  | (0x3bU 
								     == 
								     (0x3fU 
								      & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U])))))
							    ? 0x13cU
							    : 
							   ((((((0U 
								 == 
								 (0xfU 
								  & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
								     >> 0xcU))) 
								& (8U 
								   == 
								   (0xfU 
								    & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
								       >> 8U)))) 
							       & (0U 
								  != 
								  (3U 
								   & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
								      >> 6U)))) 
							      & (1U 
								 != 
								 (7U 
								  & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
								     >> 3U)))) 
							     & ((7U 
								 != 
								 (7U 
								  & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
								     >> 3U))) 
								| ((0x38U 
								    == 
								    (0x3fU 
								     & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U])) 
								   | (0x39U 
								      == 
								      (0x3fU 
								       & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U])))))
							     ? 0x137U
							     : 
							    (((((((0U 
								   == 
								   (0xfU 
								    & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
								       >> 0xcU))) 
								  & (~ 
								     (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
								      >> 8U))) 
								 & (6U 
								    == 
								    (7U 
								     & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
									>> 9U)))) 
								& (3U 
								   != 
								   (3U 
								    & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
								       >> 6U)))) 
							       & (1U 
								  != 
								  (7U 
								   & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
								      >> 3U)))) 
							      & ((7U 
								  != 
								  (7U 
								   & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
								      >> 3U))) 
								 | ((0x38U 
								     == 
								     (0x3fU 
								      & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U])) 
								    | (0x39U 
								       == 
								       (0x3fU 
									& vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U])))))
							      ? 0xb8U
							      : 
							     (((((((0U 
								    == 
								    (3U 
								     & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
									>> 0xeU))) 
								   & (0U 
								      != 
								      (3U 
								       & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
									  >> 0xcU)))) 
								  & (1U 
								     != 
								     (7U 
								      & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
									 >> 6U)))) 
								 & ((7U 
								     != 
								     (7U 
								      & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
									 >> 6U))) 
								    | ((7U 
									== 
									(0x3fU 
									 & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
									    >> 6U))) 
								       | (0xfU 
									  == 
									  (0x3fU 
									   & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
									      >> 6U)))))) 
								& ((1U 
								    != 
								    (3U 
								     & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
									>> 0xcU))) 
								   | (1U 
								      != 
								      (7U 
								       & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
									  >> 3U))))) 
							       & ((7U 
								   != 
								   (7U 
								    & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
								       >> 3U))) 
								  | (((((0x38U 
									 == 
									 (0x3fU 
									  & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U])) 
									| (0x39U 
									   == 
									   (0x3fU 
									    & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U]))) 
								       | (0x3aU 
									  == 
									  (0x3fU 
									   & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U]))) 
								      | (0x3bU 
									 == 
									 (0x3fU 
									  & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U]))) 
								     | (0x3cU 
									== 
									(0x3fU 
									 & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U])))))
							       ? 0xe8U
							       : 
							      (((((0U 
								   == 
								   (3U 
								    & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
								       >> 0xeU))) 
								  & ((3U 
								      == 
								      (3U 
								       & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
									  >> 0xcU))) 
								     | (2U 
									== 
									(3U 
									 & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
									    >> 0xcU))))) 
								 & (1U 
								    == 
								    (7U 
								     & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
									>> 6U)))) 
								& ((7U 
								    != 
								    (7U 
								     & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
									>> 3U))) 
								   | (((((0x38U 
									  == 
									  (0x3fU 
									   & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U])) 
									 | (0x39U 
									    == 
									    (0x3fU 
									     & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U]))) 
									| (0x3aU 
									   == 
									   (0x3fU 
									    & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U]))) 
								       | (0x3bU 
									  == 
									  (0x3fU 
									   & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U]))) 
								      | (0x3cU 
									 == 
									 (0x3fU 
									  & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U])))))
							        ? 0xf0U
							        : 
							       (((((4U 
								    == 
								    (0xfU 
								     & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
									>> 0xcU))) 
								   & (1U 
								      != 
								      (7U 
								       & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
									  >> 3U)))) 
								  & (((7U 
								       != 
								       (7U 
									& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
									   >> 3U))) 
								      | (0x38U 
									 == 
									 (0x3fU 
									  & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U]))) 
								     | (0x39U 
									== 
									(0x3fU 
									 & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U])))) 
								 & ((((((0U 
									 == 
									 (0xfU 
									  & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
									     >> 8U))) 
									& (3U 
									   != 
									   (3U 
									    & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
									       >> 6U)))) 
								       | ((2U 
									   == 
									   (0xfU 
									    & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
									       >> 8U))) 
									  & (3U 
									     != 
									     (3U 
									      & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 6U))))) 
								      | ((4U 
									  == 
									  (0xfU 
									   & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
									      >> 8U))) 
									 & (3U 
									    != 
									    (3U 
									     & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 6U))))) 
								     | ((6U 
									 == 
									 (0xfU 
									  & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
									     >> 8U))) 
									& (3U 
									   != 
									   (3U 
									    & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
									       >> 6U))))) 
								    | (0x20U 
								       == 
								       (0x3fU 
									& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
									   >> 6U)))))
								 ? 0x152U
								 : 
								((((0x103U 
								    == 
								    (0x3ffU 
								     & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
									>> 6U))) 
								   & (1U 
								      != 
								      (7U 
								       & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
									  >> 3U)))) 
								  & (((7U 
								       != 
								       (7U 
									& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
									   >> 3U))) 
								      | (0x38U 
									 == 
									 (0x3fU 
									  & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U]))) 
								     | (0x39U 
									== 
									(0x3fU 
									 & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U]))))
								  ? 0x185U
								  : 
								 (((((4U 
								      == 
								      (0xfU 
								       & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
									  >> 0xcU))) 
								     & (6U 
									== 
									(7U 
									 & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
									    >> 6U)))) 
								    & (1U 
								       != 
								       (7U 
									& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
									   >> 3U)))) 
								   & ((7U 
								       != 
								       (7U 
									& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
									   >> 3U))) 
								      | (((((0x38U 
									     == 
									     (0x3fU 
									      & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U])) 
									    | (0x39U 
									       == 
									       (0x3fU 
										& vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U]))) 
									   | (0x3aU 
									      == 
									      (0x3fU 
									       & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U]))) 
									  | (0x3bU 
									     == 
									     (0x3fU 
									      & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U]))) 
									 | (0x3cU 
									    == 
									    (0x3fU 
									     & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U])))))
								   ? 0x11aU
								   : 
								  (((((4U 
								       == 
								       (0xfU 
									& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
									   >> 0xcU))) 
								      & (7U 
									 == 
									 (7U 
									  & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
									     >> 6U)))) 
								     & ((((2U 
									   == 
									   (7U 
									    & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
									       >> 3U))) 
									  | (5U 
									     == 
									     (7U 
									      & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 3U)))) 
									 | (6U 
									    == 
									    (7U 
									     & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 3U)))) 
									| (7U 
									   == 
									   (7U 
									    & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
									       >> 3U))))) 
								    & ((7U 
									!= 
									(7U 
									 & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
									    >> 3U))) 
								       | ((((0x38U 
									     == 
									     (0x3fU 
									      & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U])) 
									    | (0x39U 
									       == 
									       (0x3fU 
										& vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U]))) 
									   | (0x3aU 
									      == 
									      (0x3fU 
									       & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U]))) 
									  | (0x3bU 
									     == 
									     (0x3fU 
									      & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U])))))
								    ? 0xa2U
								    : 
								   (((((0x113U 
									== 
									(0x3ffU 
									 & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
									    >> 6U))) 
								       | (0x11bU 
									  == 
									  (0x3ffU 
									   & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
									      >> 6U)))) 
								      & (1U 
									 != 
									 (7U 
									  & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
									     >> 3U)))) 
								     & ((7U 
									 != 
									 (7U 
									  & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
									     >> 3U))) 
									| (((((0x38U 
									       == 
									       (0x3fU 
										& vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U])) 
									      | (0x39U 
										== 
										(0x3fU 
										& vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U]))) 
									     | (0x3aU 
										== 
										(0x3fU 
										& vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U]))) 
									    | (0x3bU 
									       == 
									       (0x3fU 
										& vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U]))) 
									   | (0x3cU 
									      == 
									      (0x3fU 
									       & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U])))))
								     ? 0x188U
								     : 
								    (((4U 
								       == 
								       (0xfU 
									& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
									   >> 0xcU))) 
								      & ((0x108U 
									  == 
									  (0x1ffU 
									   & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
									      >> 3U))) 
									 | ((0x11U 
									     == 
									     (0x1fU 
									      & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 7U))) 
									    & (0U 
									       == 
									       (7U 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 3U))))))
								      ? 0x155U
								      : 
								     (((((0x121U 
									  == 
									  (0x3ffU 
									   & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
									      >> 6U))) 
									 & (0U 
									    != 
									    (7U 
									     & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 3U)))) 
									& ((((2U 
									      == 
									      (7U 
									       & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 3U))) 
									     | (5U 
										== 
										(7U 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 3U)))) 
									    | (6U 
									       == 
									       (7U 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 3U)))) 
									   | (7U 
									      == 
									      (7U 
									       & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 3U))))) 
								       & ((7U 
									   != 
									   (7U 
									    & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
									       >> 3U))) 
									  | ((((0x38U 
										== 
										(0x3fU 
										& vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U])) 
									       | (0x39U 
										== 
										(0x3fU 
										& vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U]))) 
									      | (0x3aU 
										== 
										(0x3fU 
										& vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U]))) 
									     | (0x3bU 
										== 
										(0x3fU 
										& vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U])))))
								       ? 0xa8U
								       : 
								      (((0x91U 
									 == 
									 (0x1ffU 
									  & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
									     >> 7U))) 
									& (4U 
									   == 
									   (7U 
									    & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
									       >> 3U))))
								        ? 0x83U
								        : 
								       ((((0x91U 
									   == 
									   (0x1ffU 
									    & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
									       >> 7U))) 
									  & ((((2U 
										== 
										(7U 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 3U))) 
									       | (5U 
										== 
										(7U 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 3U)))) 
									      | (6U 
										== 
										(7U 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 3U)))) 
									     | (7U 
										== 
										(7U 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 3U))))) 
									 & (((7U 
									      != 
									      (7U 
									       & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 3U))) 
									     | (0x38U 
										== 
										(0x3fU 
										& vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U]))) 
									    | (0x39U 
									       == 
									       (0x3fU 
										& vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U]))))
									 ? 0x93U
									 : 
									(((((0x4aU 
									     == 
									     (0xffU 
									      & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 8U))) 
									    & (3U 
									       != 
									       (3U 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 6U)))) 
									   & (1U 
									      != 
									      (7U 
									       & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 3U)))) 
									  & ((7U 
									      != 
									      (7U 
									       & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 3U))) 
									     | ((0x38U 
										== 
										(0x3fU 
										& vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U])) 
										| (0x39U 
										== 
										(0x3fU 
										& vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U])))))
									  ? 0x159U
									  : 
									 ((((0x12bU 
									     == 
									     (0x3ffU 
									      & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 6U))) 
									    & (1U 
									       != 
									       (7U 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 3U)))) 
									   & ((7U 
									       != 
									       (7U 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 3U))) 
									      | ((0x38U 
										== 
										(0x3fU 
										& vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U])) 
										| (0x39U 
										== 
										(0x3fU 
										& vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U])))))
									   ? 0x14dU
									   : 
									  ((((0x99U 
									      == 
									      (0x1ffU 
									       & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 7U))) 
									     & (((((2U 
										== 
										(7U 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 3U))) 
										| (3U 
										== 
										(7U 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 3U)))) 
										| (5U 
										== 
										(7U 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 3U)))) 
										| (6U 
										== 
										(7U 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 3U)))) 
										| (7U 
										== 
										(7U 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 3U))))) 
									    & ((7U 
										!= 
										(7U 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 3U))) 
									       | ((((0x38U 
										== 
										(0x3fU 
										& vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U])) 
										| (0x39U 
										== 
										(0x3fU 
										& vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U]))) 
										| (0x3aU 
										== 
										(0x3fU 
										& vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U]))) 
										| (0x3bU 
										== 
										(0x3fU 
										& vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U])))))
									    ? 0x74U
									    : 
									   ((0x4e4U 
									     == 
									     (0xfffU 
									      & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 4U)))
									     ? 0x1e1U
									     : 
									    ((0x9caU 
									      == 
									      (0x1fffU 
									       & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 3U)))
									      ? 0x194U
									      : 
									     ((0x9cbU 
									       == 
									       (0x1fffU 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 3U)))
									       ? 0x1a4U
									       : 
									      ((0x9ccU 
										== 
										(0x1fffU 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 3U)))
									        ? 0x18cU
									        : 
									       ((0x9cdU 
										== 
										(0x1fffU 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 3U)))
										 ? 0x191U
										 : 
										((0x4e70U 
										== 
										(0xffffU 
										& vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U]))
										 ? 0x1e6U
										 : 
										((0x4e71U 
										== 
										(0xffffU 
										& vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U]))
										 ? 0x1e0U
										 : 
										((0x4e72U 
										== 
										(0xffffU 
										& vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U]))
										 ? 0x1e9U
										 : 
										(((0x4e73U 
										== 
										(0xffffU 
										& vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U])) 
										| (0x4e77U 
										== 
										(0xffffU 
										& vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U])))
										 ? 0x1ccU
										 : 
										((0x4e75U 
										== 
										(0xffffU 
										& vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U]))
										 ? 0x1d8U
										 : 
										((0x4e76U 
										== 
										(0xffffU 
										& vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U]))
										 ? 0x1e3U
										 : 
										((((0x13aU 
										== 
										(0x3ffU 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 6U))) 
										& ((((2U 
										== 
										(7U 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 3U))) 
										| (5U 
										== 
										(7U 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 3U)))) 
										| (6U 
										== 
										(7U 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 3U)))) 
										| (7U 
										== 
										(7U 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 3U))))) 
										& ((7U 
										!= 
										(7U 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 3U))) 
										| ((((0x38U 
										== 
										(0x3fU 
										& vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U])) 
										| (0x39U 
										== 
										(0x3fU 
										& vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U]))) 
										| (0x3aU 
										== 
										(0x3fU 
										& vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U]))) 
										| (0x3bU 
										== 
										(0x3fU 
										& vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U])))))
										 ? 0x1c3U
										 : 
										((((0x13bU 
										== 
										(0x3ffU 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 6U))) 
										& ((((2U 
										== 
										(7U 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 3U))) 
										| (5U 
										== 
										(7U 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 3U)))) 
										| (6U 
										== 
										(7U 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 3U)))) 
										| (7U 
										== 
										(7U 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 3U))))) 
										& ((7U 
										!= 
										(7U 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 3U))) 
										| ((((0x38U 
										== 
										(0x3fU 
										& vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U])) 
										| (0x39U 
										== 
										(0x3fU 
										& vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U]))) 
										| (0x3aU 
										== 
										(0x3fU 
										& vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U]))) 
										| (0x3bU 
										== 
										(0x3fU 
										& vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U])))))
										 ? 0x1bbU
										 : 
										(((((5U 
										== 
										(0xfU 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 0xcU))) 
										& (3U 
										!= 
										(3U 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 6U)))) 
										& (1U 
										!= 
										(7U 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 3U)))) 
										& ((7U 
										!= 
										(7U 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 3U))) 
										| ((0x38U 
										== 
										(0x3fU 
										& vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U])) 
										| (0x39U 
										== 
										(0x3fU 
										& vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U])))))
										 ? 0x15dU
										 : 
										(((((5U 
										== 
										(0xfU 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 0xcU))) 
										& (3U 
										!= 
										(3U 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 6U)))) 
										& (0U 
										!= 
										(3U 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 6U)))) 
										& (1U 
										== 
										(7U 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 3U))))
										 ? 0x160U
										 : 
										(((((5U 
										== 
										(0xfU 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 0xcU))) 
										& (3U 
										== 
										(3U 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 6U)))) 
										& (1U 
										!= 
										(7U 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 3U)))) 
										& ((7U 
										!= 
										(7U 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 3U))) 
										| ((0x38U 
										== 
										(0x3fU 
										& vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U])) 
										| (0x39U 
										== 
										(0x3fU 
										& vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U])))))
										 ? 0x164U
										 : 
										((((5U 
										== 
										(0xfU 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 0xcU))) 
										& (3U 
										== 
										(3U 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 6U)))) 
										& (1U 
										== 
										(7U 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 3U))))
										 ? 0x177U
										 : 
										(((6U 
										== 
										(0xfU 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 0xcU))) 
										& (1U 
										== 
										(0xfU 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 8U))))
										 ? 0x1afU
										 : 
										(((6U 
										== 
										(0xfU 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 0xcU))) 
										& (1U 
										!= 
										(0xfU 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 8U))))
										 ? 0x16bU
										 : 
										(((7U 
										== 
										(0xfU 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 0xcU))) 
										& (~ 
										(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 8U)))
										 ? 0x134U
										 : 
										(((((0xbU 
										== 
										(0xfU 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 0xcU))) 
										& (((0U 
										== 
										(7U 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 6U))) 
										| (1U 
										== 
										(7U 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 6U)))) 
										| (2U 
										== 
										(7U 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 6U))))) 
										& ((0U 
										!= 
										(7U 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 6U))) 
										| (1U 
										!= 
										(7U 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 3U))))) 
										& ((7U 
										!= 
										(7U 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 3U))) 
										| (((((0x38U 
										== 
										(0x3fU 
										& vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U])) 
										| (0x39U 
										== 
										(0x3fU 
										& vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U]))) 
										| (0x3aU 
										== 
										(0x3fU 
										& vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U]))) 
										| (0x3bU 
										== 
										(0x3fU 
										& vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U]))) 
										| (0x3cU 
										== 
										(0x3fU 
										& vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U])))))
										 ? 0x107U
										 : 
										((((0xbU 
										== 
										(0xfU 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 0xcU))) 
										& ((3U 
										== 
										(7U 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 6U))) 
										| (7U 
										== 
										(7U 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 6U))))) 
										& ((7U 
										!= 
										(7U 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 3U))) 
										| (((((0x38U 
										== 
										(0x3fU 
										& vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U])) 
										| (0x39U 
										== 
										(0x3fU 
										& vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U]))) 
										| (0x3aU 
										== 
										(0x3fU 
										& vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U]))) 
										| (0x3bU 
										== 
										(0x3fU 
										& vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U]))) 
										| (0x3cU 
										== 
										(0x3fU 
										& vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U])))))
										 ? 0x114U
										 : 
										((((0xbU 
										== 
										(0xfU 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 0xcU))) 
										& (((4U 
										== 
										(7U 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 6U))) 
										| (5U 
										== 
										(7U 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 6U)))) 
										| (6U 
										== 
										(7U 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 6U))))) 
										& (1U 
										== 
										(7U 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 3U))))
										 ? 0xceU
										 : 
										(((((0xbU 
										== 
										(0xfU 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 0xcU))) 
										& (((4U 
										== 
										(7U 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 6U))) 
										| (5U 
										== 
										(7U 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 6U)))) 
										| (6U 
										== 
										(7U 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 6U))))) 
										& (1U 
										!= 
										(7U 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 3U)))) 
										& ((7U 
										!= 
										(7U 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 3U))) 
										| ((0x38U 
										== 
										(0x3fU 
										& vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U])) 
										| (0x39U 
										== 
										(0x3fU 
										& vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U])))))
										 ? 0xf6U
										 : 
										(((((((0xdU 
										== 
										(0xfU 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 0xcU))) 
										| (9U 
										== 
										(0xfU 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 0xcU)))) 
										| (0xcU 
										== 
										(0xfU 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 0xcU)))) 
										| (8U 
										== 
										(0xfU 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 0xcU)))) 
										& (((((((((0x11U 
										== 
										(0x1fU 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 4U))) 
										| (0x12U 
										== 
										(0x1fU 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 4U)))) 
										| (0x13U 
										== 
										(0x1fU 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 4U)))) 
										| (0x15U 
										== 
										(0x1fU 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 4U)))) 
										| (0x16U 
										== 
										(0x1fU 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 4U)))) 
										| (0x17U 
										== 
										(0x1fU 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 4U)))) 
										| (0x19U 
										== 
										(0x1fU 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 4U)))) 
										| (0x1aU 
										== 
										(0x1fU 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 4U)))) 
										| (0x1bU 
										== 
										(0x1fU 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 4U))))) 
										& ((7U 
										!= 
										(7U 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 3U))) 
										| ((0x38U 
										== 
										(0x3fU 
										& vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U])) 
										| (0x39U 
										== 
										(0x3fU 
										& vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U])))))
										 ? 0xfbU
										 : 
										(((((((((0xdU 
										== 
										(0xfU 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 0xcU))) 
										| (9U 
										== 
										(0xfU 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 0xcU)))) 
										| (0xcU 
										== 
										(0xfU 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 0xcU)))) 
										| (8U 
										== 
										(0xfU 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 0xcU)))) 
										& (((0U 
										== 
										(7U 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 6U))) 
										| (1U 
										== 
										(7U 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 6U)))) 
										| (2U 
										== 
										(7U 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 6U))))) 
										& (((~ 
										(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 0xcU)) 
										| (0U 
										!= 
										(7U 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 6U)))) 
										| (1U 
										!= 
										(7U 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 3U))))) 
										& ((vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 0xcU) 
										| (1U 
										!= 
										(7U 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 3U))))) 
										& ((7U 
										!= 
										(7U 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 3U))) 
										| (((((0x38U 
										== 
										(0x3fU 
										& vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U])) 
										| (0x39U 
										== 
										(0x3fU 
										& vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U]))) 
										| (0x3aU 
										== 
										(0x3fU 
										& vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U]))) 
										| (0x3bU 
										== 
										(0x3fU 
										& vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U]))) 
										| (0x3cU 
										== 
										(0x3fU 
										& vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U])))))
										 ? 0x100U
										 : 
										(((((0xdU 
										== 
										(0xfU 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 0xcU))) 
										| (9U 
										== 
										(0xfU 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 0xcU)))) 
										& ((3U 
										== 
										(7U 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 6U))) 
										| (7U 
										== 
										(7U 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 6U))))) 
										& ((7U 
										!= 
										(7U 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 3U))) 
										| (((((0x38U 
										== 
										(0x3fU 
										& vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U])) 
										| (0x39U 
										== 
										(0x3fU 
										& vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U]))) 
										| (0x3aU 
										== 
										(0x3fU 
										& vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U]))) 
										| (0x3bU 
										== 
										(0x3fU 
										& vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U]))) 
										| (0x3cU 
										== 
										(0x3fU 
										& vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U])))))
										 ? 0x10dU
										 : 
										(((((0xcU 
										== 
										(0xfU 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 0xcU))) 
										| (8U 
										== 
										(0xfU 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 0xcU)))) 
										& (0x10U 
										== 
										(0x1fU 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 4U)))) 
										| (((0xdU 
										== 
										(0xfU 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 0xcU))) 
										| (9U 
										== 
										(0xfU 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 0xcU)))) 
										& (((0x10U 
										== 
										(0x1fU 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 4U))) 
										| (0x14U 
										== 
										(0x1fU 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 4U)))) 
										| (0x18U 
										== 
										(0x1fU 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 4U))))))
										 ? 0xbdU
										 : 
										(((0xcU 
										== 
										(0xfU 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 0xcU))) 
										& (((0x28U 
										== 
										(0x3fU 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 3U))) 
										| (0x29U 
										== 
										(0x3fU 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 3U)))) 
										| (0x31U 
										== 
										(0x3fU 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 3U)))))
										 ? 0xc6U
										 : 
										((((((0xcU 
										== 
										(0xfU 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 0xcU))) 
										| (8U 
										== 
										(0xfU 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 0xcU)))) 
										& (3U 
										== 
										(3U 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 6U)))) 
										& (1U 
										!= 
										(7U 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 3U)))) 
										& ((7U 
										!= 
										(7U 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 3U))) 
										| (((((0x38U 
										== 
										(0x3fU 
										& vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U])) 
										| (0x39U 
										== 
										(0x3fU 
										& vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U]))) 
										| (0x3aU 
										== 
										(0x3fU 
										& vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U]))) 
										| (0x3bU 
										== 
										(0x3fU 
										& vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U]))) 
										| (0x3cU 
										== 
										(0x3fU 
										& vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U])))))
										 ? 0x123U
										 : 
										(((((((0xeU 
										== 
										(0xfU 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 0xcU))) 
										& (~ 
										(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 0xbU))) 
										& (3U 
										== 
										(3U 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 6U)))) 
										& (0U 
										!= 
										(7U 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 3U)))) 
										& (1U 
										!= 
										(7U 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 3U)))) 
										& ((7U 
										!= 
										(7U 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 3U))) 
										| ((0x38U 
										== 
										(0x3fU 
										& vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U])) 
										| (0x39U 
										== 
										(0x3fU 
										& vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U])))))
										 ? 0xe2U
										 : 
										(((0xeU 
										== 
										(0xfU 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 0xcU))) 
										& (((0U 
										== 
										(3U 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 6U))) 
										| (1U 
										== 
										(3U 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 6U)))) 
										| (2U 
										== 
										(3U 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir[2U] 
										>> 6U)))))
										 ? 0xd5U
										 : 0x800U)))))))))))))))))))))))))))))))))))))))))))))))))))))))))))
					   : 0U) : 
				      ((((0xdU == (0xfU 
						   & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[2U] 
						      >> 0x10U))) 
					 & (~ (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__trace_flag))) 
					& (0U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__interrupt_mask)))
				        ? 0x35U : (
						   ((0xfU 
						     == 
						     (0xfU 
						      & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[2U] 
							 >> 0x10U))) 
						    & (9U 
						       == 
						       (0xfU 
							& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[2U] 
							   >> 0x14U))))
						    ? 0x35U
						    : 
						   ((((0xfU 
						       == 
						       (0xfU 
							& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[2U] 
							   >> 0x10U))) 
						      & (1U 
							 == 
							 (0xfU 
							  & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[2U] 
							     >> 0x14U)))) 
						     & (0U 
							!= (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__load_ea)))
						     ? (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__load_ea)
						     : 
						    (((0xfU 
						       == 
						       (0xfU 
							& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[2U] 
							   >> 0x10U))) 
						      & (2U 
							 == 
							 (0xfU 
							  & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[2U] 
							     >> 0x14U))))
						      ? (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__perform_ea_read)
						      : 
						     (((0xfU 
							== 
							(0xfU 
							 & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[2U] 
							    >> 0x10U))) 
						       & (3U 
							  == 
							  (0xfU 
							   & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[2U] 
							      >> 0x14U))))
						       ? (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__perform_ea_write)
						       : 
						      ((((0xfU 
							  == 
							  (0xfU 
							   & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[2U] 
							      >> 0x10U))) 
							 & (4U 
							    == 
							    (0xfU 
							     & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[2U] 
								>> 0x14U)))) 
							& (0U 
							   != (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__save_ea)))
						        ? (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__save_ea)
						        : 
						       ((((0xfU 
							   == 
							   (0xfU 
							    & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[2U] 
							       >> 0x10U))) 
							  & (0xeU 
							     == 
							     (0xfU 
							      & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[2U] 
								 >> 0x14U)))) 
							 & (0U 
							    != (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__load_ea)))
							 ? (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__load_ea)
							 : 
							((((0xfU 
							    == 
							    (0xfU 
							     & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[2U] 
								>> 0x10U))) 
							   & (0xeU 
							      == 
							      (0xfU 
							       & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[2U] 
								  >> 0x14U)))) 
							  & (0U 
							     == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__load_ea)))
							  ? (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__perform_ea_read)
							  : 
							 (((0xfU 
							    == 
							    (0xfU 
							     & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[2U] 
								>> 0x10U))) 
							   & (0xfU 
							      == 
							      (0xfU 
							       & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[2U] 
								  >> 0x14U))))
							   ? (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__perform_ea_write)
							   : 
							  (((0xfU 
							     == 
							     (0xfU 
							      & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[2U] 
								 >> 0x10U))) 
							    & (0xbU 
							       == 
							       (0xfU 
								& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[2U] 
								   >> 0x14U))))
							    ? 0x23U
							    : 
							   (((0xfU 
							      == 
							      (0xfU 
							       & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[2U] 
								  >> 0x10U))) 
							     & (5U 
								== 
								(0xfU 
								 & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[2U] 
								    >> 0x14U))))
							     ? (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__microcode_branch_m__DOT__micro_pc_1)
							     : 
							    ((((0xfU 
								== 
								(0xfU 
								 & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[2U] 
								    >> 0x10U))) 
							       & (0xdU 
								  == 
								  (0xfU 
								   & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[2U] 
								      >> 0x14U)))) 
							      & (0U 
								 == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__interrupt_mask)))
							      ? 0x35U
							      : 
							     (((((((0xfU 
								    == 
								    (0xfU 
								     & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[2U] 
									>> 0x10U))) 
								   & (6U 
								      == 
								      (0xfU 
								       & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[2U] 
									  >> 0x14U)))) 
								  & (~ (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__finished))) 
								 | (((0xfU 
								      == 
								      (0xfU 
								       & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[2U] 
									  >> 0x10U))) 
								     & (7U 
									== 
									(0xfU 
									 & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[2U] 
									    >> 0x14U)))) 
								    & (~ (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir_valid)))) 
								| (((0xfU 
								     == 
								     (0xfU 
								      & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[2U] 
									 >> 0x10U))) 
								    & (8U 
								       == 
								       (0xfU 
									& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[2U] 
									   >> 0x14U)))) 
								   & (~ (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir_valid_32)))) 
							       | ((0xbU 
								   == 
								   (0xfU 
								    & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[2U] 
								       >> 0x10U))) 
								  & (~ (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__prefetch_ir_valid))))
							       ? (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__microcode_branch_m__DOT__micro_pc_0)
							       : 
							      ((IData)(1U) 
							       + (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__microcode_branch_m__DOT__micro_pc_0))))))))))))))))))
		      : 0U));
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__result_BITS8_bit 
	= ((1U == (3U & ((IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ir) 
			 >> 6U))) ? (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__result_BITS8_val)
	    : (2U != (3U & ((IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ir) 
			    >> 6U))));
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__result_BITS32_bit 
	= ((1U == (3U & ((IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ir) 
			 >> 6U))) ? (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__result_BITS32_val)
	    : (2U != (3U & ((IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ir) 
			    >> 6U))));
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__result_ABCD2 
	= ((0xfff00000U & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__result) 
	   | (((IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__result_ABCD2_19_14b) 
	       << 0xeU) | ((0x3f00U & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__result) 
			   | ((0xf0U & ((IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__result_ABCD2_19_14b) 
					<< 4U)) | (0xfU 
						   & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__result 
						      >> 8U))))));
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__result_SBCD2 
	= ((0xfff00000U & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__result) 
	   | (((IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__result_SBCD2_19_14b) 
	       << 0xeU) | ((0x3f00U & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__result) 
			   | ((0xf0U & ((IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__result_SBCD2_19_14b) 
					<< 4U)) | (0xfU 
						   & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__result 
						      >> 8U))))));
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__result_blocking 
	= (((0xcU == (0x1fU & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[2U] 
			       >> 0xbU))) & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__decoder_alu_reg)
	    ? (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand1 
	       | vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand2)
	    : (((0xcU == (0x1fU & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[2U] 
				   >> 0xbU))) & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__decoder_alu_reg 
						 >> 1U))
	        ? (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand1 
		   & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand2)
	        : (((0xcU == (0x1fU & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[2U] 
				       >> 0xbU))) & 
		    (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__decoder_alu_reg 
		     >> 2U)) ? (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand1 
				^ vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand2)
		    : (((0xcU == (0x1fU & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[2U] 
					   >> 0xbU))) 
			& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__decoder_alu_reg 
			   >> 3U)) ? (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand1 
				      + vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand2)
		        : (((0xcU == (0x1fU & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[2U] 
					       >> 0xbU))) 
			    & ((vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__decoder_alu_reg 
				>> 4U) | (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__decoder_alu_reg 
					  >> 5U))) ? 
			   (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand1 
			    - vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand2)
			    : (((0xdU == (0x1fU & (
						   vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[2U] 
						   >> 0xbU))) 
				& (4U == (7U & ((IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ir) 
						>> 0xcU))))
			        ? ((0xff800000U & (
						   (((0xffU 
						      & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand1) 
						     + 
						     (0xffU 
						      & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand2)) 
						    + 
						    (1U 
						     & ((IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__sr) 
							>> 4U))) 
						   << 0x17U)) 
				   | ((0x700000U & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__result) 
				      | ((0xfc000U 
					  & (((0xfU 
					       & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand1 
						  >> 4U)) 
					      + (0xfU 
						 & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand2 
						    >> 4U))) 
					     << 0xeU)) 
					 | ((0x3f00U 
					     & (((9U 
						  < (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__result_ABCD_13_8a))
						  ? 
						 ((IData)(6U) 
						  + (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__result_ABCD_13_8a))
						  : (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__result_ABCD_13_8a)) 
						<< 8U)) 
					    | (0xffU 
					       & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__result)))))
			        : (((0xdU == (0x1fU 
					      & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[2U] 
						 >> 0xbU))) 
				    & (0U == (7U & 
					      ((IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ir) 
					       >> 0xcU))))
				    ? ((0xff800000U 
					& ((((0xffU 
					      & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand1) 
					     - (0xffU 
						& vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand2)) 
					    - (1U & 
					       ((IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__sr) 
						>> 4U))) 
					   << 0x17U)) 
				       | ((0x700000U 
					   & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__result) 
					  | ((0xfc000U 
					      & ((((IData)(0x20U) 
						   + 
						   (0xfU 
						    & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand1 
						       >> 4U))) 
						  - 
						  (0xfU 
						   & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand2 
						      >> 4U))) 
						 << 0xeU)) 
					     | ((0x3f00U 
						 & (((0x20U 
						      > (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__result_SBCD_13_8a))
						      ? 
						     ((IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__result_SBCD_13_8a) 
						      - (IData)(6U))
						      : (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__result_SBCD_13_8a)) 
						    << 8U)) 
						| (0xffU 
						   & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__result)))))
				    : (((0xeU == (0x1fU 
						  & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[2U] 
						     >> 0xbU))) 
					& (4U == (7U 
						  & ((IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ir) 
						     >> 0xcU))))
				        ? vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__result_ABCD2
				        : (((0xeU == 
					     (0x1fU 
					      & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[2U] 
						 >> 0xbU))) 
					    & (0U == 
					       (7U 
						& ((IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ir) 
						   >> 0xcU))))
					    ? vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__result_SBCD2
					    : (((0xeU 
						 == 
						 (0x1fU 
						  & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[2U] 
						     >> 0xbU))) 
						& (5U 
						   == 
						   (7U 
						    & ((IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ir) 
						       >> 0xcU))))
					        ? (
						   (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand1 
						    + vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand2) 
						   + 
						   (1U 
						    & ((IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__sr) 
						       >> 4U)))
					        : (
						   ((0xeU 
						     == 
						     (0x1fU 
						      & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[2U] 
							 >> 0xbU))) 
						    & (1U 
						       == 
						       (7U 
							& ((IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ir) 
							   >> 0xcU))))
						    ? 
						   ((vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand1 
						     - vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand2) 
						    - 
						    (1U 
						     & ((IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__sr) 
							>> 4U)))
						    : 
						   ((0xfU 
						     == 
						     (0x1fU 
						      & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[2U] 
							 >> 0xbU)))
						     ? vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand1
						     : 
						    (((0x10U 
						       == 
						       (0x1fU 
							& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[2U] 
							   >> 0xbU))) 
						      & ((((vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__decoder_alu_reg 
							    >> 8U) 
							   | (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__decoder_alu_reg 
							      >> 9U)) 
							  | (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__decoder_alu_reg 
							     >> 0xaU)) 
							 | (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__decoder_alu_reg 
							    >> 0xbU)))
						      ? 
						     ((0xfffffffeU 
						       & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand1 
							  << 1U)) 
						      | (1U 
							 & ((((1U 
							       & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__size))
							       ? 
							      (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand1 
							       >> 7U)
							       : 
							      ((2U 
								& (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__size))
							        ? 
							       (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand1 
								>> 0xfU)
							        : 
							       (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand1 
								>> 0x1fU))) 
							     & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__decoder_alu_reg 
								>> 0xaU)) 
							    | (((IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__sr) 
								>> 4U) 
							       & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__decoder_alu_reg 
								  >> 0xbU)))))
						      : 
						     ((0x10U 
						       == 
						       (0x1fU 
							& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[2U] 
							   >> 0xbU)))
						       ? 
						      (((IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__rbit) 
							<< 0x1fU) 
						       | ((0x7fff0000U 
							   & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand1 
							      >> 1U)) 
							  | ((0x8000U 
							      & (((2U 
								   & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__size))
								   ? (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__rbit)
								   : 
								  (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand1 
								   >> 0x10U)) 
								 << 0xfU)) 
							     | ((0x7f00U 
								 & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand1 
								    >> 1U)) 
								| ((0x80U 
								    & (((1U 
									 & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__size))
									 ? (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__rbit)
									 : 
									(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand1 
									 >> 8U)) 
								       << 7U)) 
								   | (0x7fU 
								      & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand1 
									 >> 1U)))))))
						       : 
						      ((0x11U 
							== 
							(0x1fU 
							 & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[2U] 
							    >> 0xbU)))
						        ? vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand1
						        : 
						       (((0x12U 
							  == 
							  (0x1fU 
							   & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[2U] 
							      >> 0xbU))) 
							 & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__decoder_alu_reg 
							    >> 6U))
							 ? 
							(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand1 
							 + vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand2)
							 : 
							((0x12U 
							  == 
							  (0x1fU 
							   & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[2U] 
							      >> 0xbU)))
							  ? 
							 (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand1 
							  - vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand2)
							  : 
							 ((0x13U 
							   == 
							   (0x1fU 
							    & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[2U] 
							       >> 0xbU)))
							   ? 
							  ((0xffff0000U 
							    & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__result) 
							   | (0xffffU 
							      & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand1 
								 - vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand2)))
							   : 
							  (((0x17U 
							     == 
							     (0x1fU 
							      & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[2U] 
								 >> 0xbU))) 
							    & ((((0U 
								  == 
								  (0xfU 
								   & ((IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ir) 
								      >> 8U))) 
								 | (2U 
								    == 
								    (0xfU 
								     & ((IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ir) 
									>> 8U)))) 
								| (4U 
								   == 
								   (0xfU 
								    & ((IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ir) 
								       >> 8U)))) 
							       | (6U 
								  == 
								  (0xfU 
								   & ((IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ir) 
								      >> 8U)))))
							    ? 
							   (VL_NEGATE_I(
									(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand1 
									 & VL_NEGATE_I((IData)(
										(1U 
										& (((IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ir) 
										>> 0xaU) 
										| (~ 
										((IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ir) 
										>> 9U)))))))) 
							    - 
							    (1U 
							     & (((((IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__sr) 
								   >> 4U) 
								  & (~ 
								     ((IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ir) 
								      >> 0xaU))) 
								 & (~ 
								    ((IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ir) 
								     >> 9U))) 
								| (((IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ir) 
								    >> 0xaU) 
								   & ((IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ir) 
								      >> 9U)))))
							    : 
							   (((0x17U 
							      == 
							      (0x1fU 
							       & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[2U] 
								  >> 0xbU))) 
							     & (0x20U 
								== 
								(0x3fU 
								 & ((IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ir) 
								    >> 6U))))
							     ? 
							    ((0xffffff00U 
							      & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__result) 
							     | ((0xf0U 
								 & (((((~ 
									((IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__sr) 
									 >> 4U)) 
								       & (9U 
									  == 
									  (0xfU 
									   & ((IData)(9U) 
									      - vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand1)))) 
								      & (9U 
									 == 
									 (0xfU 
									  & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__result_NBCD_7_4a))))
								      ? 0U
								      : 
								     (((~ 
									((IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__sr) 
									 >> 4U)) 
								       & ((9U 
									   == 
									   (0xfU 
									    & ((IData)(9U) 
									       - vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand1))) 
									  | (0xfU 
									     == 
									     (0xfU 
									      & ((IData)(9U) 
										- vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand1)))))
								       ? 
								      ((IData)(1U) 
								       + (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__result_NBCD_7_4a))
								       : (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__result_NBCD_7_4a))) 
								    << 4U)) 
								| (0xfU 
								   & ((((~ 
									 ((IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__sr) 
									  >> 4U)) 
									& (9U 
									   == 
									   (0xfU 
									    & ((IData)(9U) 
									       - vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand1)))) 
								       & (9U 
									  == 
									  (0xfU 
									   & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__result_NBCD_7_4a))))
								       ? 0U
								       : 
								      (((~ 
									 ((IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__sr) 
									  >> 4U)) 
									& ((9U 
									    == 
									    (0xfU 
									     & ((IData)(9U) 
										- vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand1))) 
									   | (0xfU 
									      == 
									      (0xfU 
									       & ((IData)(9U) 
										- vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand1)))))
								        ? 0U
								        : 
								       ((0x10U 
									 & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__sr))
									 ? 
									((IData)(9U) 
									 - vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand1)
									 : 
									((IData)(1U) 
									 + 
									 ((IData)(9U) 
									  - vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand1))))))))
							     : 
							    (((0x17U 
							       == 
							       (0x1fU 
								& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[2U] 
								   >> 0xbU))) 
							      & (0x21U 
								 == 
								 (0x3fU 
								  & ((IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ir) 
								     >> 6U))))
							      ? 
							     ((0xffff0000U 
							       & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand1 
								  << 0x10U)) 
							      | (0xffffU 
								 & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand1 
								    >> 0x10U)))
							      : 
							     (((0x17U 
								== 
								(0x1fU 
								 & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[2U] 
								    >> 0xbU))) 
							       & (0x22U 
								  == 
								  (0x3fU 
								   & ((IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ir) 
								      >> 6U))))
							       ? 
							      ((0xffff0000U 
								& vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__result) 
							       | ((0xff00U 
								   & (VL_NEGATE_I((IData)(
										(1U 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand1 
										>> 7U)))) 
								      << 8U)) 
								  | (0xffU 
								     & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand1)))
							       : 
							      (((0x17U 
								 == 
								 (0x1fU 
								  & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[2U] 
								     >> 0xbU))) 
								& (0x23U 
								   == 
								   (0x3fU 
								    & ((IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ir) 
								       >> 6U))))
							        ? 
							       ((0xffff0000U 
								 & (VL_NEGATE_I((IData)(
										(1U 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand1 
										>> 0xfU)))) 
								    << 0x10U)) 
								| (0xffffU 
								   & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand1))
							        : vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__result)))))))))))))))))))))));
}

VL_INLINE_OPT void Vcpu_ram_uart_sim_ao68000::_sequent__TOP__tb_m68k_ram_uart__ao68000_m__7(Vcpu_ram_uart_sim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        Vcpu_ram_uart_sim_ao68000::_sequent__TOP__tb_m68k_ram_uart__ao68000_m__7\n"); );
    Vcpu_ram_uart_sim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__result_blocking 
	= (((0xcU == (0x1fU & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[2U] 
			       >> 0xbU))) & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__decoder_alu_reg)
	    ? (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand1 
	       | vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand2)
	    : (((0xcU == (0x1fU & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[2U] 
				   >> 0xbU))) & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__decoder_alu_reg 
						 >> 1U))
	        ? (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand1 
		   & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand2)
	        : (((0xcU == (0x1fU & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[2U] 
				       >> 0xbU))) & 
		    (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__decoder_alu_reg 
		     >> 2U)) ? (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand1 
				^ vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand2)
		    : (((0xcU == (0x1fU & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[2U] 
					   >> 0xbU))) 
			& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__decoder_alu_reg 
			   >> 3U)) ? (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand1 
				      + vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand2)
		        : (((0xcU == (0x1fU & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[2U] 
					       >> 0xbU))) 
			    & ((vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__decoder_alu_reg 
				>> 4U) | (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__decoder_alu_reg 
					  >> 5U))) ? 
			   (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand1 
			    - vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand2)
			    : (((0xdU == (0x1fU & (
						   vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[2U] 
						   >> 0xbU))) 
				& (4U == (7U & ((IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ir) 
						>> 0xcU))))
			        ? ((0xff800000U & (
						   (((0xffU 
						      & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand1) 
						     + 
						     (0xffU 
						      & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand2)) 
						    + 
						    (1U 
						     & ((IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__sr) 
							>> 4U))) 
						   << 0x17U)) 
				   | ((0x700000U & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__result) 
				      | ((0xfc000U 
					  & (((0xfU 
					       & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand1 
						  >> 4U)) 
					      + (0xfU 
						 & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand2 
						    >> 4U))) 
					     << 0xeU)) 
					 | ((0x3f00U 
					     & (((9U 
						  < (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__result_ABCD_13_8a))
						  ? 
						 ((IData)(6U) 
						  + (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__result_ABCD_13_8a))
						  : (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__result_ABCD_13_8a)) 
						<< 8U)) 
					    | (0xffU 
					       & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__result)))))
			        : (((0xdU == (0x1fU 
					      & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[2U] 
						 >> 0xbU))) 
				    & (0U == (7U & 
					      ((IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ir) 
					       >> 0xcU))))
				    ? ((0xff800000U 
					& ((((0xffU 
					      & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand1) 
					     - (0xffU 
						& vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand2)) 
					    - (1U & 
					       ((IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__sr) 
						>> 4U))) 
					   << 0x17U)) 
				       | ((0x700000U 
					   & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__result) 
					  | ((0xfc000U 
					      & ((((IData)(0x20U) 
						   + 
						   (0xfU 
						    & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand1 
						       >> 4U))) 
						  - 
						  (0xfU 
						   & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand2 
						      >> 4U))) 
						 << 0xeU)) 
					     | ((0x3f00U 
						 & (((0x20U 
						      > (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__result_SBCD_13_8a))
						      ? 
						     ((IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__result_SBCD_13_8a) 
						      - (IData)(6U))
						      : (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__result_SBCD_13_8a)) 
						    << 8U)) 
						| (0xffU 
						   & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__result)))))
				    : (((0xeU == (0x1fU 
						  & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[2U] 
						     >> 0xbU))) 
					& (4U == (7U 
						  & ((IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ir) 
						     >> 0xcU))))
				        ? vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__result_ABCD2
				        : (((0xeU == 
					     (0x1fU 
					      & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[2U] 
						 >> 0xbU))) 
					    & (0U == 
					       (7U 
						& ((IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ir) 
						   >> 0xcU))))
					    ? vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__result_SBCD2
					    : (((0xeU 
						 == 
						 (0x1fU 
						  & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[2U] 
						     >> 0xbU))) 
						& (5U 
						   == 
						   (7U 
						    & ((IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ir) 
						       >> 0xcU))))
					        ? (
						   (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand1 
						    + vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand2) 
						   + 
						   (1U 
						    & ((IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__sr) 
						       >> 4U)))
					        : (
						   ((0xeU 
						     == 
						     (0x1fU 
						      & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[2U] 
							 >> 0xbU))) 
						    & (1U 
						       == 
						       (7U 
							& ((IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ir) 
							   >> 0xcU))))
						    ? 
						   ((vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand1 
						     - vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand2) 
						    - 
						    (1U 
						     & ((IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__sr) 
							>> 4U)))
						    : 
						   ((0xfU 
						     == 
						     (0x1fU 
						      & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[2U] 
							 >> 0xbU)))
						     ? vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand1
						     : 
						    (((0x10U 
						       == 
						       (0x1fU 
							& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[2U] 
							   >> 0xbU))) 
						      & ((((vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__decoder_alu_reg 
							    >> 8U) 
							   | (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__decoder_alu_reg 
							      >> 9U)) 
							  | (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__decoder_alu_reg 
							     >> 0xaU)) 
							 | (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__decoder_alu_reg 
							    >> 0xbU)))
						      ? 
						     ((0xfffffffeU 
						       & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand1 
							  << 1U)) 
						      | (1U 
							 & ((((1U 
							       & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__size))
							       ? 
							      (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand1 
							       >> 7U)
							       : 
							      ((2U 
								& (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__size))
							        ? 
							       (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand1 
								>> 0xfU)
							        : 
							       (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand1 
								>> 0x1fU))) 
							     & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__decoder_alu_reg 
								>> 0xaU)) 
							    | (((IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__sr) 
								>> 4U) 
							       & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__decoder_alu_reg 
								  >> 0xbU)))))
						      : 
						     ((0x10U 
						       == 
						       (0x1fU 
							& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[2U] 
							   >> 0xbU)))
						       ? 
						      (((IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__rbit) 
							<< 0x1fU) 
						       | ((0x7fff0000U 
							   & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand1 
							      >> 1U)) 
							  | ((0x8000U 
							      & (((2U 
								   & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__size))
								   ? (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__rbit)
								   : 
								  (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand1 
								   >> 0x10U)) 
								 << 0xfU)) 
							     | ((0x7f00U 
								 & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand1 
								    >> 1U)) 
								| ((0x80U 
								    & (((1U 
									 & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__size))
									 ? (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__rbit)
									 : 
									(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand1 
									 >> 8U)) 
								       << 7U)) 
								   | (0x7fU 
								      & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand1 
									 >> 1U)))))))
						       : 
						      ((0x11U 
							== 
							(0x1fU 
							 & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[2U] 
							    >> 0xbU)))
						        ? vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand1
						        : 
						       (((0x12U 
							  == 
							  (0x1fU 
							   & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[2U] 
							      >> 0xbU))) 
							 & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__decoder_alu_reg 
							    >> 6U))
							 ? 
							(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand1 
							 + vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand2)
							 : 
							((0x12U 
							  == 
							  (0x1fU 
							   & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[2U] 
							      >> 0xbU)))
							  ? 
							 (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand1 
							  - vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand2)
							  : 
							 ((0x13U 
							   == 
							   (0x1fU 
							    & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[2U] 
							       >> 0xbU)))
							   ? 
							  ((0xffff0000U 
							    & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__result) 
							   | (0xffffU 
							      & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand1 
								 - vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand2)))
							   : 
							  (((0x17U 
							     == 
							     (0x1fU 
							      & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[2U] 
								 >> 0xbU))) 
							    & ((((0U 
								  == 
								  (0xfU 
								   & ((IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ir) 
								      >> 8U))) 
								 | (2U 
								    == 
								    (0xfU 
								     & ((IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ir) 
									>> 8U)))) 
								| (4U 
								   == 
								   (0xfU 
								    & ((IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ir) 
								       >> 8U)))) 
							       | (6U 
								  == 
								  (0xfU 
								   & ((IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ir) 
								      >> 8U)))))
							    ? 
							   (VL_NEGATE_I(
									(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand1 
									 & VL_NEGATE_I((IData)(
										(1U 
										& (((IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ir) 
										>> 0xaU) 
										| (~ 
										((IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ir) 
										>> 9U)))))))) 
							    - 
							    (1U 
							     & (((((IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__sr) 
								   >> 4U) 
								  & (~ 
								     ((IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ir) 
								      >> 0xaU))) 
								 & (~ 
								    ((IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ir) 
								     >> 9U))) 
								| (((IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ir) 
								    >> 0xaU) 
								   & ((IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ir) 
								      >> 9U)))))
							    : 
							   (((0x17U 
							      == 
							      (0x1fU 
							       & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[2U] 
								  >> 0xbU))) 
							     & (0x20U 
								== 
								(0x3fU 
								 & ((IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ir) 
								    >> 6U))))
							     ? 
							    ((0xffffff00U 
							      & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__result) 
							     | ((0xf0U 
								 & (((((~ 
									((IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__sr) 
									 >> 4U)) 
								       & (9U 
									  == 
									  (0xfU 
									   & ((IData)(9U) 
									      - vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand1)))) 
								      & (9U 
									 == 
									 (0xfU 
									  & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__result_NBCD_7_4a))))
								      ? 0U
								      : 
								     (((~ 
									((IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__sr) 
									 >> 4U)) 
								       & ((9U 
									   == 
									   (0xfU 
									    & ((IData)(9U) 
									       - vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand1))) 
									  | (0xfU 
									     == 
									     (0xfU 
									      & ((IData)(9U) 
										- vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand1)))))
								       ? 
								      ((IData)(1U) 
								       + (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__result_NBCD_7_4a))
								       : (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__result_NBCD_7_4a))) 
								    << 4U)) 
								| (0xfU 
								   & ((((~ 
									 ((IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__sr) 
									  >> 4U)) 
									& (9U 
									   == 
									   (0xfU 
									    & ((IData)(9U) 
									       - vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand1)))) 
								       & (9U 
									  == 
									  (0xfU 
									   & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__alu_m__DOT__result_NBCD_7_4a))))
								       ? 0U
								       : 
								      (((~ 
									 ((IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__sr) 
									  >> 4U)) 
									& ((9U 
									    == 
									    (0xfU 
									     & ((IData)(9U) 
										- vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand1))) 
									   | (0xfU 
									      == 
									      (0xfU 
									       & ((IData)(9U) 
										- vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand1)))))
								        ? 0U
								        : 
								       ((0x10U 
									 & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__sr))
									 ? 
									((IData)(9U) 
									 - vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand1)
									 : 
									((IData)(1U) 
									 + 
									 ((IData)(9U) 
									  - vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand1))))))))
							     : 
							    (((0x17U 
							       == 
							       (0x1fU 
								& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[2U] 
								   >> 0xbU))) 
							      & (0x21U 
								 == 
								 (0x3fU 
								  & ((IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ir) 
								     >> 6U))))
							      ? 
							     ((0xffff0000U 
							       & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand1 
								  << 0x10U)) 
							      | (0xffffU 
								 & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand1 
								    >> 0x10U)))
							      : 
							     (((0x17U 
								== 
								(0x1fU 
								 & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[2U] 
								    >> 0xbU))) 
							       & (0x22U 
								  == 
								  (0x3fU 
								   & ((IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ir) 
								      >> 6U))))
							       ? 
							      ((0xffff0000U 
								& vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__result) 
							       | ((0xff00U 
								   & (VL_NEGATE_I((IData)(
										(1U 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand1 
										>> 7U)))) 
								      << 8U)) 
								  | (0xffU 
								     & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand1)))
							       : 
							      (((0x17U 
								 == 
								 (0x1fU 
								  & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[2U] 
								     >> 0xbU))) 
								& (0x23U 
								   == 
								   (0x3fU 
								    & ((IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__ir) 
								       >> 6U))))
							        ? 
							       ((0xffff0000U 
								 & (VL_NEGATE_I((IData)(
										(1U 
										& (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand1 
										>> 0xfU)))) 
								    << 0x10U)) 
								| (0xffffU 
								   & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__operand1))
							        : vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__result)))))))))))))))))))))));
}

void Vcpu_ram_uart_sim_ao68000::_ctor_var_reset() {
    VL_DEBUG_IF(VL_PRINTF("        Vcpu_ram_uart_sim_ao68000::_ctor_var_reset\n"); );
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
    __PVT__sr = VL_RAND_RESET_I(16);
    __PVT__size = VL_RAND_RESET_I(3);
    __PVT__address = VL_RAND_RESET_I(32);
    __PVT__address_type = VL_RAND_RESET_I(1);
    __PVT__read_modify_write_flag = VL_RAND_RESET_I(1);
    __PVT__data_read = VL_RAND_RESET_I(32);
    __PVT__data_write = VL_RAND_RESET_I(32);
    __PVT__pc = VL_RAND_RESET_I(32);
    __PVT__prefetch_ir_valid = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(80,__PVT__prefetch_ir);
    __PVT__do_reset = VL_RAND_RESET_I(1);
    __PVT__do_read = VL_RAND_RESET_I(1);
    __PVT__do_write = VL_RAND_RESET_I(1);
    __PVT__do_interrupt = VL_RAND_RESET_I(1);
    __PVT__do_blocked = VL_RAND_RESET_I(1);
    __PVT__jmp_address_trap = VL_RAND_RESET_I(1);
    __PVT__jmp_bus_trap = VL_RAND_RESET_I(1);
    __PVT__finished = VL_RAND_RESET_I(1);
    __PVT__interrupt_trap = VL_RAND_RESET_I(8);
    __PVT__interrupt_mask = VL_RAND_RESET_I(3);
    __PVT__rw_state = VL_RAND_RESET_I(1);
    __PVT__fc_state = VL_RAND_RESET_I(3);
    __PVT__decoder_trap = VL_RAND_RESET_I(8);
    __PVT__result = VL_RAND_RESET_I(32);
    __PVT__An_address = VL_RAND_RESET_I(4);
    __PVT__An_input = VL_RAND_RESET_I(32);
    __PVT__Dn_address = VL_RAND_RESET_I(3);
    __PVT__ir = VL_RAND_RESET_I(16);
    __PVT__alu_signal = VL_RAND_RESET_I(1);
    __PVT__load_ea = VL_RAND_RESET_I(9);
    __PVT__perform_ea_read = VL_RAND_RESET_I(9);
    __PVT__perform_ea_write = VL_RAND_RESET_I(9);
    __PVT__save_ea = VL_RAND_RESET_I(9);
    __PVT__trace_flag = VL_RAND_RESET_I(1);
    __PVT__group_0_flag = VL_RAND_RESET_I(1);
    __PVT__stop_flag = VL_RAND_RESET_I(1);
    __PVT__micro_pc = VL_RAND_RESET_I(9);
    __PVT__operand1 = VL_RAND_RESET_I(32);
    __PVT__operand2 = VL_RAND_RESET_I(32);
    __PVT__movem_loop = VL_RAND_RESET_I(5);
    __PVT__movem_reg = VL_RAND_RESET_I(16);
    __PVT__condition = VL_RAND_RESET_I(1);
    __PVT__fault_address_state = VL_RAND_RESET_I(32);
    __PVT__pc_change = VL_RAND_RESET_I(2);
    __PVT__prefetch_ir_valid_32 = VL_RAND_RESET_I(1);
    __PVT__ea_type = VL_RAND_RESET_I(4);
    __PVT__ea_mod = VL_RAND_RESET_I(3);
    __PVT__ea_reg = VL_RAND_RESET_I(3);
    __PVT__decoder_alu = VL_RAND_RESET_I(18);
    __PVT__decoder_alu_reg = VL_RAND_RESET_I(18);
    __PVT__bus_control_m__DOT__prefetch_ir_valid_80_o = VL_RAND_RESET_I(1);
    __PVT__bus_control_m__DOT__saved_pc_change = VL_RAND_RESET_I(2);
    __PVT__bus_control_m__DOT__current_state = VL_RAND_RESET_I(5);
    __PVT__bus_control_m__DOT__reset_counter = VL_RAND_RESET_I(8);
    __PVT__bus_control_m__DOT__last_interrupt_mask = VL_RAND_RESET_I(3);
    __PVT__registers_m__DOT__movem_modreg = VL_RAND_RESET_I(6);
    __PVT__registers_m__DOT__trap = VL_RAND_RESET_I(8);
    __PVT__registers_m__DOT__offset = VL_RAND_RESET_I(32);
    __PVT__registers_m__DOT__index = VL_RAND_RESET_I(32);
    __PVT__registers_m__DOT__instruction_flag = VL_RAND_RESET_I(1);
    __PVT__registers_m__DOT__pc_valid = VL_RAND_RESET_I(32);
    __PVT__registers_m__DOT__pc_next = VL_RAND_RESET_I(32);
    __PVT__alu_m__DOT__div_count = VL_RAND_RESET_I(5);
    __PVT__alu_m__DOT__quotient = VL_RAND_RESET_I(17);
    __PVT__alu_m__DOT__dividend = VL_RAND_RESET_I(32);
    __PVT__alu_m__DOT__divider = VL_RAND_RESET_I(32);
    __PVT__alu_m__DOT__div_diff = VL_RAND_RESET_Q(33);
    __PVT__alu_m__DOT__div_quotient = VL_RAND_RESET_I(16);
    __PVT__alu_m__DOT__mult_result = VL_RAND_RESET_Q(34);
    __PVT__alu_m__DOT__result_ABCD_13_8a = VL_RAND_RESET_I(6);
    __PVT__alu_m__DOT__result_SBCD_13_8a = VL_RAND_RESET_I(6);
    __PVT__alu_m__DOT__result_ABCD2_19_14a = VL_RAND_RESET_I(6);
    __PVT__alu_m__DOT__result_ABCD2_19_14b = VL_RAND_RESET_I(6);
    __PVT__alu_m__DOT__result_ABCD2 = VL_RAND_RESET_I(32);
    __PVT__alu_m__DOT__result_SBCD2_19_14a = VL_RAND_RESET_I(6);
    __PVT__alu_m__DOT__result_SBCD2_19_14b = VL_RAND_RESET_I(6);
    __PVT__alu_m__DOT__result_SBCD2 = VL_RAND_RESET_I(32);
    __PVT__alu_m__DOT__result_BITS8_val = VL_RAND_RESET_I(1);
    __PVT__alu_m__DOT__result_BITS8_bit = VL_RAND_RESET_I(1);
    __PVT__alu_m__DOT__result_BITS32_val = VL_RAND_RESET_I(1);
    __PVT__alu_m__DOT__result_BITS32_bit = VL_RAND_RESET_I(1);
    __PVT__alu_m__DOT__result_NBCD_7_4a = VL_RAND_RESET_I(5);
    __PVT__alu_m__DOT__result_blocking = VL_RAND_RESET_I(32);
    __PVT__alu_m__DOT__interrupt_mask_copy = VL_RAND_RESET_I(3);
    __PVT__alu_m__DOT__was_interrupt = VL_RAND_RESET_I(1);
    __PVT__alu_m__DOT__rbit = VL_RAND_RESET_I(1);
    __PVT__microcode_branch_m__DOT__micro_pc_0 = VL_RAND_RESET_I(9);
    __PVT__microcode_branch_m__DOT__micro_pc_1 = VL_RAND_RESET_I(9);
    __PVT__microcode_branch_m__DOT__micro_pc_2 = VL_RAND_RESET_I(9);
    __PVT__microcode_branch_m__DOT__micro_pc_3 = VL_RAND_RESET_I(9);
    __Vtableidx1 = VL_RAND_RESET_I(5);
    __Vtablechg1[0] = 1U;
    __Vtablechg1[1] = 0U;
    __Vtablechg1[2] = 1U;
    __Vtablechg1[3] = 1U;
    __Vtablechg1[4] = 1U;
    __Vtablechg1[5] = 1U;
    __Vtablechg1[6] = 1U;
    __Vtablechg1[7] = 1U;
    __Vtablechg1[8] = 1U;
    __Vtablechg1[9] = 1U;
    __Vtablechg1[10] = 1U;
    __Vtablechg1[11] = 1U;
    __Vtablechg1[12] = 1U;
    __Vtablechg1[13] = 1U;
    __Vtablechg1[14] = 1U;
    __Vtablechg1[15] = 1U;
    __Vtablechg1[16] = 1U;
    __Vtablechg1[17] = 1U;
    __Vtablechg1[18] = 1U;
    __Vtablechg1[19] = 0U;
    __Vtablechg1[20] = 1U;
    __Vtablechg1[21] = 0U;
    __Vtablechg1[22] = 1U;
    __Vtablechg1[23] = 0U;
    __Vtablechg1[24] = 1U;
    __Vtablechg1[25] = 0U;
    __Vtablechg1[26] = 1U;
    __Vtablechg1[27] = 0U;
    __Vtablechg1[28] = 1U;
    __Vtablechg1[29] = 0U;
    __Vtablechg1[30] = 1U;
    __Vtablechg1[31] = 0U;
    __Vtable1___PVT__ea_type[0] = 0U;
    __Vtable1___PVT__ea_type[1] = 0U;
    __Vtable1___PVT__ea_type[2] = 0U;
    __Vtable1___PVT__ea_type[3] = 1U;
    __Vtable1___PVT__ea_type[4] = 0U;
    __Vtable1___PVT__ea_type[5] = 2U;
    __Vtable1___PVT__ea_type[6] = 0U;
    __Vtable1___PVT__ea_type[7] = 3U;
    __Vtable1___PVT__ea_type[8] = 0U;
    __Vtable1___PVT__ea_type[9] = 4U;
    __Vtable1___PVT__ea_type[10] = 0U;
    __Vtable1___PVT__ea_type[11] = 5U;
    __Vtable1___PVT__ea_type[12] = 0U;
    __Vtable1___PVT__ea_type[13] = 6U;
    __Vtable1___PVT__ea_type[14] = 0U;
    __Vtable1___PVT__ea_type[15] = 7U;
    __Vtable1___PVT__ea_type[16] = 0U;
    __Vtable1___PVT__ea_type[17] = 8U;
    __Vtable1___PVT__ea_type[18] = 0U;
    __Vtable1___PVT__ea_type[19] = 0U;
    __Vtable1___PVT__ea_type[20] = 0U;
    __Vtable1___PVT__ea_type[21] = 0U;
    __Vtable1___PVT__ea_type[22] = 0U;
    __Vtable1___PVT__ea_type[23] = 0U;
    __Vtable1___PVT__ea_type[24] = 0U;
    __Vtable1___PVT__ea_type[25] = 0U;
    __Vtable1___PVT__ea_type[26] = 0U;
    __Vtable1___PVT__ea_type[27] = 0U;
    __Vtable1___PVT__ea_type[28] = 0U;
    __Vtable1___PVT__ea_type[29] = 0U;
    __Vtable1___PVT__ea_type[30] = 0U;
    __Vtable1___PVT__ea_type[31] = 0U;
    __Vdly__bus_control_m__DOT__last_interrupt_mask = VL_RAND_RESET_I(3);
    __Vdly__interrupt_mask = VL_RAND_RESET_I(3);
    __Vdly__bus_control_m__DOT__current_state = VL_RAND_RESET_I(5);
    __Vdly__bus_control_m__DOT__reset_counter = VL_RAND_RESET_I(8);
    __Vdly__WE_O = VL_RAND_RESET_I(1);
    __Vdly__fc_o = VL_RAND_RESET_I(3);
    __Vdly__CYC_O = VL_RAND_RESET_I(1);
    __Vdly__ADR_O = VL_RAND_RESET_I(30);
    __Vdly__SEL_O = VL_RAND_RESET_I(4);
    __Vdly__STB_O = VL_RAND_RESET_I(1);
    __Vdly__CTI_O = VL_RAND_RESET_I(3);
    __Vdly__DAT_O = VL_RAND_RESET_I(32);
    __Vdly__prefetch_ir_valid_32 = VL_RAND_RESET_I(1);
    __Vdly__prefetch_ir_valid = VL_RAND_RESET_I(1);
    __Vdly__bus_control_m__DOT__prefetch_ir_valid_80_o = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(80,__Vdly__prefetch_ir);
    __Vdly__bus_control_m__DOT__saved_pc_change = VL_RAND_RESET_I(2);
    __Vdly__data_read = VL_RAND_RESET_I(32);
    __Vdly__operand1 = VL_RAND_RESET_I(32);
    __Vdly__operand2 = VL_RAND_RESET_I(32);
    __Vdly__address = VL_RAND_RESET_I(32);
    __Vdly__registers_m__DOT__movem_modreg = VL_RAND_RESET_I(6);
    __Vdly__movem_loop = VL_RAND_RESET_I(5);
    __Vdly__movem_reg = VL_RAND_RESET_I(16);
    __Vdly__alu_m__DOT__div_count = VL_RAND_RESET_I(5);
    __Vdly__alu_m__DOT__quotient = VL_RAND_RESET_I(17);
    __Vdly__alu_m__DOT__divider = VL_RAND_RESET_I(32);
    __Vdly__sr = VL_RAND_RESET_I(16);
    __Vdly__alu_m__DOT__was_interrupt = VL_RAND_RESET_I(1);
    __Vdly__alu_m__DOT__interrupt_mask_copy = VL_RAND_RESET_I(3);
    __Vdly__microcode_branch_m__DOT__micro_pc_3 = VL_RAND_RESET_I(9);
    __Vdly__microcode_branch_m__DOT__micro_pc_2 = VL_RAND_RESET_I(9);
    __Vdly__microcode_branch_m__DOT__micro_pc_1 = VL_RAND_RESET_I(9);
}

void Vcpu_ram_uart_sim_ao68000::_configure_coverage(Vcpu_ram_uart_sim__Syms* __restrict vlSymsp, bool first) {
    VL_DEBUG_IF(VL_PRINTF("        Vcpu_ram_uart_sim_ao68000::_configure_coverage\n"); );
    // Body
    if (0 && vlSymsp && first) {} // Prevent unused
}
