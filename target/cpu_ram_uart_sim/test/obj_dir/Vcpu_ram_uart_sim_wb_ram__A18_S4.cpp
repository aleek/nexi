// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcpu_ram_uart_sim.h for the primary calling header

#include "Vcpu_ram_uart_sim_wb_ram__A18_S4.h" // For This
#include "Vcpu_ram_uart_sim__Syms.h"

#include "verilated_dpi.h"


//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(Vcpu_ram_uart_sim_wb_ram__A18_S4) {
    // Reset internal values
    // Reset structure values
    _ctor_var_reset();
}

void Vcpu_ram_uart_sim_wb_ram__A18_S4::__Vconfigure(Vcpu_ram_uart_sim__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

Vcpu_ram_uart_sim_wb_ram__A18_S4::~Vcpu_ram_uart_sim_wb_ram__A18_S4() {
}

//--------------------
// Internal Methods

VL_INLINE_OPT void Vcpu_ram_uart_sim_wb_ram__A18_S4::_sequent__TOP__tb_m68k_ram_uart__wb_ram_m__1(Vcpu_ram_uart_sim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        Vcpu_ram_uart_sim_wb_ram__A18_S4::_sequent__TOP__tb_m68k_ram_uart__wb_ram_m__1\n"); );
    Vcpu_ram_uart_sim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__tb_m68k_ram_uart__wb_ram_m.__Vdlyvset__mem__v0 = 0U;
    vlSymsp->TOP__tb_m68k_ram_uart__wb_ram_m.__Vdlyvset__mem__v1 = 0U;
    vlSymsp->TOP__tb_m68k_ram_uart__wb_ram_m.__Vdlyvset__mem__v2 = 0U;
    vlSymsp->TOP__tb_m68k_ram_uart__wb_ram_m.__Vdlyvset__mem__v3 = 0U;
}

void Vcpu_ram_uart_sim_wb_ram__A18_S4::_initial__TOP__tb_m68k_ram_uart__wb_ram_m__2(Vcpu_ram_uart_sim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        Vcpu_ram_uart_sim_wb_ram__A18_S4::_initial__TOP__tb_m68k_ram_uart__wb_ram_m__2\n"); );
    Vcpu_ram_uart_sim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // INITIAL at wb_ram.v:58
    vlSymsp->TOP__tb_m68k_ram_uart__wb_ram_m.__PVT__dat_o_reg = 0U;
    // INITIAL at wb_ram.v:59
    vlSymsp->TOP__tb_m68k_ram_uart__wb_ram_m.__PVT__ack_o_reg = 0U;
}

VL_INLINE_OPT void Vcpu_ram_uart_sim_wb_ram__A18_S4::_sequent__TOP__tb_m68k_ram_uart__wb_ram_m__3(Vcpu_ram_uart_sim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        Vcpu_ram_uart_sim_wb_ram__A18_S4::_sequent__TOP__tb_m68k_ram_uart__wb_ram_m__3\n"); );
    Vcpu_ram_uart_sim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at wb_ram.v:83
    vlSymsp->TOP__tb_m68k_ram_uart__wb_ram_m.__PVT__ack_o_reg = 0U;
    if ((((IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__CYC_O) 
	  & ((~ (vlSymsp->TOP__tb_m68k_ram_uart.__PVT__ao_addr 
		 >> 0x18U)) & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__STB_O))) 
	 & (~ (IData)(vlSymsp->TOP__tb_m68k_ram_uart__wb_ram_m.__PVT__ack_o)))) {
	if (((IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__WE_O) 
	     & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__SEL_O))) {
	    vlSymsp->TOP__tb_m68k_ram_uart__wb_ram_m.__Vdlyvval__mem__v0 
		= (0xffU & vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__DAT_O);
	    vlSymsp->TOP__tb_m68k_ram_uart__wb_ram_m.__Vdlyvset__mem__v0 = 1U;
	    vlSymsp->TOP__tb_m68k_ram_uart__wb_ram_m.__Vdlyvlsb__mem__v0 = 0U;
	    vlSymsp->TOP__tb_m68k_ram_uart__wb_ram_m.__Vdlyvdim0__mem__v0 
		= (0x3fffffU & (vlSymsp->TOP__tb_m68k_ram_uart.__PVT__ram_addr 
				>> 2U));
	}
	vlSymsp->TOP__tb_m68k_ram_uart__wb_ram_m.__PVT__dat_o_reg 
	    = ((0xffffff00U & vlSymsp->TOP__tb_m68k_ram_uart__wb_ram_m.__PVT__dat_o_reg) 
	       | (0xffU & vlSymsp->TOP__tb_m68k_ram_uart__wb_ram_m.mem
		  [(0x3fffffU & (vlSymsp->TOP__tb_m68k_ram_uart.__PVT__ram_addr 
				 >> 2U))]));
	vlSymsp->TOP__tb_m68k_ram_uart__wb_ram_m.__PVT__ack_o_reg = 1U;
    }
    if ((((IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__CYC_O) 
	  & ((~ (vlSymsp->TOP__tb_m68k_ram_uart.__PVT__ao_addr 
		 >> 0x18U)) & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__STB_O))) 
	 & (~ (IData)(vlSymsp->TOP__tb_m68k_ram_uart__wb_ram_m.__PVT__ack_o)))) {
	if (((IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__WE_O) 
	     & ((IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__SEL_O) 
		>> 1U))) {
	    vlSymsp->TOP__tb_m68k_ram_uart__wb_ram_m.__Vdlyvval__mem__v1 
		= (0xffU & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__DAT_O 
			    >> 8U));
	    vlSymsp->TOP__tb_m68k_ram_uart__wb_ram_m.__Vdlyvset__mem__v1 = 1U;
	    vlSymsp->TOP__tb_m68k_ram_uart__wb_ram_m.__Vdlyvlsb__mem__v1 = 8U;
	    vlSymsp->TOP__tb_m68k_ram_uart__wb_ram_m.__Vdlyvdim0__mem__v1 
		= (0x3fffffU & (vlSymsp->TOP__tb_m68k_ram_uart.__PVT__ram_addr 
				>> 2U));
	}
	vlSymsp->TOP__tb_m68k_ram_uart__wb_ram_m.__PVT__dat_o_reg 
	    = ((0xffff00ffU & vlSymsp->TOP__tb_m68k_ram_uart__wb_ram_m.__PVT__dat_o_reg) 
	       | (0xff00U & vlSymsp->TOP__tb_m68k_ram_uart__wb_ram_m.mem
		  [(0x3fffffU & (vlSymsp->TOP__tb_m68k_ram_uart.__PVT__ram_addr 
				 >> 2U))]));
	vlSymsp->TOP__tb_m68k_ram_uart__wb_ram_m.__PVT__ack_o_reg = 1U;
    }
    if ((((IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__CYC_O) 
	  & ((~ (vlSymsp->TOP__tb_m68k_ram_uart.__PVT__ao_addr 
		 >> 0x18U)) & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__STB_O))) 
	 & (~ (IData)(vlSymsp->TOP__tb_m68k_ram_uart__wb_ram_m.__PVT__ack_o)))) {
	if (((IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__WE_O) 
	     & ((IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__SEL_O) 
		>> 2U))) {
	    vlSymsp->TOP__tb_m68k_ram_uart__wb_ram_m.__Vdlyvval__mem__v2 
		= (0xffU & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__DAT_O 
			    >> 0x10U));
	    vlSymsp->TOP__tb_m68k_ram_uart__wb_ram_m.__Vdlyvset__mem__v2 = 1U;
	    vlSymsp->TOP__tb_m68k_ram_uart__wb_ram_m.__Vdlyvlsb__mem__v2 = 0x10U;
	    vlSymsp->TOP__tb_m68k_ram_uart__wb_ram_m.__Vdlyvdim0__mem__v2 
		= (0x3fffffU & (vlSymsp->TOP__tb_m68k_ram_uart.__PVT__ram_addr 
				>> 2U));
	}
	vlSymsp->TOP__tb_m68k_ram_uart__wb_ram_m.__PVT__dat_o_reg 
	    = ((0xff00ffffU & vlSymsp->TOP__tb_m68k_ram_uart__wb_ram_m.__PVT__dat_o_reg) 
	       | (0xff0000U & vlSymsp->TOP__tb_m68k_ram_uart__wb_ram_m.mem
		  [(0x3fffffU & (vlSymsp->TOP__tb_m68k_ram_uart.__PVT__ram_addr 
				 >> 2U))]));
	vlSymsp->TOP__tb_m68k_ram_uart__wb_ram_m.__PVT__ack_o_reg = 1U;
    }
    if ((((IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__CYC_O) 
	  & ((~ (vlSymsp->TOP__tb_m68k_ram_uart.__PVT__ao_addr 
		 >> 0x18U)) & (IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__STB_O))) 
	 & (~ (IData)(vlSymsp->TOP__tb_m68k_ram_uart__wb_ram_m.__PVT__ack_o)))) {
	if (((IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__WE_O) 
	     & ((IData)(vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__SEL_O) 
		>> 3U))) {
	    vlSymsp->TOP__tb_m68k_ram_uart__wb_ram_m.__Vdlyvval__mem__v3 
		= (0xffU & (vlSymsp->TOP__tb_m68k_ram_uart__ao68000_m.__PVT__DAT_O 
			    >> 0x18U));
	    vlSymsp->TOP__tb_m68k_ram_uart__wb_ram_m.__Vdlyvset__mem__v3 = 1U;
	    vlSymsp->TOP__tb_m68k_ram_uart__wb_ram_m.__Vdlyvlsb__mem__v3 = 0x18U;
	    vlSymsp->TOP__tb_m68k_ram_uart__wb_ram_m.__Vdlyvdim0__mem__v3 
		= (0x3fffffU & (vlSymsp->TOP__tb_m68k_ram_uart.__PVT__ram_addr 
				>> 2U));
	}
	vlSymsp->TOP__tb_m68k_ram_uart__wb_ram_m.__PVT__dat_o_reg 
	    = ((0xffffffU & vlSymsp->TOP__tb_m68k_ram_uart__wb_ram_m.__PVT__dat_o_reg) 
	       | (0xff000000U & vlSymsp->TOP__tb_m68k_ram_uart__wb_ram_m.mem
		  [(0x3fffffU & (vlSymsp->TOP__tb_m68k_ram_uart.__PVT__ram_addr 
				 >> 2U))]));
	vlSymsp->TOP__tb_m68k_ram_uart__wb_ram_m.__PVT__ack_o_reg = 1U;
    }
    // ALWAYSPOST at wb_ram.v:87
    if (vlSymsp->TOP__tb_m68k_ram_uart__wb_ram_m.__Vdlyvset__mem__v0) {
	vlSymsp->TOP__tb_m68k_ram_uart__wb_ram_m.mem[vlSymsp->TOP__tb_m68k_ram_uart__wb_ram_m.__Vdlyvdim0__mem__v0] 
	    = (((~ ((IData)(0xffU) << (IData)(vlSymsp->TOP__tb_m68k_ram_uart__wb_ram_m.__Vdlyvlsb__mem__v0))) 
		& vlSymsp->TOP__tb_m68k_ram_uart__wb_ram_m.mem
		[vlSymsp->TOP__tb_m68k_ram_uart__wb_ram_m.__Vdlyvdim0__mem__v0]) 
	       | ((IData)(vlSymsp->TOP__tb_m68k_ram_uart__wb_ram_m.__Vdlyvval__mem__v0) 
		  << (IData)(vlSymsp->TOP__tb_m68k_ram_uart__wb_ram_m.__Vdlyvlsb__mem__v0)));
    }
    if (vlSymsp->TOP__tb_m68k_ram_uart__wb_ram_m.__Vdlyvset__mem__v1) {
	vlSymsp->TOP__tb_m68k_ram_uart__wb_ram_m.mem[vlSymsp->TOP__tb_m68k_ram_uart__wb_ram_m.__Vdlyvdim0__mem__v1] 
	    = (((~ ((IData)(0xffU) << (IData)(vlSymsp->TOP__tb_m68k_ram_uart__wb_ram_m.__Vdlyvlsb__mem__v1))) 
		& vlSymsp->TOP__tb_m68k_ram_uart__wb_ram_m.mem
		[vlSymsp->TOP__tb_m68k_ram_uart__wb_ram_m.__Vdlyvdim0__mem__v1]) 
	       | ((IData)(vlSymsp->TOP__tb_m68k_ram_uart__wb_ram_m.__Vdlyvval__mem__v1) 
		  << (IData)(vlSymsp->TOP__tb_m68k_ram_uart__wb_ram_m.__Vdlyvlsb__mem__v1)));
    }
    if (vlSymsp->TOP__tb_m68k_ram_uart__wb_ram_m.__Vdlyvset__mem__v2) {
	vlSymsp->TOP__tb_m68k_ram_uart__wb_ram_m.mem[vlSymsp->TOP__tb_m68k_ram_uart__wb_ram_m.__Vdlyvdim0__mem__v2] 
	    = (((~ ((IData)(0xffU) << (IData)(vlSymsp->TOP__tb_m68k_ram_uart__wb_ram_m.__Vdlyvlsb__mem__v2))) 
		& vlSymsp->TOP__tb_m68k_ram_uart__wb_ram_m.mem
		[vlSymsp->TOP__tb_m68k_ram_uart__wb_ram_m.__Vdlyvdim0__mem__v2]) 
	       | ((IData)(vlSymsp->TOP__tb_m68k_ram_uart__wb_ram_m.__Vdlyvval__mem__v2) 
		  << (IData)(vlSymsp->TOP__tb_m68k_ram_uart__wb_ram_m.__Vdlyvlsb__mem__v2)));
    }
    if (vlSymsp->TOP__tb_m68k_ram_uart__wb_ram_m.__Vdlyvset__mem__v3) {
	vlSymsp->TOP__tb_m68k_ram_uart__wb_ram_m.mem[vlSymsp->TOP__tb_m68k_ram_uart__wb_ram_m.__Vdlyvdim0__mem__v3] 
	    = (((~ ((IData)(0xffU) << (IData)(vlSymsp->TOP__tb_m68k_ram_uart__wb_ram_m.__Vdlyvlsb__mem__v3))) 
		& vlSymsp->TOP__tb_m68k_ram_uart__wb_ram_m.mem
		[vlSymsp->TOP__tb_m68k_ram_uart__wb_ram_m.__Vdlyvdim0__mem__v3]) 
	       | ((IData)(vlSymsp->TOP__tb_m68k_ram_uart__wb_ram_m.__Vdlyvval__mem__v3) 
		  << (IData)(vlSymsp->TOP__tb_m68k_ram_uart__wb_ram_m.__Vdlyvlsb__mem__v3)));
    }
    vlSymsp->TOP__tb_m68k_ram_uart__wb_ram_m.__PVT__ack_o 
	= vlSymsp->TOP__tb_m68k_ram_uart__wb_ram_m.__PVT__ack_o_reg;
}

