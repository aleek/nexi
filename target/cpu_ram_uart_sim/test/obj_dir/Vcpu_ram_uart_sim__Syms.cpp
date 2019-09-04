// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vcpu_ram_uart_sim__Syms.h"
#include "Vcpu_ram_uart_sim.h"
#include "Vcpu_ram_uart_sim_tb_m68k_ram_uart.h"
#include "Vcpu_ram_uart_sim_ao68000.h"
#include "Vcpu_ram_uart_sim_wb_ram__A18_S4.h"
#include "Vcpu_ram_uart_sim_memory_registers.h"
#include "Vcpu_ram_uart_sim_generic_sync_mem__D58_A9.h"
#include "Vcpu_ram_uart_sim_generic_sync_mem__D20_A3.h"

// FUNCTIONS
Vcpu_ram_uart_sim__Syms::Vcpu_ram_uart_sim__Syms(Vcpu_ram_uart_sim* topp, const char* namep)
	// Setup locals
	: __Vm_namep(namep)
	, __Vm_didInit(false)
	// Setup submodule names
	, TOP__tb_m68k_ram_uart          (Verilated::catName(topp->name(),"tb_m68k_ram_uart"))
	, TOP__tb_m68k_ram_uart__ao68000_m (Verilated::catName(topp->name(),"tb_m68k_ram_uart.ao68000_m"))
	, TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m (Verilated::catName(topp->name(),"tb_m68k_ram_uart.ao68000_m.memory_registers_m"))
	, TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__an_ram_inst (Verilated::catName(topp->name(),"tb_m68k_ram_uart.ao68000_m.memory_registers_m.an_ram_inst"))
	, TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__dn_ram_inst (Verilated::catName(topp->name(),"tb_m68k_ram_uart.ao68000_m.memory_registers_m.dn_ram_inst"))
	, TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst (Verilated::catName(topp->name(),"tb_m68k_ram_uart.ao68000_m.memory_registers_m.micro_rom_inst"))
	, TOP__tb_m68k_ram_uart__wb_ram_m (Verilated::catName(topp->name(),"tb_m68k_ram_uart.wb_ram_m"))
{
    // Pointer to top level
    TOPp = topp;
    // Setup each module's pointers to their submodules
    TOPp->tb_m68k_ram_uart          = &TOP__tb_m68k_ram_uart;
    TOPp->tb_m68k_ram_uart->ao68000_m  = &TOP__tb_m68k_ram_uart__ao68000_m;
    TOPp->tb_m68k_ram_uart->ao68000_m->memory_registers_m  = &TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m;
    TOPp->tb_m68k_ram_uart->ao68000_m->memory_registers_m->an_ram_inst  = &TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__an_ram_inst;
    TOPp->tb_m68k_ram_uart->ao68000_m->memory_registers_m->dn_ram_inst  = &TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__dn_ram_inst;
    TOPp->tb_m68k_ram_uart->ao68000_m->memory_registers_m->micro_rom_inst  = &TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst;
    TOPp->tb_m68k_ram_uart->wb_ram_m  = &TOP__tb_m68k_ram_uart__wb_ram_m;
    // Setup each module's pointer back to symbol table (for public functions)
    TOPp->__Vconfigure(this, true);
    TOP__tb_m68k_ram_uart.__Vconfigure(this, true);
    TOP__tb_m68k_ram_uart__ao68000_m.__Vconfigure(this, true);
    TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m.__Vconfigure(this, true);
    TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__an_ram_inst.__Vconfigure(this, true);
    TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__dn_ram_inst.__Vconfigure(this, false);
    TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.__Vconfigure(this, true);
    TOP__tb_m68k_ram_uart__wb_ram_m.__Vconfigure(this, true);
    // Setup scope names
    __Vscope_tb_m68k_ram_uart.configure(this,name(),"tb_m68k_ram_uart");
    __Vscope_tb_m68k_ram_uart__ao68000_m__memory_registers_m__an_ram_inst.configure(this,name(),"tb_m68k_ram_uart.ao68000_m.memory_registers_m.an_ram_inst");
    __Vscope_tb_m68k_ram_uart__ao68000_m__memory_registers_m__dn_ram_inst.configure(this,name(),"tb_m68k_ram_uart.ao68000_m.memory_registers_m.dn_ram_inst");
    __Vscope_tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.configure(this,name(),"tb_m68k_ram_uart.ao68000_m.memory_registers_m.micro_rom_inst");
    __Vscope_tb_m68k_ram_uart__wb_ram_m.configure(this,name(),"tb_m68k_ram_uart.wb_ram_m");
    // Setup export functions
    for (int __Vfinal=0; __Vfinal<2; __Vfinal++) {
	__Vscope_tb_m68k_ram_uart.varInsert(__Vfinal,"clk", &(TOP__tb_m68k_ram_uart.clk), VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
	__Vscope_tb_m68k_ram_uart.varInsert(__Vfinal,"rst_n", &(TOP__tb_m68k_ram_uart.rst_n), VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
	__Vscope_tb_m68k_ram_uart__ao68000_m__memory_registers_m__an_ram_inst.varInsert(__Vfinal,"mem", &(TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__an_ram_inst.mem), VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,2 ,31,0 ,7,0);
	__Vscope_tb_m68k_ram_uart__ao68000_m__memory_registers_m__dn_ram_inst.varInsert(__Vfinal,"mem", &(TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__dn_ram_inst.mem), VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,2 ,31,0 ,7,0);
	__Vscope_tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.varInsert(__Vfinal,"mem", &(TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst.mem), VLVT_WDATA,VLVD_NODIR|VLVF_PUB_RW,2 ,87,0 ,511,0);
	__Vscope_tb_m68k_ram_uart__wb_ram_m.varInsert(__Vfinal,"mem", &(TOP__tb_m68k_ram_uart__wb_ram_m.mem), VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,2 ,31,0 ,4194303,0);
    }
}
