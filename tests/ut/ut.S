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
	movel #0x01000001,%a1
	moveb #0x4D,%a1@ 
	nop
	nop
	nop
	jmp _start
# enable interrupts
#	movel #0x55,$0x0001
#	movel #0x01000002,%a1
#	moveb #0x02,%a1@ 
#	movel #0x01000001,%a1
#	moveb #0xaa,%a1@ 
#	jmp _start
#	movel #0x1a1a1a1a,%a5@
    /*movel #0x5a5a5a5a,$0xabcd*/
	/*jmp _start*/
/*
    movel #0xa5a5a5a5,%d0
    movew #0xbeef,%d1
    addw %d0,%d1
    movel #0x5a5a5a5a,$0x300
    /*moveb #0xde,%d2
    jmp _start
	movew #0xa5a5,$0xaaff
	jmp _start*/
