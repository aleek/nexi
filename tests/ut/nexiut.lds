/*OUTPUT_ARCH(m68k)*/
OUTPUT_FORMAT(binary)
ENTRY(_start)

MEMORY {
	ROM (rwx): ORIGIN = 0x0, LENGTH = 0x1000
	RAM (rwx): ORIGIN = 0x1000, LENGTH = 0x100000 /*  (0x100000 - 0x400) */
}

ENTRY(_start)

SECTIONS {
	.text :
     {
       . = ALIGN(4);
       KEEP(*(.exception_table)) /* Startup code */
       . = ALIGN(0x400);
	   *(.text*)
     } > ROM
	.data : { *(.data) } > RAM
}
