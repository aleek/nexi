// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcpu_ram_uart_sim.h for the primary calling header

#include "Vcpu_ram_uart_sim_registers.h" // For This
#include "Vcpu_ram_uart_sim__Syms.h"

#include "verilated_dpi.h"


//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(Vcpu_ram_uart_sim_registers) {
    // Reset internal values
    // Reset structure values
    _ctor_var_reset();
}

void Vcpu_ram_uart_sim_registers::__Vconfigure(Vcpu_ram_uart_sim__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

Vcpu_ram_uart_sim_registers::~Vcpu_ram_uart_sim_registers() {
}

//--------------------
// Internal Methods

VL_INLINE_OPT void Vcpu_ram_uart_sim_registers::_sequent__TOP__tb_m68k_ram_uart__ao68000_m__registers_m__1(Vcpu_ram_uart_sim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          Vcpu_ram_uart_sim_registers::_sequent__TOP__tb_m68k_ram_uart__ao68000_m__registers_m__1\n"); );
    Vcpu_ram_uart_sim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__Vdly__movem_modreg 
	= vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__movem_modreg;
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__Vdly__read_modify_write_flag 
	= vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__read_modify_write_flag;
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__Vdly__do_reset_flag 
	= vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__do_reset_flag;
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__Vdly__do_read_flag 
	= vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__do_read_flag;
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__Vdly__do_write_flag 
	= vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__do_write_flag;
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__Vdly__do_blocked_flag 
	= vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__do_blocked_flag;
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__Vdly__address_type 
	= vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__address_type;
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__Vdly__do_interrupt_flag 
	= vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__do_interrupt_flag;
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__Vdly__data_write 
	= vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__data_write;
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__Vdly__movem_loop 
	= vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__movem_loop;
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__Vdly__group_0_flag 
	= vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__group_0_flag;
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__Vdly__decoder_alu_reg 
	= vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__decoder_alu_reg;
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__Vdly__trace_flag 
	= vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__trace_flag;
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__Vdly__ea_type 
	= vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__ea_type;
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__Vdly__ea_mod 
	= vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__ea_mod;
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__Vdly__movem_reg 
	= vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__movem_reg;
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__Vdly__address 
	= vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__address;
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__Vdly__operand2 
	= vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__operand2;
    // ALWAYS at registers.v:309
    if (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__reset_n) {
	if ((1U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__movem_modreg_control))) {
	    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__Vdly__movem_modreg = 0U;
	} else {
	    if ((2U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__movem_modreg_control))) {
		vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__Vdly__movem_modreg = 0xfU;
	    } else {
		if ((3U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__movem_modreg_control))) {
		    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__Vdly__movem_modreg 
			= (0x3fU & ((IData)(1U) + (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__movem_modreg)));
		} else {
		    if ((4U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__movem_modreg_control))) {
			vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__Vdly__movem_modreg 
			    = (0x3fU & ((IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__movem_modreg) 
					- (IData)(1U)));
		    }
		}
	    }
	}
    } else {
	vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__Vdly__movem_modreg = 0U;
    }
    // ALWAYS at registers.v:403
    if (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__reset_n) {
	if ((1U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__read_modify_write_flag_control))) {
	    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__Vdly__read_modify_write_flag = 1U;
	} else {
	    if ((2U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__read_modify_write_flag_control))) {
		vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__Vdly__read_modify_write_flag = 0U;
	    }
	}
    } else {
	vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__Vdly__read_modify_write_flag = 0U;
    }
    // ALWAYS at registers.v:409
    if (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__reset_n) {
	if ((1U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__do_reset_flag_control))) {
	    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__Vdly__do_reset_flag = 1U;
	} else {
	    if ((2U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__do_reset_flag_control))) {
		vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__Vdly__do_reset_flag = 0U;
	    }
	}
    } else {
	vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__Vdly__do_reset_flag = 0U;
    }
    // ALWAYS at registers.v:421
    if (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__reset_n) {
	if ((1U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__do_read_flag_control))) {
	    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__Vdly__do_read_flag = 1U;
	} else {
	    if ((2U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__do_read_flag_control))) {
		vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__Vdly__do_read_flag = 0U;
	    }
	}
    } else {
	vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__Vdly__do_read_flag = 0U;
    }
    // ALWAYS at registers.v:427
    if (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__reset_n) {
	if ((1U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__do_write_flag_control))) {
	    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__Vdly__do_write_flag = 1U;
	} else {
	    if ((2U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__do_write_flag_control))) {
		vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__Vdly__do_write_flag = 0U;
	    }
	}
    } else {
	vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__Vdly__do_write_flag = 0U;
    }
    // ALWAYS at registers.v:433
    if (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__reset_n) {
	if ((1U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__do_blocked_flag_control))) {
	    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__Vdly__do_blocked_flag = 1U;
	}
    } else {
	vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__Vdly__do_blocked_flag = 0U;
    }
    // ALWAYS at registers.v:303
    if (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__reset_n) {
	if ((8U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__address_control))) {
	    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__Vdly__address_type = 1U;
	} else {
	    if ((0U != (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__address_control))) {
		vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__Vdly__address_type = 0U;
	    }
	}
    } else {
	vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__Vdly__address_type = 0U;
    }
    // ALWAYS at registers.v:415
    if (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__reset_n) {
	if ((1U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__do_interrupt_flag_control))) {
	    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__Vdly__do_interrupt_flag 
		= (0U != (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__interrupt_mask));
	} else {
	    if ((2U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__do_interrupt_flag_control))) {
		vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__Vdly__do_interrupt_flag = 0U;
	    }
	}
    } else {
	vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__Vdly__do_interrupt_flag = 0U;
    }
    // ALWAYS at registers.v:438
    if (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__reset_n) {
	if ((1U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__data_write_control))) {
	    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__Vdly__data_write 
		= vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__result;
	}
    } else {
	vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__Vdly__data_write = 0U;
    }
    // ALWAYS at registers.v:317
    if (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__reset_n) {
	if ((1U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__movem_loop_control))) {
	    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__Vdly__movem_loop = 0U;
	} else {
	    if ((2U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__movem_loop_control))) {
		vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__Vdly__movem_loop 
		    = (0x1fU & ((IData)(1U) + (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__movem_loop)));
	    }
	}
    } else {
	vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__Vdly__movem_loop = 0U;
    }
    // ALWAYS at registers.v:389
    if (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__reset_n) {
	if ((1U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__group_0_flag_control))) {
	    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__Vdly__group_0_flag = 1U;
	} else {
	    if ((((2U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__group_0_flag_control)) 
		  & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__prefetch_ir_valid)) 
		 & (~ (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__stop_flag)))) {
		vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__Vdly__group_0_flag = 0U;
	    }
	}
    } else {
	vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__Vdly__group_0_flag = 0U;
    }
    // ALWAYS at registers.v:335
    if (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__reset_n) {
	if ((((1U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__ir_control)) 
	      & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__prefetch_ir_valid)) 
	     & (~ (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__stop_flag)))) {
	    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__Vdly__decoder_alu_reg 
		= vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__decoder_alu;
	}
    } else {
	vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__Vdly__decoder_alu_reg = 0U;
    }
    // ALWAYS at registers.v:379
    if (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__reset_n) {
	if (((((1U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__trace_flag_control)) 
	       & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__prefetch_ir_valid)) 
	      & (0U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__decoder_trap))) 
	     & (~ (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__stop_flag)))) {
	    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__Vdly__trace_flag 
		= (1U & VL_BITSEL_IIII(1,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__sr), 0xfU));
	}
    } else {
	vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__Vdly__trace_flag = 0U;
    }
    // ALWAYS at registers.v:235
    if (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__reset_n) {
	if ((1U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__ea_type_control))) {
	    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__Vdly__ea_type = 1U;
	} else {
	    if ((2U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__ea_type_control))) {
		vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__Vdly__ea_type = 2U;
	    } else {
		if ((3U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__ea_type_control))) {
		    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__Vdly__ea_type = 3U;
		} else {
		    if ((4U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__ea_type_control))) {
			vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__Vdly__ea_type = 4U;
		    } else {
			if ((5U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__ea_type_control))) {
			    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__Vdly__ea_type = 5U;
			} else {
			    if ((6U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__ea_type_control))) {
				vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__Vdly__ea_type = 6U;
			    } else {
				if ((7U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__ea_type_control))) {
				    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__Vdly__ea_type = 7U;
				} else {
				    if ((8U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__ea_type_control))) {
					vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__Vdly__ea_type = 8U;
				    }
				}
			    }
			}
		    }
		}
	    }
	}
    } else {
	vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__Vdly__ea_type = 0U;
    }
    // ALWAYS at registers.v:220
    if (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__reset_n) {
	if ((1U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__ea_mod_control))) {
	    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__Vdly__ea_mod 
		= (7U & VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__ir), 3U, 3U));
	} else {
	    if ((2U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__ea_mod_control))) {
		vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__Vdly__ea_mod 
		    = (7U & VL_SEL_IIII(3,6,3,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__movem_modreg), 3U, 3U));
	    } else {
		if ((3U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__ea_mod_control))) {
		    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__Vdly__ea_mod 
			= (7U & VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__ir), 6U, 3U));
		} else {
		    if ((4U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__ea_mod_control))) {
			vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__Vdly__ea_mod = 4U;
		    } else {
			if ((5U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__ea_mod_control))) {
			    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__Vdly__ea_mod = 7U;
			} else {
			    if ((6U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__ea_mod_control))) {
				vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__Vdly__ea_mod 
				    = ((1U & VL_BITSEL_IIII(1,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__ir), 3U))
				        ? 1U : 0U);
			    } else {
				if ((7U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__ea_mod_control))) {
				    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__Vdly__ea_mod 
					= (((8U == 
					     (0x1fU 
					      & VL_SEL_IIII(5,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__ir), 3U, 5U))) 
					    | (0x11U 
					       == (0x1fU 
						   & VL_SEL_IIII(5,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__ir), 3U, 5U))))
					    ? 0U : 1U);
				} else {
				    if ((8U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__ea_mod_control))) {
					vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__Vdly__ea_mod = 3U;
				    } else {
					if ((9U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__ea_mod_control))) {
					    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__Vdly__ea_mod = 1U;
					} else {
					    if ((0xaU 
						 == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__ea_mod_control))) {
						vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__Vdly__ea_mod = 0U;
					    } else {
						if (
						    (0xbU 
						     == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__ea_mod_control))) {
						    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__Vdly__ea_mod = 2U;
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
	vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__Vdly__ea_mod = 0U;
    }
    // ALWAYS at registers.v:323
    if (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__reset_n) {
	if ((1U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__movem_reg_control))) {
	    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__Vdly__movem_reg 
		= (0xffffU & VL_SEL_IIII(16,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__operand1, 0U, 0x10U));
	} else {
	    if ((2U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__movem_reg_control))) {
		vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__Vdly__movem_reg 
		    = VL_EXTEND_II(16,15, (0x7fffU 
					   & VL_SEL_IIII(15,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__movem_reg), 1U, 0xfU)));
	    }
	}
    } else {
	vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__Vdly__movem_reg = 0U;
    }
    // ALWAYS at registers.v:290
    if (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__reset_n) {
	if ((1U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__address_control))) {
	    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__Vdly__address 
		= ((VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__size), 0U) 
		    & (7U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__ea_reg)))
		    ? ((IData)(2U) + vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__address)
		    : (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__address 
		       + VL_EXTEND_II(32,3, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__size))));
	} else {
	    if ((2U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__address_control))) {
		vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__Vdly__address 
		    = ((VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__size), 0U) 
			& (7U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__ea_reg)))
		        ? (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__address 
			   - (IData)(2U)) : (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__address 
					     - VL_EXTEND_II(32,3, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__size))));
	    } else {
		if ((3U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__address_control))) {
		    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__Vdly__address 
			= ((IData)(2U) + vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__address);
		} else {
		    if ((4U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__address_control))) {
			vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__Vdly__address 
			    = vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__An_output;
		    } else {
			if ((5U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__address_control))) {
			    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__Vdly__address 
				= ((vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__address 
				    + vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__index) 
				   + vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__offset);
			} else {
			    if ((6U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__address_control))) {
				vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__Vdly__address 
				    = VL_CONCAT_III(32,16,16, 
						    (0xffffU 
						     & VL_REPLICATE_IOI(16,1,32,
									(1U 
									 & VL_BITSEL_IWII(1,80,7,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__prefetch_ir, 0x4fU)), 0x10U)), 
						    (0xffffU 
						     & VL_SEL_IWII(16,80,7,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__prefetch_ir, 0x40U, 0x10U)));
			    } else {
				if ((7U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__address_control))) {
				    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__Vdly__address 
					= VL_SEL_IWII(32,80,7,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__prefetch_ir, 0x30U, 0x20U);
				} else {
				    if ((8U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__address_control))) {
					vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__Vdly__address 
					    = ((vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__pc_valid 
						+ vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__index) 
					       + vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__offset);
				    } else {
					if ((9U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__address_control))) {
					    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__Vdly__address 
						= VL_CONCAT_III(32,30,2, 
								VL_EXTEND_II(30,8, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__trap)), 0U);
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
	vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__Vdly__address = 0U;
    }
    // ALWAYS at registers.v:277
    if (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__reset_n) {
	if ((1U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__operand2_control))) {
	    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__Vdly__operand2 
		= vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__operand1;
	} else {
	    if ((2U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__operand2_control))) {
		vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__Vdly__operand2 = 1U;
	    } else {
		if ((3U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__operand2_control))) {
		    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__Vdly__operand2 
			= ((1U & VL_BITSEL_IIII(1,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__ir), 5U))
			    ? VL_EXTEND_II(32,6, (0x3fU 
						  & VL_SEL_IIII(6,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__operand2, 0U, 6U)))
			    : ((0U == (7U & VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__ir), 9U, 3U)))
			        ? 8U : VL_EXTEND_II(32,3, 
						    (7U 
						     & VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__ir), 9U, 3U)))));
		} else {
		    if ((4U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__operand2_control))) {
			vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__Vdly__operand2 
			    = ((0U == (7U & VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__ir), 9U, 3U)))
			        ? 8U : VL_EXTEND_II(32,3, 
						    (7U 
						     & VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__ir), 9U, 3U))));
		    } else {
			if ((5U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__operand2_control))) {
			    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__Vdly__operand2 
				= ((0U == (0xffU & 
					   VL_SEL_IIII(8,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__ir), 0U, 8U)))
				    ? vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__operand2
				    : VL_CONCAT_III(32,24,8, 
						    (0xffffffU 
						     & VL_REPLICATE_IOI(24,1,32,
									(1U 
									 & VL_BITSEL_IIII(1,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__ir), 7U)), 0x18U)), 
						    (0xffU 
						     & VL_SEL_IIII(8,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__ir), 0U, 8U))));
			} else {
			    if ((6U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__operand2_control))) {
				vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__Vdly__operand2 
				    = VL_CONCAT_III(32,28,4, 
						    VL_EXTEND_II(28,1, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__rw_state)), 
						    VL_CONCAT_III(4,1,3, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__instruction_flag), (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__fc_state)));
			    } else {
				if ((7U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__operand2_control))) {
				    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__Vdly__operand2 
					= (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__operand2 
					   - (IData)(1U));
				}
			    }
			}
		    }
		}
	    }
	}
    } else {
	vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__Vdly__operand2 = 0xffffffffU;
    }
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__read_modify_write_flag 
	= vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__Vdly__read_modify_write_flag;
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__do_reset_flag 
	= vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__Vdly__do_reset_flag;
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__do_read_flag 
	= vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__Vdly__do_read_flag;
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__do_write_flag 
	= vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__Vdly__do_write_flag;
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__do_blocked_flag 
	= vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__Vdly__do_blocked_flag;
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__address_type 
	= vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__Vdly__address_type;
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__do_interrupt_flag 
	= vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__Vdly__do_interrupt_flag;
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__data_write 
	= vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__Vdly__data_write;
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__movem_loop 
	= vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__Vdly__movem_loop;
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__group_0_flag 
	= vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__Vdly__group_0_flag;
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__decoder_alu_reg 
	= vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__Vdly__decoder_alu_reg;
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__trace_flag 
	= vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__Vdly__trace_flag;
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__ea_type 
	= vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__Vdly__ea_type;
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__ea_mod 
	= vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__Vdly__ea_mod;
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__movem_reg 
	= vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__Vdly__movem_reg;
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__Vdly__offset 
	= vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__offset;
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__Vdly__index 
	= vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__index;
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__Vdly__trap 
	= vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__trap;
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__Vdly__ea_reg 
	= vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__ea_reg;
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__Vdly__instruction_flag 
	= vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__instruction_flag;
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__Vdly__operand1 
	= vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__operand1;
    // ALWAYS at registers.v:354
    if (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__reset_n) {
	if ((1U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__offset_control))) {
	    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__Vdly__offset 
		= VL_CONCAT_III(32,24,8, (0xffffffU 
					  & VL_REPLICATE_IOI(24,1,32,
							     (1U 
							      & VL_BITSEL_IWII(1,80,7,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__prefetch_ir, 0x47U)), 0x18U)), 
				(0xffU & VL_SEL_IWII(8,80,7,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__prefetch_ir, 0x40U, 8U)));
	} else {
	    if ((2U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__offset_control))) {
		vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__Vdly__offset 
		    = VL_CONCAT_III(32,16,16, (0xffffU 
					       & VL_REPLICATE_IOI(16,1,32,
								  (1U 
								   & VL_BITSEL_IWII(1,80,7,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__prefetch_ir, 0x4fU)), 0x10U)), 
				    (0xffffU & VL_SEL_IWII(16,80,7,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__prefetch_ir, 0x40U, 0x10U)));
	    }
	}
    } else {
	vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__Vdly__offset = 0U;
    }
    // ALWAYS at registers.v:360
    if (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__reset_n) {
	if ((1U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__index_control))) {
	    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__Vdly__index = 0U;
	} else {
	    if ((2U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__index_control))) {
		vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__Vdly__index 
		    = ((1U & VL_BITSEL_IWII(1,80,7,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__prefetch_ir, 0x4fU))
		        ? ((1U & VL_BITSEL_IWII(1,80,7,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__prefetch_ir, 0x4bU))
			    ? vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__An_output
			    : VL_CONCAT_III(32,16,16, 
					    (0xffffU 
					     & VL_REPLICATE_IOI(16,1,32,
								(1U 
								 & VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__An_output, 0xfU)), 0x10U)), 
					    (0xffffU 
					     & VL_SEL_IIII(16,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__An_output, 0U, 0x10U))))
		        : ((1U & VL_BITSEL_IWII(1,80,7,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__prefetch_ir, 0x4bU))
			    ? vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__Dn_output
			    : VL_CONCAT_III(32,16,16, 
					    (0xffffU 
					     & VL_REPLICATE_IOI(16,1,32,
								(1U 
								 & VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__Dn_output, 0xfU)), 0x10U)), 
					    (0xffffU 
					     & VL_SEL_IIII(16,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__Dn_output, 0U, 0x10U)))));
	    }
	}
    } else {
	vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__Vdly__index = 0U;
    }
    // ALWAYS at registers.v:341
    if (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__reset_n) {
	if ((1U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__trap_control))) {
	    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__Vdly__trap = 4U;
	} else {
	    if ((2U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__trap_control))) {
		vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__Vdly__trap = 5U;
	    } else {
		if ((3U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__trap_control))) {
		    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__Vdly__trap = 6U;
		} else {
		    if ((4U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__trap_control))) {
			vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__Vdly__trap = 7U;
		    } else {
			if ((5U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__trap_control))) {
			    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__Vdly__trap = 8U;
			} else {
			    if ((6U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__trap_control))) {
				vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__Vdly__trap = 9U;
			    } else {
				if ((7U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__trap_control))) {
				    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__Vdly__trap 
					= VL_CONCAT_III(8,4,4, 2U, 
							(0xfU 
							 & VL_SEL_IIII(4,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__ir), 0U, 4U)));
				} else {
				    if ((8U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__trap_control))) {
					vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__Vdly__trap 
					    = vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__decoder_trap;
				    } else {
					if ((9U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__trap_control))) {
					    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__Vdly__trap 
						= vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__interrupt_trap;
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
	vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__Vdly__trap = 0U;
    }
    // ALWAYS at registers.v:211
    if (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__reset_n) {
	if ((1U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__ea_reg_control))) {
	    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__Vdly__ea_reg 
		= (7U & VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__ir), 0U, 3U));
	} else {
	    if ((2U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__ea_reg_control))) {
		vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__Vdly__ea_reg 
		    = (7U & VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__ir), 9U, 3U));
	    } else {
		if ((3U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__ea_reg_control))) {
		    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__Vdly__ea_reg 
			= (7U & VL_SEL_IIII(3,6,3,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__movem_modreg), 0U, 3U));
		} else {
		    if ((4U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__ea_reg_control))) {
			vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__Vdly__ea_reg = 7U;
		    } else {
			if ((5U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__ea_reg_control))) {
			    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__Vdly__ea_reg = 4U;
			}
		    }
		}
	    }
	}
    } else {
	vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__Vdly__ea_reg = 0U;
    }
    // ALWAYS at registers.v:396
    if (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__reset_n) {
	if ((1U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__instruction_flag_control))) {
	    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__Vdly__instruction_flag = 1U;
	} else {
	    if (((((2U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__instruction_flag_control)) 
		   & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__prefetch_ir_valid)) 
		  & (0U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__decoder_trap))) 
		 & (~ (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__stop_flag)))) {
		vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__Vdly__instruction_flag = 0U;
	    }
	}
    } else {
	vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__Vdly__instruction_flag = 0U;
    }
    // ALWAYS at registers.v:247
    if (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__reset_n) {
	if ((1U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__operand1_control))) {
	    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__Vdly__operand1 
		= vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__operand2;
	} else {
	    if ((2U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__operand1_control))) {
		vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__Vdly__operand1 
		    = vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__address;
	    } else {
		if ((3U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__operand1_control))) {
		    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__Vdly__operand1 
			= ((1U & VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__size), 0U))
			    ? VL_CONCAT_III(32,24,8, 
					    (0xffffffU 
					     & VL_REPLICATE_IOI(24,1,32,
								(1U 
								 & VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__data_read, 7U)), 0x18U)), 
					    (0xffU 
					     & VL_SEL_IIII(8,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__data_read, 0U, 8U)))
			    : ((1U & VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__size), 1U))
			        ? VL_CONCAT_III(32,16,16, 
						(0xffffU 
						 & VL_REPLICATE_IOI(16,1,32,
								    (1U 
								     & VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__data_read, 0xfU)), 0x10U)), 
						(0xffffU 
						 & VL_SEL_IIII(16,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__data_read, 0U, 0x10U)))
			        : vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__data_read));
		} else {
		    if ((4U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__operand1_control))) {
			vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__Vdly__operand1 
			    = ((1U & VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__size), 0U))
			        ? VL_CONCAT_III(32,24,8, 
						(0xffffffU 
						 & VL_REPLICATE_IOI(24,1,32,
								    (1U 
								     & VL_BITSEL_IWII(1,80,7,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__prefetch_ir, 0x47U)), 0x18U)), 
						(0xffU 
						 & VL_SEL_IWII(8,80,7,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__prefetch_ir, 0x40U, 8U)))
			        : ((1U & VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__size), 1U))
				    ? VL_CONCAT_III(32,16,16, 
						    (0xffffU 
						     & VL_REPLICATE_IOI(16,1,32,
									(1U 
									 & VL_BITSEL_IWII(1,80,7,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__prefetch_ir, 0x4fU)), 0x10U)), 
						    (0xffffU 
						     & VL_SEL_IWII(16,80,7,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__prefetch_ir, 0x40U, 0x10U)))
				    : VL_SEL_IWII(32,80,7,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__prefetch_ir, 0x30U, 0x20U)));
		    } else {
			if ((5U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__operand1_control))) {
			    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__Vdly__operand1 
				= vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__result;
			} else {
			    if ((6U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__operand1_control))) {
				vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__Vdly__operand1 
				    = VL_CONCAT_III(32,24,8, 
						    (0xffffffU 
						     & VL_REPLICATE_IOI(24,1,32,
									(1U 
									 & VL_BITSEL_IIII(1,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__ir), 7U)), 0x18U)), 
						    (0xffU 
						     & VL_SEL_IIII(8,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__ir), 0U, 8U)));
			    } else {
				if ((7U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__operand1_control))) {
				    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__Vdly__operand1 
					= vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__pc_valid;
				} else {
				    if ((8U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__operand1_control))) {
					vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__Vdly__operand1 = 0U;
				    } else {
					if ((9U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__operand1_control))) {
					    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__Vdly__operand1 = 0xffffffffU;
					} else {
					    if ((0xaU 
						 == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__operand1_control))) {
						vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__Vdly__operand1 
						    = 
						    VL_CONCAT_III(32,17,15, 
								  VL_EXTEND_II(17,1, 
									       (1U 
										& VL_BITSEL_IIII(1,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__sr), 0xfU))), 
								  VL_EXTEND_II(15,14, 
									       VL_CONCAT_III(14,1,13, 
										(1U 
										& VL_BITSEL_IIII(1,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__sr), 0xdU)), 
										VL_EXTEND_II(13,11, 
										VL_CONCAT_III(11,3,8, 
										(7U 
										& VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__sr), 8U, 3U)), 
										VL_EXTEND_II(8,5, 
										(0x1fU 
										& VL_SEL_IIII(5,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__sr), 0U, 5U))))))));
					    } else {
						if (
						    (0xbU 
						     == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__operand1_control))) {
						    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__Vdly__operand1 
							= vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__usp;
						} else {
						    if (
							(0xcU 
							 == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__operand1_control))) {
							vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__Vdly__operand1 
							    = 
							    ((1U 
							      & VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__size), 1U))
							      ? 
							     VL_CONCAT_III(32,16,16, 
									   (0xffffU 
									    & VL_REPLICATE_IOI(16,1,32,
										(1U 
										& VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__An_output, 0xfU)), 0x10U)), 
									   (0xffffU 
									    & VL_SEL_IIII(16,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__An_output, 0U, 0x10U)))
							      : vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__An_output);
						    } else {
							if (
							    (0xdU 
							     == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__operand1_control))) {
							    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__Vdly__operand1 
								= 
								((1U 
								  & VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__size), 0U))
								  ? 
								 VL_CONCAT_III(32,24,8, 
									       (0xffffffU 
										& VL_REPLICATE_IOI(24,1,32,
										(1U 
										& VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__Dn_output, 7U)), 0x18U)), 
									       (0xffU 
										& VL_SEL_IIII(8,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__Dn_output, 0U, 8U)))
								  : 
								 ((1U 
								   & VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__size), 1U))
								   ? 
								  VL_CONCAT_III(32,16,16, 
										(0xffffU 
										& VL_REPLICATE_IOI(16,1,32,
										(1U 
										& VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__Dn_output, 0xfU)), 0x10U)), 
										(0xffffU 
										& VL_SEL_IIII(16,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__Dn_output, 0U, 0x10U)))
								   : vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__Dn_output));
							} else {
							    if (
								(0xeU 
								 == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__operand1_control))) {
								vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__Vdly__operand1 
								    = 
								    VL_EXTEND_II(32,16, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__ir));
							    } else {
								if (
								    (0xfU 
								     == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__operand1_control))) {
								    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__Vdly__operand1 
									= vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__fault_address_state;
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
	vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__Vdly__operand1 = 0xffffffffU;
    }
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__offset 
	= vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__Vdly__offset;
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__index 
	= vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__Vdly__index;
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__trap 
	= vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__Vdly__trap;
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__movem_modreg 
	= vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__Vdly__movem_modreg;
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__ea_reg 
	= vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__Vdly__ea_reg;
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__instruction_flag 
	= vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__Vdly__instruction_flag;
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__address 
	= vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__Vdly__address;
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__Vdly__pc_valid 
	= vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__pc_valid;
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__operand1 
	= vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__Vdly__operand1;
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__operand2 
	= vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__Vdly__operand2;
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__Vdly__size 
	= vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__size;
    // ALWAYS at registers.v:181
    if (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__reset_n) {
	if ((0U != (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__size_control))) {
	    VL_ASSIGNBIT_II(1,0U, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__Vdly__size, 
			    ((((1U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__size_control)) 
			       | ((7U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__size_control)) 
				  & (0U == (3U & VL_SEL_IIII(2,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__ir), 6U, 2U))))) 
			      | ((8U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__size_control)) 
				 & (1U == (3U & VL_SEL_IIII(2,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__ir), 0xcU, 2U))))) 
			     | ((0xaU == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__size_control)) 
				& (0U != (7U & VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__ir), 3U, 3U))))));
	    VL_ASSIGNBIT_II(1,1U, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__Vdly__size, 
			    (((((((2U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__size_control)) 
				  | ((4U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__size_control)) 
				     & (0U == (3U & 
					       VL_SEL_IIII(2,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__ir), 6U, 2U))))) 
				 | ((5U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__size_control)) 
				    & (2U == (3U & 
					      VL_SEL_IIII(2,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__ir), 6U, 2U))))) 
				| ((6U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__size_control)) 
				   & (~ VL_BITSEL_IIII(1,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__ir), 6U)))) 
			       | ((7U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__size_control)) 
				  & (1U == (3U & VL_SEL_IIII(2,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__ir), 6U, 2U))))) 
			      | ((8U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__size_control)) 
				 & (3U == (3U & VL_SEL_IIII(2,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__ir), 0xcU, 2U))))) 
			     | ((9U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__size_control)) 
				& (~ VL_BITSEL_IIII(1,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__ir), 8U)))));
	    VL_ASSIGNBIT_II(1,2U, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__Vdly__size, 
			    ((((((((3U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__size_control)) 
				   | ((4U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__size_control)) 
				      & (0U != (3U 
						& VL_SEL_IIII(2,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__ir), 6U, 2U))))) 
				  | ((5U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__size_control)) 
				     & (2U != (3U & 
					       VL_SEL_IIII(2,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__ir), 6U, 2U))))) 
				 | ((6U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__size_control)) 
				    & VL_BITSEL_IIII(1,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__ir), 6U))) 
				| ((7U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__size_control)) 
				   & VL_BITSEL_IIII(1,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__ir), 7U))) 
			       | ((8U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__size_control)) 
				  & (~ VL_BITSEL_IIII(1,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__ir), 0xcU)))) 
			      | ((9U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__size_control)) 
				 & VL_BITSEL_IIII(1,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__ir), 8U))) 
			     | ((0xaU == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__size_control)) 
				& (0U == (7U & VL_SEL_IIII(3,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__ir), 3U, 3U))))));
	}
    } else {
	vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__Vdly__size = 0U;
    }
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__size 
	= vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__Vdly__size;
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__Vdly__ir 
	= vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__ir;
    // ALWAYS at registers.v:329
    if (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__reset_n) {
	if ((((1U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__ir_control)) 
	      & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__prefetch_ir_valid)) 
	     & (~ (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__stop_flag)))) {
	    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__Vdly__ir 
		= (0xffffU & VL_SEL_IWII(16,80,7,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__prefetch_ir, 0x40U, 0x10U));
	}
    } else {
	vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__Vdly__ir = 0U;
    }
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__Vdly__stop_flag 
	= vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__stop_flag;
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__ir 
	= vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__Vdly__ir;
    // ALWAYS at registers.v:373
    if (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__reset_n) {
	if ((1U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__stop_flag_control))) {
	    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__Vdly__stop_flag = 1U;
	} else {
	    if ((2U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__stop_flag_control))) {
		vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__Vdly__stop_flag = 0U;
	    }
	}
    } else {
	vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__Vdly__stop_flag = 0U;
    }
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__stop_flag 
	= vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__Vdly__stop_flag;
}

