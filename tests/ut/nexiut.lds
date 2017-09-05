/*OUTPUT_ARCH(m68k)*/
OUTPUT_FORMAT(binary)
ENTRY(_start)

MEMORY {
	ROM : ORIGIN = 0x0, LENGTH = 0x400
	RAM : ORIGIN = 0x400, LENGTH = 0x100000 /*  (0x100000 - 0x400) */
}


SECTIONS {
	.exception_table . :
     {
       . = ALIGN(4);
       KEEP(*(.exception_table)) /* Startup code */
       . = ALIGN(4);
     } > ROM
	 . = 0x400;
	.text . : { *(.text) } > RAM
	.data : { *(.data) } > RAM
}
