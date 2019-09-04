// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcpu_ram_uart_sim.h for the primary calling header

#ifndef _Vcpu_ram_uart_sim_microcode_branch_H_
#define _Vcpu_ram_uart_sim_microcode_branch_H_

#include "verilated_heavy.h"
#include "Vcpu_ram_uart_sim__Dpi.h"

class Vcpu_ram_uart_sim__Syms;

//----------

VL_MODULE(Vcpu_ram_uart_sim_microcode_branch) {
  public:
    
    // PORTS
    VL_IN8(__PVT__clock,0,0);
    VL_IN8(__PVT__reset_n,0,0);
    VL_IN8(__PVT__movem_loop,4,0);
    VL_IN8(__PVT__alu_signal,0,0);
    VL_IN8(__PVT__alu_mult_div_ready,0,0);
    VL_IN8(__PVT__condition,0,0);
    VL_IN8(__PVT__overflow,0,0);
    VL_IN8(__PVT__stop_flag,0,0);
    VL_IN8(__PVT__decoder_trap,7,0);
    VL_IN8(__PVT__trace_flag,0,0);
    VL_IN8(__PVT__group_0_flag,0,0);
    VL_IN8(__PVT__interrupt_mask,2,0);
    VL_IN8(__PVT__prefetch_ir_valid_32,0,0);
    VL_IN8(__PVT__prefetch_ir_valid,0,0);
    VL_IN8(__PVT__jmp_address_trap,0,0);
    VL_IN8(__PVT__jmp_bus_trap,0,0);
    VL_IN8(__PVT__finished,0,0);
    VL_IN8(__PVT__branch_control,3,0);
    VL_IN8(__PVT__branch_offset,3,0);
    VL_IN16(__PVT__movem_reg,15,0);
    VL_IN16(__PVT__ir,15,0);
    VL_IN16(__PVT__load_ea,8,0);
    VL_IN16(__PVT__perform_ea_read,8,0);
    VL_IN16(__PVT__perform_ea_write,8,0);
    VL_IN16(__PVT__save_ea,8,0);
    VL_IN16(__PVT__decoder_micropc,8,0);
    VL_OUT16(__PVT__micro_pc,8,0);
    VL_IN(__PVT__operand2,31,0);
    VL_IN(__PVT__result,31,0);
    
    // LOCAL SIGNALS
    VL_SIG16(__PVT__micro_pc_0,8,0);
    VL_SIG16(__PVT__micro_pc_1,8,0);
    VL_SIG16(__PVT__micro_pc_2,8,0);
    VL_SIG16(__PVT__micro_pc_3,8,0);
    
    // LOCAL VARIABLES
    VL_SIG16(__Vdly__micro_pc_0,8,0);
    VL_SIG16(__Vdly__micro_pc_1,8,0);
    VL_SIG16(__Vdly__micro_pc_2,8,0);
    VL_SIG16(__Vdly__micro_pc_3,8,0);
    
    // INTERNAL VARIABLES
  private:
    Vcpu_ram_uart_sim__Syms* __VlSymsp;  // Symbol table
  public:
    
    // PARAMETERS
    
    // CONSTRUCTORS
  private:
    Vcpu_ram_uart_sim_microcode_branch& operator= (const Vcpu_ram_uart_sim_microcode_branch&);  ///< Copying not allowed
    Vcpu_ram_uart_sim_microcode_branch(const Vcpu_ram_uart_sim_microcode_branch&);  ///< Copying not allowed
  public:
    Vcpu_ram_uart_sim_microcode_branch(const char* name="TOP");
    ~Vcpu_ram_uart_sim_microcode_branch();
    
    // API METHODS
    
    // INTERNAL METHODS
    void __Vconfigure(Vcpu_ram_uart_sim__Syms* symsp, bool first);
    static void _combo__TOP__tb_m68k_ram_uart__ao68000_m__microcode_branch_m__4(Vcpu_ram_uart_sim__Syms* __restrict vlSymsp);
  private:
    void _configure_coverage(Vcpu_ram_uart_sim__Syms* __restrict vlSymsp, bool first);
    void _ctor_var_reset();
  public:
    static void _initial__TOP__tb_m68k_ram_uart__ao68000_m__microcode_branch_m__2(Vcpu_ram_uart_sim__Syms* __restrict vlSymsp);
    static void _sequent__TOP__tb_m68k_ram_uart__ao68000_m__microcode_branch_m__1(Vcpu_ram_uart_sim__Syms* __restrict vlSymsp);
    static void _settle__TOP__tb_m68k_ram_uart__ao68000_m__microcode_branch_m__3(Vcpu_ram_uart_sim__Syms* __restrict vlSymsp);
} VL_ATTR_ALIGNED(128);

#endif // guard