VL_INLINE_OPT void Vcpu_ram_uart_sim_registers::_sequent__TOP__tb_m68k_ram_uart__ao68000_m__registers_m__2(Vcpu_ram_uart_sim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          Vcpu_ram_uart_sim_registers::_sequent__TOP__tb_m68k_ram_uart__ao68000_m__registers_m__2\n"); );
    Vcpu_ram_uart_sim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__Vdly__last_pc 
	= vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__last_pc;
    // ALWAYS at registers.v:137
    if (VL_UNLIKELY((vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__pc 
		     != vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__last_pc))) {
	vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__Vdly__last_pc 
	    = vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__pc;
	VL_FWRITEF(0x80000002U,"%x\n",32,vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__pc);
    }
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__last_pc 
	= vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__Vdly__last_pc;
}

void Vcpu_ram_uart_sim_registers::_initial__TOP__tb_m68k_ram_uart__ao68000_m__registers_m__3(Vcpu_ram_uart_sim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          Vcpu_ram_uart_sim_registers::_initial__TOP__tb_m68k_ram_uart__ao68000_m__registers_m__3\n"); );
    Vcpu_ram_uart_sim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // INITIAL at registers.v:51
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__operand1 = 0xffffffffU;
    // INITIAL at registers.v:54
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__operand2 = 0xffffffffU;
    // INITIAL at registers.v:136
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__last_pc = 0U;
}

