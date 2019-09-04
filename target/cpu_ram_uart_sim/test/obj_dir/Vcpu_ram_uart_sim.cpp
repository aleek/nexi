// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcpu_ram_uart_sim.h for the primary calling header

#include "Vcpu_ram_uart_sim.h" // For This
#include "Vcpu_ram_uart_sim__Syms.h"

#include "verilated_dpi.h"


//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(Vcpu_ram_uart_sim) {
    Vcpu_ram_uart_sim__Syms* __restrict vlSymsp = __VlSymsp = new Vcpu_ram_uart_sim__Syms(this, name());
    Vcpu_ram_uart_sim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    VL_CELL (tb_m68k_ram_uart, Vcpu_ram_uart_sim_tb_m68k_ram_uart);
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void Vcpu_ram_uart_sim::__Vconfigure(Vcpu_ram_uart_sim__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

Vcpu_ram_uart_sim::~Vcpu_ram_uart_sim() {
    delete __VlSymsp; __VlSymsp=NULL;
}

//--------------------


void Vcpu_ram_uart_sim::eval() {
    Vcpu_ram_uart_sim__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    Vcpu_ram_uart_sim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    VL_DEBUG_IF(VL_PRINTF("\n----TOP Evaluate Vcpu_ram_uart_sim::eval\n"); );
    int __VclockLoop = 0;
    QData __Vchange = 1;
    while (VL_LIKELY(__Vchange)) {
	VL_DEBUG_IF(VL_PRINTF(" Clock loop\n"););
	_eval(vlSymsp);
	__Vchange = _change_request(vlSymsp);
	if (VL_UNLIKELY(++__VclockLoop > 100)) vl_fatal(__FILE__,__LINE__,__FILE__,"Verilated model didn't converge");
    }
}

void Vcpu_ram_uart_sim::_eval_initial_loop(Vcpu_ram_uart_sim__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    _eval_initial(vlSymsp);
    int __VclockLoop = 0;
    QData __Vchange = 1;
    while (VL_LIKELY(__Vchange)) {
	_eval_settle(vlSymsp);
	_eval(vlSymsp);
	__Vchange = _change_request(vlSymsp);
	if (VL_UNLIKELY(++__VclockLoop > 100)) vl_fatal(__FILE__,__LINE__,__FILE__,"Verilated model didn't DC converge");
    }
}

//--------------------
// Internal Methods

void Vcpu_ram_uart_sim::_eval(Vcpu_ram_uart_sim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vcpu_ram_uart_sim::_eval\n"); );
    Vcpu_ram_uart_sim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlSymsp->TOP__tb_m68k_ram_uart.clk) 
	 & (~ (IData)(vlTOPp->__Vclklast__TOP__tb_m68k_ram_uart__clk)))) {
	vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__dn_ram_inst._sequent__TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__dn_ram_inst__1(vlSymsp);
	vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__an_ram_inst._sequent__TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__an_ram_inst__2(vlSymsp);
	vlSymsp->TOP__tb_m68k_ram_uart._sequent__TOP__tb_m68k_ram_uart__1(vlSymsp);
	vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst._sequent__TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst__1(vlSymsp);
	vlSymsp->TOP__tb_m68k_ram_uart__wb_ram_m._sequent__TOP__tb_m68k_ram_uart__wb_ram_m__1(vlSymsp);
    }
    if ((((IData)(vlSymsp->TOP__tb_m68k_ram_uart.clk) 
	  & (~ (IData)(vlTOPp->__Vclklast__TOP__tb_m68k_ram_uart__clk))) 
	 | ((~ (IData)(vlSymsp->TOP__tb_m68k_ram_uart.rst_n)) 
	    & (IData)(vlTOPp->__Vclklast__TOP__tb_m68k_ram_uart__rst_n)))) {
	vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m._sequent__TOP__tb_m68k_ram_uart__ao68000_m__2(vlSymsp);
	vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m._sequent__TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__1(vlSymsp);
    }
    if (((IData)(vlTOPp->__VinpClk__TOP__tb_m68k_ram_uart____PVT__uart1__DOT__uart_clk__DOT__acc) 
	 & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__tb_m68k_ram_uart____PVT__uart1__DOT__uart_clk__DOT__acc)))) {
	vlSymsp->TOP__tb_m68k_ram_uart._sequent__TOP__tb_m68k_ram_uart__3(vlSymsp);
    }
    if (((IData)(vlSymsp->TOP__tb_m68k_ram_uart.clk) 
	 & (~ (IData)(vlTOPp->__Vclklast__TOP__tb_m68k_ram_uart__clk)))) {
	vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__dn_ram_inst._sequent__TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__dn_ram_inst__3(vlSymsp);
	vlSymsp->TOP__tb_m68k_ram_uart._sequent__TOP__tb_m68k_ram_uart__6(vlSymsp);
	vlSymsp->TOP__tb_m68k_ram_uart__wb_ram_m._sequent__TOP__tb_m68k_ram_uart__wb_ram_m__3(vlSymsp);
	vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst._sequent__TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__micro_rom_inst__2(vlSymsp);
    }
    if ((((IData)(vlSymsp->TOP__tb_m68k_ram_uart.clk) 
	  & (~ (IData)(vlTOPp->__Vclklast__TOP__tb_m68k_ram_uart__clk))) 
	 | ((~ (IData)(vlSymsp->TOP__tb_m68k_ram_uart.rst_n)) 
	    & (IData)(vlTOPp->__Vclklast__TOP__tb_m68k_ram_uart__rst_n)))) {
	vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m._sequent__TOP__tb_m68k_ram_uart__ao68000_m__5(vlSymsp);
	vlSymsp->TOP__tb_m68k_ram_uart._sequent__TOP__tb_m68k_ram_uart__7(vlSymsp);
    }
    if (((IData)(vlTOPp->__VinpClk__TOP__tb_m68k_ram_uart____PVT__uart1__DOT__uart_clk__DOT__clk_1_16) 
	 & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__tb_m68k_ram_uart____PVT__uart1__DOT__uart_clk__DOT__clk_1_16)))) {
	vlSymsp->TOP__tb_m68k_ram_uart._sequent__TOP__tb_m68k_ram_uart__8(vlSymsp);
    }
    if (((IData)(vlTOPp->__VinpClk__TOP__tb_m68k_ram_uart____PVT__uart1__DOT__uart_clk__DOT__acc) 
	 & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__tb_m68k_ram_uart____PVT__uart1__DOT__uart_clk__DOT__acc)))) {
	vlSymsp->TOP__tb_m68k_ram_uart._sequent__TOP__tb_m68k_ram_uart__9(vlSymsp);
    }
    if (((IData)(vlSymsp->TOP__tb_m68k_ram_uart.clk) 
	 & (~ (IData)(vlTOPp->__Vclklast__TOP__tb_m68k_ram_uart__clk)))) {
	vlSymsp->TOP__tb_m68k_ram_uart._sequent__TOP__tb_m68k_ram_uart__12(vlSymsp);
    }
    if ((((IData)(vlSymsp->TOP__tb_m68k_ram_uart.clk) 
	  & (~ (IData)(vlTOPp->__Vclklast__TOP__tb_m68k_ram_uart__clk))) 
	 | ((~ (IData)(vlSymsp->TOP__tb_m68k_ram_uart.rst_n)) 
	    & (IData)(vlTOPp->__Vclklast__TOP__tb_m68k_ram_uart__rst_n)))) {
	vlSymsp->TOP__tb_m68k_ram_uart._sequent__TOP__tb_m68k_ram_uart__13(vlSymsp);
	vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m._settle__TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__3(vlSymsp);
	vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m._sequent__TOP__tb_m68k_ram_uart__ao68000_m__7(vlSymsp);
    }
    if (((IData)(vlTOPp->__VinpClk__TOP__tb_m68k_ram_uart____PVT__uart1__DOT__uart_clk__DOT__clk_1_16) 
	 & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__tb_m68k_ram_uart____PVT__uart1__DOT__uart_clk__DOT__clk_1_16)))) {
	vlSymsp->TOP__tb_m68k_ram_uart._sequent__TOP__tb_m68k_ram_uart__14(vlSymsp);
    }
    // Final
    vlTOPp->__Vclklast__TOP__tb_m68k_ram_uart__clk 
	= vlSymsp->TOP__tb_m68k_ram_uart.clk;
    vlTOPp->__Vclklast__TOP__tb_m68k_ram_uart__rst_n 
	= vlSymsp->TOP__tb_m68k_ram_uart.rst_n;
    vlTOPp->__Vclklast__TOP____VinpClk__TOP__tb_m68k_ram_uart____PVT__uart1__DOT__uart_clk__DOT__acc 
	= vlTOPp->__VinpClk__TOP__tb_m68k_ram_uart____PVT__uart1__DOT__uart_clk__DOT__acc;
    vlTOPp->__Vclklast__TOP____VinpClk__TOP__tb_m68k_ram_uart____PVT__uart1__DOT__uart_clk__DOT__clk_1_16 
	= vlTOPp->__VinpClk__TOP__tb_m68k_ram_uart____PVT__uart1__DOT__uart_clk__DOT__clk_1_16;
    vlTOPp->__VinpClk__TOP__tb_m68k_ram_uart____PVT__uart1__DOT__uart_clk__DOT__acc 
	= vlSymsp->TOP__tb_m68k_ram_uart.__PVT__uart1__DOT__uart_clk__DOT__acc;
    vlTOPp->__VinpClk__TOP__tb_m68k_ram_uart____PVT__uart1__DOT__uart_clk__DOT__clk_1_16 
	= vlSymsp->TOP__tb_m68k_ram_uart.__PVT__uart1__DOT__uart_clk__DOT__clk_1_16;
}

