// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcpu_ram_uart_sim.h for the primary calling header

#include "Vcpu_ram_uart_sim_memory_registers.h" // For This
#include "Vcpu_ram_uart_sim__Syms.h"

#include "verilated_dpi.h"


//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(Vcpu_ram_uart_sim_memory_registers) {
    VL_CELL (an_ram_inst, Vcpu_ram_uart_sim_generic_sync_mem__D20_A3);
    VL_CELL (dn_ram_inst, Vcpu_ram_uart_sim_generic_sync_mem__D20_A3);
    VL_CELL (micro_rom_inst, Vcpu_ram_uart_sim_generic_sync_mem__D58_A9);
    // Reset internal values
    // Reset structure values
    _ctor_var_reset();
}

void Vcpu_ram_uart_sim_memory_registers::__Vconfigure(Vcpu_ram_uart_sim__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

Vcpu_ram_uart_sim_memory_registers::~Vcpu_ram_uart_sim_memory_registers() {
}

//--------------------
// Internal Methods

VL_INLINE_OPT void Vcpu_ram_uart_sim_memory_registers::_sequent__TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__1(Vcpu_ram_uart_sim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          Vcpu_ram_uart_sim_memory_registers::_sequent__TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__1\n"); );
    Vcpu_ram_uart_sim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at memory_registers.v:105
    if (vlSymsp->TOP__tb_m68k_ram_uart.rst_n) {
	if (((7U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__An_address)) 
	     & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[2U] 
		>> 6U))) {
	    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m.__PVT__usp 
		= vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__An_input;
	}
    } else {
	vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m.__PVT__usp = 0U;
    }
}

void Vcpu_ram_uart_sim_memory_registers::_initial__TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__2(Vcpu_ram_uart_sim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          Vcpu_ram_uart_sim_memory_registers::_initial__TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__2\n"); );
    Vcpu_ram_uart_sim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    VL_SIGW(__Vtemp1,191,0,6);
    // Body
    // INITIAL at memory_registers.v:101
    __Vtemp1[0U] = 0x766d656dU;
    __Vtemp1[1U] = 0x6f64652eU;
    __Vtemp1[2U] = 0x63726f63U;
    __Vtemp1[3U] = 0x305f6d69U;
    __Vtemp1[4U] = 0x36383030U;
    __Vtemp1[5U] = 0x2e2f616fU;
    VL_READMEM_W (false,88,512, 0,6, __Vtemp1, vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.mem
		  ,0,~0);
}

VL_INLINE_OPT void Vcpu_ram_uart_sim_memory_registers::_settle__TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__3(Vcpu_ram_uart_sim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          Vcpu_ram_uart_sim_memory_registers::_settle__TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__3\n"); );
    Vcpu_ram_uart_sim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m.__PVT__An_output 
	= ((7U == (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__An_address))
	    ? vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m.__PVT__usp
	    : vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__an_ram_inst.__PVT__data_out);
}

void Vcpu_ram_uart_sim_memory_registers::_ctor_var_reset() {
    VL_DEBUG_IF(VL_PRINTF("          Vcpu_ram_uart_sim_memory_registers::_ctor_var_reset\n"); );
    // Body
    __PVT__clock = VL_RAND_RESET_I(1);
    __PVT__reset_n = VL_RAND_RESET_I(1);
    __PVT__An_address = VL_RAND_RESET_I(4);
    __PVT__An_input = VL_RAND_RESET_I(32);
    __PVT__An_write_enable = VL_RAND_RESET_I(1);
    __PVT__An_output = VL_RAND_RESET_I(32);
    __PVT__usp = VL_RAND_RESET_I(32);
    __PVT__Dn_address = VL_RAND_RESET_I(3);
    __PVT__Dn_input = VL_RAND_RESET_I(32);
    __PVT__Dn_write_enable = VL_RAND_RESET_I(1);
    __PVT__Dn_size = VL_RAND_RESET_I(3);
    __PVT__Dn_output = VL_RAND_RESET_I(32);
    __PVT__micro_pc = VL_RAND_RESET_I(9);
    VL_RAND_RESET_W(88,__PVT__micro_data);
}

void Vcpu_ram_uart_sim_memory_registers::_configure_coverage(Vcpu_ram_uart_sim__Syms* __restrict vlSymsp, bool first) {
    VL_DEBUG_IF(VL_PRINTF("          Vcpu_ram_uart_sim_memory_registers::_configure_coverage\n"); );
    // Body
    if (0 && vlSymsp && first) {} // Prevent unused
}