VL_INLINE_OPT void Vcpu_ram_uart_sim_registers::_sequent__TOP__tb_m68k_ram_uart__ao68000_m__registers_m__4(Vcpu_ram_uart_sim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          Vcpu_ram_uart_sim_registers::_sequent__TOP__tb_m68k_ram_uart__ao68000_m__registers_m__4\n"); );
    Vcpu_ram_uart_sim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__Vdly__pc 
	= vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__pc;
    // ALWAYS at registers.v:159
    if (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__reset_n) {
	vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__Vdly__pc 
	    = vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__pc_next;
	if ((1U & (~ VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__pc_next, 0U)))) {
	    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__Vdly__pc_valid 
		= vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__pc_next;
	}
    } else {
	vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__Vdly__pc = 0U;
	vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__Vdly__pc_valid = 0U;
    }
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__pc_valid 
	= vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__Vdly__pc_valid;
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__pc 
	= vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__Vdly__pc;
}

void Vcpu_ram_uart_sim_registers::_settle__TOP__tb_m68k_ram_uart__ao68000_m__registers_m__5(Vcpu_ram_uart_sim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          Vcpu_ram_uart_sim_registers::_settle__TOP__tb_m68k_ram_uart__ao68000_m__registers_m__5\n"); );
    Vcpu_ram_uart_sim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__Dn_address 
	= (7U & ((IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__Dn_address_control)
		  ? VL_SEL_IWII(3,80,7,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__prefetch_ir, 0x4cU, 3U)
		  : (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__ea_reg)));
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__An_input 
	= ((1U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__An_input_control))
	    ? vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__address
	    : ((2U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__An_input_control))
	        ? VL_SEL_IWII(32,80,7,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__prefetch_ir, 0x30U, 0x20U)
	        : vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__result));
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__An_address 
	= ((1U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__An_address_control))
	    ? VL_CONCAT_III(4,1,3, (1U & VL_BITSEL_IIII(1,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__sr), 0xdU)), 
			    (7U & VL_SEL_IWII(3,80,7,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__prefetch_ir, 0x4cU, 3U)))
	    : ((2U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__An_address_control))
	        ? 7U : ((3U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__An_address_control))
			 ? 0xfU : VL_CONCAT_III(4,1,3, 
						(1U 
						 & VL_BITSEL_IIII(1,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__sr), 0xdU)), (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__ea_reg)))));
}

