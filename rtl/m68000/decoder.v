/***********************************************************************************************************************
 * Instruction decoder
 **********************************************************************************************************************/

/*! \brief Decode instruction and addressing mode.
 *
 * The decoder is an instruction and addressing mode decoder. For instructions it takes as input the ir register
 * from the registers module. The output of the decoder, in this case, is a microcode address of the first microcode
 * word that performs the instruction.
 *
 * In case of addressing mode decoding, the output is the address of the first microcode word that performs the operand
 * loading or saving. This address is obtained from the currently selected addressing mode saved in the ea_mod
 * and ea_type registers in the registers module.
 */
module decoder(
    input           clock,
    input           reset_n,

    input           supervisor,
    input [15:0]    ir,

    // zero: no trap
    output [7:0]    decoder_trap,
    output [8:0]    decoder_micropc,
    output [17:0]   decoder_alu,
    
    output [8:0]    save_ea,
    output [8:0]    perform_ea_write,
    output [8:0]    perform_ea_read,
    output [8:0]    load_ea,
    
    input [3:0]     ea_type,
    input [2:0]     ea_mod,
    input [2:0]     ea_reg
);

parameter [7:0]
    NO_TRAP                             = 8'd0,
    ILLEGAL_INSTRUCTION_TRAP            = 8'd4,
    PRIVILEGE_VIOLATION_TRAP            = 8'd8,
    ILLEGAL_1010_INSTRUCTION_TRAP       = 8'd10,
    ILLEGAL_1111_INSTRUCTION_TRAP       = 8'd11;

parameter [8:0]
    UNUSED_MICROPC                      = 9'd0;

