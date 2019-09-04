# Verilated -*- Makefile -*-
# DESCRIPTION: Verilator output: Make include file with class lists
#
# This file lists generated Verilated files, for including in higher level makefiles.
# See Vcpu_ram_uart_sim.mk for the caller.

### Switches...
# Coverage output mode?  0/1 (from --coverage)
VM_COVERAGE = 0
# Tracing output mode?  0/1 (from --trace)
VM_TRACE = 0

### Object file lists...
# Generated module classes, fast-path, compile with highest optimization
VM_CLASSES_FAST += \
	Vcpu_ram_uart_sim \
	Vcpu_ram_uart_sim_tb_m68k_ram_uart \
	Vcpu_ram_uart_sim_ao68000 \
	Vcpu_ram_uart_sim_wb_ram__A18_S4 \
	Vcpu_ram_uart_sim_memory_registers \
	Vcpu_ram_uart_sim_generic_sync_mem__D58_A9 \
	Vcpu_ram_uart_sim_generic_sync_mem__D20_A3 \

# Generated module classes, non-fast-path, compile with low/medium optimization
VM_CLASSES_SLOW += \

# Generated support classes, fast-path, compile with highest optimization
VM_SUPPORT_FAST += \
	Vcpu_ram_uart_sim__Dpi \

# Generated support classes, non-fast-path, compile with low/medium optimization
VM_SUPPORT_SLOW += \
	Vcpu_ram_uart_sim__Syms \

# Global classes, need linked once per executable, fast-path, compile with highest optimization
VM_GLOBAL_FAST += \
	verilated \
	verilated_dpi \

# Global classes, need linked once per executable, non-fast-path, compile with low/medium optimization
VM_GLOBAL_SLOW += \


# Verilated -*- Makefile -*-