VL_INLINE_OPT void Vcpu_ram_uart_sim_registers::_combo__TOP__tb_m68k_ram_uart__ao68000_m__registers_m__6(Vcpu_ram_uart_sim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          Vcpu_ram_uart_sim_registers::_combo__TOP__tb_m68k_ram_uart__ao68000_m__registers_m__6\n"); );
    Vcpu_ram_uart_sim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__Dn_address 
	= (7U & ((IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__Dn_address_control)
		  ? VL_SEL_IWII(3,80,7,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__prefetch_ir, 0x4cU, 3U)
		  : (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__ea_reg)));
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__An_input 
	= ((1U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__An_input_control))
	    ? vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__address
	    : ((2U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__An_input_control))
	        ? VL_SEL_IWII(32,80,7,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__prefetch_ir, 0x30U, 0x20U)
	        : vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__result));
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__An_address 
	= ((1U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__An_address_control))
	    ? VL_CONCAT_III(4,1,3, (1U & VL_BITSEL_IIII(1,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__sr), 0xdU)), 
			    (7U & VL_SEL_IWII(3,80,7,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__prefetch_ir, 0x4cU, 3U)))
	    : ((2U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__An_address_control))
	        ? 7U : ((3U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__An_address_control))
			 ? 0xfU : VL_CONCAT_III(4,1,3, 
						(1U 
						 & VL_BITSEL_IIII(1,16,4,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__sr), 0xdU)), (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__ea_reg)))));
}

