// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcpu_ram_uart_sim.h for the primary calling header

#ifndef _Vcpu_ram_uart_sim_condition_H_
#define _Vcpu_ram_uart_sim_condition_H_

#include "verilated_heavy.h"
#include "Vcpu_ram_uart_sim__Dpi.h"

class Vcpu_ram_uart_sim__Syms;

//----------

VL_MODULE(Vcpu_ram_uart_sim_condition) {
  public:
    
    // PORTS
    VL_IN8(__PVT__cond,3,0);
    VL_IN8(__PVT__ccr,7,0);
    VL_OUT8(__PVT__condition,0,0);
    
    // LOCAL SIGNALS
    VL_SIG8(__PVT__C,0,0);
    VL_SIG8(__PVT__V,0,0);
    VL_SIG8(__PVT__Z,0,0);
    VL_SIG8(__PVT__N,0,0);
    
    // LOCAL VARIABLES
    
    // INTERNAL VARIABLES
  private:
    Vcpu_ram_uart_sim__Syms* __VlSymsp;  // Symbol table
  public:
    
    // PARAMETERS
    
    // CONSTRUCTORS
  private:
    Vcpu_ram_uart_sim_condition& operator= (const Vcpu_ram_uart_sim_condition&);  ///< Copying not allowed
    Vcpu_ram_uart_sim_condition(const Vcpu_ram_uart_sim_condition&);  ///< Copying not allowed
  public:
    Vcpu_ram_uart_sim_condition(const char* name="TOP");
    ~Vcpu_ram_uart_sim_condition();
    
    // API METHODS
    
    // INTERNAL METHODS
    void __Vconfigure(Vcpu_ram_uart_sim__Syms* symsp, bool first);
    static void _combo__TOP__tb_m68k_ram_uart__ao68000_m__condition_m__2(Vcpu_ram_uart_sim__Syms* __restrict vlSymsp);
  private:
    void _configure_coverage(Vcpu_ram_uart_sim__Syms* __restrict vlSymsp, bool first);
    void _ctor_var_reset();
  public:
    static void _settle__TOP__tb_m68k_ram_uart__ao68000_m__condition_m__1(Vcpu_ram_uart_sim__Syms* __restrict vlSymsp);
    static void _settle__TOP__tb_m68k_ram_uart__ao68000_m__condition_m__3(Vcpu_ram_uart_sim__Syms* __restrict vlSymsp);
} VL_ATTR_ALIGNED(128);

#endif // guard
