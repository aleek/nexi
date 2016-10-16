from enum import Enum

#class M68kMicrocodeInstruction:
#        ea_reg = 0
#        ea_mod = 0
#        ea_type = 0
#        op1 = 0
#        op2 = 0


m68k_language_defines = {
'EA_REG' : {
    'IDLE'                   : 0,
    'IR_2_0'                 : 1,
    'IR_11_9'                : 2,
    'MOVEM_REG_2_0'          : 3,
    '3B111'                  : 4,
    '3B000'                  : 5,
},

'EA_MOD' : {
    'IDLE'                   : 0,
    'IR_5_3'                 : 1,
    'MOVEM_MOD_5_3'          : 2,
    'IR_8_6'                 : 3,
    'PREDEC'                 : 4,    # predecrement:    -(An)
    '3b111'                  : 5,    # extended mod
    'DN_PREDEC'              : 6,    # MOD.DN_PREDEC: Dn 3'b000 (ir[3] == 1'b0), -(An) 3'b100 (ir[3] == 1'b1)
    'DN_AN_EXG'              : 7,    # MOD.DN_AN_EXG: Dn 3'b000 (ir[7:3] == 5'b01000 or 5'b10001), An 3'b001 (ir[7:3] == 5'b01001)
    'POSTINC'                : 8,    # MOD.POSTINC: postincrement (An)+ 3'b011
    'AN'                     : 9,    # MOD.AN: An 3'b001, saved result is sign-extended
    'DN'                     : 10,   # MOD.DN: Dn 3'b000
    'INDIRECTOFFSET'         : 11,   # MOD.INDIRECTOFFSET: (d16, An) 3'b101
},

'EA_TYPE' : {
    'IDLE'                   : 0,
    'ALL'                    : 1,    # TYPE.ALL: all
    'CONTROL_POSTINC'        : 2,    # TYPE.CONTROL_POSTINC: control or postincrement
    'CONTROLALTER_PREDEC'    : 3,    # TYPE.CONTROLALTER_PREDEC: control alter or predecrement
    'CONTROL'                : 4,    # TYPE.CONTROL: control
    'DATAALTER'              : 5,    # TYPE.DATAALTER: data alter
    'DN_AN'                  : 6,    # TYPE.DN_AN: Dn, An
    'MEMORYALTER'            : 7,    # TYPE.MEMORYALTER: memory alter
    'DATA'                   : 8,    # TYPE.DATA: data
},

'OP1' : {
    'IDLE'                   : 0,
    'FROM_OP2'               : 1,    # move from operand2
    'FROM_ADDRESS'           : 2,    # move from address
    'FROM_DATA'              : 3,    # move from data, sign extend
    'FROM_IMMEDIATE'         : 4,    # move immediate, sign extend
    'FROM_RESULT'            : 5,    # move from result
    'MOVEQ'                  : 6,    # move moveq: { 24{ir[7]}, ir[7:0] }
    'FROM_PC'                : 7,    # move from PC
    'LOAD_ZEROS'             : 8,    # load zeros:  32'b0
    'LOAD_ONES'              : 9,    # load ones:   32'hFFFFFFFF
    'FROM_SR'                : 10,   # move from SR
    'FROM_USP'               : 11,   # move from USP
    'FROM_AN'                : 12,   # move from An, 32 bits
    'FROM_DN'                : 13,   # move from Dn, sign extend
    'FROM_IR'                : 14,   # move from ir[15:0]
    'FROM_FAULT_ADDRESS'     : 15,   # move from fault_address
},

'OP2' : {
    'IDLE'                   : 0,
    'FROM_OP1'               : 1,    # move from operand1
    'LOAD_1'                 : 2,    # load: 32'b1
    'LOAD_COUNT'             : 3,    # load count
    'ADDQ_SUBQ'              : 4,    # load addq_subq
    'MOVE_OFFSET'            : 5,    # move offset
    'MOVE_ADDRESS_BUS_INFO'  : 6,    # move address_bus_info
    'DECR_BY_1'              : 7,    # decrement by 1
},


'ADDRESS' : {
    'IDLE'                   : 0,
    'INCR_BY_SIZE'           : 1,    # increment by size
    'DECR_BY_SIZE'           : 2,    # decrement by size
    'INCR_BY_2'              : 3,    # increment by 2
    'FROM_AN_OUTPUT'         : 4,    # move from An output
    'FROM_BASE_INDEX_OFFSET' : 5,    # move from base+index+offset
    'FROM_IMM_16'            : 6,    # move from {16{ir1[15]}, ir1[15:0]}
    'FROM_IMM_32'            : 7,    # move from {ir1[15:0], ir2[15:0]}
    'FROM_PC_INDEX_OFFSET'   : 8,    # move from pc+index+offset
    'FROM_TRAP'              : 9,    # move trap {22'b0, trap[7:0], 2'b0}
},

'SIZE' : {
    'IDLE'                   : 0,
    'BYTE'                   : 1,    # load byte: 3'b001
    'WORD'                   : 2,    # load word: 3'b010
    'LONG'                   : 3,    # load long: 3'b100
    '_1'                      : 4,    # SIZE.1: word ( ir[7:6] == 2'b00 ), long ( ir[7:6] == 2'b01 )
    '_1_PLUS'                 : 5,    # SIZE.1+: word ( ir[7:6] == 2'b10 ), long ( ir[7:6] == 2'b11 )
    '_2'                      : 6,    # SIZE.2: word ( ir[6] == 1'b0 ), long ( ir[6] == 1'b1 )
    '_3'                      : 7,    # SIZE.3: byte ( ir[7:6] == 2'b00 ), word ( ir[7:6] == 2'b01 ), long ( ir[7:6] == 2'b10 )
    '_4'                      : 8,    # SIZE.4: byte ( ir[13:12] == 2'b01 ), word( ir[13:12] == 2'b11 ), long ( ir[13:12] == 2'b10 )
    '_5'                      : 9,    # SIZE.5: word ( ir[8] == 1'b0 ), long ( ir[8] == 1'b1 )
    '_6'                      : 10,   # SIZE.6: byte ( ir[5:3] != 3'b000 ), long ( ir[5:3] == 3'b000 )
},

'MOVEM_MODREG' : {
    'IDLE'                   : 0,
    'LOAD_0'                 : 1,    # load 6'b0
    'LOAD_6b001111'          : 2,    # load 6'b001111
    'INCR_BY_1'              : 3,    # increment by 1
    'DECR_BY_1'              : 4,    # decrement by 1
},

'MOVEM_LOOP' : {
    'IDLE'                   : 0,
    'LOAD_0'                 : 1,    # load 4'b0
    'INCR_BY_1'              : 2,    # increment by 1
},
'MOVEM_REG' : {
    'IDLE'                   : 0,
    'FROM_OP1'               : 1,    # load from operand1[15:0]
    'SHIFT_RIGHT'            : 2,    # shift right
},

'IR' : {
    'IDLE'                   : 0,
    'LOAD_WHEN_PREFETCH_VALID' : 1,    # load from prefetch_ir[79:64]
},

'PC' : {
    'IDLE'                   : 0,
    'FROM_RESULT'            : 1,    # move from result
    'INCR_BY_2'              : 2,    # increment by 2
    'INCR_BY_4'              : 3,    # increment by 4
    'INCR_BY_SIZE'           : 4,    # increment by size: 2 (size == 3'b001 || size == 3'b010), 4 (size == 3'b100)
    'FROM_PREFETCH_IR'       : 5,    # move from prefetch_ir
    'INCR_BY_2_IN_MAIN_LOOP' : 6,    # increment by 2, in main loop, when valid prefetch and valid instruction
},

'TRAP' : {
    'IDLE'                   : 0,
    'ILLEGAL_INSTR'          : 1,    # move illegal_instr:  8'd4
    'DIV_BY_ZERO'            : 2,    # move divide_by_zero: 8'd5
    'CHK'                    : 3,    # move chk:        '    8''d6
    'TRAPV'                  : 4,    # move trapv:      '    8''d7
    'PRIVIL_VIOLAT'          : 5,    # move priv_viol:  '    8''d8
    'TRACE'                  : 6,    # move trace:      '    8''d9
    'TRAP'                   : 7,    # move trap:           { 3'b0, 1'b1, ir[3:0] }
    'FROM_DECODER'           : 8,    # move from decoder_trap
    'FROM_INTERRUPT'         : 9,    # move from interrupt_trap
},

'OFFSET' : {
    'IDLE'                   : 0,
    'IMM_8'                  : 1,    # { 24{ir1[7]}, ir1[7:0] }
    'IMM_16'                 : 2,    # { 16{ir1[15]}, ir1[15:0] }
},

'INDEX' : {
    'IDLE'                   : 0,
    '_0'                      : 1,    # 32'b0
    'LOAD_EXTENDED'          : 2,    # load from extended instruction word
},

'STOP_FLAG' : {
    'IDLE'                   : 0,
    'SET'                    : 1,    # set, continue when: trace,interrupt or reset
    'CLEAR'                  : 2,    # clear
},

'TRACE_FLAG' : {
    'IDLE'                   : 0,
    'COPY_WHEN_NO_STOP'      : 1,    # remember trace bit, move from sr[15]
},

'GROUP0_FLAG' : {
    'IDLE'                   : 0,
    'SET'                    : 1,    # set, processing group zero exception
    'CLEAR_WHEN_VALID_PREFETCH' : 2,    # clear
},

'INSTRUCTION_FLAG' : {
    'IDLE'                   : 0,
    'SET'                    : 1,    # set, processing instruction
    'CLEAR_IN_MAIN_LOOP'     : 2,    # clear, in main loop, when valid prefetch and valid instruction
},

'RMW_FLAG' : {
    'IDLE'                   : 0,
    'SET'                    : 1,    # set, execute a RMW cycle
    'CLEAR'                  : 2,    # clear
},

'DO_RESET_FLAG' : {
    'IDLE'                   : 0,
    'SET'                    : 1,    # set, signal reset
    'CLEAR'                  : 2,    # clear
},


'DO_INTERRUPT_FLAG' : {
    'IDLE'                   : 0,
    'SET_IF_ACTIVE'          : 1,    # set if interrupt active
    'CLEAR'                  : 2,    # clear
},

'DO_READ_FLAG' : {
    'IDLE'                   : 0,
    'SET'                    : 1,    # set, perform read operation
    'CLEAR'                  : 2,    # clear
},

'DO_WRITE_FLAG' : {
    'IDLE'                   : 0,
    'SET'                    : 1,    # set, perform write operation
    'CLEAR'                  : 2,    # clear
},

'DO_BLOCKED_FLAG' : {
    'IDLE'                   : 0,
    'SET'                    : 1,    # set, block processor
},

'DATA_WRITE' : {
    'IDLE'                   : 0,
    'FROM_RESULT'            : 1,    # load data write register from result register
},

'AD_ADDRESS' : {
    'IDLE'                   : 0,    # load from ea_reg, user or supervisor
    'FROM_EXTENDED'          : 1,    # load from extended instruction word: ir1[14:12], user or supervisor
    'USP'                    : 2,    # load USP address
    'SSP'                    : 3,    # load SSP address
},

'AN_WE' : {
    'IDLE'                   : 0,
    'SET'                    : 1,    # set write enable on An register
},

'AN_INPUT' : {
    'IDLE'                   : 0,    # load from result
    'FROM_ADDRESS'           : 1,    # load from address
    'FROM_PREFETCH_IR'       : 2,    # load from prefetch_ir, for reset, for SSP
},

'DN_ADDRESS' : {
    'IDLE'                   : 0,    # load from ea_reg
    'FROM_EXTENDED'          : 1,    # load from extended instruction word: ir1[14:12]
},

'DN_WE' : {
    'IDLE'                   : 0,
    'SET'                    : 1,    # set write enable on Dn register
},

'ALU' : {
    'IDLE'                                   : 0,
    'SR_SET_INTERRUPT'                       : 1,
    'SR_SET_TRAP'                            : 2,
    'MOVEP_M2R_1'                            : 3,
    'MOVEP_M2R_2'                            : 4,
    'MOVEP_M2R_3'                            : 5,
    'MOVEP_M2R_4'                            : 6,
    'MOVEP_R2M_1'                            : 7,
    'MOVEP_R2M_2'                            : 8,
    'MOVEP_R2M_3'                            : 9,
    'MOVEP_R2M_4'                            : 10,
    'SIGN_EXTEND'                            : 11,
    'ARITHMETIC_LOGIC'                       : 12,
    'ABCD_SBCD_ADDX_SUBX_prepare'            : 13,
    'ABCD_SBCD_ADDX_SUBX'                    : 14,
    'ASL_LSL_ROL_ROXL_ASR_LSR_ROR_ROXR_prepare' : 15,
    'ASL_LSL_ROL_ROXL_ASR_LSR_ROR_ROXR'      : 16,
    'MOVE'                                   : 17,
    'ADDA_SUBA_CMPA_ADDQ_SUBQ'               : 18,
    'CHK'                                    : 19,
    'MULS_MULU_DIVS_DIVU'                    : 20,
    'BCHG_BCLR_BSET_BTST'                    : 21,
    'TAS'                                    : 22,
    'NEGX_CLR_NEG_NOT_NBCD_SWAP_EXT'         : 23,
    'SIMPLE_LONG_ADD'                        : 24,
    'SIMPLE_LONG_SUB'                        : 25,
    'MOVE_TO_CCR_SR_RTE_RTR_STOP_LOGIC_TO_CCR_SR' : 26,
    'SIMPLE_MOVE'                            : 27,
    'LINK_MOVE'                              : 28,
},

'BRANCH' : {
    'IDLE'                                : 0,
    'movem_loop'                          : 1,    # BRANCH(movem_loop == 4'b1000)
    'movem_reg'                           : 2,    # BRANCH(movem_reg[0] == 0)
    'operand2'                            : 3,    # BRANCH(operand2[5:0] == 6'b0)
    'alu_signal'                          : 4,    # BRANCH(alu_signal == 1'b0)
    'alu_mult_div_ready'                  : 5,    # BRANCH(alu_mult_div_ready == 1'b1)
    'condition_0'                         : 6,    # BRANCH(condition == 1'b0)
    'condition_1'                         : 7,    # BRANCH(condition == 1'b1)
    'result'                              : 8,    # BRANCH(result[15:0] == 16'hFFFF
    'V'                                   : 9,    # BRANCH(V == 1'b0)
    'movep_16'                            : 10,   # BRANCH(ir[6] == 0)
    'stop_flag_wait_ir_decode'            : 11,   # BRANCH(stop_flag == 1'b1) if no branch: wait for prefetch ir valid and decode instruction
    'ir'                                  : 12,   # BRANCH(ir[7:0] != 8'b0)
    'trace_flag_and_interrupt'            : 13,   # BRANCH(trace_flag == 1'b0 && interrupt_mask != 3'b000) if no branch: jump to main loop
    'group_0_flag'                        : 14,   # BRANCH(group_0_flag == 0)
    'procedure'                           : 15,   # call procedure, return from procedure
},

'PROCEDURE' : {
    'IDLE'                             : 0,
    'call_load_ea'                     : 1,    # load ea
    'call_perform_ea_read'             : 2,    # perform_ea_read
    'call_perform_ea_write'            : 3,    # perform_ea_write
    'call_save_ea'                     : 4,    # save ea
    '_return'                          : 5,    # return from procedure
    'wait_finished'                    : 6,    # wait for finished signal from bus controler
    'wait_prefetch_valid'              : 7,    # wait for prefetch ir valid, 64 bits
    'wait_prefetch_valid_32'           : 8,    # wait for prefetch ir valid, 32 bits
    'jump_to_main_loop'                : 9,    # jump to main loop
    'push_micropc'                     : 10,   # save current micro_pc
    'call_trap'                        : 11,   # call trap service procedure
    'pop_micropc'                      : 12,   # pop most recent micro_pc and forget
    'interrupt_mask'                   : 13,   # if interrupt active continue, else jump to main loop
    'call_read'                        : 14,   # load_ea + perform_ea_read
    'call_write'                       : 15,   # perform_ea_write + save_ea + return
    }
}

