.section .exception_table
.asciz "WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW"
#define CONFIG_RAMBASE 0x0
#define CONFIG_RAMSIZE 0x10000
_except_reset_ssp:
	.long (CONFIG_RAMBASE + CONFIG_RAMSIZE)
_except_reset_pc:
	.long _start
_except_bus_error:
	.word exception_berr
_except_addr_error:
	.word exception_aerr
_except_ill_instr:
	.word exception_ill
_except_div_by_zero:
	.word exception_div
_except_chk_instr:
	.word exception_chk
_except_trapv_instr:
	.word exception_trapv
_except_privil_viol:
	.word exception_pv
_except_trace:
	.word exception_trc
/*
.data

str_berr:  .asciz "exception: Bus error\n"
str_aerr:  .asciz "exception: Address error\n"
str_ill:   .asciz "exception: Illegal instruction\n"
str_div:   .asciz "exception: Still cannot divide by zero\n"
str_chk:   .asciz "exception: CHK instruction \n"
str_trapv: .asciz "exception: TRAPV instruction\n"
str_pv:    .asciz "exception: Privilege violation\n"
str_trc:   .asciz "exception: Trace mode\n"
str_1010:  .asciz "exception: 0b1010 not implemented instruction\n"
str_1111:  .asciz "exception: 0b1111 not implemented instruction\n"
str_res1:  .asciz "exception: This exception is reserved, and should not be called\n"
str_cop:   .asciz "exception: Coprocessor protocol violation\n"
str_illf:  .asciz "exception: Illegal format (010, 020, 030 only)\n"
str_int:   .asciz "exception: Non initialized interrupt\n"
str_res2:  .asciz "exception: This exception is reserved, and should not be called\n"
str_spur:  .asciz "exception: Spurious interrupt\n"
str_avi1:  .asciz "exception: Level 1 autovector interrupt\n"
str_avi2:  .asciz "exception: Level 2 autovector interrupt\n"
str_avi3:  .asciz "exception: Level 3 autovector interrupt\n"
str_avi4:  .asciz "exception: Level 4 autovector interrupt\n"
str_avi5:  .asciz "exception: Level 5 autovector interrupt\n"
str_avi6:  .asciz "exception: Level 6 autovector interrupt\n"
str_avi7:  .asciz "exception: Level 7 autovector interrupt\n"
str_trap:  .asciz "exception: TRAP\n"

.text

exception_berr:
	lea str_berr,%a0
	jmp finish_exception

exception_aerr:
	lea str_aerr,%a0
	jmp finish_exception


exception_ill:
	lea str_ill,%a0
	jmp finish_exception

exception_div:
	lea str_div,%a0
	jmp finish_exception

exception_chk:
	lea str_chk,%a0
	jmp finish_exception

exception_trapv:
	lea str_trapv,%a0
	jmp finish_exception

exception_pv:
	lea str_pv,%a0
	jmp finish_exception

exception_trc:
	lea str_trc,%a0
	jmp finish_exception

exception_1010:
	lea str_1010,%a0
	jmp finish_exception

exception_1111:
	lea str_1111,%a0
	jmp finish_exception

exception_res1:
	lea str_res1,%a0
	jmp finish_exception

exception_cop:
	lea str_cop,%a0
	jmp finish_exception

exception_illf:
	lea str_illf,%a0
	jmp finish_exception

exception_int:
	lea str_int,%a0
	jmp finish_exception

exception_res2:
	lea str_res2,%a0
	jmp finish_exception

exception_spur:
	lea str_spur,%a0
	jmp finish_exception

exception_avi1:
	lea str_avi1,%a0
	jmp finish_exception

exception_avi2:
	lea str_avi2,%a0
	jmp finish_exception

exception_avi3:
	lea str_avi3,%a0
	jmp finish_exception

exception_avi4:
	lea str_avi4,%a0
	jmp finish_exception

exception_avi5:
	lea str_avi5,%a0
	jmp finish_exception

exception_avi6:
	lea str_avi6,%a0
	jmp finish_exception

exception_avi7:
	lea str_avi7,%a0
	jmp finish_exception

exception_trap:
	lea str_trap,%a0
	jmp finish_exception

finish_exception:
	bsr puts             // print string from (%a0)
	//jmp finish_execution // jump to routine that finishes vvp simulation
	_inf_loop:
	jmp _inf_loop

#include "puts.S"
*/