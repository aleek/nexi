// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcpu_ram_uart_sim.h for the primary calling header

#ifndef _Vcpu_ram_uart_sim_generic_sync_mem__D58_A9_H_
#define _Vcpu_ram_uart_sim_generic_sync_mem__D58_A9_H_

#include "verilated_heavy.h"
#include "Vcpu_ram_uart_sim__Dpi.h"

class Vcpu_ram_uart_sim__Syms;

//----------

VL_MODULE(Vcpu_ram_uart_sim_generic_sync_mem__D58_A9) {
  public:
    
    // PORTS
    VL_IN8(__PVT__clk,0,0);
    VL_IN8(__PVT__cs,0,0);
    VL_IN8(__PVT__we,0,0);
    VL_IN16(__PVT__address,8,0);
    VL_INW(__PVT__data_in,87,0,3);
    VL_OUTW(__PVT__data_out,87,0,3);
    
    // LOCAL SIGNALS
    VL_SIGW(mem[512],87,0,3);
    
    // LOCAL VARIABLES
    
    // INTERNAL VARIABLES
  private:
    Vcpu_ram_uart_sim__Syms* __VlSymsp;  // Symbol table
  public:
    
    // PARAMETERS
    
    // CONSTRUCTORS
  private:
    Vcpu_ram_uart_sim_generic_sync_mem__D58_A9& operator= (const Vcpu_ram_uart_sim_generic_sync_mem__D58_A9&);  ///< Copying not allowed
    Vcpu_ram_uart_sim_generic_sync_mem__D58_A9(const Vcpu_ram_uart_sim_generic_sync_mem__D58_A9&);  ///< Copying not allowed
  public:
    Vcpu_ram_uart_sim_generic_sync_mem__D58_A9(const char* name="TOP");
    ~Vcpu_ram_uart_sim_generic_sync_mem__D58_A9();
    
    // API METHODS
    
    // INTERNAL METHODS
    void __Vconfigure(Vcpu_ram_uart_sim__Syms* symsp, bool first);
  private:
    void _configure_coverage(Vcpu_ram_uart_sim__Syms* __restrict vlSymsp, bool first);
    void _ctor_var_reset();
  public:
    static void _sequent__TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst__1(Vcpu_ram_uart_sim__Syms* __restrict vlSymsp);
    static void _sequent__TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst__2(Vcpu_ram_uart_sim__Syms* __restrict vlSymsp);
} VL_ATTR_ALIGNED(128);

#endif // guard