void Vcpu_ram_uart_sim::_eval_initial(Vcpu_ram_uart_sim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vcpu_ram_uart_sim::_eval_initial\n"); );
    Vcpu_ram_uart_sim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m._initial__TOP__tb_m68k_ram_uart__ao68000_m__1(vlSymsp);
    vlSymsp->TOP__tb_m68k_ram_uart._initial__TOP__tb_m68k_ram_uart__2(vlSymsp);
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m._initial__TOP__tb_m68k_ram_uart__ao68000_m__3(vlSymsp);
    vlSymsp->TOP__tb_m68k_ram_uart__wb_ram_m._initial__TOP__tb_m68k_ram_uart__wb_ram_m__2(vlSymsp);
    vlSymsp->TOP__tb_m68k_ram_uart._initial__TOP__tb_m68k_ram_uart__4(vlSymsp);
    vlSymsp->TOP__tb_m68k_ram_uart._initial__TOP__tb_m68k_ram_uart__10(vlSymsp);
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m._initial__TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__2(vlSymsp);
}

void Vcpu_ram_uart_sim::final() {
    VL_DEBUG_IF(VL_PRINTF("    Vcpu_ram_uart_sim::final\n"); );
    // Variables
    Vcpu_ram_uart_sim__Syms* __restrict vlSymsp = this->__VlSymsp;
    Vcpu_ram_uart_sim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vcpu_ram_uart_sim::_eval_settle(Vcpu_ram_uart_sim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vcpu_ram_uart_sim::_eval_settle\n"); );
    Vcpu_ram_uart_sim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m._settle__TOP__tb_m68k_ram_uart__ao68000_m__4(vlSymsp);
    vlSymsp->TOP__tb_m68k_ram_uart._settle__TOP__tb_m68k_ram_uart__5(vlSymsp);
    vlSymsp->TOP__tb_m68k_ram_uart._settle__TOP__tb_m68k_ram_uart__11(vlSymsp);
    vlSymsp->TOP__tb_m68k_ram_uart__wb_ram_m._settle__TOP__tb_m68k_ram_uart__wb_ram_m__4(vlSymsp);
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m._settle__TOP__tb_m68k_ram_uart__ao68000_m__6(vlSymsp);
    vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m._settle__TOP__tb_m68k_ram_uart__ao68000_m__memory_registers_m__3(vlSymsp);
}

VL_INLINE_OPT QData Vcpu_ram_uart_sim::_change_request(Vcpu_ram_uart_sim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vcpu_ram_uart_sim::_change_request\n"); );
    Vcpu_ram_uart_sim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    __req |= ((vlSymsp->TOP__tb_m68k_ram_uart.__PVT__uart1__DOT__uart_clk__DOT__acc ^ vlTOPp->__Vchglast__TOP__tb_m68k_ram_uart__uart1__DOT__uart_clk__DOT__acc)
	 | (vlSymsp->TOP__tb_m68k_ram_uart.__PVT__uart1__DOT__uart_clk__DOT__clk_1_16 ^ vlTOPp->__Vchglast__TOP__tb_m68k_ram_uart__uart1__DOT__uart_clk__DOT__clk_1_16));
    VL_DEBUG_IF( if(__req && ((vlSymsp->TOP__tb_m68k_ram_uart.__PVT__uart1__DOT__uart_clk__DOT__acc ^ vlTOPp->__Vchglast__TOP__tb_m68k_ram_uart__uart1__DOT__uart_clk__DOT__acc))) VL_PRINTF("	CHANGE: nexi_uart_clocks.v:9: uart1.uart_clk.acc\n"); );
    VL_DEBUG_IF( if(__req && ((vlSymsp->TOP__tb_m68k_ram_uart.__PVT__uart1__DOT__uart_clk__DOT__clk_1_16 ^ vlTOPp->__Vchglast__TOP__tb_m68k_ram_uart__uart1__DOT__uart_clk__DOT__clk_1_16))) VL_PRINTF("	CHANGE: nexi_uart_clocks.v:11: uart1.uart_clk.clk_1_16\n"); );
    // Final
    vlTOPp->__Vchglast__TOP__tb_m68k_ram_uart__uart1__DOT__uart_clk__DOT__acc 
	= vlSymsp->TOP__tb_m68k_ram_uart.__PVT__uart1__DOT__uart_clk__DOT__acc;
    vlTOPp->__Vchglast__TOP__tb_m68k_ram_uart__uart1__DOT__uart_clk__DOT__clk_1_16 
	= vlSymsp->TOP__tb_m68k_ram_uart.__PVT__uart1__DOT__uart_clk__DOT__clk_1_16;
    return __req;
}

void Vcpu_ram_uart_sim::_ctor_var_reset() {
    VL_DEBUG_IF(VL_PRINTF("    Vcpu_ram_uart_sim::_ctor_var_reset\n"); );
    // Body
    __VinpClk__TOP__tb_m68k_ram_uart____PVT__uart1__DOT__uart_clk__DOT__acc = VL_RAND_RESET_I(1);
    __VinpClk__TOP__tb_m68k_ram_uart____PVT__uart1__DOT__uart_clk__DOT__clk_1_16 = VL_RAND_RESET_I(1);
    __Vclklast__TOP__tb_m68k_ram_uart__clk = VL_RAND_RESET_I(1);
    __Vclklast__TOP__tb_m68k_ram_uart__rst_n = VL_RAND_RESET_I(1);
    __Vclklast__TOP____VinpClk__TOP__tb_m68k_ram_uart____PVT__uart1__DOT__uart_clk__DOT__acc = VL_RAND_RESET_I(1);
    __Vclklast__TOP____VinpClk__TOP__tb_m68k_ram_uart____PVT__uart1__DOT__uart_clk__DOT__clk_1_16 = VL_RAND_RESET_I(1);
    __Vchglast__TOP__tb_m68k_ram_uart__uart1__DOT__uart_clk__DOT__acc = VL_RAND_RESET_I(1);
    __Vchglast__TOP__tb_m68k_ram_uart__uart1__DOT__uart_clk__DOT__clk_1_16 = VL_RAND_RESET_I(1);
}

void Vcpu_ram_uart_sim::_configure_coverage(Vcpu_ram_uart_sim__Syms* __restrict vlSymsp, bool first) {
    VL_DEBUG_IF(VL_PRINTF("    Vcpu_ram_uart_sim::_configure_coverage\n"); );
    // Body
    if (0 && vlSymsp && first) {} // Prevent unused
}