void Vcpu_ram_uart_sim_wb_ram__A18_S4::_settle__TOP__tb_m68k_ram_uart__wb_ram_m__4(Vcpu_ram_uart_sim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        Vcpu_ram_uart_sim_wb_ram__A18_S4::_settle__TOP__tb_m68k_ram_uart__wb_ram_m__4\n"); );
    Vcpu_ram_uart_sim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__tb_m68k_ram_uart__wb_ram_m.__PVT__ack_o 
	= vlSymsp->TOP__tb_m68k_ram_uart__wb_ram_m.__PVT__ack_o_reg;
}

void Vcpu_ram_uart_sim_wb_ram__A18_S4::_ctor_var_reset() {
    VL_DEBUG_IF(VL_PRINTF("        Vcpu_ram_uart_sim_wb_ram__A18_S4::_ctor_var_reset\n"); );
    // Body
    __PVT__clk = VL_RAND_RESET_I(1);
    __PVT__adr_i = VL_RAND_RESET_I(24);
    __PVT__dat_i = VL_RAND_RESET_I(32);
    __PVT__dat_o = VL_RAND_RESET_I(32);
    __PVT__we_i = VL_RAND_RESET_I(1);
    __PVT__sel_i = VL_RAND_RESET_I(4);
    __PVT__stb_i = VL_RAND_RESET_I(1);
    __PVT__ack_o = VL_RAND_RESET_I(1);
    __PVT__cyc_i = VL_RAND_RESET_I(1);
    __PVT__dat_o_reg = VL_RAND_RESET_I(32);
    __PVT__ack_o_reg = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<4194304; ++__Vi0) {
	    mem[__Vi0] = VL_RAND_RESET_I(32);
    }}
    __Vdlyvdim0__mem__v0 = VL_RAND_RESET_I(22);
    __Vdlyvlsb__mem__v0 = VL_RAND_RESET_I(5);
    __Vdlyvval__mem__v0 = VL_RAND_RESET_I(8);
    __Vdlyvset__mem__v0 = VL_RAND_RESET_I(1);
    __Vdlyvdim0__mem__v1 = VL_RAND_RESET_I(22);
    __Vdlyvlsb__mem__v1 = VL_RAND_RESET_I(5);
    __Vdlyvval__mem__v1 = VL_RAND_RESET_I(8);
    __Vdlyvset__mem__v1 = VL_RAND_RESET_I(1);
    __Vdlyvdim0__mem__v2 = VL_RAND_RESET_I(22);
    __Vdlyvlsb__mem__v2 = VL_RAND_RESET_I(5);
    __Vdlyvval__mem__v2 = VL_RAND_RESET_I(8);
    __Vdlyvset__mem__v2 = VL_RAND_RESET_I(1);
    __Vdlyvdim0__mem__v3 = VL_RAND_RESET_I(22);
    __Vdlyvlsb__mem__v3 = VL_RAND_RESET_I(5);
    __Vdlyvval__mem__v3 = VL_RAND_RESET_I(8);
    __Vdlyvset__mem__v3 = VL_RAND_RESET_I(1);
}

void Vcpu_ram_uart_sim_wb_ram__A18_S4::_configure_coverage(Vcpu_ram_uart_sim__Syms* __restrict vlSymsp, bool first) {
    VL_DEBUG_IF(VL_PRINTF("        Vcpu_ram_uart_sim_wb_ram__A18_S4::_configure_coverage\n"); );
    // Body
    if (0 && vlSymsp && first) {} // Prevent unused
}
