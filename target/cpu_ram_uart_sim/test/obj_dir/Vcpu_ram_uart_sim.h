// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _Vcpu_ram_uart_sim_H_
#define _Vcpu_ram_uart_sim_H_

#include "verilated_heavy.h"
#include "Vcpu_ram_uart_sim__Dpi.h"

class Vcpu_ram_uart_sim__Syms;
class Vcpu_ram_uart_sim_tb_m68k_ram_uart;

//----------

VL_MODULE(Vcpu_ram_uart_sim) {
  public:
    // CELLS
    // Public to allow access to /*verilator_public*/ items;
    // otherwise the application code can consider these internals.
    Vcpu_ram_uart_sim_tb_m68k_ram_uart*	tb_m68k_ram_uart;
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    VL_SIG8(__VinpClk__TOP__tb_m68k_ram_uart____PVT__uart1__DOT__uart_clk__DOT__acc,0,0);
    VL_SIG8(__VinpClk__TOP__tb_m68k_ram_uart____PVT__uart1__DOT__uart_clk__DOT__clk_1_16,0,0);
    VL_SIG8(__Vclklast__TOP__tb_m68k_ram_uart__clk,0,0);
    VL_SIG8(__Vclklast__TOP__tb_m68k_ram_uart__rst_n,0,0);
    VL_SIG8(__Vclklast__TOP____VinpClk__TOP__tb_m68k_ram_uart____PVT__uart1__DOT__uart_clk__DOT__acc,0,0);
    VL_SIG8(__Vclklast__TOP____VinpClk__TOP__tb_m68k_ram_uart____PVT__uart1__DOT__uart_clk__DOT__clk_1_16,0,0);
    VL_SIG8(__Vchglast__TOP__tb_m68k_ram_uart__uart1__DOT__uart_clk__DOT__acc,0,0);
    VL_SIG8(__Vchglast__TOP__tb_m68k_ram_uart__uart1__DOT__uart_clk__DOT__clk_1_16,0,0);
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    Vcpu_ram_uart_sim__Syms* __VlSymsp;  // Symbol table
    
    // PARAMETERS
    // Parameters marked /*verilator public*/ for use by application code
    
    // CONSTRUCTORS
  private:
    Vcpu_ram_uart_sim& operator= (const Vcpu_ram_uart_sim&);  ///< Copying not allowed
    Vcpu_ram_uart_sim(const Vcpu_ram_uart_sim&);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible WRT DPI scope names.
    Vcpu_ram_uart_sim(const char* name="TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~Vcpu_ram_uart_sim();
    
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval();
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    
    // INTERNAL METHODS
  private:
    static void _eval_initial_loop(Vcpu_ram_uart_sim__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(Vcpu_ram_uart_sim__Syms* symsp, bool first);
  private:
    static QData _change_request(Vcpu_ram_uart_sim__Syms* __restrict vlSymsp);
    void _configure_coverage(Vcpu_ram_uart_sim__Syms* __restrict vlSymsp, bool first);
    void _ctor_var_reset();
  public:
    static void _eval(Vcpu_ram_uart_sim__Syms* __restrict vlSymsp);
    static void _eval_initial(Vcpu_ram_uart_sim__Syms* __restrict vlSymsp);
    static void _eval_settle(Vcpu_ram_uart_sim__Syms* __restrict vlSymsp);
} VL_ATTR_ALIGNED(128);

#endif // guard