VL_INLINE_OPT void Vcpu_ram_uart_sim_registers::_combo__TOP__tb_m68k_ram_uart__ao68000_m__registers_m__7(Vcpu_ram_uart_sim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          Vcpu_ram_uart_sim_registers::_combo__TOP__tb_m68k_ram_uart__ao68000_m__registers_m__7\n"); );
    Vcpu_ram_uart_sim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__pc_next 
	= ((1U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__pc_control))
	    ? vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__result
	    : ((2U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__pc_control))
	        ? ((IData)(2U) + vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__pc)
	        : ((3U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__pc_control))
		    ? ((IData)(4U) + vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__pc)
		    : ((4U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__pc_control))
		        ? ((1U & VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__size), 2U))
			    ? ((IData)(4U) + vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__pc)
			    : ((IData)(2U) + vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__pc))
		        : ((5U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__pc_control))
			    ? VL_SEL_IWII(32,80,7,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__prefetch_ir, 0x10U, 0x20U)
			    : (((((6U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__pc_control)) 
				  & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__prefetch_ir_valid)) 
				 & (0U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__decoder_trap))) 
				& (~ (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__stop_flag)))
			        ? ((IData)(2U) + vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__pc)
			        : vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__pc))))));
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__pc_change 
	= (((1U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__pc_control)) 
	    | (5U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__pc_control)))
	    ? 3U : (((3U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__pc_control)) 
		     | ((4U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__pc_control)) 
			& VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__size), 2U)))
		     ? 2U : ((((2U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__pc_control)) 
			       | ((4U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__pc_control)) 
				  & (~ VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__size), 2U)))) 
			      | ((((6U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__pc_control)) 
				   & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__prefetch_ir_valid)) 
				  & (0U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__decoder_trap))) 
				 & (~ (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__stop_flag))))
			      ? 1U : 0U)));
}