assign { decoder_trap, decoder_micropc } =
    (reset_n == 1'b0) ? { NO_TRAP, UNUSED_MICROPC } :

    // Privilege violation and illegal instruction

    // ANDI to SR,EORI to SR,ORI to SR,RESET,STOP,RTE,MOVE TO SR,MOVE USP TO USP,MOVE USP TO An privileged instructions
    ( ( ir[15:0] == 16'b0000_0010_01_111_100 ||
          ir[15:0] == 16'b0000_1010_01_111_100 ||
          ir[15:0] == 16'b0000_0000_01_111_100 ||
          ir[15:0] == 16'b0100_1110_0111_0000 ||
          ir[15:0] == 16'b0100_1110_0111_0010 ||
          ir[15:0] == 16'b0100_1110_0111_0011 ||
         (ir[15:6] == 10'b0100_0110_11 && ir[5:3] != 3'b001 && ir[5:0] != 6'b111_101 && ir[5:0] != 6'b111_110 && ir[5:0] != 6'b111_111) ||
          ir[15:3] == 13'b0100_1110_0110_0 ||
          ir[15:3] == 13'b0100_1110_0110_1 ) && supervisor == 1'b0 ) ? { PRIVILEGE_VIOLATION_TRAP, UNUSED_MICROPC } :
    // ILLEGAL, illegal instruction
    ( ir[15:0] == 16'b0100_1010_11_111100 ) ? { ILLEGAL_INSTRUCTION_TRAP, UNUSED_MICROPC } :
    // 1010 illegal instruction
    ( ir[15:12] == 4'b1010 ) ? { ILLEGAL_1010_INSTRUCTION_TRAP, UNUSED_MICROPC } :
    // 1111 illegal instruction
    ( ir[15:12] == 4'b1111 ) ? { ILLEGAL_1111_INSTRUCTION_TRAP, UNUSED_MICROPC } :

    // instruction decoding

    // ANDI,EORI,ORI,ADDI,SUBI
    ( ir[15:12] == 4'b0000 && ir[11:9] != 3'b100 && ir[11:9] != 3'b110 && ir[11:9] != 3'b111 && ir[8] == 1'b0 &&
        (ir[7:6] == 2'b00 || ir[7:6] == 2'b01 || ir[7:6] == 2'b10) && ir[5:3] != 3'b001 &&
        (ir[5:3] != 3'b111 || (ir[5:0] == 6'b111_000 || ir[5:0] == 6'b111_001)) &&
        ir[15:0] != 16'b0000_000_0_00_111100 && ir[15:0] != 16'b0000_000_0_01_111100 &&
        ir[15:0] != 16'b0000_001_0_00_111100 && ir[15:0] != 16'b0000_001_0_01_111100 &&
        ir[15:0] != 16'b0000_101_0_00_111100 && ir[15:0] != 16'b0000_101_0_01_111100 ) ? { NO_TRAP, `MICROPC_ANDI_EORI_ORI_ADDI_SUBI } :
    // ORI to CCR,ORI to SR,ANDI to CCR,ANDI to SR,EORI to CCR,EORI to SR
    ( ir[15:0] == 16'b0000_000_0_00_111100 || ir[15:0] == 16'b0000_000_0_01_111100 ||
        ir[15:0] == 16'b0000_001_0_00_111100 || ir[15:0] == 16'b0000_001_0_01_111100 ||
        ir[15:0] == 16'b0000_101_0_00_111100 || ir[15:0] == 16'b0000_101_0_01_111100 ) ?
        { NO_TRAP, `MICROPC_ORI_to_CCR_ORI_to_SR_ANDI_to_CCR_ANDI_to_SR_EORI_to_CCR_EORI_to_SR } :
    // BTST register
    ( ir[15:12] == 4'b0000 && ir[8:6] == 3'b100 && ir[5:3] != 3'b001 &&
        (ir[5:3] != 3'b111 ||
            (ir[5:0] == 6'b111_000 || ir[5:0] == 6'b111_001 || ir[5:0] == 6'b111_010 || ir[5:0] == 6'b111_011 || ir[5:0] == 6'b111_100))
    ) ? { NO_TRAP, `MICROPC_BTST_register } :
    // MOVEP memory to register
    ( ir[15:12] == 4'b0000 && ir[8] == 1'b1 && ir[5:3] == 3'b001 && ( ir[7:6] == 2'b00 || ir[7:6] == 2'b01 ) ) ?
        { NO_TRAP, `MICROPC_MOVEP_memory_to_register } :
    // MOVEP register to memory
    ( ir[15:12] == 4'b0000 && ir[8] == 1'b1 && ir[5:3] == 3'b001 && ( ir[7:6] == 2'b10 || ir[7:6] == 2'b11 ) ) ?
        { NO_TRAP, `MICROPC_MOVEP_register_to_memory } :
    // BCHG,BCLR,BSET register
    ( ir[15:12] == 4'b0000 && ir[8] == 1'b1 && ir[5:3] != 3'b001 && ir[8:6] != 3'b100 &&
        (ir[5:3] != 3'b111 || (ir[5:0] == 6'b111_000 || ir[5:0] == 6'b111_001))
    ) ?  { NO_TRAP, `MICROPC_BCHG_BCLR_BSET_register } :
    // BTST immediate
    ( ir[15:12] == 4'b0000 && ir[11:8] == 4'b1000 && ir[7:6] == 2'b00 && ir[5:3] != 3'b001 &&
        (ir[5:3] != 3'b111 ||
            (ir[5:0] == 6'b111_000 || ir[5:0] == 6'b111_001 || ir[5:0] == 6'b111_010 || ir[5:0] == 6'b111_011))
    ) ? { NO_TRAP, `MICROPC_BTST_immediate } :
    // BCHG,BCLR,BSET immediate
    ( ir[15:12] == 4'b0000 && ir[11:8] == 4'b1000 && ir[7:6] != 2'b00 && ir[5:3] != 3'b001 &&
        (ir[5:3] != 3'b111 || (ir[5:0] == 6'b111_000 || ir[5:0] == 6'b111_001))
    ) ? { NO_TRAP, `MICROPC_BCHG_BCLR_BSET_immediate } :
    // CMPI
    ( ir[15:12] == 4'b0000 && ir[8] == 1'b0 && ir[11:9] == 3'b110 && ir[7:6] != 2'b11 && ir[5:3] != 3'b001 &&
        (ir[5:3] != 3'b111 || (ir[5:0] == 6'b111_000 || ir[5:0] == 6'b111_001))
    ) ? { NO_TRAP, `MICROPC_CMPI } :
    // MOVE
    ( ir[15:14] == 2'b00 && ir[13:12] != 2'b00 && ir[8:6] != 3'b001 &&
        (ir[8:6] != 3'b111 || (ir[11:6] == 6'b000_111 || ir[11:6] == 6'b001_111)) &&
        (ir[13:12] != 2'b01 || ir[5:3] != 3'b001) &&
        (ir[5:3] != 3'b111 ||
            (ir[5:0] == 6'b111_000 || ir[5:0] == 6'b111_001 || ir[5:0] == 6'b111_010 || ir[5:0] == 6'b111_011 || ir[5:0] == 6'b111_100))
    ) ? { NO_TRAP, `MICROPC_MOVE } :
    // MOVEA
    ( ir[15:14] == 2'b00 && (ir[13:12] == 2'b11 || ir[13:12] == 2'b10) && ir[8:6] == 3'b001 &&
        (ir[5:3] != 3'b111 ||
            (ir[5:0] == 6'b111_000 || ir[5:0] == 6'b111_001 || ir[5:0] == 6'b111_010 || ir[5:0] == 6'b111_011 || ir[5:0] == 6'b111_100))
    ) ? { NO_TRAP, `MICROPC_MOVEA } :
    // NEGX,CLR,NEG,NOT,NBCD
    (    ir[15:12] == 4'b0100 && ir[5:3] != 3'b001 && (ir[5:3] != 3'b111 || ir[5:0] == 6'b111_000 || ir[5:0] == 6'b111_001) &&
            (    (ir[11:8] == 4'b0000 && ir[7:6] != 2'b11) || (ir[11:8] == 4'b0010 && ir[7:6] != 2'b11) || 
                (ir[11:8] == 4'b0100 && ir[7:6] != 2'b11) || (ir[11:8] == 4'b0110 && ir[7:6] != 2'b11) ||
                (ir[11:6] == 6'b1000_00)
            )
    ) ? { NO_TRAP, `MICROPC_NEGX_CLR_NEG_NOT_NBCD } :
    // MOVE FROM SR
    ( ir[15:6] == 10'b0100_0000_11 && ir[5:3] != 3'b001 && (ir[5:3] != 3'b111 || ir[5:0] == 6'b111_000 || ir[5:0] == 6'b111_001)
    ) ? { NO_TRAP, `MICROPC_MOVE_FROM_SR } :
    // CHK
    ( ir[15:12] == 4'b0100 && ir[8:6] == 3'b110 && ir[5:3] != 3'b001 &&
        (ir[5:3] != 3'b111 ||
            (ir[5:0] == 6'b111_000 || ir[5:0] == 6'b111_001 || ir[5:0] == 6'b111_010 || ir[5:0] == 6'b111_011 || ir[5:0] == 6'b111_100))
    ) ? { NO_TRAP, `MICROPC_CHK } :
    // LEA
    ( ir[15:12] == 4'b0100 && ir[8:6] == 3'b111  && (ir[5:3] == 3'b010 || ir[5:3] == 3'b101 || ir[5:3] == 3'b110 || ir[5:3] == 3'b111) &&
        (ir[5:3] != 3'b111 ||
            (ir[5:0] == 6'b111_000 || ir[5:0] == 6'b111_001 || ir[5:0] == 6'b111_010 || ir[5:0] == 6'b111_011))
    ) ? { NO_TRAP, `MICROPC_LEA } :
    // MOVE TO CCR, MOVE TO SR
    ( (ir[15:6] == 10'b0100_0100_11 || ir[15:6] == 10'b0100_0110_11) && ir[5:3] != 3'b001 &&
        (ir[5:3] != 3'b111 ||
            (ir[5:0] == 6'b111_000 || ir[5:0] == 6'b111_001 || ir[5:0] == 6'b111_010 || ir[5:0] == 6'b111_011 || ir[5:0] == 6'b111_100))
    ) ? { NO_TRAP, `MICROPC_MOVE_TO_CCR_MOVE_TO_SR } :
    // SWAP,EXT
    ( ir[15:12] == 4'b0100 && (ir[11:3] == 9'b1000_01_000 || (ir[11:7] == 5'b1000_1 && ir[5:3] == 3'b000) ) ) ? { NO_TRAP, `MICROPC_SWAP_EXT } :
    // PEA
    ( ir[15:6] == 10'b0100_1000_01 && ir[5:3] != 3'b000 && (ir[5:3] == 3'b010 || ir[5:3] == 3'b101 || ir[5:3] == 3'b110 || ir[5:3] == 3'b111) &&
        (ir[5:3] != 3'b111 ||
            (ir[5:0] == 6'b111_000 || ir[5:0] == 6'b111_001 || ir[5:0] == 6'b111_010 || ir[5:0] == 6'b111_011))
    ) ? { NO_TRAP, `MICROPC_PEA } :
    // MOVEM register to memory, predecrement
    ( ir[15:7] == 9'b0100_1000_1 && ir[5:3] == 3'b100 ) ? { NO_TRAP, `MICROPC_MOVEM_register_to_memory_predecrement } :
    // MOVEM register to memory, control
    ( ir[15:7] == 9'b0100_1000_1 && (ir[5:3] == 3'b010 || ir[5:3] == 3'b101 || ir[5:3] == 3'b110 || ir[5:3] == 3'b111) &&
        (ir[5:3] != 3'b111 || ir[5:0] == 6'b111_000 || ir[5:0] == 6'b111_001)
    ) ? { NO_TRAP, `MICROPC_MOVEM_register_to_memory_control } :
    // TST
    ( ir[15:8] == 8'b0100_1010 && ir[7:6] != 2'b11 && ir[5:3] != 3'b001 &&
        (ir[5:3] != 3'b111 || (ir[5:0] == 6'b111_000 || ir[5:0] == 6'b111_001))
    ) ? { NO_TRAP, `MICROPC_TST } :
    // TAS
    ( ir[15:6] == 10'b0100_1010_11 && ir[5:3] != 3'b001 &&
        (ir[5:3] != 3'b111 || (ir[5:0] == 6'b111_000 || ir[5:0] == 6'b111_001))
    ) ? { NO_TRAP, `MICROPC_TAS } :
    // MOVEM memory to register
    ( ir[15:7] == 9'b0100_1100_1 && (ir[5:3] == 3'b010 || ir[5:3] == 3'b011 || ir[5:3] == 3'b101 || ir[5:3] == 3'b110 || ir[5:3] == 3'b111) &&
        (ir[5:3] != 3'b111 ||
            (ir[5:0] == 6'b111_000 || ir[5:0] == 6'b111_001 || ir[5:0] == 6'b111_010 || ir[5:0] == 6'b111_011))
    ) ? { NO_TRAP, `MICROPC_MOVEM_memory_to_register } :
    // TRAP
    ( ir[15:4] == 12'b0100_1110_0100 ) ? { NO_TRAP, `MICROPC_TRAP } :
    // LINK
    ( ir[15:3] == 13'b0100_1110_0101_0 ) ? { NO_TRAP, `MICROPC_LINK } :
    // UNLK
    ( ir[15:3] == 13'b0100_1110_0101_1 ) ? { NO_TRAP, `MICROPC_ULNK } :
    // MOVE USP to USP
    ( ir[15:3] == 13'b0100_1110_0110_0 ) ? { NO_TRAP, `MICROPC_MOVE_USP_to_USP } :
    // MOVE USP to An
    ( ir[15:3] == 13'b0100_1110_0110_1 ) ? { NO_TRAP, `MICROPC_MOVE_USP_to_An } :
    // RESET
    ( ir[15:0] == 16'b0100_1110_0111_0000 ) ? { NO_TRAP, `MICROPC_RESET } :
    // NOP
    ( ir[15:0] == 16'b0100_1110_0111_0001 ) ? { NO_TRAP, `MICROPC_NOP } :
    // STOP
    ( ir[15:0] == 16'b0100_1110_0111_0010 ) ? { NO_TRAP, `MICROPC_STOP } :
    // RTE,RTR
    ( ir[15:0] == 16'b0100_1110_0111_0011 || ir[15:0] == 16'b0100_1110_0111_0111 ) ? { NO_TRAP, `MICROPC_RTE_RTR } :
    // RTS
    ( ir[15:0] == 16'b0100_1110_0111_0101 ) ? { NO_TRAP, `MICROPC_RTS } :
    // TRAPV
    ( ir[15:0] == 16'b0100_1110_0111_0110 ) ? { NO_TRAP, `MICROPC_TRAPV } :
    // JSR
    ( ir[15:6] == 10'b0100_1110_10 && (ir[5:3] == 3'b010 || ir[5:3] == 3'b101 || ir[5:3] == 3'b110 || ir[5:3] == 3'b111) &&
        (ir[5:3] != 3'b111 ||
            (ir[5:0] == 6'b111_000 || ir[5:0] == 6'b111_001 || ir[5:0] == 6'b111_010 || ir[5:0] == 6'b111_011))
    ) ? { NO_TRAP, `MICROPC_JSR } :
    // JMP
    ( ir[15:6] == 10'b0100_1110_11 && (ir[5:3] == 3'b010 || ir[5:3] == 3'b101 || ir[5:3] == 3'b110 || ir[5:3] == 3'b111) &&
        (ir[5:3] != 3'b111 ||
            (ir[5:0] == 6'b111_000 || ir[5:0] == 6'b111_001 || ir[5:0] == 6'b111_010 || ir[5:0] == 6'b111_011))
    ) ? { NO_TRAP, `MICROPC_JMP } :
    // ADDQ,SUBQ not An
    ( ir[15:12] == 4'b0101 && ir[7:6] != 2'b11 && ir[5:3] != 3'b001 &&
        (ir[5:3] != 3'b111 || (ir[5:0] == 6'b111_000 || ir[5:0] == 6'b111_001))
    ) ? { NO_TRAP, `MICROPC_ADDQ_SUBQ_not_An } :
    // ADDQ,SUBQ An
    ( ir[15:12] == 4'b0101 && ir[7:6] != 2'b11 && ir[7:6] != 2'b00 && ir[5:3] == 3'b001 ) ? { NO_TRAP, `MICROPC_ADDQ_SUBQ_An } :
    // Scc
    ( ir[15:12] == 4'b0101 && ir[7:6] == 2'b11 && ir[5:3] != 3'b001 &&
        (ir[5:3] != 3'b111 || (ir[5:0] == 6'b111_000 || ir[5:0] == 6'b111_001))
    ) ? { NO_TRAP, `MICROPC_Scc } :
    // DBcc
    ( ir[15:12] == 4'b0101 && ir[7:6] == 2'b11 && ir[5:3] == 3'b001 ) ? { NO_TRAP, `MICROPC_DBcc } :
    // BSR
    ( ir[15:12] == 4'b0110 && ir[11:8] == 4'b0001 ) ? { NO_TRAP, `MICROPC_BSR } :
    // Bcc,BRA
    ( ir[15:12] == 4'b0110 && ir[11:8] != 4'b0001 ) ? { NO_TRAP, `MICROPC_Bcc_BRA } :
    // MOVEQ
    ( ir[15:12] == 4'b0111 && ir[8] == 1'b0 ) ? { NO_TRAP, `MICROPC_MOVEQ } :
    // CMP
    ( (ir[15:12] == 4'b1011) && (ir[8:6] == 3'b000 || ir[8:6] == 3'b001 || ir[8:6] == 3'b010) &&
        (ir[8:6] != 3'b000 || ir[5:3] != 3'b001) &&
        (ir[5:3] != 3'b111 ||
            (ir[5:0] == 6'b111_000 || ir[5:0] == 6'b111_001 || ir[5:0] == 6'b111_010 || ir[5:0] == 6'b111_011 || ir[5:0] == 6'b111_100))
    ) ? { NO_TRAP, `MICROPC_CMP } :
    // CMPA
    ( (ir[15:12] == 4'b1011) && (ir[8:6] == 3'b011 || ir[8:6] == 3'b111) &&
        (ir[5:3] != 3'b111 ||
            (ir[5:0] == 6'b111_000 || ir[5:0] == 6'b111_001 || ir[5:0] == 6'b111_010 || ir[5:0] == 6'b111_011 || ir[5:0] == 6'b111_100))
    ) ? { NO_TRAP, `MICROPC_CMPA } :
    // CMPM
    ( ir[15:12] == 4'b1011 && (ir[8:6] == 3'b100 || ir[8:6] == 3'b101 || ir[8:6] == 3'b110) && ir[5:3] == 3'b001) ? { NO_TRAP, `MICROPC_CMPM } :
    // EOR
    ( ir[15:12] == 4'b1011 && (ir[8:6] == 3'b100 || ir[8:6] == 3'b101 || ir[8:6] == 3'b110) && ir[5:3] != 3'b001 &&
        (ir[5:3] != 3'b111 || (ir[5:0] == 6'b111_000 || ir[5:0] == 6'b111_001))
    ) ? { NO_TRAP, `MICROPC_EOR } :
    // ADD to mem,SUB to mem,AND to mem,OR to mem
    (     (ir[15:12] == 4'b1101 || ir[15:12] == 4'b1001 || ir[15:12] == 4'b1100 || ir[15:12] == 4'b1000) &&
        (ir[8:4] == 5'b10001 || ir[8:4] == 5'b10010 || ir[8:4] == 5'b10011 ||
         ir[8:4] == 5'b10101 || ir[8:4] == 5'b10110 || ir[8:4] == 5'b10111 ||
         ir[8:4] == 5'b11001 || ir[8:4] == 5'b11010 || ir[8:4] == 5'b11011) &&
        (ir[5:3] != 3'b111 || (ir[5:0] == 6'b111_000 || ir[5:0] == 6'b111_001))
    ) ? { NO_TRAP, `MICROPC_ADD_to_mem_SUB_to_mem_AND_to_mem_OR_to_mem } :
    // ADD to Dn,SUB to Dn,AND to Dn,OR to Dn
    (     (ir[15:12] == 4'b1101 || ir[15:12] == 4'b1001 || ir[15:12] == 4'b1100 || ir[15:12] == 4'b1000) &&
        (ir[8:6] == 3'b000 || ir[8:6] == 3'b001 || ir[8:6] == 3'b010) &&
        (ir[12] != 1'b1 || ir[8:6] != 3'b000 || ir[5:3] != 3'b001) && (ir[12] == 1'b1 || ir[5:3] != 3'b001) &&
        (ir[5:3] != 3'b111 ||
            (ir[5:0] == 6'b111_000 || ir[5:0] == 6'b111_001 || ir[5:0] == 6'b111_010 || ir[5:0] == 6'b111_011 || ir[5:0] == 6'b111_100))
    ) ? { NO_TRAP, `MICROPC_ADD_to_Dn_SUB_to_Dn_AND_to_Dn_OR_to_Dn } :
    // ADDA,SUBA
    ( (ir[15:12] == 4'b1101 || ir[15:12] == 4'b1001) && (ir[8:6] == 3'b011 || ir[8:6] == 3'b111) &&
        (ir[5:3] != 3'b111 ||
            (ir[5:0] == 6'b111_000 || ir[5:0] == 6'b111_001 || ir[5:0] == 6'b111_010 || ir[5:0] == 6'b111_011 || ir[5:0] == 6'b111_100))
    ) ? { NO_TRAP, `MICROPC_ADDA_SUBA } :
    // ABCD,SBCD,ADDX,SUBX
    (     ((ir[15:12] == 4'b1100 || ir[15:12] == 4'b1000) && ir[8:4] == 5'b10000) ||
        ((ir[15:12] == 4'b1101 || ir[15:12] == 4'b1001) && (ir[8:4] == 5'b10000 || ir[8:4] == 5'b10100 || ir[8:4] == 5'b11000) ) ) ?
        { NO_TRAP, `MICROPC_ABCD_SBCD_ADDX_SUBX } :
    // EXG
    ( ir[15:12] == 4'b1100 && (ir[8:3] == 6'b101000 || ir[8:3] == 6'b101001 || ir[8:3] == 6'b110001) ) ? { NO_TRAP, `MICROPC_EXG } :
    // MULS,MULU,DIVS,DIVU
    ( (ir[15:12] == 4'b1100 || ir[15:12] == 4'b1000) && ir[7:6] == 2'b11 && ir[5:3] != 3'b001 &&
        (ir[5:3] != 3'b111 ||
            (ir[5:0] == 6'b111_000 || ir[5:0] == 6'b111_001 || ir[5:0] == 6'b111_010 || ir[5:0] == 6'b111_011 || ir[5:0] == 6'b111_100))
    ) ? { NO_TRAP, `MICROPC_MULS_MULU_DIVS_DIVU } :
    // ASL,LSL,ROL,ROXL,ASR,LSR,ROR,ROXR all memory
    ( ir[15:12] == 4'b1110 && ir[11] == 1'b0 && ir[7:6] == 2'b11 && ir[5:3] != 3'b000 && ir[5:3] != 3'b001 &&
        (ir[5:3] != 3'b111 || (ir[5:0] == 6'b111_000 || ir[5:0] == 6'b111_001))
    ) ?  { NO_TRAP, `MICROPC_ASL_LSL_ROL_ROXL_ASR_LSR_ROR_ROXR_all_memory } :
    // ASL,LSL,ROL,ROXL,ASR,LSR,ROR,ROXR all immediate/register
    ( ir[15:12] == 4'b1110 && (ir[7:6] == 2'b00 || ir[7:6] == 2'b01 || ir[7:6] == 2'b10) ) ?
        { NO_TRAP, `MICROPC_ASL_LSL_ROL_ROXL_ASR_LSR_ROR_ROXR_all_immediate_register } :

    // else

    { ILLEGAL_INSTRUCTION_TRAP, UNUSED_MICROPC }
;

// load ea
assign load_ea =
    (
        (ea_type == `EA_TYPE_ALL && (ea_mod == 3'b000 || ea_mod == 3'b001 || (ea_mod == 3'b111 && ea_reg == 3'b100))) ||
        (ea_type == `EA_TYPE_DATAALTER && ea_mod == 3'b000) ||
        (ea_type == `EA_TYPE_DN_AN && (ea_mod == 3'b000 || ea_mod == 3'b001)) ||
        (ea_type == `EA_TYPE_DATA && (ea_mod == 3'b000 || (ea_mod == 3'b111 && ea_reg == 3'b100)))
    ) ? 9'd0 // no ea needed
    :
    (ea_mod == 3'b010 && (
        ea_type == `EA_TYPE_ALL || ea_type == `EA_TYPE_CONTROL_POSTINC || ea_type == `EA_TYPE_CONTROLALTER_PREDEC ||
        ea_type == `EA_TYPE_CONTROL || ea_type == `EA_TYPE_DATAALTER || ea_type == `EA_TYPE_MEMORYALTER ||
        ea_type == `EA_TYPE_DATA
    )) ? `MICROPC_LOAD_EA_An // (An)
    :
    (ea_mod == 3'b011 && (
        ea_type == `EA_TYPE_ALL || ea_type == `EA_TYPE_CONTROL_POSTINC || ea_type == `EA_TYPE_MEMORYALTER ||
        ea_type == `EA_TYPE_DATAALTER || ea_type == `EA_TYPE_DATA
    )) ? `MICROPC_LOAD_EA_An_plus // (An)+
    :
    (ea_mod == 3'b100 && (
        ea_type == `EA_TYPE_ALL || ea_type == `EA_TYPE_CONTROLALTER_PREDEC || ea_type == `EA_TYPE_DATAALTER ||
        ea_type == `EA_TYPE_MEMORYALTER ||    ea_type == `EA_TYPE_DATA
    )) ? `MICROPC_LOAD_EA_minus_An // -(An)
    :
    (ea_mod == 3'b101 && (
        ea_type == `EA_TYPE_ALL || ea_type == `EA_TYPE_CONTROL_POSTINC || ea_type == `EA_TYPE_CONTROLALTER_PREDEC ||
        ea_type == `EA_TYPE_CONTROL ||    ea_type == `EA_TYPE_DATAALTER || ea_type == `EA_TYPE_MEMORYALTER || ea_type == `EA_TYPE_DATA
    )) ? `MICROPC_LOAD_EA_d16_An // (d16, An)
    :
    (ea_mod == 3'b110 && (
        ea_type == `EA_TYPE_ALL || ea_type == `EA_TYPE_CONTROL_POSTINC || ea_type == `EA_TYPE_CONTROLALTER_PREDEC ||
        ea_type == `EA_TYPE_CONTROL || ea_type == `EA_TYPE_DATAALTER || ea_type == `EA_TYPE_MEMORYALTER || ea_type == `EA_TYPE_DATA
    )) ? `MICROPC_LOAD_EA_d8_An_Xn // (d8, An, Xn)
    :
    (ea_mod == 3'b111 && ea_reg == 3'b000 && (
        ea_type == `EA_TYPE_ALL || ea_type == `EA_TYPE_CONTROL_POSTINC || ea_type == `EA_TYPE_CONTROLALTER_PREDEC ||
        ea_type == `EA_TYPE_CONTROL ||    ea_type == `EA_TYPE_DATAALTER || ea_type == `EA_TYPE_MEMORYALTER || ea_type == `EA_TYPE_DATA
    )) ? `MICROPC_LOAD_EA_xxx_W // (xxx).W
    :
    (ea_mod == 3'b111 && ea_reg == 3'b001 && (
        ea_type == `EA_TYPE_ALL || ea_type == `EA_TYPE_CONTROL_POSTINC || ea_type == `EA_TYPE_CONTROLALTER_PREDEC ||
        ea_type == `EA_TYPE_CONTROL || ea_type == `EA_TYPE_DATAALTER || ea_type == `EA_TYPE_MEMORYALTER || ea_type == `EA_TYPE_DATA
    )) ? `MICROPC_LOAD_EA_xxx_L // (xxx).L
    :
    (ea_mod == 3'b111 && ea_reg == 3'b010 && (
        ea_type == `EA_TYPE_ALL || ea_type == `EA_TYPE_CONTROL_POSTINC || ea_type == `EA_TYPE_CONTROL || ea_type == `EA_TYPE_DATA
    )) ? `MICROPC_LOAD_EA_d16_PC // (d16, PC)
    :
    (ea_mod == 3'b111 && ea_reg == 3'b011 && (
        ea_type == `EA_TYPE_ALL || ea_type == `EA_TYPE_CONTROL_POSTINC || ea_type == `EA_TYPE_CONTROL || ea_type == `EA_TYPE_DATA
    )) ? `MICROPC_LOAD_EA_d8_PC_Xn // (d8, PC, Xn)
    :
    `MICROPC_LOAD_EA_illegal_command // illegal command
;

// perform ea read
assign perform_ea_read =
    ( ea_mod == 3'b000 && (ea_type == `EA_TYPE_ALL || ea_type == `EA_TYPE_DATAALTER || ea_type == `EA_TYPE_DN_AN ||
      ea_type == `EA_TYPE_DATA) ) ?
        `MICROPC_PERFORM_EA_READ_Dn :
    ( ea_mod == 3'b001 && (ea_type == `EA_TYPE_ALL || ea_type == `EA_TYPE_DN_AN) ) ? `MICROPC_PERFORM_EA_READ_An :
    ( ea_mod == 3'b111 && ea_reg == 3'b100 && (ea_type == `EA_TYPE_ALL || ea_type == `EA_TYPE_DATA) ) ?
        `MICROPC_PERFORM_EA_READ_imm :
    `MICROPC_PERFORM_EA_READ_memory
;

// perform ea write
assign perform_ea_write =
    ( ea_mod == 3'b000 && (ea_type == `EA_TYPE_ALL || ea_type == `EA_TYPE_DATAALTER || ea_type == `EA_TYPE_DN_AN ||
      ea_type == `EA_TYPE_DATA) ) ?
        `MICROPC_PERFORM_EA_WRITE_Dn :
    ( ea_mod == 3'b001 && (ea_type == `EA_TYPE_ALL || ea_type == `EA_TYPE_DN_AN) ) ? `MICROPC_PERFORM_EA_WRITE_An :
    `MICROPC_PERFORM_EA_WRITE_memory
;

// save ea
assign save_ea =
    (ea_mod == 3'b011 && (
        ea_type == `EA_TYPE_ALL || ea_type == `EA_TYPE_CONTROL_POSTINC || ea_type == `EA_TYPE_MEMORYALTER ||
        ea_type == `EA_TYPE_DATAALTER || ea_type == `EA_TYPE_DATA
    )) ? `MICROPC_SAVE_EA_An_plus // (An)+
    :
    (ea_mod == 3'b100 && (
        ea_type == `EA_TYPE_ALL || ea_type == `EA_TYPE_CONTROLALTER_PREDEC || ea_type == `EA_TYPE_DATAALTER ||
        ea_type == `EA_TYPE_MEMORYALTER || ea_type == `EA_TYPE_DATA
    )) ? `MICROPC_SAVE_EA_minus_An // -(An)
    :
    9'd0 // no ea needed
;

// ALU decoding optimization
// Thanks to Frederic Requin
// not used: 7, 13, 17
assign decoder_alu[0]  = ((ir[15:12] == 4'b0000 && ir[11:9] == 3'b000) // OR
                       || (ir[15:12] == 4'b1000));
assign decoder_alu[1]  = ((ir[15:12] == 4'b0000 && ir[11:9] == 3'b001) // AND
                       || (ir[15:12] == 4'b1100));
assign decoder_alu[2]  = ((ir[15:12] == 4'b0000 && ir[11:9] == 3'b101) // EOR
                       || (ir[15:12] == 4'b1011 && (ir[8:7] == 2'b10 || ir[8:6] == 3'b110) && ir[5:3] != 3'b001));
assign decoder_alu[3]  = ((ir[15:12] == 4'b0000 && ir[11:9] == 3'b011) // ADD
                       || (ir[15:12] == 4'b1101)
                       || (ir[15:12] == 4'b0101 && ir[8] == 1'b0));
assign decoder_alu[4]  = ((ir[15:12] == 4'b0000 && ir[11:9] == 3'b010) // SUB
                       || (ir[15:12] == 4'b1001)
                       || (ir[15:12] == 4'b0101 && ir[8] == 1'b1));
assign decoder_alu[5]  = ((ir[15:12] == 4'b0000 && ir[11:9] == 3'b110) // CMP
                       || (ir[15:12] == 4'b1011 && (ir[8:7] == 2'b10 || ir[8:6] == 3'b110) && ir[5:3] == 3'b001)
                       || (ir[15:12] == 4'b1011 && (ir[8:7] == 2'b00 || ir[8:6] == 3'b010)));
assign decoder_alu[6]  = ((ir[15:12] == 4'b1101)                       // ADDA,ADDQ
                       || (ir[15:12] == 4'b0101 && ir[8] == 1'b0));
assign decoder_alu[7]  = ((ir[15:12] == 4'b1001)                       // SUBA,CMPA,SUBQ
                       || (ir[15:12] == 4'b1011)
                       || (ir[15:12] == 4'b0101 && ir[8] == 1'b1));
assign decoder_alu[8]  = (((ir[7:6] == 2'b11 && ir[10:9] == 2'b00)     // ASL
                       ||  (ir[7:6] != 2'b11 && ir[4:3] == 2'b00)) && ir[8] == 1'b1);
assign decoder_alu[9]  = (((ir[7:6] == 2'b11 && ir[10:9] == 2'b01)     // LSL
                       ||  (ir[7:6] != 2'b11 && ir[4:3] == 2'b01)) && ir[8] == 1'b1);
assign decoder_alu[10] = (((ir[7:6] == 2'b11 && ir[10:9] == 2'b11)     // ROL
                       ||  (ir[7:6] != 2'b11 && ir[4:3] == 2'b11)) && ir[8] == 1'b1);
assign decoder_alu[11] = (((ir[7:6] == 2'b11 && ir[10:9] == 2'b10)     // ROXL
                       ||  (ir[7:6] != 2'b11 && ir[4:3] == 2'b10)) && ir[8] == 1'b1);
assign decoder_alu[12] = (((ir[7:6] == 2'b11 && ir[10:9] == 2'b00)     // ASR
                       ||  (ir[7:6] != 2'b11 && ir[4:3] == 2'b00)) && ir[8] == 1'b0);
assign decoder_alu[13] = (((ir[7:6] == 2'b11 && ir[10:9] == 2'b01)     // LSR
                       ||  (ir[7:6] != 2'b11 && ir[4:3] == 2'b01)) && ir[8] == 1'b0);
assign decoder_alu[14] = (((ir[7:6] == 2'b11 && ir[10:9] == 2'b11)     // ROR
                       ||  (ir[7:6] != 2'b11 && ir[4:3] == 2'b11)) && ir[8] == 1'b0);
assign decoder_alu[15] = (((ir[7:6] == 2'b11 && ir[10:9] == 2'b10)     // ROXR
                       ||  (ir[7:6] != 2'b11 && ir[4:3] == 2'b10)) && ir[8] == 1'b0);
assign decoder_alu[16] = ((ir[15:8] == 8'b0100_0110)                   // SR operations
                       || (ir[15:0] == 16'b0100_1110_0111_0011)
                       || (ir[15:0] == 16'b0100_1110_0111_0010)
                       || (ir[15:0] == 16'b0000_000_0_01_111100)
                       || (ir[15:0] == 16'b0000_001_0_01_111100)
                       || (ir[15:0] == 16'b0000_101_0_01_111100));
assign decoder_alu[17] = ((ir[15:8] == 8'b0100_0100)                   // CCR operations
                       || (ir[15:0] == 16'b0100_1110_0111_0111)
                       || (ir[15:0] == 16'b0000_000_0_00_111100)
                       || (ir[15:0] == 16'b0000_001_0_00_111100)
                       || (ir[15:0] == 16'b0000_101_0_00_111100));

endmodule


