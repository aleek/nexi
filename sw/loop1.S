.data
.org 0x0

/* exception vector table */
_except_reset_ssp:
	.long 0xFFF
_except_reset_pc:
	.long 0x100
_except_bus_error:
	.word 0x100
_except_addr_error:
	.word 0x100
_except_ill_instr:
	.word 0x100
_except_div_by_zero:
	.word 0x100
_except_chk_instr:
	.word 0x100
_except_trapv_instr:
	.word 0x100
_except_privil_viol:
	.word 0x100
_except_trace:
	.word 0x100



.text
.org 0x100
/*
 * GNU AS syntax is similar to every arch.
 *
 * %dn - register
 * #nnnn - immediate
 * $nnnn - address
 *
 * Protips:
 * https://en.wikibooks.org/wiki/X86_Assembly/GAS_Syntax
 * http://mrjester.hapisan.com/04_MC68/Index.html
 */
_start:
	nop
	movel #0xa5a5a5a5,%d0
	movew #0xbeef,%d1
	addw %d0,%d1
	movel #0x5a5a5a5a,$0x300
	moveb #0xde,%d2
	jmp _start
