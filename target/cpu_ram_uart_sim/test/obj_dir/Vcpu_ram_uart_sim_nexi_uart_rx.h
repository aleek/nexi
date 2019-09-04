// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcpu_ram_uart_sim.h for the primary calling header

#ifndef _Vcpu_ram_uart_sim_nexi_uart_rx_H_
#define _Vcpu_ram_uart_sim_nexi_uart_rx_H_

#include "verilated_heavy.h"
#include "Vcpu_ram_uart_sim__Dpi.h"

class Vcpu_ram_uart_sim__Syms;

//----------

VL_MODULE(Vcpu_ram_uart_sim_nexi_uart_rx) {
  public:
    
    // PORTS
    VL_IN8(__PVT__clk_16x_bps,0,0);
    VL_IN8(__PVT__rst_n,0,0);
    VL_IN8(__PVT__rx_pin,0,0);
    VL_IN8(__PVT__read_ack,0,0);
    VL_OUT8(__PVT__data,7,0);
    VL_OUT8(__PVT__data_ready,0,0);
    
    // LOCAL SIGNALS
    VL_SIG8(__PVT__rxdata,7,0);
    VL_SIG8(__PVT__cnt,3,0);
    VL_SIG8(__PVT__r1,0,0);
    VL_SIG8(__PVT__r2,0,0);
    VL_SIG8(__PVT__r3,0,0);
    VL_SIG8(__PVT__start,0,0);
    VL_SIG8(__PVT__rxbit,0,0);
    VL_SIG8(__PVT__rxdone,0,0);
    VL_SIG8(__PVT__rx_sync1,0,0);
    VL_SIG8(__PVT__rx_sync2,0,0);
    VL_SIG8(__PVT__rx_m,0,0);
    VL_SIG8(__PVT__rd_ack_sync1,0,0);
    VL_SIG8(__PVT__rd_ack_sync2,0,0);
    VL_SIG8(__PVT__bcnt,3,0);
    
    // LOCAL VARIABLES
    VL_SIG8(__Vdly__rx_sync1,0,0);
    VL_SIG8(__Vdly__rx_sync2,0,0);
    VL_SIG8(__Vdly__rx_m,0,0);
    VL_SIG8(__Vdly__rd_ack_sync1,0,0);
    VL_SIG8(__Vdly__rd_ack_sync2,0,0);
    VL_SIG8(__Vdly__rxdone,0,0);
    VL_SIG8(__Vdly__start,0,0);
    VL_SIG8(__Vdly__cnt,3,0);
    VL_SIG8(__Vdly__bcnt,3,0);
    VL_SIG8(__Vdly__r3,0,0);
    VL_SIG8(__Vdly__r2,0,0);
    VL_SIG8(__Vdly__r1,0,0);
    VL_SIG8(__Vdly__rxdata,7,0);
    
    // INTERNAL VARIABLES
  private:
    Vcpu_ram_uart_sim__Syms* __VlSymsp;  // Symbol table
  public:
    
    // PARAMETERS
    
    // CONSTRUCTORS
  private:
    Vcpu_ram_uart_sim_nexi_uart_rx& operator= (const Vcpu_ram_uart_sim_nexi_uart_rx&);  ///< Copying not allowed
    Vcpu_ram_uart_sim_nexi_uart_rx(const Vcpu_ram_uart_sim_nexi_uart_rx&);  ///< Copying not allowed
  public:
    Vcpu_ram_uart_sim_nexi_uart_rx(const char* name="TOP");
    ~Vcpu_ram_uart_sim_nexi_uart_rx();
    
    // API METHODS
    
    // INTERNAL METHODS
    void __Vconfigure(Vcpu_ram_uart_sim__Syms* symsp, bool first);
  private:
    void _configure_coverage(Vcpu_ram_uart_sim__Syms* __restrict vlSymsp, bool first);
    void _ctor_var_reset();
  public:
    static void _sequent__TOP__tb_m68k_ram_uart__uart1__nexi_uart_rx_instance__1(Vcpu_ram_uart_sim__Syms* __restrict vlSymsp);
    static void _settle__TOP__tb_m68k_ram_uart__uart1__nexi_uart_rx_instance__2(Vcpu_ram_uart_sim__Syms* __restrict vlSymsp);
} VL_ATTR_ALIGNED(128);

#endif // guard
