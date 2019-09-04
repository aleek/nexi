// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcpu_ram_uart_sim.h for the primary calling header

#ifndef _Vcpu_ram_uart_sim_alu_H_
#define _Vcpu_ram_uart_sim_alu_H_

#include "verilated_heavy.h"
#include "Vcpu_ram_uart_sim__Dpi.h"

class Vcpu_ram_uart_sim__Syms;

//----------

VL_MODULE(Vcpu_ram_uart_sim_alu) {
  public:
    
    // PORTS
    VL_IN8(__PVT__clock,0,0);
    VL_IN8(__PVT__reset_n,0,0);
    VL_IN8(__PVT__size,2,0);
    VL_IN8(__PVT__interrupt_mask,2,0);
    VL_IN8(__PVT__alu_control,4,0);
    VL_OUT8(__PVT__alu_signal,0,0);
    VL_OUT8(__PVT__alu_mult_div_ready,0,0);
    VL_IN16(__PVT__ir,15,0);
    VL_OUT16(__PVT__sr,15,0);
    VL_IN(__PVT__address,31,0);
    VL_IN(__PVT__operand1,31,0);
    VL_IN(__PVT__operand2,31,0);
    VL_OUT(__PVT__result,31,0);
    VL_IN(__PVT__decoder_alu_reg,17,0);
    
    // LOCAL SIGNALS
    VL_SIG8(__PVT__mult_div_sign,0,0);
    VL_SIG8(__PVT__div_count,4,0);
    VL_SIG8(__PVT__div_overflow,0,0);
    VL_SIG8(__PVT__result_ABCD_13_8a,5,0);
    VL_SIG8(__PVT__result_ABCD_19_14,5,0);
    VL_SIG8(__PVT__result_ABCD_13_8b,5,0);
    VL_SIG8(__PVT__result_SBCD_13_8a,5,0);
    VL_SIG8(__PVT__result_SBCD_19_14,5,0);
    VL_SIG8(__PVT__result_SBCD_13_8b,5,0);
    VL_SIG8(__PVT__result_ABCD2_19_14a,5,0);
    VL_SIG8(__PVT__result_ABCD2_19_14b,5,0);
    VL_SIG8(__PVT__result_ABCD2_7_4,3,0);
    VL_SIG8(__PVT__result_ABCD2_3_0,3,0);
    VL_SIG8(__PVT__result_SBCD2_19_14a,5,0);
    VL_SIG8(__PVT__result_SBCD2_19_14b,5,0);
    VL_SIG8(__PVT__result_SBCD2_7_4,3,0);
    VL_SIG8(__PVT__result_SBCD2_3_0,3,0);
    VL_SIG8(__PVT__result_BITS8_val,0,0);
    VL_SIG8(__PVT__result_BITS8_bit,0,0);
    VL_SIG8(__PVT__result_BITS32_val,0,0);
    VL_SIG8(__PVT__result_BITS32_bit,0,0);
    VL_SIG8(__PVT__result_NBCD_3_0a,4,0);
    VL_SIG8(__PVT__result_NBCD_7_4a,4,0);
    VL_SIG8(__PVT__result_NBCD_3_0b,3,0);
    VL_SIG8(__PVT__result_NBCD_7_4b,3,0);
    VL_SIG8(__PVT__interrupt_mask_copy,2,0);
    VL_SIG8(__PVT__was_interrupt,0,0);
    VL_SIG8(__PVT__lbit,0,0);
    VL_SIG8(__PVT__rbit,0,0);
    VL_SIG16(__PVT__div_quotient,15,0);
    VL_SIG16(__PVT__div_remainder,15,0);
    VL_SIG16(__PVT__result_ABCD_31_23,8,0);
    VL_SIG16(__PVT__result_SBCD_31_23,8,0);
    VL_SIG16(__PVT__result_CHK,15,0);
    VL_SIG(__PVT__quotient,16,0);
    VL_SIG(__PVT__dividend,31,0);
    VL_SIG(__PVT__divider,31,0);
    VL_SIG(__PVT__op1_u2,16,0);
    VL_SIG(__PVT__op2_u2,16,0);
    VL_SIG(__PVT__result_ABCD2,31,0);
    VL_SIG(__PVT__result_SBCD2,31,0);
    VL_SIG(__PVT__result_BITS8,31,0);
    VL_SIG(__PVT__result_BITS32,31,0);
    VL_SIG(__PVT__result_blocking,31,0);
    VL_SIG64(__PVT__div_diff,32,0);
    VL_SIG64(__PVT__mult_result,33,0);
    
    // LOCAL VARIABLES
    VL_SIG8(__Vdly__div_count,4,0);
    VL_SIG8(__Vdly__interrupt_mask_copy,2,0);
    VL_SIG8(__Vdly__was_interrupt,0,0);
    VL_SIG8(__Vdly__alu_signal,0,0);
    VL_SIG16(__Vdly__sr,15,0);
    VL_SIG(__Vdly__quotient,16,0);
    VL_SIG(__Vdly__dividend,31,0);
    VL_SIG(__Vdly__divider,31,0);
    VL_SIG(__Vdly__result,31,0);
    
    // INTERNAL VARIABLES
  private:
    Vcpu_ram_uart_sim__Syms* __VlSymsp;  // Symbol table
  public:
    
    // PARAMETERS
    
    // CONSTRUCTORS
  private:
    Vcpu_ram_uart_sim_alu& operator= (const Vcpu_ram_uart_sim_alu&);  ///< Copying not allowed
    Vcpu_ram_uart_sim_alu(const Vcpu_ram_uart_sim_alu&);  ///< Copying not allowed
  public:
    Vcpu_ram_uart_sim_alu(const char* name="TOP");
    ~Vcpu_ram_uart_sim_alu();
    
    // API METHODS
    
    // INTERNAL METHODS
    void __Vconfigure(Vcpu_ram_uart_sim__Syms* symsp, bool first);
    static void _combo__TOP__tb_m68k_ram_uart__ao68000_m__alu_m__4(Vcpu_ram_uart_sim__Syms* __restrict vlSymsp);
    static void _combo__TOP__tb_m68k_ram_uart__ao68000_m__alu_m__6(Vcpu_ram_uart_sim__Syms* __restrict vlSymsp);
    static void _combo__TOP__tb_m68k_ram_uart__ao68000_m__alu_m__9(Vcpu_ram_uart_sim__Syms* __restrict vlSymsp);
  private:
    void _configure_coverage(Vcpu_ram_uart_sim__Syms* __restrict vlSymsp, bool first);
    void _ctor_var_reset();
  public:
    static void _sequent__TOP__tb_m68k_ram_uart__ao68000_m__alu_m__1(Vcpu_ram_uart_sim__Syms* __restrict vlSymsp);
    static void _sequent__TOP__tb_m68k_ram_uart__ao68000_m__alu_m__3(Vcpu_ram_uart_sim__Syms* __restrict vlSymsp);
    static void _sequent__TOP__tb_m68k_ram_uart__ao68000_m__alu_m__7(Vcpu_ram_uart_sim__Syms* __restrict vlSymsp);
    static void _settle__TOP__tb_m68k_ram_uart__ao68000_m__alu_m__2(Vcpu_ram_uart_sim__Syms* __restrict vlSymsp);
    static void _settle__TOP__tb_m68k_ram_uart__ao68000_m__alu_m__5(Vcpu_ram_uart_sim__Syms* __restrict vlSymsp);
    static void _settle__TOP__tb_m68k_ram_uart__ao68000_m__alu_m__8(Vcpu_ram_uart_sim__Syms* __restrict vlSymsp);
} VL_ATTR_ALIGNED(128);

#endif // guard
