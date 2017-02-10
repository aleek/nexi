#!/bin/bash
set -o xtrace

iverilog -o m68k_p2p_ram -I modules/ao68000/rtl modules/bram/generic_sync_ram.v  modules/ao68000/rtl/{registers.v,microcode_branch.v,memory_registers.v,decoder.v,condition.v,bus_control.v,alu.v,ao68000.v} \
	 modules/bram/wb_ram.v \
	 tests/m68_p2p_ram.v

