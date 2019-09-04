// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcpu_ram_uart_sim.h for the primary calling header

#ifndef _Vcpu_ram_uart_sim_arbiter_1m_2s_H_
#define _Vcpu_ram_uart_sim_arbiter_1m_2s_H_

#include "verilated_heavy.h"
#include "Vcpu_ram_uart_sim__Dpi.h"

class Vcpu_ram_uart_sim__Syms;

//----------

VL_MODULE(Vcpu_ram_uart_sim_arbiter_1m_2s) {
  public:
    
    // PORTS
    VL_IN8(__PVT__m_cyc_i,0,0);
    VL_IN8(__PVT__m_sel_i,3,0);
    VL_IN8(__PVT__m_stb_i,0,0);
    VL_IN8(__PVT__m_we_i,0,0);
    VL_OUT8(__PVT__m_ack_o,0,0);
    VL_OUT8(__PVT__m_err_o,0,0);
    VL_OUT8(__PVT__m_rty_o,0,0);
    VL_OUT8(__PVT__s0_cyc_o,0,0);
    VL_OUT8(__PVT__s0_sel_o,3,0);
    VL_OUT8(__PVT__s0_stb_o,0,0);
    VL_OUT8(__PVT__s0_we_o,0,0);
    VL_IN8(__PVT__s0_ack_i,0,0);
    VL_IN8(__PVT__s0_err_i,0,0);
    VL_IN8(__PVT__s0_rty_i,0,0);
    VL_OUT8(__PVT__s1_cyc_o,0,0);
    VL_OUT8(__PVT__s1_sel_o,3,0);
    VL_OUT8(__PVT__s1_stb_o,0,0);
    VL_OUT8(__PVT__s1_we_o,0,0);
    VL_IN8(__PVT__s1_ack_i,0,0);
    VL_IN8(__PVT__s1_err_i,0,0);
    VL_IN8(__PVT__s1_rty_i,0,0);
    VL_IN(__PVT__m_addr_i,31,0);
    VL_IN(__PVT__m_data_i,31,0);
    VL_OUT(__PVT__m_data_o,31,0);
    VL_OUT(__PVT__s0_addr_o,30,0);
    VL_OUT(__PVT__s0_data_o,31,0);
    VL_IN(__PVT__s0_data_i,31,0);
    VL_OUT(__PVT__s1_addr_o,30,0);
    VL_OUT(__PVT__s1_data_o,31,0);
    VL_IN(__PVT__s1_data_i,31,0);
    
    // LOCAL SIGNALS
    VL_SIG8(__PVT__cs,0,0);
    
    // LOCAL VARIABLES
    
    // INTERNAL VARIABLES
  private:
    Vcpu_ram_uart_sim__Syms* __VlSymsp;  // Symbol table
  public:
    
    // PARAMETERS
    
    // CONSTRUCTORS
  private:
    Vcpu_ram_uart_sim_arbiter_1m_2s& operator= (const Vcpu_ram_uart_sim_arbiter_1m_2s&);  ///< Copying not allowed
    Vcpu_ram_uart_sim_arbiter_1m_2s(const Vcpu_ram_uart_sim_arbiter_1m_2s&);  ///< Copying not allowed
  public:
    Vcpu_ram_uart_sim_arbiter_1m_2s(const char* name="TOP");
    ~Vcpu_ram_uart_sim_arbiter_1m_2s();
    
    // API METHODS
    
    // INTERNAL METHODS
    void __Vconfigure(Vcpu_ram_uart_sim__Syms* symsp, bool first);
    static void _combo__TOP__tb_m68k_ram_uart__arbiter__2(Vcpu_ram_uart_sim__Syms* __restrict vlSymsp);
    static void _combo__TOP__tb_m68k_ram_uart__arbiter__4(Vcpu_ram_uart_sim__Syms* __restrict vlSymsp);
  private:
    void _configure_coverage(Vcpu_ram_uart_sim__Syms* __restrict vlSymsp, bool first);
    void _ctor_var_reset();
  public:
    static void _settle__TOP__tb_m68k_ram_uart__arbiter__1(Vcpu_ram_uart_sim__Syms* __restrict vlSymsp);
    static void _settle__TOP__tb_m68k_ram_uart__arbiter__3(Vcpu_ram_uart_sim__Syms* __restrict vlSymsp);
    static void _settle__TOP__tb_m68k_ram_uart__arbiter__5(Vcpu_ram_uart_sim__Syms* __restrict vlSymsp);
} VL_ATTR_ALIGNED(128);

#endif // guard
