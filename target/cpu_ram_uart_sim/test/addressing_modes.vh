`ifndef AO68000_ADDRESSING_MODES_VH
`define AO68000_ADDRESSING_MODES_VH

/*
 * Furher reading:
 * M68000 Programming Reference Manual (M68000PRM)
 * https://www.sourceware.org/binutils/docs-2.12/as.info/M68K-Syntax.html#M68K-Syntax
 */
/* Addressing modes for M68000 */


/*
 * Data Register Direct Mode
 *
 * Generation: EA = Dn
 * EA_reg: data register number
 *
 * Example: 
 * Move the number 128 intro register D0.
 * MOVE #128,%d0
 */
`define ADDR_MOD_DN 3'b000

/*
 * Address Register Direct Mode
 *
 * Generation: EA = An
 * EA_reg: address register number
 * Example:
 * Move the number 128 intro register A0.
 * MOVE #128,%a0
 */
`define ADDR_MOD_AN 3'b001

/*
 * Address Register Indirect Mode (pointer)
 *
 * Generation EA = (An)
 * EA_reg: address register number
 * Example:
 * Move the number 128 into the memory, pointed by the address in A0.
 * MOVE #128,(%a0)
 */
`define ADDR_MOD_INDIR 3'b010

/*
 * Address Register Indirect with Postincrement Mode
 *
 * Generation: EA = (An) + SIZE
 * Ea_reg: register number
 * Example:
 * MOVE #128,(%a0)+
 */
`define ADDR_MOD_POSTINC 3'b011

/*
 * Address Register Indirect with Predecrement Mode
 * Generation: EA = (An) - SIZE
 * EA_reg: register number
 * Example:
 * MOVE #128,-(%a0)
 */
`define ADDR_MOD_PREDEC 3'b100

/*
 * Address Register Indirect with Displacement Mode
 * Generation: EA = (An) + d16
 * EA_reg: register number
 * Example:
 */
`define ADDR_MOD_INDIR_OFFSET 3'b101

/*
 * Address Register Indirect with Index (8-bit Displacement) Mode
 */
`define ADDR_MOD_INDEX 3'b110

/*
 * Absolute Data Addressing
 *
 * EA_reg: 000 (word), 001 (long)
 */
`define ADDR_MOD_ABS 3'b111
`define  ADDR_REG_ABS_W 3'b000
`define  ADDR_REG_ABS_L 3'b001

/* 
 * Program Counter Addressing Modes
 *
 * EA_reg:
 *   - 010
 *   - 011
 */

`define ADDR_MOD_PC 3'b111
/* EA register field for Program Counter Addressing Modes */
`define ADDR_REG_PC_OFFSET 3'b010
`define ADDR_REG_PC_INDEX 3'b011

/*
 * Immediate Data
 */
`define ADDR_MOD_IMM 3'b111
`define  ADDR_REG_IMM 3'b100

/*
 * This is aggregate define for PC. absolute and immediate
 * addres modes. 
 */
`define ADDR_MOD_PC_ABS_IMM 3'b111


`endif
