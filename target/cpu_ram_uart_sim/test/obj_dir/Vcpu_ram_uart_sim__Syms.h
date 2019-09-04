// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header

#ifndef _Vcpu_ram_uart_sim__Syms_H_
#define _Vcpu_ram_uart_sim__Syms_H_

#include "verilated_heavy.h"

// INCLUDE MODULE CLASSES
#include "Vcpu_ram_uart_sim.h"
#include "Vcpu_ram_uart_sim_tb_m68k_ram_uart.h"
#include "Vcpu_ram_uart_sim_ao68000.h"
#include "Vcpu_ram_uart_sim_wb_ram__A18_S4.h"
#include "Vcpu_ram_uart_sim_memory_registers.h"
#include "Vcpu_ram_uart_sim_generic_sync_mem__D58_A9.h"
#include "Vcpu_ram_uart_sim_generic_sync_mem__D20_A3.h"

// DPI TYPES for DPI Export callbacks (Internal use)

// SYMS CLASS
class Vcpu_ram_uart_sim__Syms : public VerilatedSyms {
  public:
    
    // LOCAL STATE
    const char* __Vm_namep;
    bool __Vm_didInit;
    
    // SUBCELL STATE
    Vcpu_ram_uart_sim*             TOPp;
    Vcpu_ram_uart_sim_tb_m68k_ram_uart TOP__tb_m68k_ram_uart;
    Vcpu_ram_uart_sim_ao68000      TOP__tb_m68k_ram_uart__ao68000_m;
    Vcpu_ram_uart_sim_memory_registers TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m;
    Vcpu_ram_uart_sim_generic_sync_mem__D20_A3 TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__an_ram_inst;
    Vcpu_ram_uart_sim_generic_sync_mem__D20_A3 TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__dn_ram_inst;
    Vcpu_ram_uart_sim_generic_sync_mem__D58_A9 TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst;
    Vcpu_ram_uart_sim_wb_ram__A18_S4 TOP__tb_m68k_ram_uart__wb_ram_m;
    
    // SCOPE NAMES
    VerilatedScope __Vscope_tb_m68k_ram_uart;
    VerilatedScope __Vscope_tb_m68k_ram_uart__ao68000_m__memory_registers_m__an_ram_inst;
    VerilatedScope __Vscope_tb_m68k_ram_uart__ao68000_m__memory_registers_m__dn_ram_inst;
    VerilatedScope __Vscope_tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst;
    VerilatedScope __Vscope_tb_m68k_ram_uart__wb_ram_m;
    
    // CREATORS
    Vcpu_ram_uart_sim__Syms(Vcpu_ram_uart_sim* topp, const char* namep);
    ~Vcpu_ram_uart_sim__Syms() {};
    
    // METHODS
    inline const char* name() { return __Vm_namep; }
    
} VL_ATTR_ALIGNED(64);

#endif // guard
