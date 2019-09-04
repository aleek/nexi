// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcpu_ram_uart_sim.h for the primary calling header

#ifndef _Vcpu_ram_uart_sim_nexi_uart_16550a_wb_H_
#define _Vcpu_ram_uart_sim_nexi_uart_16550a_wb_H_

#include "verilated_heavy.h"
#include "Vcpu_ram_uart_sim__Dpi.h"

class Vcpu_ram_uart_sim__Syms;
class Vcpu_ram_uart_sim_nexi_uart_clocks;
class Vcpu_ram_uart_sim_nexi_uart_tx;
class Vcpu_ram_uart_sim_nexi_uart_rx;

//----------

VL_MODULE(Vcpu_ram_uart_sim_nexi_uart_16550a_wb) {
  public:
    // CELLS
    Vcpu_ram_uart_sim_nexi_uart_clocks*	__PVT__uart_clk;
    Vcpu_ram_uart_sim_nexi_uart_tx*	__PVT__nexi_uart_tx_instance;
    Vcpu_ram_uart_sim_nexi_uart_rx*	__PVT__nexi_uart_rx_instance;
    
    // PORTS
    VL_IN8(__PVT__clk_i,0,0);
    VL_IN8(__PVT__rst_ni,0,0);
    VL_IN8(__PVT__we_i,0,0);
    VL_IN8(__PVT__stb_i,0,0);
    VL_IN8(__PVT__cyc_i,0,0);
    VL_IN8(__PVT__addr_i,2,0);
    VL_IN8(__PVT__sel_i,3,0);
    VL_OUT8(__PVT__ack_o,0,0);
    VL_OUT8(__PVT__irq_o,0,0);
    VL_IN8(__PVT__rx_pin,0,0);
    VL_OUT8(__PVT__tx_pin,0,0);
    VL_IN(__PVT__data_i,31,0);
    VL_OUT(__PVT__data_o,31,0);
    
    // LOCAL SIGNALS
    VL_SIG8(__PVT__clk_rx,0,0);
    VL_SIG8(__PVT__clk_tx,0,0);
    VL_SIG8(__PVT__rbr,7,0);
    VL_SIG8(__PVT__thr,7,0);
    VL_SIG8(__PVT__ier,7,0);
    VL_SIG8(__PVT__isr,7,0);
    VL_SIG8(__PVT__data_to_transmit,0,0);
    VL_SIG8(__PVT__command_send,0,0);
    VL_SIG8(__PVT__tx_done_ack,0,0);
    VL_SIG8(__PVT__txstate,3,0);
    VL_SIG8(__PVT__rxstate,1,0);
    VL_SIG8(__PVT__rx_data_ready,0,0);
    VL_SIG8(__PVT__rx_done_ack,0,0);
    VL_SIG8(__PVT__rx_data_buf,7,0);
    
    // LOCAL VARIABLES
    VL_SIG8(__Vdly__thr,7,0);
    VL_SIG8(__Vdly__data_to_transmit,0,0);
    VL_SIG8(__Vdly__ier,7,0);
    VL_SIG8(__Vdly__isr,7,0);
    VL_SIG8(__Vdly__ack_o,0,0);
    VL_SIG8(__Vdly__command_send,0,0);
    VL_SIG8(__Vdly__txstate,3,0);
    VL_SIG8(__Vdly__rbr,7,0);
    VL_SIG8(__Vdly__rx_done_ack,0,0);
    VL_SIG8(__Vdly__rxstate,1,0);
    VL_SIG8(__Vdly__irq_o,0,0);
    VL_SIG(__Vdly__data_o,31,0);
    
    // INTERNAL VARIABLES
  private:
    Vcpu_ram_uart_sim__Syms* __VlSymsp;  // Symbol table
  public:
    
    // PARAMETERS
    
    // CONSTRUCTORS
  private:
    Vcpu_ram_uart_sim_nexi_uart_16550a_wb& operator= (const Vcpu_ram_uart_sim_nexi_uart_16550a_wb&);  ///< Copying not allowed
    Vcpu_ram_uart_sim_nexi_uart_16550a_wb(const Vcpu_ram_uart_sim_nexi_uart_16550a_wb&);  ///< Copying not allowed
  public:
    Vcpu_ram_uart_sim_nexi_uart_16550a_wb(const char* name="TOP");
    ~Vcpu_ram_uart_sim_nexi_uart_16550a_wb();
    
    // API METHODS
    
    // INTERNAL METHODS
    void __Vconfigure(Vcpu_ram_uart_sim__Syms* symsp, bool first);
    static void _combo__TOP__tb_m68k_ram_uart__uart1__10(Vcpu_ram_uart_sim__Syms* __restrict vlSymsp);
    static void _combo__TOP__tb_m68k_ram_uart__uart1__14(Vcpu_ram_uart_sim__Syms* __restrict vlSymsp);
    static void _combo__TOP__tb_m68k_ram_uart__uart1__19(Vcpu_ram_uart_sim__Syms* __restrict vlSymsp);
    static void _combo__TOP__tb_m68k_ram_uart__uart1__2(Vcpu_ram_uart_sim__Syms* __restrict vlSymsp);
  private:
    void _configure_coverage(Vcpu_ram_uart_sim__Syms* __restrict vlSymsp, bool first);
    void _ctor_var_reset();
  public:
    static void _sequent__TOP__tb_m68k_ram_uart__uart1__11(Vcpu_ram_uart_sim__Syms* __restrict vlSymsp);
    static void _sequent__TOP__tb_m68k_ram_uart__uart1__12(Vcpu_ram_uart_sim__Syms* __restrict vlSymsp);
    static void _sequent__TOP__tb_m68k_ram_uart__uart1__13(Vcpu_ram_uart_sim__Syms* __restrict vlSymsp);
    static void _sequent__TOP__tb_m68k_ram_uart__uart1__17(Vcpu_ram_uart_sim__Syms* __restrict vlSymsp);
    static void _sequent__TOP__tb_m68k_ram_uart__uart1__18(Vcpu_ram_uart_sim__Syms* __restrict vlSymsp);
    static void _sequent__TOP__tb_m68k_ram_uart__uart1__3(Vcpu_ram_uart_sim__Syms* __restrict vlSymsp);
    static void _sequent__TOP__tb_m68k_ram_uart__uart1__4(Vcpu_ram_uart_sim__Syms* __restrict vlSymsp);
    static void _sequent__TOP__tb_m68k_ram_uart__uart1__6(Vcpu_ram_uart_sim__Syms* __restrict vlSymsp);
    static void _sequent__TOP__tb_m68k_ram_uart__uart1__7(Vcpu_ram_uart_sim__Syms* __restrict vlSymsp);
    static void _settle__TOP__tb_m68k_ram_uart__uart1__1(Vcpu_ram_uart_sim__Syms* __restrict vlSymsp);
    static void _settle__TOP__tb_m68k_ram_uart__uart1__15(Vcpu_ram_uart_sim__Syms* __restrict vlSymsp);
    static void _settle__TOP__tb_m68k_ram_uart__uart1__16(Vcpu_ram_uart_sim__Syms* __restrict vlSymsp);
    static void _settle__TOP__tb_m68k_ram_uart__uart1__20(Vcpu_ram_uart_sim__Syms* __restrict vlSymsp);
    static void _settle__TOP__tb_m68k_ram_uart__uart1__5(Vcpu_ram_uart_sim__Syms* __restrict vlSymsp);
    static void _settle__TOP__tb_m68k_ram_uart__uart1__8(Vcpu_ram_uart_sim__Syms* __restrict vlSymsp);
    static void _settle__TOP__tb_m68k_ram_uart__uart1__9(Vcpu_ram_uart_sim__Syms* __restrict vlSymsp);
} VL_ATTR_ALIGNED(128);

#endif // guard
