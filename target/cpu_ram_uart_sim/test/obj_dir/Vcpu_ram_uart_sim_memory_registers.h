// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcpu_ram_uart_sim.h for the primary calling header

#ifndef _Vcpu_ram_uart_sim_memory_registers_H_
#define _Vcpu_ram_uart_sim_memory_registers_H_

#include "verilated_heavy.h"
#include "Vcpu_ram_uart_sim__Dpi.h"

class Vcpu_ram_uart_sim__Syms;
class Vcpu_ram_uart_sim_generic_sync_mem__D20_A3;
class Vcpu_ram_uart_sim_generic_sync_mem__D20_A3;
class Vcpu_ram_uart_sim_generic_sync_mem__D58_A9;

//----------

VL_MODULE(Vcpu_ram_uart_sim_memory_registers) {
  public:
    // CELLS
    Vcpu_ram_uart_sim_generic_sync_mem__D20_A3*	an_ram_inst;
    Vcpu_ram_uart_sim_generic_sync_mem__D20_A3*	dn_ram_inst;
    Vcpu_ram_uart_sim_generic_sync_mem__D58_A9*	micro_rom_inst;
    
    // PORTS
    VL_IN8(__PVT__clock,0,0);
    VL_IN8(__PVT__reset_n,0,0);
    VL_IN8(__PVT__An_address,3,0);
    VL_IN8(__PVT__An_write_enable,0,0);
    VL_IN8(__PVT__Dn_address,2,0);
    VL_IN8(__PVT__Dn_write_enable,0,0);
    VL_IN8(__PVT__Dn_size,2,0);
    VL_IN16(__PVT__micro_pc,8,0);
    VL_IN(__PVT__An_input,31,0);
    VL_OUT(__PVT__An_output,31,0);
    VL_OUT(__PVT__usp,31,0);
    VL_IN(__PVT__Dn_input,31,0);
    VL_OUT(__PVT__Dn_output,31,0);
    VL_OUTW(__PVT__micro_data,87,0,3);
    
    // LOCAL SIGNALS
    
    // LOCAL VARIABLES
    
    // INTERNAL VARIABLES
  private:
    Vcpu_ram_uart_sim__Syms* __VlSymsp;  // Symbol table
  public:
    
    // PARAMETERS
    
    // CONSTRUCTORS
  private:
    Vcpu_ram_uart_sim_memory_registers& operator= (const Vcpu_ram_uart_sim_memory_registers&);  ///< Copying not allowed
    Vcpu_ram_uart_sim_memory_registers(const Vcpu_ram_uart_sim_memory_registers&);  ///< Copying not allowed
  public:
    Vcpu_ram_uart_sim_memory_registers(const char* name="TOP");
    ~Vcpu_ram_uart_sim_memory_registers();
    
    // API METHODS
    
    // INTERNAL METHODS
    void __Vconfigure(Vcpu_ram_uart_sim__Syms* symsp, bool first);
  private:
    void _configure_coverage(Vcpu_ram_uart_sim__Syms* __restrict vlSymsp, bool first);
    void _ctor_var_reset();
  public:
    static void _initial__TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__2(Vcpu_ram_uart_sim__Syms* __restrict vlSymsp);
    static void _sequent__TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__1(Vcpu_ram_uart_sim__Syms* __restrict vlSymsp);
    static void _settle__TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__3(Vcpu_ram_uart_sim__Syms* __restrict vlSymsp);
} VL_ATTR_ALIGNED(128);

#endif // guard
