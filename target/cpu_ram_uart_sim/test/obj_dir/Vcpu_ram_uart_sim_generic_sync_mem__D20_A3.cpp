// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcpu_ram_uart_sim.h for the primary calling header

#include "Vcpu_ram_uart_sim_generic_sync_mem__D20_A3.h" // For This
#include "Vcpu_ram_uart_sim__Syms.h"

#include "verilated_dpi.h"


//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(Vcpu_ram_uart_sim_generic_sync_mem__D20_A3) {
    // Reset internal values
    // Reset structure values
    _ctor_var_reset();
}

void Vcpu_ram_uart_sim_generic_sync_mem__D20_A3::__Vconfigure(Vcpu_ram_uart_sim__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

Vcpu_ram_uart_sim_generic_sync_mem__D20_A3::~Vcpu_ram_uart_sim_generic_sync_mem__D20_A3() {
}

//--------------------
// Internal Methods

VL_INLINE_OPT void Vcpu_ram_uart_sim_generic_sync_mem__D20_A3::_sequent__TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__an_ram_inst__2(Vcpu_ram_uart_sim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("            Vcpu_ram_uart_sim_generic_sync_mem__D20_A3::_sequent__TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__an_ram_inst__2\n"); );
    Vcpu_ram_uart_sim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__an_ram_inst.__Vdlyvset__mem__v0 = 0U;
    // ALWAYS at generic_sync_mem.v:43
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__an_ram_inst.__PVT__data_out 
	= vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__an_ram_inst.mem
	[(7U & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__An_address))];
    // ALWAYS at generic_sync_mem.v:35
    if (((7U != (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__An_address)) 
	 & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[2U] 
	    >> 6U))) {
	vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__an_ram_inst.__Vdlyvval__mem__v0 
	    = vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__An_input;
	vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__an_ram_inst.__Vdlyvset__mem__v0 = 1U;
	vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__an_ram_inst.__Vdlyvdim0__mem__v0 
	    = (7U & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__An_address));
    }
    // ALWAYSPOST at generic_sync_mem.v:38
    if (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__an_ram_inst.__Vdlyvset__mem__v0) {
	vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__an_ram_inst.mem[vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__an_ram_inst.__Vdlyvdim0__mem__v0] 
	    = vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__an_ram_inst.__Vdlyvval__mem__v0;
    }
}

VL_INLINE_OPT void Vcpu_ram_uart_sim_generic_sync_mem__D20_A3::_sequent__TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__dn_ram_inst__1(Vcpu_ram_uart_sim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("            Vcpu_ram_uart_sim_generic_sync_mem__D20_A3::_sequent__TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__dn_ram_inst__1\n"); );
    Vcpu_ram_uart_sim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__dn_ram_inst.__Vdlyvset__mem__v1 = 0U;
    // ALWAYS at generic_sync_mem.v:35
    if ((0x400U & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__PVT__data_out[2U])) {
	vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__dn_ram_inst.__Vdlyvval__mem__v1 
	    = vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__result;
	vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__dn_ram_inst.__Vdlyvset__mem__v1 = 1U;
	vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__dn_ram_inst.__Vdlyvdim0__mem__v1 
	    = vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__Dn_address;
    }
}

VL_INLINE_OPT void Vcpu_ram_uart_sim_generic_sync_mem__D20_A3::_sequent__TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__dn_ram_inst__3(Vcpu_ram_uart_sim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("            Vcpu_ram_uart_sim_generic_sync_mem__D20_A3::_sequent__TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__dn_ram_inst__3\n"); );
    Vcpu_ram_uart_sim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at generic_sync_mem.v:43
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__dn_ram_inst.__PVT__data_out 
	= vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__dn_ram_inst.mem
	[vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__Dn_address];
    // ALWAYSPOST at generic_sync_mem.v:38
    if (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__dn_ram_inst.__Vdlyvset__mem__v1) {
	vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__dn_ram_inst.mem[vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__dn_ram_inst.__Vdlyvdim0__mem__v1] 
	    = vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__dn_ram_inst.__Vdlyvval__mem__v1;
    }
}

void Vcpu_ram_uart_sim_generic_sync_mem__D20_A3::_ctor_var_reset() {
    VL_DEBUG_IF(VL_PRINTF("            Vcpu_ram_uart_sim_generic_sync_mem__D20_A3::_ctor_var_reset\n"); );
    // Body
    __PVT__clk = VL_RAND_RESET_I(1);
    __PVT__address = VL_RAND_RESET_I(3);
    __PVT__data_in = VL_RAND_RESET_I(32);
    __PVT__cs = VL_RAND_RESET_I(1);
    __PVT__we = VL_RAND_RESET_I(1);
    __PVT__data_out = VL_RAND_RESET_I(32);
    { int __Vi0=0; for (; __Vi0<8; ++__Vi0) {
	    mem[__Vi0] = VL_RAND_RESET_I(32);
    }}
    __Vdlyvdim0__mem__v0 = VL_RAND_RESET_I(3);
    __Vdlyvval__mem__v0 = VL_RAND_RESET_I(32);
    __Vdlyvset__mem__v0 = VL_RAND_RESET_I(1);
    __Vdlyvdim0__mem__v1 = VL_RAND_RESET_I(3);
    __Vdlyvval__mem__v1 = VL_RAND_RESET_I(32);
    __Vdlyvset__mem__v1 = VL_RAND_RESET_I(1);
}

void Vcpu_ram_uart_sim_generic_sync_mem__D20_A3::_configure_coverage(Vcpu_ram_uart_sim__Syms* __restrict vlSymsp, bool first) {
    VL_DEBUG_IF(VL_PRINTF("            Vcpu_ram_uart_sim_generic_sync_mem__D20_A3::_configure_coverage\n"); );
    // Body
    if (0 && vlSymsp && first) {} // Prevent unused
}
