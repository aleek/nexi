OUTPUT_ARCH(m68k)
/*OUTPUT_FORMAT(binary)*/
ENTRY(_start)
/*
MEMORY {
	exception_table: ORIGIN = 0x0, LENGTH = 0x400
	ram: ORIGIN = 0x400, LENGTH = (0x100000 - 0x400)
}
*/

SECTIONS {
	. = 0x400;
	.text : { *(.text) }
	. = 0x600;
	.abcd : { KEEP(*(.foo)) }
	. = 0x800;
	.data : { *(.data) }
	.bss : { *(.bss) }
}
