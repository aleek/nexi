# Microcode source code for M68000 implementation of ao68000.

reset:
instr GROUP_0_FLAG(SET)

instr PROCEDURE(wait_prefetch_valid) # wait for instruction prefetch

# move SSP and PC from prefetch
instr
	AN_INPUT(FROM_PREFETCH_IR)
	AN_ADDRESS(SSP) // load SSP address
	AN_WE(SET)
	PC(FROM_PREFETCH_IR)
	# jump to main loop
	PROCEDURE(jump_to_main_loop)
endinstr

// clear internal flags
MICROPC_ADDRESS_BUS_TRAP:
external instr
	TRAP(FROM_INTERRUPT)
	OP2(MOVE_ADDRESS_BUS_INFO)
	RMW_FLAG(CLEAR)
	INSTRUCTION_FLAG_SET
	DO_READ_FLAG_CLEAR
	DO_WRITE_FLAG_CLEAR
	DO_INTERRUPT_FLAG_CLEAR
endinstr

instr
	// check if group_0_flag already active
	BRANCH_group_0_flag
	goto address_bus_trap_group_0_flag_cleared
endinstr

instr
	//if group_0_flag active: block processor
	DO_BLOCKED_FLAG_SET
	PROCEDURE(wait_finished)
endinstr

address_bus_trap_group_0_flag_cleared:
// continue processing trap
instr GROUP_0_FLAG_SET

// move PC to OP1
instr OP1_FROM_PC

instr
	// move OP1 to result
	ALU_SIMPLE_MOVE
	// move SR to OP1
	OP1_FROM_SR
endinstr

// set supervisor, clear trace
instr ALU_SR_SET_TRAP

// stack PC
instr
	SIZE_LONG
	EA_REG_3b111
	EA_MOD_PREDEC
	EA_TYPE_ALL
endinstr

// proposed syntax for branch procedure:
// instr BRANCH_procedure(call_load_ea)
instr
	BRANCH_procedure
	PROCEDURE_call_load_ea
endinstr

instr
	BRANCH_procedure
	PROCEDURE_call_perform_ea_write
endinstr

instr
	BRANCH_procedure
	PROCEDURE_call_save_ea
	// move SR to result
	ALU_SIMPLE_MOVE
	// move IR to OP1
	OP1_FROM_IR
endinstr

// stack SR
instr
	SIZE_WORD
	EA_REG_3b111
	EA_MOD_PREDEC
	EA_TYPE_ALL
endinstr

instr
	BRANCH_procedure
	PROCEDURE_call_load_ea
endinstr

instr
	BRANCH_procedure
	PROCEDURE_call_perform_ea_write
endinstr

instr
	BRANCH_procedure
	PROCEDURE_call_save_ea
	// move IR to result
	ALU_SIMPLE_MOVE
	// move fault address to OP1
	OP1_FROM_FAULT_ADDRESS
endinstr

// stack IR
instr
	BRANCH_procedure
	PROCEDURE_call_load_ea
endinstr

instr
	BRANCH_procedure
	PROCEDURE_call_perform_ea_write
endinstr

instr
	BRANCH_procedure
	PROCEDURE_call_save_ea
	// move fault address to result
	ALU_SIMPLE_MOVE
	// move bus cycle info stored in OP2 to OP1
	OP1_FROM_OP2
endinstr

// stack fault address
instr
	SIZE_LONG
	EA_REG_3b111
	EA_MOD_PREDEC
	EA_TYPE_ALL
endinstr

instr
	PROCEDURE(call_load_ea)
endinstr

instr
	PROCEDURE(call_perform_ea_write)
endinstr

	// move bus cycle info from OP1 to result
instr PROCEDURE(call_save_ea) ALU(SIMPLE_MOVE)

 // stack bus cycle info
instr
	SIZE_WORD
	EA_REG_3b111
	EA_MOD_PREDEC
	EA_TYPE_ALL
endinstr

instr PROCEDURE(call_load_ea)

instr PROCEDURE(call_perform_ea_write)

instr PROCEDURE(call_save_ea)

 // load PC from exception vector table
instr
	ADDRESS_FROM_TRAP
	SIZE_LONG
	EA_REG_3b111
	EA_MOD_PREDEC
	EA_TYPE_ALL
endinstr

instr PROCEDURE(call_perform_ea_read)

instr ALU_SIMPLE_MOVE

 // wait for instruction prefetch
instr PROCEDURE(wait_prefetch_valid)

instr PC_FROM_RESULT

 // wait one cycle to check loaded PC: is it even ?
instr OP1_FROM_OP2

// jump to main loop
instr PROCEDURE(jump_to_main_loop)

