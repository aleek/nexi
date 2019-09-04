// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcpu_ram_uart_sim.h for the primary calling header

#ifndef _Vcpu_ram_uart_sim_tb_m68k_ram_uart_H_
#define _Vcpu_ram_uart_sim_tb_m68k_ram_uart_H_

#include "verilated_heavy.h"
#include "Vcpu_ram_uart_sim__Dpi.h"

class Vcpu_ram_uart_sim__Syms;
class Vcpu_ram_uart_sim_ao68000;
class Vcpu_ram_uart_sim_wb_ram__A18_S4;

//----------

VL_MODULE(Vcpu_ram_uart_sim_tb_m68k_ram_uart) {
  public:
    // CELLS
    Vcpu_ram_uart_sim_ao68000*	ao68000_m;
    Vcpu_ram_uart_sim_wb_ram__A18_S4*	wb_ram_m;
    
    // PORTS
    
    // LOCAL SIGNALS
    VL_SIG8(clk,0,0);
    VL_SIG8(rst_n,0,0);
    VL_SIG8(__PVT__uart1__DOT__uart_clk__DOT__acc,0,0);
    VL_SIG8(__PVT__uart1__DOT__uart_clk__DOT__clk_1_16,0,0);
    VL_SIG8(__PVT__uart_stb,0,0);
    VL_SIG8(__PVT__uart_ack,0,0);
    VL_SIG8(__PVT__uart1__DOT__rbr,7,0);
    VL_SIG8(__PVT__uart1__DOT__thr,7,0);
    VL_SIG8(__PVT__uart1__DOT__ier,7,0);
    VL_SIG8(__PVT__uart1__DOT__isr,7,0);
    VL_SIG8(__PVT__uart1__DOT__data_to_transmit,0,0);
    VL_SIG8(__PVT__uart1__DOT__command_send,0,0);
    VL_SIG8(__PVT__uart1__DOT__txstate,3,0);
    VL_SIG8(__PVT__uart1__DOT__rxstate,1,0);
    VL_SIG8(__PVT__uart1__DOT__rx_done_ack,0,0);
    VL_SIG8(__PVT__uart1__DOT__uart_clk__DOT__cnt,3,0);
    VL_SIG8(__PVT__uart1__DOT__nexi_uart_tx_instance__DOT__tx_r,0,0);
    VL_SIG8(__PVT__uart1__DOT__nexi_uart_tx_instance__DOT__done_r,0,0);
    VL_SIG8(__PVT__uart1__DOT__nexi_uart_tx_instance__DOT__cnt,3,0);
    VL_SIG8(__PVT__uart1__DOT__nexi_uart_tx_instance__DOT__ncnt,3,0);
    VL_SIG8(__PVT__uart1__DOT__nexi_uart_tx_instance__DOT__tx_data,7,0);
    VL_SIG8(__PVT__uart1__DOT__nexi_uart_tx_instance__DOT__send_cmd,0,0);
    VL_SIG8(__PVT__uart1__DOT__nexi_uart_tx_instance__DOT__send_cmd_tmp,0,0);
    VL_SIG8(__PVT__uart1__DOT__nexi_uart_rx_instance__DOT__rxdata,7,0);
    VL_SIG8(__PVT__uart1__DOT__nexi_uart_rx_instance__DOT__cnt,3,0);
    VL_SIG8(__PVT__uart1__DOT__nexi_uart_rx_instance__DOT__r1,0,0);
    VL_SIG8(__PVT__uart1__DOT__nexi_uart_rx_instance__DOT__r2,0,0);
    VL_SIG8(__PVT__uart1__DOT__nexi_uart_rx_instance__DOT__r3,0,0);
    VL_SIG8(__PVT__uart1__DOT__nexi_uart_rx_instance__DOT__start,0,0);
    VL_SIG8(__PVT__uart1__DOT__nexi_uart_rx_instance__DOT__rxbit,0,0);
    VL_SIG8(__PVT__uart1__DOT__nexi_uart_rx_instance__DOT__rxdone,0,0);
    VL_SIG8(__PVT__uart1__DOT__nexi_uart_rx_instance__DOT__rx_sync1,0,0);
    VL_SIG8(__PVT__uart1__DOT__nexi_uart_rx_instance__DOT__rx_sync2,0,0);
    VL_SIG8(__PVT__uart1__DOT__nexi_uart_rx_instance__DOT__rx_m,0,0);
    VL_SIG8(__PVT__uart1__DOT__nexi_uart_rx_instance__DOT__rd_ack_sync1,0,0);
    VL_SIG8(__PVT__uart1__DOT__nexi_uart_rx_instance__DOT__rd_ack_sync2,0,0);
    VL_SIG8(__PVT__uart1__DOT__nexi_uart_rx_instance__DOT__bcnt,3,0);
    VL_SIG8(__PVT__arbiter__DOT__s0_err_i,0,0);
    VL_SIG8(__PVT__arbiter__DOT__s0_rty_i,0,0);
    VL_SIG8(__PVT__arbiter__DOT__s1_err_i,0,0);
    VL_SIG8(__PVT__arbiter__DOT__s1_rty_i,0,0);
    VL_SIG(__PVT__ao_addr,31,0);
    VL_SIG(__PVT__ram_addr,31,0);
    VL_SIG(__PVT__uart_data_out,31,0);
    
    // LOCAL VARIABLES
    VL_SIG8(__Vdly__uart1__DOT__thr,7,0);
    VL_SIG8(__Vdly__uart1__DOT__data_to_transmit,0,0);
    VL_SIG8(__Vdly__uart1__DOT__ier,7,0);
    VL_SIG8(__Vdly__uart1__DOT__isr,7,0);
    VL_SIG8(__Vdly__uart_ack,0,0);
    VL_SIG8(__Vdly__uart1__DOT__txstate,3,0);
    VL_SIG8(__Vdly__uart1__DOT__rxstate,1,0);
    VL_SIG8(__Vdly__uart1__DOT__uart_clk__DOT__acc,0,0);
    VL_SIG8(__Vdly__uart1__DOT__uart_clk__DOT__cnt,3,0);
    VL_SIG8(__Vdly__uart1__DOT__uart_clk__DOT__clk_1_16,0,0);
    VL_SIG8(__Vdly__uart1__DOT__nexi_uart_rx_instance__DOT__rxdone,0,0);
    VL_SIG8(__Vdly__uart1__DOT__nexi_uart_rx_instance__DOT__start,0,0);
    VL_SIG8(__Vdly__uart1__DOT__nexi_uart_rx_instance__DOT__cnt,3,0);
    VL_SIG8(__Vdly__uart1__DOT__nexi_uart_rx_instance__DOT__bcnt,3,0);
    VL_SIG8(__Vdly__uart1__DOT__nexi_uart_rx_instance__DOT__rxdata,7,0);
    VL_SIG8(__Vdly__uart1__DOT__nexi_uart_tx_instance__DOT__done_r,0,0);
    VL_SIG8(__Vdly__uart1__DOT__nexi_uart_tx_instance__DOT__tx_data,7,0);
    
    // INTERNAL VARIABLES
  private:
    Vcpu_ram_uart_sim__Syms* __VlSymsp;  // Symbol table
  public:
    
    // PARAMETERS
    
    // CONSTRUCTORS
  private:
    Vcpu_ram_uart_sim_tb_m68k_ram_uart& operator= (const Vcpu_ram_uart_sim_tb_m68k_ram_uart&);  ///< Copying not allowed
    Vcpu_ram_uart_sim_tb_m68k_ram_uart(const Vcpu_ram_uart_sim_tb_m68k_ram_uart&);  ///< Copying not allowed
  public:
    Vcpu_ram_uart_sim_tb_m68k_ram_uart(const char* name="TOP");
    ~Vcpu_ram_uart_sim_tb_m68k_ram_uart();
    
    // API METHODS
    
    // INTERNAL METHODS
    void __Vconfigure(Vcpu_ram_uart_sim__Syms* symsp, bool first);
  private:
    void _configure_coverage(Vcpu_ram_uart_sim__Syms* __restrict vlSymsp, bool first);
    void _ctor_var_reset();
  public:
    static void _initial__TOP__tb_m68k_ram_uart__10(Vcpu_ram_uart_sim__Syms* __restrict vlSymsp);
    static void _initial__TOP__tb_m68k_ram_uart__2(Vcpu_ram_uart_sim__Syms* __restrict vlSymsp);
    static void _initial__TOP__tb_m68k_ram_uart__4(Vcpu_ram_uart_sim__Syms* __restrict vlSymsp);
    static void _sequent__TOP__tb_m68k_ram_uart__1(Vcpu_ram_uart_sim__Syms* __restrict vlSymsp);
    static void _sequent__TOP__tb_m68k_ram_uart__12(Vcpu_ram_uart_sim__Syms* __restrict vlSymsp);
    static void _sequent__TOP__tb_m68k_ram_uart__13(Vcpu_ram_uart_sim__Syms* __restrict vlSymsp);
    static void _sequent__TOP__tb_m68k_ram_uart__14(Vcpu_ram_uart_sim__Syms* __restrict vlSymsp);
    static void _sequent__TOP__tb_m68k_ram_uart__3(Vcpu_ram_uart_sim__Syms* __restrict vlSymsp);
    static void _sequent__TOP__tb_m68k_ram_uart__6(Vcpu_ram_uart_sim__Syms* __restrict vlSymsp);
    static void _sequent__TOP__tb_m68k_ram_uart__7(Vcpu_ram_uart_sim__Syms* __restrict vlSymsp);
    static void _sequent__TOP__tb_m68k_ram_uart__8(Vcpu_ram_uart_sim__Syms* __restrict vlSymsp);
    static void _sequent__TOP__tb_m68k_ram_uart__9(Vcpu_ram_uart_sim__Syms* __restrict vlSymsp);
    static void _settle__TOP__tb_m68k_ram_uart__11(Vcpu_ram_uart_sim__Syms* __restrict vlSymsp);
    static void _settle__TOP__tb_m68k_ram_uart__5(Vcpu_ram_uart_sim__Syms* __restrict vlSymsp);
} VL_ATTR_ALIGNED(128);

#endif // guard
