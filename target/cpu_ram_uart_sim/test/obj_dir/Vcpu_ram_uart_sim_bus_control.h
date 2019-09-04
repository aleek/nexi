// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcpu_ram_uart_sim.h for the primary calling header

#ifndef _Vcpu_ram_uart_sim_bus_control_H_
#define _Vcpu_ram_uart_sim_bus_control_H_

#include "verilated_heavy.h"
#include "Vcpu_ram_uart_sim__Dpi.h"

class Vcpu_ram_uart_sim__Syms;

//----------

VL_MODULE(Vcpu_ram_uart_sim_bus_control) {
  public:
    
    // PORTS
    VL_IN8(__PVT__CLK_I,0,0);
    VL_IN8(__PVT__reset_n,0,0);
    VL_OUT8(__PVT__CYC_O,0,0);
    VL_OUT8(__PVT__SEL_O,3,0);
    VL_OUT8(__PVT__STB_O,0,0);
    VL_OUT8(__PVT__WE_O,0,0);
    VL_IN8(__PVT__ACK_I,0,0);
    VL_IN8(__PVT__ERR_I,0,0);
    VL_IN8(__PVT__RTY_I,0,0);
    VL_OUT8(__PVT__SGL_O,0,0);
    VL_OUT8(__PVT__BLK_O,0,0);
    VL_OUT8(__PVT__RMW_O,0,0);
    VL_OUT8(__PVT__CTI_O,2,0);
    VL_OUT8(__PVT__BTE_O,1,0);
    VL_OUT8(__PVT__fc_o,2,0);
    VL_IN8(__PVT__ipl_i,2,0);
    VL_OUT8(__PVT__reset_o,0,0);
    VL_OUT8(__PVT__blocked_o,0,0);
    VL_IN8(__PVT__supervisor_i,0,0);
    VL_IN8(__PVT__ipm_i,2,0);
    VL_IN8(__PVT__size_i,2,0);
    VL_IN8(__PVT__address_type_i,0,0);
    VL_IN8(__PVT__read_modify_write_i,0,0);
    VL_IN8(__PVT__pc_change_i,1,0);
    VL_OUT8(__PVT__prefetch_ir_valid_32_o,0,0);
    VL_OUT8(__PVT__prefetch_ir_valid_o,0,0);
    VL_OUT8(__PVT__prefetch_ir_valid_80_o,0,0);
    VL_IN8(__PVT__do_reset_i,0,0);
    VL_IN8(__PVT__do_blocked_i,0,0);
    VL_IN8(__PVT__do_read_i,0,0);
    VL_IN8(__PVT__do_write_i,0,0);
    VL_IN8(__PVT__do_interrupt_i,0,0);
    VL_OUT8(__PVT__jmp_address_trap_o,0,0);
    VL_OUT8(__PVT__jmp_bus_trap_o,0,0);
    VL_OUT8(__PVT__finished_o,0,0);
    VL_OUT8(__PVT__interrupt_trap_o,7,0);
    VL_OUT8(__PVT__interrupt_mask_o,2,0);
    VL_OUT8(__PVT__rw_state_o,0,0);
    VL_OUT8(__PVT__fc_state_o,2,0);
    VL_OUT(__PVT__ADR_O,31,2);
    VL_OUT(__PVT__DAT_O,31,0);
    VL_IN(__PVT__DAT_I,31,0);
    VL_IN(__PVT__address_i,31,0);
    VL_IN(__PVT__data_write_i,31,0);
    VL_OUT(__PVT__data_read_o,31,0);
    VL_IN(__PVT__pc_i,31,0);
    VL_OUTW(__PVT__prefetch_ir_o,79,0,3);
    VL_OUT(__PVT__fault_address_state_o,31,0);
    
    // LOCAL SIGNALS
    VL_SIG8(__PVT__saved_pc_change,1,0);
    VL_SIG8(__PVT__current_state,4,0);
    VL_SIG8(__PVT__reset_counter,7,0);
    VL_SIG8(__PVT__last_interrupt_mask,2,0);
    VL_SIG(__PVT__pc_i_plus_6,31,0);
    VL_SIG(__PVT__pc_i_plus_4,31,0);
    VL_SIG(__PVT__address_i_plus_4,31,0);
    
    // LOCAL VARIABLES
    VL_SIG8(__Vdly__interrupt_mask_o,2,0);
    VL_SIG8(__Vdly__last_interrupt_mask,2,0);
    VL_SIG8(__Vdly__finished_o,0,0);
    VL_SIG8(__Vdly__jmp_address_trap_o,0,0);
    VL_SIG8(__Vdly__jmp_bus_trap_o,0,0);
    VL_SIG8(__Vdly__reset_o,0,0);
    VL_SIG8(__Vdly__blocked_o,0,0);
    VL_SIG8(__Vdly__current_state,4,0);
    VL_SIG8(__Vdly__reset_counter,7,0);
    VL_SIG8(__Vdly__WE_O,0,0);
    VL_SIG8(__Vdly__fc_o,2,0);
    VL_SIG8(__Vdly__rw_state_o,0,0);
    VL_SIG8(__Vdly__fc_state_o,2,0);
    VL_SIG8(__Vdly__interrupt_trap_o,7,0);
    VL_SIG8(__Vdly__CYC_O,0,0);
    VL_SIG8(__Vdly__SEL_O,3,0);
    VL_SIG8(__Vdly__STB_O,0,0);
    VL_SIG8(__Vdly__SGL_O,0,0);
    VL_SIG8(__Vdly__BLK_O,0,0);
    VL_SIG8(__Vdly__RMW_O,0,0);
    VL_SIG8(__Vdly__CTI_O,2,0);
    VL_SIG8(__Vdly__prefetch_ir_valid_32_o,0,0);
    VL_SIG8(__Vdly__prefetch_ir_valid_o,0,0);
    VL_SIG8(__Vdly__prefetch_ir_valid_80_o,0,0);
    VL_SIG8(__Vdly__saved_pc_change,1,0);
    VL_SIG(__Vdly__fault_address_state_o,31,0);
    VL_SIG(__Vdly__ADR_O,31,2);
    VL_SIG(__Vdly__DAT_O,31,0);
    VL_SIGW(__Vdly__prefetch_ir_o,79,0,3);
    VL_SIG(__Vdly__data_read_o,31,0);
    
    // INTERNAL VARIABLES
  private:
    Vcpu_ram_uart_sim__Syms* __VlSymsp;  // Symbol table
  public:
    
    // PARAMETERS
    
    // CONSTRUCTORS
  private:
    Vcpu_ram_uart_sim_bus_control& operator= (const Vcpu_ram_uart_sim_bus_control&);  ///< Copying not allowed
    Vcpu_ram_uart_sim_bus_control(const Vcpu_ram_uart_sim_bus_control&);  ///< Copying not allowed
  public:
    Vcpu_ram_uart_sim_bus_control(const char* name="TOP");
    ~Vcpu_ram_uart_sim_bus_control();
    
    // API METHODS
    
    // INTERNAL METHODS
    void __Vconfigure(Vcpu_ram_uart_sim__Syms* symsp, bool first);
    static void _combo__TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m__4(Vcpu_ram_uart_sim__Syms* __restrict vlSymsp);
    static void _combo__TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m__6(Vcpu_ram_uart_sim__Syms* __restrict vlSymsp);
  private:
    void _configure_coverage(Vcpu_ram_uart_sim__Syms* __restrict vlSymsp, bool first);
    void _ctor_var_reset();
  public:
    static void _initial__TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m__1(Vcpu_ram_uart_sim__Syms* __restrict vlSymsp);
    static void _initial__TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m__3(Vcpu_ram_uart_sim__Syms* __restrict vlSymsp);
    static void _sequent__TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m__2(Vcpu_ram_uart_sim__Syms* __restrict vlSymsp);
    static void _settle__TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m__5(Vcpu_ram_uart_sim__Syms* __restrict vlSymsp);
    static void _settle__TOP__tb_m68k_ram_uart__ao68000_m__bus_control_m__7(Vcpu_ram_uart_sim__Syms* __restrict vlSymsp);
} VL_ATTR_ALIGNED(128);

#endif // guard
