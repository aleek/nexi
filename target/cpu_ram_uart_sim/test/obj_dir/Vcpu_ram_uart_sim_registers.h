// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcpu_ram_uart_sim.h for the primary calling header

#ifndef _Vcpu_ram_uart_sim_registers_H_
#define _Vcpu_ram_uart_sim_registers_H_

#include "verilated_heavy.h"
#include "Vcpu_ram_uart_sim__Dpi.h"

class Vcpu_ram_uart_sim__Syms;

//----------

VL_MODULE(Vcpu_ram_uart_sim_registers) {
  public:
    
    // PORTS
    VL_IN8(__PVT__clock,0,0);
    VL_IN8(__PVT__reset_n,0,0);
    VL_IN8(__PVT__prefetch_ir_valid,0,0);
    VL_IN8(__PVT__rw_state,0,0);
    VL_IN8(__PVT__fc_state,2,0);
    VL_IN8(__PVT__interrupt_trap,7,0);
    VL_IN8(__PVT__interrupt_mask,2,0);
    VL_IN8(__PVT__decoder_trap,7,0);
    VL_OUT8(__PVT__pc_change,1,0);
    VL_OUT8(__PVT__ea_reg,2,0);
    VL_IN8(__PVT__ea_reg_control,2,0);
    VL_OUT8(__PVT__ea_mod,2,0);
    VL_IN8(__PVT__ea_mod_control,3,0);
    VL_OUT8(__PVT__ea_type,3,0);
    VL_IN8(__PVT__ea_type_control,3,0);
    VL_IN8(__PVT__operand1_control,3,0);
    VL_IN8(__PVT__operand2_control,2,0);
    VL_OUT8(__PVT__address_type,0,0);
    VL_IN8(__PVT__address_control,3,0);
    VL_OUT8(__PVT__size,2,0);
    VL_IN8(__PVT__size_control,3,0);
    VL_OUT8(__PVT__movem_modreg,5,0);
    VL_IN8(__PVT__movem_modreg_control,2,0);
    VL_OUT8(__PVT__movem_loop,4,0);
    VL_IN8(__PVT__movem_loop_control,1,0);
    VL_IN8(__PVT__movem_reg_control,1,0);
    VL_IN8(__PVT__ir_control,1,0);
    VL_IN8(__PVT__pc_control,2,0);
    VL_OUT8(__PVT__trap,7,0);
    VL_IN8(__PVT__trap_control,3,0);
    VL_IN8(__PVT__offset_control,1,0);
    VL_IN8(__PVT__index_control,1,0);
    VL_OUT8(__PVT__stop_flag,0,0);
    VL_IN8(__PVT__stop_flag_control,1,0);
    VL_OUT8(__PVT__trace_flag,0,0);
    VL_IN8(__PVT__trace_flag_control,1,0);
    VL_OUT8(__PVT__group_0_flag,0,0);
    VL_IN8(__PVT__group_0_flag_control,1,0);
    VL_OUT8(__PVT__instruction_flag,0,0);
    VL_IN8(__PVT__instruction_flag_control,1,0);
    VL_OUT8(__PVT__read_modify_write_flag,0,0);
    VL_IN8(__PVT__read_modify_write_flag_control,1,0);
    VL_OUT8(__PVT__do_reset_flag,0,0);
    VL_IN8(__PVT__do_reset_flag_control,1,0);
    VL_OUT8(__PVT__do_interrupt_flag,0,0);
    VL_IN8(__PVT__do_interrupt_flag_control,1,0);
    VL_OUT8(__PVT__do_read_flag,0,0);
    VL_IN8(__PVT__do_read_flag_control,1,0);
    VL_OUT8(__PVT__do_write_flag,0,0);
    VL_IN8(__PVT__do_write_flag_control,1,0);
    VL_OUT8(__PVT__do_blocked_flag,0,0);
    VL_IN8(__PVT__do_blocked_flag_control,1,0);
    VL_IN8(__PVT__data_write_control,1,0);
    VL_OUT8(__PVT__An_address,3,0);
    VL_IN8(__PVT__An_address_control,1,0);
    VL_IN8(__PVT__An_input_control,1,0);
    VL_OUT8(__PVT__Dn_address,2,0);
    VL_IN8(__PVT__Dn_address_control,0,0);
    VL_IN16(__PVT__sr,15,0);
    VL_OUT16(__PVT__movem_reg,15,0);
    VL_OUT16(__PVT__ir,15,0);
    VL_IN(__PVT__data_read,31,0);
    VL_INW(__PVT__prefetch_ir,79,0,3);
    VL_IN(__PVT__result,31,0);
    VL_IN(__PVT__fault_address_state,31,0);
    VL_IN(__PVT__usp,31,0);
    VL_IN(__PVT__Dn_output,31,0);
    VL_IN(__PVT__An_output,31,0);
    VL_OUT(__PVT__operand1,31,0);
    VL_OUT(__PVT__operand2,31,0);
    VL_OUT(__PVT__address,31,0);
    VL_OUT(__PVT__pc,31,0);
    VL_OUT(__PVT__offset,31,0);
    VL_OUT(__PVT__index,31,0);
    VL_OUT(__PVT__data_write,31,0);
    VL_OUT(__PVT__An_input,31,0);
    VL_IN(__PVT__decoder_alu,17,0);
    VL_OUT(__PVT__decoder_alu_reg,17,0);
    
    // LOCAL SIGNALS
    VL_SIG(__PVT__last_pc,31,0);
    VL_SIG(__PVT__pc_valid,31,0);
    VL_SIG(__PVT__pc_next,31,0);
    
    // LOCAL VARIABLES
    VL_SIG8(__Vdly__size,2,0);
    VL_SIG8(__Vdly__ea_reg,2,0);
    VL_SIG8(__Vdly__ea_mod,2,0);
    VL_SIG8(__Vdly__ea_type,3,0);
    VL_SIG8(__Vdly__address_type,0,0);
    VL_SIG8(__Vdly__movem_modreg,5,0);
    VL_SIG8(__Vdly__movem_loop,4,0);
    VL_SIG8(__Vdly__trap,7,0);
    VL_SIG8(__Vdly__stop_flag,0,0);
    VL_SIG8(__Vdly__trace_flag,0,0);
    VL_SIG8(__Vdly__group_0_flag,0,0);
    VL_SIG8(__Vdly__instruction_flag,0,0);
    VL_SIG8(__Vdly__read_modify_write_flag,0,0);
    VL_SIG8(__Vdly__do_reset_flag,0,0);
    VL_SIG8(__Vdly__do_interrupt_flag,0,0);
    VL_SIG8(__Vdly__do_read_flag,0,0);
    VL_SIG8(__Vdly__do_write_flag,0,0);
    VL_SIG8(__Vdly__do_blocked_flag,0,0);
    VL_SIG16(__Vdly__movem_reg,15,0);
    VL_SIG16(__Vdly__ir,15,0);
    VL_SIG(__Vdly__last_pc,31,0);
    VL_SIG(__Vdly__pc,31,0);
    VL_SIG(__Vdly__pc_valid,31,0);
    VL_SIG(__Vdly__operand1,31,0);
    VL_SIG(__Vdly__operand2,31,0);
    VL_SIG(__Vdly__address,31,0);
    VL_SIG(__Vdly__decoder_alu_reg,17,0);
    VL_SIG(__Vdly__offset,31,0);
    VL_SIG(__Vdly__index,31,0);
    VL_SIG(__Vdly__data_write,31,0);
    
    // INTERNAL VARIABLES
  private:
    Vcpu_ram_uart_sim__Syms* __VlSymsp;  // Symbol table
  public:
    
    // PARAMETERS
    
    // CONSTRUCTORS
  private:
    Vcpu_ram_uart_sim_registers& operator= (const Vcpu_ram_uart_sim_registers&);  ///< Copying not allowed
    Vcpu_ram_uart_sim_registers(const Vcpu_ram_uart_sim_registers&);  ///< Copying not allowed
  public:
    Vcpu_ram_uart_sim_registers(const char* name="TOP");
    ~Vcpu_ram_uart_sim_registers();
    
    // API METHODS
    
    // INTERNAL METHODS
    void __Vconfigure(Vcpu_ram_uart_sim__Syms* symsp, bool first);
    static void _combo__TOP__tb_m68k_ram_uart__ao68000_m__registers_m__6(Vcpu_ram_uart_sim__Syms* __restrict vlSymsp);
    static void _combo__TOP__tb_m68k_ram_uart__ao68000_m__registers_m__7(Vcpu_ram_uart_sim__Syms* __restrict vlSymsp);
  private:
    void _configure_coverage(Vcpu_ram_uart_sim__Syms* __restrict vlSymsp, bool first);
    void _ctor_var_reset();
  public:
    static void _initial__TOP__tb_m68k_ram_uart__ao68000_m__registers_m__3(Vcpu_ram_uart_sim__Syms* __restrict vlSymsp);
    static void _sequent__TOP__tb_m68k_ram_uart__ao68000_m__registers_m__1(Vcpu_ram_uart_sim__Syms* __restrict vlSymsp);
    static void _sequent__TOP__tb_m68k_ram_uart__ao68000_m__registers_m__2(Vcpu_ram_uart_sim__Syms* __restrict vlSymsp);
    static void _sequent__TOP__tb_m68k_ram_uart__ao68000_m__registers_m__4(Vcpu_ram_uart_sim__Syms* __restrict vlSymsp);
    static void _settle__TOP__tb_m68k_ram_uart__ao68000_m__registers_m__5(Vcpu_ram_uart_sim__Syms* __restrict vlSymsp);
    static void _settle__TOP__tb_m68k_ram_uart__ao68000_m__registers_m__8(Vcpu_ram_uart_sim__Syms* __restrict vlSymsp);
} VL_ATTR_ALIGNED(128);

#endif // guard
