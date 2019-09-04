// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcpu_ram_uart_sim.h for the primary calling header

#ifndef _Vcpu_ram_uart_sim_decoder_H_
#define _Vcpu_ram_uart_sim_decoder_H_

#include "verilated_heavy.h"
#include "Vcpu_ram_uart_sim__Dpi.h"

class Vcpu_ram_uart_sim__Syms;

//----------

VL_MODULE(Vcpu_ram_uart_sim_decoder) {
  public:
    
    // PORTS
    VL_IN8(__PVT__clock,0,0);
    VL_IN8(__PVT__reset_n,0,0);
    VL_IN8(__PVT__supervisor,0,0);
    VL_OUT8(__PVT__decoder_trap,7,0);
    VL_IN8(__PVT__ea_type,3,0);
    VL_IN8(__PVT__ea_mod,2,0);
    VL_IN8(__PVT__ea_reg,2,0);
    VL_IN16(__PVT__ir,15,0);
    VL_OUT16(__PVT__decoder_micropc,8,0);
    VL_OUT16(__PVT__save_ea,8,0);
    VL_OUT16(__PVT__perform_ea_write,8,0);
    VL_OUT16(__PVT__perform_ea_read,8,0);
    VL_OUT16(__PVT__load_ea,8,0);
    VL_OUT(__PVT__decoder_alu,17,0);
    
    // LOCAL SIGNALS
    
    // LOCAL VARIABLES
    
    // INTERNAL VARIABLES
  private:
    Vcpu_ram_uart_sim__Syms* __VlSymsp;  // Symbol table
  public:
    
    // PARAMETERS
    
    // CONSTRUCTORS
  private:
    Vcpu_ram_uart_sim_decoder& operator= (const Vcpu_ram_uart_sim_decoder&);  ///< Copying not allowed
    Vcpu_ram_uart_sim_decoder(const Vcpu_ram_uart_sim_decoder&);  ///< Copying not allowed
  public:
    Vcpu_ram_uart_sim_decoder(const char* name="TOP");
    ~Vcpu_ram_uart_sim_decoder();
    
    // API METHODS
    
    // INTERNAL METHODS
    void __Vconfigure(Vcpu_ram_uart_sim__Syms* symsp, bool first);
    static void _combo__TOP__tb_m68k_ram_uart__ao68000_m__decoder_m__1(Vcpu_ram_uart_sim__Syms* __restrict vlSymsp);
    static void _combo__TOP__tb_m68k_ram_uart__ao68000_m__decoder_m__3(Vcpu_ram_uart_sim__Syms* __restrict vlSymsp);
  private:
    void _configure_coverage(Vcpu_ram_uart_sim__Syms* __restrict vlSymsp, bool first);
    void _ctor_var_reset();
  public:
    static void _settle__TOP__tb_m68k_ram_uart__ao68000_m__decoder_m__2(Vcpu_ram_uart_sim__Syms* __restrict vlSymsp);
} VL_ATTR_ALIGNED(128);

#endif // guard
