# Microcode source code for M68000 implementation of ao68000.

reset:
instr
	GROUP_0_FLAG(SET)
endinstr

instr
	PROCEDURE(wait_prefetch_valid) # wait for instruction prefetch
endinstr

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
ADDRESS_BUS_TRAP:
external instr
	TRAP(FROM_INTERRUPT)
	OP2(MOVE_ADDRESS_BUS_INFO)
	RMW_FLAG(CLEAR)
	INSTRUCTION_FLAG(SET)
	DO_READ_FLAG(CLEAR)
	DO_WRITE_FLAG(CLEAR)
	DO_INTERRUPT_FLAG(CLEAR)
endinstr

instr
	// check if group_0_flag already active
	BRANCH(group_0_flag)
	goto address_bus_trap_group_0_flag_cleared
endinstr

instr
	//if group_0_flag active: block processor
	DO_BLOCKED_FLAG(SET)
	PROCEDURE(wait_finished)
endinstr

address_bus_trap_group_0_flag_cleared:
// continue processing trap
instr
	GROUP_0_FLAG(SET)
endinstr

// move PC to OP1
instr
	OP1(FROM_PC)
endinstr

instr
	// move OP1 to result
	ALU(SIMPLE_MOVE)
	// move SR to OP1
	OP1(FROM_SR)
endinstr

// set supervisor, clear trace
instr
	ALU(SR_SET_TRAP)
endinstr

// stack PC
instr
	SIZE(LONG)
	EA_REG(STACKPTR)
	EA_MOD(PREDEC)
	EA_TYPE(ALL)
endinstr

// proposed syntax for branch procedure:
// instr BRANCH(procedure)(call_load_ea)
instr
	BRANCH(procedure)
	PROCEDURE(call_load_ea)
endinstr

instr
	BRANCH(procedure)
	PROCEDURE(call_perform_ea_write)
endinstr

instr
	BRANCH(procedure)
	PROCEDURE(call_save_ea)
	// move SR to result
	ALU(SIMPLE_MOVE)
	// move IR to OP1
	OP1(FROM_IR)
endinstr

// stack SR
// calculate effective address of SP, and decrement by size
instr
	SIZE(WORD)
	EA_MOD(PREDEC)
	EA_REG(STACKPTR)
	EA_TYPE(ALL)
endinstr

instr
	BRANCH(procedure)
	PROCEDURE(call_load_ea)
endinstr

instr
	BRANCH(procedure)
	PROCEDURE(call_perform_ea_write)
endinstr

instr
	BRANCH(procedure)
	PROCEDURE(call_save_ea)
	// move IR to result
	ALU(SIMPLE_MOVE)
	// move fault address to OP1
	OP1(FROM_FAULT_ADDRESS)
endinstr

// stack IR
instr
	BRANCH(procedure)
	PROCEDURE(call_load_ea)
endinstr

instr
	BRANCH(procedure)
	PROCEDURE(call_perform_ea_write)
endinstr

instr
	BRANCH(procedure)
	PROCEDURE(call_save_ea)
	// move fault address to result
	ALU(SIMPLE_MOVE)
	// move bus cycle info stored in OP2 to OP1
	OP1(FROM_OP2)
endinstr

// stack fault address
instr
	SIZE(LONG)
	EA_REG(STACKPTR)
	EA_MOD(PREDEC)
	EA_TYPE(ALL)
endinstr

instr
	PROCEDURE(call_load_ea)
endinstr

instr
	PROCEDURE(call_perform_ea_write)
endinstr

	// move bus cycle info from OP1 to result
instr
	PROCEDURE(call_save_ea)
	ALU(SIMPLE_MOVE)
endinstr

 // stack bus cycle info
instr
	SIZE(WORD)
	EA_REG(STACKPTR)
	EA_MOD(PREDEC)
	EA_TYPE(ALL)
endinstr

instr
	PROCEDURE(call_load_ea)
endinstr

instr
	PROCEDURE(call_perform_ea_write)
endinstr

instr
	PROCEDURE(call_save_ea)
endinstr

 // load PC from exception vector table
instr
	ADDRESS(FROM_TRAP)
	SIZE(LONG)
	EA_REG(STACKPTR)
	EA_MOD(PREDEC)
	EA_TYPE(ALL)
endinstr

instr PROCEDURE(call_perform_ea_read)
endinstr

instr ALU(SIMPLE_MOVE)
endinstr

 // wait for instruction prefetch
instr PROCEDURE(wait_prefetch_valid)
endinstr

instr PC(FROM_RESULT)
endinstr

 // wait one cycle to check loaded PC: is it even ?
instr OP1(FROM_OP2)
endinstr

// jump to main loop
instr PROCEDURE(jump_to_main_loop)
endinstr

