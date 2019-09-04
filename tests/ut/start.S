/*
 * Copyright 2017 Aleksander Dutkowski <adutkowski@sztajfa.cc>
 *
 * Redistribution and use in source and binary forms, with or without modification, 
 * are permitted provided that the following conditions are met:
 *
 * 1. Redistributions of source code must retain the above copyright notice,
 * this list of conditions and the following disclaimer.
 *
 * 2. Redistributions in binary form must reproduce the above copyright notice,
 * this list of conditions and the following disclaimer in the documentation
 * and/or other materials provided with the distribution.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, 
 * THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED.
 * IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
 * PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS;
 * OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, 
 * WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

/*
 * Entry point for the CPU. This code sets up the CPU, exception vectors,
 * and passes the control to the main() function.
 */
 .global _start
#define CONFIG_RAMBASE 0x0
#define CONFIG_RAMSIZE 0x10000

.section .exception_table
_except_reset_ssp:
	.long (CONFIG_RAMBASE + CONFIG_RAMSIZE)
_except_reset_pc:
	.long _start

	.long 0
	.long 0
	.long 0
	.long 0
	.long 0
	.long 0
	.long 0
	.long 0
	.long 0
	.long 0
	.long 0
	.long 0
	.long 0
	.long 0
	.long 0
	.long 0
	.long 0
	.long 0

.data
.asciz "DATADATADATADATADATADATADATA"



/* times 0x400-($-$$) .long 0 */
.org 0x400
.text
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
	move.l %a0,%sp@-
	move.l %d0,%sp@-
	move.b %a0@+,%d0              // move the char to d0
	cmpi.b #0x00,%d0               // check if end of string
	move.b %d0,%a1@
	move.l %sp@+,%d0
	move.l %sp@+,%a0
	rts
	jmp _start
