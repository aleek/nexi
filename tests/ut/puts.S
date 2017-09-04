
/*
 * puts(*s)
 * prints string (zero-ended) on a console
 * %a0 - pointer to string
 */
#define CONFIG_UART_TX 0x01000001
puts:
	move.l %a0,%sp@-
	move.l %d0,%sp@-
	move.l #CONFIG_UART_TX,%a1    // move the address of uart tx to A1
_puts_loop:
	move.b %a0@+,%d0              // move the char to d0
	cmpi.b #0x00,%d0               // check if end of string
	beq _puts_finish
	move.b %d0,%a1@

_puts_finish:
	move.l %sp@+,%d0
	move.l %sp@+,%a0
	rts

/*
 * putc(c) - prints character on the console
 * %d0 - character
 */
putc:
	move.l %a0,%sp@-
	move.l #CONFIG_UART_TX,%a0
	move.b %d0,%a0@
	move.l %sp@+,%a0
	rts
