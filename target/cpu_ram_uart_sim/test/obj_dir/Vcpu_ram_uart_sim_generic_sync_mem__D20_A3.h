// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcpu_ram_uart_sim.h for the primary calling header

#ifndef _Vcpu_ram_uart_sim_generic_sync_mem__D20_A3_H_
#define _Vcpu_ram_uart_sim_generic_sync_mem__D20_A3_H_

#include "verilated_heavy.h"
#include "Vcpu_ram_uart_sim__Dpi.h"

class Vcpu_ram_uart_sim__Syms;

//----------

VL_MODULE(Vcpu_ram_uart_sim_generic_sync_mem__D20_A3) {
  public:
    
    // PORTS
    VL_IN8(__PVT__clk,0,0);
    VL_IN8(__PVT__address,2,0);
    VL_IN8(__PVT__cs,0,0);
    VL_IN8(__PVT__we,0,0);
    VL_IN(__PVT__data_in,31,0);
    VL_OUT(__PVT__data_out,31,0);
    
    // LOCAL SIGNALS
    VL_SIG(mem[8],31,0);
    
    // LOCAL VARIABLES
    VL_SIG8(__Vdlyvdim0__mem__v0,2,0);
    VL_SIG8(__Vdlyvset__mem__v0,0,0);
    VL_SIG8(__Vdlyvdim0__mem__v1,2,0);
    VL_SIG8(__Vdlyvset__mem__v1,0,0);
    VL_SIG(__Vdlyvval__mem__v0,31,0);
    VL_SIG(__Vdlyvval__mem__v1,31,0);
    
    // INTERNAL VARIABLES
  private:
    Vcpu_ram_uart_sim__Syms* __VlSymsp;  // Symbol table
  public:
    
    // PARAMETERS
    
    // CONSTRUCTORS
  private:
    Vcpu_ram_uart_sim_generic_sync_mem__D20_A3& operator= (const Vcpu_ram_uart_sim_generic_sync_mem__D20_A3&);  ///< Copying not allowed
    Vcpu_ram_uart_sim_generic_sync_mem__D20_A3(const Vcpu_ram_uart_sim_generic_sync_mem__D20_A3&);  ///< Copying not allowed
  public:
    Vcpu_ram_uart_sim_generic_sync_mem__D20_A3(const char* name="TOP");
    ~Vcpu_ram_uart_sim_generic_sync_mem__D20_A3();
    
    // API METHODS
    
    // INTERNAL METHODS
    void __Vconfigure(Vcpu_ram_uart_sim__Syms* symsp, bool first);
  private:
    void _configure_coverage(Vcpu_ram_uart_sim__Syms* __restrict vlSymsp, bool first);
    void _ctor_var_reset();
  public:
    static void _sequent__TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__an_ram_inst__2(Vcpu_ram_uart_sim__Syms* __restrict vlSymsp);
    static void _sequent__TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__dn_ram_inst__1(Vcpu_ram_uart_sim__Syms* __restrict vlSymsp);
    static void _sequent__TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__dn_ram_inst__3(Vcpu_ram_uart_sim__Syms* __restrict vlSymsp);
} VL_ATTR_ALIGNED(128);

#endif // guard
