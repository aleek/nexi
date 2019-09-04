// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcpu_ram_uart_sim.h for the primary calling header

#ifndef _Vcpu_ram_uart_sim_wb_ram__A18_S4_H_
#define _Vcpu_ram_uart_sim_wb_ram__A18_S4_H_

#include "verilated_heavy.h"
#include "Vcpu_ram_uart_sim__Dpi.h"

class Vcpu_ram_uart_sim__Syms;

//----------

VL_MODULE(Vcpu_ram_uart_sim_wb_ram__A18_S4) {
  public:
    
    // PORTS
    VL_IN8(__PVT__clk,0,0);
    VL_IN8(__PVT__we_i,0,0);
    VL_IN8(__PVT__sel_i,3,0);
    VL_IN8(__PVT__stb_i,0,0);
    VL_OUT8(__PVT__ack_o,0,0);
    VL_IN8(__PVT__cyc_i,0,0);
    VL_IN(__PVT__adr_i,23,0);
    VL_IN(__PVT__dat_i,31,0);
    VL_OUT(__PVT__dat_o,31,0);
    
    // LOCAL SIGNALS
    VL_SIG8(__PVT__ack_o_reg,0,0);
    VL_SIG(__PVT__dat_o_reg,31,0);
    VL_SIG(mem[4194304],31,0);
    
    // LOCAL VARIABLES
    VL_SIG8(__Vdlyvlsb__mem__v0,4,0);
    VL_SIG8(__Vdlyvval__mem__v0,7,0);
    VL_SIG8(__Vdlyvset__mem__v0,0,0);
    VL_SIG8(__Vdlyvlsb__mem__v1,4,0);
    VL_SIG8(__Vdlyvval__mem__v1,7,0);
    VL_SIG8(__Vdlyvset__mem__v1,0,0);
    VL_SIG8(__Vdlyvlsb__mem__v2,4,0);
    VL_SIG8(__Vdlyvval__mem__v2,7,0);
    VL_SIG8(__Vdlyvset__mem__v2,0,0);
    VL_SIG8(__Vdlyvlsb__mem__v3,4,0);
    VL_SIG8(__Vdlyvval__mem__v3,7,0);
    VL_SIG8(__Vdlyvset__mem__v3,0,0);
    VL_SIG(__Vdlyvdim0__mem__v0,21,0);
    VL_SIG(__Vdlyvdim0__mem__v1,21,0);
    VL_SIG(__Vdlyvdim0__mem__v2,21,0);
    VL_SIG(__Vdlyvdim0__mem__v3,21,0);
    
    // INTERNAL VARIABLES
  private:
    Vcpu_ram_uart_sim__Syms* __VlSymsp;  // Symbol table
  public:
    
    // PARAMETERS
    
    // CONSTRUCTORS
  private:
    Vcpu_ram_uart_sim_wb_ram__A18_S4& operator= (const Vcpu_ram_uart_sim_wb_ram__A18_S4&);  ///< Copying not allowed
    Vcpu_ram_uart_sim_wb_ram__A18_S4(const Vcpu_ram_uart_sim_wb_ram__A18_S4&);  ///< Copying not allowed
  public:
    Vcpu_ram_uart_sim_wb_ram__A18_S4(const char* name="TOP");
    ~Vcpu_ram_uart_sim_wb_ram__A18_S4();
    
    // API METHODS
    
    // INTERNAL METHODS
    void __Vconfigure(Vcpu_ram_uart_sim__Syms* symsp, bool first);
  private:
    void _configure_coverage(Vcpu_ram_uart_sim__Syms* __restrict vlSymsp, bool first);
    void _ctor_var_reset();
  public:
    static void _initial__TOP__tb_m68k_ram_uart__wb_ram_m__2(Vcpu_ram_uart_sim__Syms* __restrict vlSymsp);
    static void _sequent__TOP__tb_m68k_ram_uart__wb_ram_m__1(Vcpu_ram_uart_sim__Syms* __restrict vlSymsp);
    static void _sequent__TOP__tb_m68k_ram_uart__wb_ram_m__3(Vcpu_ram_uart_sim__Syms* __restrict vlSymsp);
    static void _settle__TOP__tb_m68k_ram_uart__wb_ram_m__4(Vcpu_ram_uart_sim__Syms* __restrict vlSymsp);
} VL_ATTR_ALIGNED(128);

#endif // guard
