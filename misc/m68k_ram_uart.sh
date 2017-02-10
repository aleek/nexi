#!/bin/bash
set -o xtrace

iverilog -o m68k_ram_uart -I modules/ao68000/rtl modules/bram/generic_sync_ram.v  modules/ao68000/rtl/{registers.v,microcode_branch.v,memory_registers.v,decoder.v,condition.v,bus_control.v,alu.v,ao68000.v} \
	modules/uart_minimal/rtl/rx.v modules/uart_minimal/rtl/tx.v modules/uart_minimal/rtl/uart_clocks.v modules/uart_minimal/rtl/uart_wb.v \
	 modules/bram/wb_ram.v \
	 modules/wb_interconnect/arbiter_1m_2s.v \
	 tests/m68_ram_uart.v

