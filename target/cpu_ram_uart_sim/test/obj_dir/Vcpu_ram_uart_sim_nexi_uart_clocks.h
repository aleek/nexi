// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcpu_ram_uart_sim.h for the primary calling header

#ifndef _Vcpu_ram_uart_sim_nexi_uart_clocks_H_
#define _Vcpu_ram_uart_sim_nexi_uart_clocks_H_

#include "verilated_heavy.h"
#include "Vcpu_ram_uart_sim__Dpi.h"

class Vcpu_ram_uart_sim__Syms;

//----------

VL_MODULE(Vcpu_ram_uart_sim_nexi_uart_clocks) {
  public:
    
    // PORTS
    VL_IN8(__PVT__clk,0,0);
    VL_OUT8(__PVT__clk_rx,0,0);
    VL_OUT8(__PVT__clk_tx,0,0);
    
    // LOCAL SIGNALS
    VL_SIG8(__PVT__acc,0,0);
    VL_SIG8(__PVT__cnt,3,0);
    VL_SIG8(__PVT__clk_1_16,0,0);
    
    // LOCAL VARIABLES
    VL_SIG8(__Vdly__acc,0,0);
    VL_SIG8(__Vdly__cnt,3,0);
    VL_SIG8(__Vdly__clk_1_16,0,0);
    
    // INTERNAL VARIABLES
  private:
    Vcpu_ram_uart_sim__Syms* __VlSymsp;  // Symbol table
  public:
    
    // PARAMETERS
    
    // CONSTRUCTORS
  private:
    Vcpu_ram_uart_sim_nexi_uart_clocks& operator= (const Vcpu_ram_uart_sim_nexi_uart_clocks&);  ///< Copying not allowed
    Vcpu_ram_uart_sim_nexi_uart_clocks(const Vcpu_ram_uart_sim_nexi_uart_clocks&);  ///< Copying not allowed
  public:
    Vcpu_ram_uart_sim_nexi_uart_clocks(const char* name="TOP");
    ~Vcpu_ram_uart_sim_nexi_uart_clocks();
    
    // API METHODS
    
    // INTERNAL METHODS
    void __Vconfigure(Vcpu_ram_uart_sim__Syms* symsp, bool first);
  private:
    void _configure_coverage(Vcpu_ram_uart_sim__Syms* __restrict vlSymsp, bool first);
    void _ctor_var_reset();
  public:
    static void _initial__TOP__tb_m68k_ram_uart__uart1__uart_clk__2(Vcpu_ram_uart_sim__Syms* __restrict vlSymsp);
    static void _initial__TOP__tb_m68k_ram_uart__uart1__uart_clk__6(Vcpu_ram_uart_sim__Syms* __restrict vlSymsp);
    static void _sequent__TOP__tb_m68k_ram_uart__uart1__uart_clk__1(Vcpu_ram_uart_sim__Syms* __restrict vlSymsp);
    static void _sequent__TOP__tb_m68k_ram_uart__uart1__uart_clk__4(Vcpu_ram_uart_sim__Syms* __restrict vlSymsp);
    static void _sequent__TOP__tb_m68k_ram_uart__uart1__uart_clk__5(Vcpu_ram_uart_sim__Syms* __restrict vlSymsp);
    static void _sequent__TOP__tb_m68k_ram_uart__uart1__uart_clk__8(Vcpu_ram_uart_sim__Syms* __restrict vlSymsp);
    static void _settle__TOP__tb_m68k_ram_uart__uart1__uart_clk__3(Vcpu_ram_uart_sim__Syms* __restrict vlSymsp);
    static void _settle__TOP__tb_m68k_ram_uart__uart1__uart_clk__7(Vcpu_ram_uart_sim__Syms* __restrict vlSymsp);
} VL_ATTR_ALIGNED(128);

#endif // guard