void Vcpu_ram_uart_sim_registers::_settle__TOP__tb_m68k_ram_uart__ao68000_m__registers_m__8(Vcpu_ram_uart_sim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          Vcpu_ram_uart_sim_registers::_settle__TOP__tb_m68k_ram_uart__ao68000_m__registers_m__8\n"); );
    Vcpu_ram_uart_sim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__pc_next 
	= ((1U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__pc_control))
	    ? vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__result
	    : ((2U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__pc_control))
	        ? ((IData)(2U) + vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__pc)
	        : ((3U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__pc_control))
		    ? ((IData)(4U) + vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__pc)
		    : ((4U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__pc_control))
		        ? ((1U & VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__size), 2U))
			    ? ((IData)(4U) + vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__pc)
			    : ((IData)(2U) + vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__pc))
		        : ((5U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__pc_control))
			    ? VL_SEL_IWII(32,80,7,32, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__prefetch_ir, 0x10U, 0x20U)
			    : (((((6U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__pc_control)) 
				  & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__prefetch_ir_valid)) 
				 & (0U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__decoder_trap))) 
				& (~ (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__stop_flag)))
			        ? ((IData)(2U) + vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__pc)
			        : vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__pc))))));
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__pc_change 
	= (((1U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__pc_control)) 
	    | (5U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__pc_control)))
	    ? 3U : (((3U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__pc_control)) 
		     | ((4U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__pc_control)) 
			& VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__size), 2U)))
		     ? 2U : ((((2U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__pc_control)) 
			       | ((4U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__pc_control)) 
				  & (~ VL_BITSEL_IIII(1,3,2,32, (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__size), 2U)))) 
			      | ((((6U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__pc_control)) 
				   & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__prefetch_ir_valid)) 
				  & (0U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__decoder_trap))) 
				 & (~ (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__registers_m.__PVT__stop_flag))))
			      ? 1U : 0U)));
}

