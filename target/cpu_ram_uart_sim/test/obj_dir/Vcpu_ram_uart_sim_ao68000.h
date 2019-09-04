// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcpu_ram_uart_sim.h for the primary calling header

#ifndef _Vcpu_ram_uart_sim_ao68000_H_
#define _Vcpu_ram_uart_sim_ao68000_H_

#include "verilated_heavy.h"
#include "Vcpu_ram_uart_sim__Dpi.h"

class Vcpu_ram_uart_sim__Syms;
class Vcpu_ram_uart_sim_memory_registers;

//----------

VL_MODULE(Vcpu_ram_uart_sim_ao68000) {
  public:
    // CELLS
    Vcpu_ram_uart_sim_memory_registers*	memory_registers_m;
    
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
    VL_OUT(__PVT__ADR_O,31,2);
    VL_OUT(__PVT__DAT_O,31,0);
    VL_IN(__PVT__DAT_I,31,0);
    
    // LOCAL SIGNALS
    VL_SIG8(__PVT__size,2,0);
    VL_SIG8(__PVT__address_type,0,0);
    VL_SIG8(__PVT__read_modify_write_flag,0,0);
    VL_SIG8(__PVT__prefetch_ir_valid,0,0);
    VL_SIG8(__PVT__do_reset,0,0);
    VL_SIG8(__PVT__do_read,0,0);
    VL_SIG8(__PVT__do_write,0,0);
    VL_SIG8(__PVT__do_interrupt,0,0);
    VL_SIG8(__PVT__do_blocked,0,0);
    VL_SIG8(__PVT__jmp_address_trap,0,0);
    VL_SIG8(__PVT__jmp_bus_trap,0,0);
    VL_SIG8(__PVT__finished,0,0);
    VL_SIG8(__PVT__interrupt_trap,7,0);
    VL_SIG8(__PVT__interrupt_mask,2,0);
    VL_SIG8(__PVT__rw_state,0,0);
    VL_SIG8(__PVT__fc_state,2,0);
    VL_SIG8(__PVT__decoder_trap,7,0);
    VL_SIG8(__PVT__An_address,3,0);
    VL_SIG8(__PVT__Dn_address,2,0);
    VL_SIG8(__PVT__alu_signal,0,0);
    VL_SIG8(__PVT__trace_flag,0,0);
    VL_SIG8(__PVT__group_0_flag,0,0);
    VL_SIG8(__PVT__stop_flag,0,0);
    VL_SIG8(__PVT__movem_loop,4,0);
    VL_SIG8(__PVT__condition,0,0);
    VL_SIG8(__PVT__pc_change,1,0);
    VL_SIG8(__PVT__prefetch_ir_valid_32,0,0);
    VL_SIG8(__PVT__ea_type,3,0);
    VL_SIG8(__PVT__ea_mod,2,0);
    VL_SIG8(__PVT__ea_reg,2,0);
    VL_SIG8(__PVT__bus_control_m__DOT__prefetch_ir_valid_80_o,0,0);
    VL_SIG8(__PVT__bus_control_m__DOT__saved_pc_change,1,0);
    VL_SIG8(__PVT__bus_control_m__DOT__current_state,4,0);
    VL_SIG8(__PVT__bus_control_m__DOT__reset_counter,7,0);
    VL_SIG8(__PVT__bus_control_m__DOT__last_interrupt_mask,2,0);
    VL_SIG8(__PVT__registers_m__DOT__movem_modreg,5,0);
    VL_SIG8(__PVT__registers_m__DOT__trap,7,0);
    VL_SIG8(__PVT__registers_m__DOT__instruction_flag,0,0);
    VL_SIG8(__PVT__alu_m__DOT__div_count,4,0);
    VL_SIG8(__PVT__alu_m__DOT__result_ABCD_13_8a,5,0);
    VL_SIG8(__PVT__alu_m__DOT__result_SBCD_13_8a,5,0);
    VL_SIG8(__PVT__alu_m__DOT__result_ABCD2_19_14a,5,0);
    VL_SIG8(__PVT__alu_m__DOT__result_ABCD2_19_14b,5,0);
    VL_SIG8(__PVT__alu_m__DOT__result_SBCD2_19_14a,5,0);
    VL_SIG8(__PVT__alu_m__DOT__result_SBCD2_19_14b,5,0);
    VL_SIG8(__PVT__alu_m__DOT__result_BITS8_val,0,0);
    VL_SIG8(__PVT__alu_m__DOT__result_BITS8_bit,0,0);
    VL_SIG8(__PVT__alu_m__DOT__result_BITS32_val,0,0);
    VL_SIG8(__PVT__alu_m__DOT__result_BITS32_bit,0,0);
    VL_SIG8(__PVT__alu_m__DOT__result_NBCD_7_4a,4,0);
    VL_SIG8(__PVT__alu_m__DOT__interrupt_mask_copy,2,0);
    VL_SIG8(__PVT__alu_m__DOT__was_interrupt,0,0);
    VL_SIG8(__PVT__alu_m__DOT__rbit,0,0);
    VL_SIG16(__PVT__sr,15,0);
    VL_SIG16(__PVT__ir,15,0);
    VL_SIG16(__PVT__load_ea,8,0);
    VL_SIG16(__PVT__perform_ea_read,8,0);
    VL_SIG16(__PVT__perform_ea_write,8,0);
    VL_SIG16(__PVT__save_ea,8,0);
    VL_SIG16(__PVT__micro_pc,8,0);
    VL_SIG16(__PVT__movem_reg,15,0);
    VL_SIG16(__PVT__alu_m__DOT__div_quotient,15,0);
    VL_SIG16(__PVT__microcode_branch_m__DOT__micro_pc_0,8,0);
    VL_SIG16(__PVT__microcode_branch_m__DOT__micro_pc_1,8,0);
    VL_SIG16(__PVT__microcode_branch_m__DOT__micro_pc_2,8,0);
    VL_SIG16(__PVT__microcode_branch_m__DOT__micro_pc_3,8,0);
    VL_SIG(__PVT__address,31,0);
    VL_SIG(__PVT__data_read,31,0);
    VL_SIG(__PVT__data_write,31,0);
    VL_SIG(__PVT__pc,31,0);
    VL_SIGW(__PVT__prefetch_ir,79,0,3);
    VL_SIG(__PVT__result,31,0);
    VL_SIG(__PVT__An_input,31,0);
    VL_SIG(__PVT__operand1,31,0);
    VL_SIG(__PVT__operand2,31,0);
    VL_SIG(__PVT__fault_address_state,31,0);
    VL_SIG(__PVT__decoder_alu,17,0);
    VL_SIG(__PVT__decoder_alu_reg,17,0);
    VL_SIG(__PVT__registers_m__DOT__offset,31,0);
    VL_SIG(__PVT__registers_m__DOT__index,31,0);
    VL_SIG(__PVT__registers_m__DOT__pc_valid,31,0);
    VL_SIG(__PVT__registers_m__DOT__pc_next,31,0);
    VL_SIG(__PVT__alu_m__DOT__quotient,16,0);
    VL_SIG(__PVT__alu_m__DOT__dividend,31,0);
    VL_SIG(__PVT__alu_m__DOT__divider,31,0);
    VL_SIG(__PVT__alu_m__DOT__result_ABCD2,31,0);
    VL_SIG(__PVT__alu_m__DOT__result_SBCD2,31,0);
    VL_SIG(__PVT__alu_m__DOT__result_blocking,31,0);
    VL_SIG64(__PVT__alu_m__DOT__div_diff,32,0);
    VL_SIG64(__PVT__alu_m__DOT__mult_result,33,0);
    
    // LOCAL VARIABLES
    static VL_ST_SIG8(__Vtable1___PVT__ea_type[32],3,0);
    VL_SIG8(__Vtableidx1,4,0);
    VL_SIG8(__Vdly__bus_control_m__DOT__last_interrupt_mask,2,0);
    VL_SIG8(__Vdly__interrupt_mask,2,0);
    VL_SIG8(__Vdly__bus_control_m__DOT__current_state,4,0);
    VL_SIG8(__Vdly__bus_control_m__DOT__reset_counter,7,0);
    VL_SIG8(__Vdly__WE_O,0,0);
    VL_SIG8(__Vdly__fc_o,2,0);
    VL_SIG8(__Vdly__CYC_O,0,0);
    VL_SIG8(__Vdly__SEL_O,3,0);
    VL_SIG8(__Vdly__STB_O,0,0);
    VL_SIG8(__Vdly__CTI_O,2,0);
    VL_SIG8(__Vdly__prefetch_ir_valid_32,0,0);
    VL_SIG8(__Vdly__prefetch_ir_valid,0,0);
    VL_SIG8(__Vdly__bus_control_m__DOT__prefetch_ir_valid_80_o,0,0);
    VL_SIG8(__Vdly__bus_control_m__DOT__saved_pc_change,1,0);
    VL_SIG8(__Vdly__registers_m__DOT__movem_modreg,5,0);
    VL_SIG8(__Vdly__movem_loop,4,0);
    VL_SIG8(__Vdly__alu_m__DOT__div_count,4,0);
    VL_SIG8(__Vdly__alu_m__DOT__was_interrupt,0,0);
    VL_SIG8(__Vdly__alu_m__DOT__interrupt_mask_copy,2,0);
    VL_SIG16(__Vdly__movem_reg,15,0);
    VL_SIG16(__Vdly__sr,15,0);
    VL_SIG16(__Vdly__microcode_branch_m__DOT__micro_pc_3,8,0);
    VL_SIG16(__Vdly__microcode_branch_m__DOT__micro_pc_2,8,0);
    VL_SIG16(__Vdly__microcode_branch_m__DOT__micro_pc_1,8,0);
    VL_SIG(__Vdly__ADR_O,31,2);
    VL_SIG(__Vdly__DAT_O,31,0);
    VL_SIGW(__Vdly__prefetch_ir,79,0,3);
    VL_SIG(__Vdly__data_read,31,0);
    VL_SIG(__Vdly__operand1,31,0);
    VL_SIG(__Vdly__operand2,31,0);
    VL_SIG(__Vdly__address,31,0);
    VL_SIG(__Vdly__alu_m__DOT__quotient,16,0);
    VL_SIG(__Vdly__alu_m__DOT__divider,31,0);
    VL_SIG8(__Vtablechg1[32],0,0);
    
    // INTERNAL VARIABLES
  private:
    Vcpu_ram_uart_sim__Syms* __VlSymsp;  // Symbol table
  public:
    
    // PARAMETERS
    
    // CONSTRUCTORS
  private:
    Vcpu_ram_uart_sim_ao68000& operator= (const Vcpu_ram_uart_sim_ao68000&);  ///< Copying not allowed
    Vcpu_ram_uart_sim_ao68000(const Vcpu_ram_uart_sim_ao68000&);  ///< Copying not allowed
  public:
    Vcpu_ram_uart_sim_ao68000(const char* name="TOP");
    ~Vcpu_ram_uart_sim_ao68000();
    
    // API METHODS
    
    // INTERNAL METHODS
    void __Vconfigure(Vcpu_ram_uart_sim__Syms* symsp, bool first);
  private:
    void _configure_coverage(Vcpu_ram_uart_sim__Syms* __restrict vlSymsp, bool first);
    void _ctor_var_reset();
  public:
    static void _initial__TOP__tb_m68k_ram_uart__ao68000_m__1(Vcpu_ram_uart_sim__Syms* __restrict vlSymsp);
    static void _initial__TOP__tb_m68k_ram_uart__ao68000_m__3(Vcpu_ram_uart_sim__Syms* __restrict vlSymsp);
    static void _sequent__TOP__tb_m68k_ram_uart__ao68000_m__2(Vcpu_ram_uart_sim__Syms* __restrict vlSymsp);
    static void _sequent__TOP__tb_m68k_ram_uart__ao68000_m__5(Vcpu_ram_uart_sim__Syms* __restrict vlSymsp);
    static void _sequent__TOP__tb_m68k_ram_uart__ao68000_m__7(Vcpu_ram_uart_sim__Syms* __restrict vlSymsp);
    static void _settle__TOP__tb_m68k_ram_uart__ao68000_m__4(Vcpu_ram_uart_sim__Syms* __restrict vlSymsp);
    static void _settle__TOP__tb_m68k_ram_uart__ao68000_m__6(Vcpu_ram_uart_sim__Syms* __restrict vlSymsp);
} VL_ATTR_ALIGNED(128);

#endif // guard
