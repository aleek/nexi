// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcpu_ram_uart_sim.h for the primary calling header

#ifndef _Vcpu_ram_uart_sim_nexi_uart_tx_H_
#define _Vcpu_ram_uart_sim_nexi_uart_tx_H_

#include "verilated_heavy.h"
#include "Vcpu_ram_uart_sim__Dpi.h"

class Vcpu_ram_uart_sim__Syms;

//----------

VL_MODULE(Vcpu_ram_uart_sim_nexi_uart_tx) {
  public:
    
    // PORTS
    VL_IN8(__PVT__clk_1x_bps,0,0);
    VL_IN8(__PVT__rst_n,0,0);
    VL_IN8(__PVT__command_send,0,0);
    VL_OUT8(__PVT__tx_pin,0,0);
    VL_OUT8(__PVT__done_ack,0,0);
    VL_IN8(__PVT__data,7,0);
    
    // LOCAL SIGNALS
    VL_SIG8(__PVT__tx_r,0,0);
    VL_SIG8(__PVT__done_r,0,0);
    VL_SIG8(__PVT__cnt,3,0);
    VL_SIG8(__PVT__ncnt,3,0);
    VL_SIG8(__PVT__tx_data,7,0);
    VL_SIG8(__PVT__send_cmd,0,0);
    VL_SIG8(__PVT__send_cmd_tmp,0,0);
    
    // LOCAL VARIABLES
    VL_SIG8(__Vdly__send_cmd_tmp,0,0);
    VL_SIG8(__Vdly__send_cmd,0,0);
    VL_SIG8(__Vdly__done_r,0,0);
    VL_SIG8(__Vdly__cnt,3,0);
    VL_SIG8(__Vdly__tx_r,0,0);
    VL_SIG8(__Vdly__tx_data,7,0);
    
    // INTERNAL VARIABLES
  private:
    Vcpu_ram_uart_sim__Syms* __VlSymsp;  // Symbol table
  public:
    
    // PARAMETERS
    
    // CONSTRUCTORS
  private:
    Vcpu_ram_uart_sim_nexi_uart_tx& operator= (const Vcpu_ram_uart_sim_nexi_uart_tx&);  ///< Copying not allowed
    Vcpu_ram_uart_sim_nexi_uart_tx(const Vcpu_ram_uart_sim_nexi_uart_tx&);  ///< Copying not allowed
  public:
    Vcpu_ram_uart_sim_nexi_uart_tx(const char* name="TOP");
    ~Vcpu_ram_uart_sim_nexi_uart_tx();
    
    // API METHODS
    
    // INTERNAL METHODS
    void __Vconfigure(Vcpu_ram_uart_sim__Syms* symsp, bool first);
  private:
    void _configure_coverage(Vcpu_ram_uart_sim__Syms* __restrict vlSymsp, bool first);
    void _ctor_var_reset();
  public:
    static void _sequent__TOP__tb_m68k_ram_uart__uart1__nexi_uart_tx_instance__1(Vcpu_ram_uart_sim__Syms* __restrict vlSymsp);
    static void _settle__TOP__tb_m68k_ram_uart__uart1__nexi_uart_tx_instance__2(Vcpu_ram_uart_sim__Syms* __restrict vlSymsp);
} VL_ATTR_ALIGNED(128);

#endif // guard