void Vcpu_ram_uart_sim_registers::_ctor_var_reset() {
    VL_DEBUG_IF(VL_PRINTF("          Vcpu_ram_uart_sim_registers::_ctor_var_reset\n"); );
    // Body
    __PVT__clock = VL_RAND_RESET_I(1);
    __PVT__reset_n = VL_RAND_RESET_I(1);
    __PVT__data_read = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(80,__PVT__prefetch_ir);
    __PVT__prefetch_ir_valid = VL_RAND_RESET_I(1);
    __PVT__result = VL_RAND_RESET_I(32);
    __PVT__sr = VL_RAND_RESET_I(16);
    __PVT__rw_state = VL_RAND_RESET_I(1);
    __PVT__fc_state = VL_RAND_RESET_I(3);
    __PVT__fault_address_state = VL_RAND_RESET_I(32);
    __PVT__interrupt_trap = VL_RAND_RESET_I(8);
    __PVT__interrupt_mask = VL_RAND_RESET_I(3);
    __PVT__decoder_trap = VL_RAND_RESET_I(8);
    __PVT__usp = VL_RAND_RESET_I(32);
    __PVT__Dn_output = VL_RAND_RESET_I(32);
    __PVT__An_output = VL_RAND_RESET_I(32);
    __PVT__pc_change = VL_RAND_RESET_I(2);
    __PVT__ea_reg = VL_RAND_RESET_I(3);
    __PVT__ea_reg_control = VL_RAND_RESET_I(3);
    __PVT__ea_mod = VL_RAND_RESET_I(3);
    __PVT__ea_mod_control = VL_RAND_RESET_I(4);
    __PVT__ea_type = VL_RAND_RESET_I(4);
    __PVT__ea_type_control = VL_RAND_RESET_I(4);
    __PVT__operand1 = VL_RAND_RESET_I(32);
    __PVT__operand1_control = VL_RAND_RESET_I(4);
    __PVT__operand2 = VL_RAND_RESET_I(32);
    __PVT__operand2_control = VL_RAND_RESET_I(3);
    __PVT__address = VL_RAND_RESET_I(32);
    __PVT__address_type = VL_RAND_RESET_I(1);
    __PVT__address_control = VL_RAND_RESET_I(4);
    __PVT__size = VL_RAND_RESET_I(3);
    __PVT__size_control = VL_RAND_RESET_I(4);
    __PVT__movem_modreg = VL_RAND_RESET_I(6);
    __PVT__movem_modreg_control = VL_RAND_RESET_I(3);
    __PVT__movem_loop = VL_RAND_RESET_I(5);
    __PVT__movem_loop_control = VL_RAND_RESET_I(2);
    __PVT__movem_reg = VL_RAND_RESET_I(16);
    __PVT__movem_reg_control = VL_RAND_RESET_I(2);
    __PVT__ir = VL_RAND_RESET_I(16);
    __PVT__ir_control = VL_RAND_RESET_I(2);
    __PVT__pc = VL_RAND_RESET_I(32);
    __PVT__pc_control = VL_RAND_RESET_I(3);
    __PVT__trap = VL_RAND_RESET_I(8);
    __PVT__trap_control = VL_RAND_RESET_I(4);
    __PVT__offset = VL_RAND_RESET_I(32);
    __PVT__offset_control = VL_RAND_RESET_I(2);
    __PVT__index = VL_RAND_RESET_I(32);
    __PVT__index_control = VL_RAND_RESET_I(2);
    __PVT__stop_flag = VL_RAND_RESET_I(1);
    __PVT__stop_flag_control = VL_RAND_RESET_I(2);
    __PVT__trace_flag = VL_RAND_RESET_I(1);
    __PVT__trace_flag_control = VL_RAND_RESET_I(2);
    __PVT__group_0_flag = VL_RAND_RESET_I(1);
    __PVT__group_0_flag_control = VL_RAND_RESET_I(2);
    __PVT__instruction_flag = VL_RAND_RESET_I(1);
    __PVT__instruction_flag_control = VL_RAND_RESET_I(2);
    __PVT__read_modify_write_flag = VL_RAND_RESET_I(1);
    __PVT__read_modify_write_flag_control = VL_RAND_RESET_I(2);
    __PVT__do_reset_flag = VL_RAND_RESET_I(1);
    __PVT__do_reset_flag_control = VL_RAND_RESET_I(2);
    __PVT__do_interrupt_flag = VL_RAND_RESET_I(1);
    __PVT__do_interrupt_flag_control = VL_RAND_RESET_I(2);
    __PVT__do_read_flag = VL_RAND_RESET_I(1);
    __PVT__do_read_flag_control = VL_RAND_RESET_I(2);
    __PVT__do_write_flag = VL_RAND_RESET_I(1);
    __PVT__do_write_flag_control = VL_RAND_RESET_I(2);
    __PVT__do_blocked_flag = VL_RAND_RESET_I(1);
    __PVT__do_blocked_flag_control = VL_RAND_RESET_I(2);
    __PVT__data_write = VL_RAND_RESET_I(32);
    __PVT__data_write_control = VL_RAND_RESET_I(2);
    __PVT__An_address = VL_RAND_RESET_I(4);
    __PVT__An_address_control = VL_RAND_RESET_I(2);
    __PVT__An_input = VL_RAND_RESET_I(32);
    __PVT__An_input_control = VL_RAND_RESET_I(2);
    __PVT__Dn_address = VL_RAND_RESET_I(3);
    __PVT__Dn_address_control = VL_RAND_RESET_I(1);
    __PVT__decoder_alu = VL_RAND_RESET_I(18);
    __PVT__decoder_alu_reg = VL_RAND_RESET_I(18);
    __PVT__last_pc = VL_RAND_RESET_I(32);
    __PVT__pc_valid = VL_RAND_RESET_I(32);
    __PVT__pc_next = VL_RAND_RESET_I(32);
    __Vdly__last_pc = VL_RAND_RESET_I(32);
    __Vdly__pc = VL_RAND_RESET_I(32);
    __Vdly__pc_valid = VL_RAND_RESET_I(32);
    __Vdly__size = VL_RAND_RESET_I(3);
    __Vdly__ea_reg = VL_RAND_RESET_I(3);
    __Vdly__ea_mod = VL_RAND_RESET_I(3);
    __Vdly__ea_type = VL_RAND_RESET_I(4);
    __Vdly__operand1 = VL_RAND_RESET_I(32);
    __Vdly__operand2 = VL_RAND_RESET_I(32);
    __Vdly__address = VL_RAND_RESET_I(32);
    __Vdly__address_type = VL_RAND_RESET_I(1);
    __Vdly__movem_modreg = VL_RAND_RESET_I(6);
    __Vdly__movem_loop = VL_RAND_RESET_I(5);
    __Vdly__movem_reg = VL_RAND_RESET_I(16);
    __Vdly__ir = VL_RAND_RESET_I(16);
    __Vdly__decoder_alu_reg = VL_RAND_RESET_I(18);
    __Vdly__trap = VL_RAND_RESET_I(8);
    __Vdly__offset = VL_RAND_RESET_I(32);
    __Vdly__index = VL_RAND_RESET_I(32);
    __Vdly__stop_flag = VL_RAND_RESET_I(1);
    __Vdly__trace_flag = VL_RAND_RESET_I(1);
    __Vdly__group_0_flag = VL_RAND_RESET_I(1);
    __Vdly__instruction_flag = VL_RAND_RESET_I(1);
    __Vdly__read_modify_write_flag = VL_RAND_RESET_I(1);
    __Vdly__do_reset_flag = VL_RAND_RESET_I(1);
    __Vdly__do_interrupt_flag = VL_RAND_RESET_I(1);
    __Vdly__do_read_flag = VL_RAND_RESET_I(1);
    __Vdly__do_write_flag = VL_RAND_RESET_I(1);
    __Vdly__do_blocked_flag = VL_RAND_RESET_I(1);
    __Vdly__data_write = VL_RAND_RESET_I(32);
}

void Vcpu_ram_uart_sim_registers::_configure_coverage(Vcpu_ram_uart_sim__Syms* __restrict vlSymsp, bool first) {
    VL_DEBUG_IF(VL_PRINTF("          Vcpu_ram_uart_sim_registers::_configure_coverage\n"); );
    // Body
    if (0 && vlSymsp && first) {} // Prevent unused
}
