// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcpu_ram_uart_sim.h for the primary calling header

#include "Vcpu_ram_uart_sim_generic_sync_mem__D58_A9.h" // For This
#include "Vcpu_ram_uart_sim__Syms.h"

#include "verilated_dpi.h"


//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(Vcpu_ram_uart_sim_generic_sync_mem__D58_A9) {
    // Reset internal values
    // Reset structure values
    _ctor_var_reset();
}

void Vcpu_ram_uart_sim_generic_sync_mem__D58_A9::__Vconfigure(Vcpu_ram_uart_sim__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

Vcpu_ram_uart_sim_generic_sync_mem__D58_A9::~Vcpu_ram_uart_sim_generic_sync_mem__D58_A9() {
}

//--------------------
// Internal Methods

VL_INLINE_OPT void Vcpu_ram_uart_sim_generic_sync_mem__D58_A9::_sequent__TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst__1(Vcpu_ram_uart_sim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("            Vcpu_ram_uart_sim_generic_sync_mem__D58_A9::_sequent__TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst__1\n"); );
    Vcpu_ram_uart_sim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at generic_sync_mem.v:35
}

VL_INLINE_OPT void Vcpu_ram_uart_sim_generic_sync_mem__D58_A9::_sequent__TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst__2(Vcpu_ram_uart_sim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("            Vcpu_ram_uart_sim_generic_sync_mem__D58_A9::_sequent__TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst__2\n"); );
    Vcpu_ram_uart_sim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at generic_sync_mem.v:43
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[0U] 
	= vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.mem
	[vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__micro_pc][0U];
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[1U] 
	= vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.mem
	[vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__micro_pc][1U];
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[2U] 
	= vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.mem
	[vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__micro_pc][2U];
}

void Vcpu_ram_uart_sim_generic_sync_mem__D58_A9::_ctor_var_reset() {
    VL_DEBUG_IF(VL_PRINTF("            Vcpu_ram_uart_sim_generic_sync_mem__D58_A9::_ctor_var_reset\n"); );
    // Body
    __PVT__clk = VL_RAND_RESET_I(1);
    __PVT__address = VL_RAND_RESET_I(9);
    VL_RAND_RESET_W(88,__PVT__data_in);
    __PVT__cs = VL_RAND_RESET_I(1);
    __PVT__we = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(88,__PVT__data_out);
    { int __Vi0=0; for (; __Vi0<512; ++__Vi0) {
	    VL_RAND_RESET_W(88,mem[__Vi0]);
    }}
}

void Vcpu_ram_uart_sim_generic_sync_mem__D58_A9::_configure_coverage(Vcpu_ram_uart_sim__Syms* __restrict vlSymsp, bool first) {
    VL_DEBUG_IF(VL_PRINTF("            Vcpu_ram_uart_sim_generic_sync_mem__D58_A9::_configure_coverage\n"); );
    // Body
    if (0 && vlSymsp && first) {} // Prevent unused
}
