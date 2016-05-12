/**************************************************************************************
 * Automatically generated by ao68000_tool microcode word bit assignments and addresses
 **************************************************************************************/
// MICROCODE - DO NOT EDIT BELOW
`define MICRO_DATA_ea_reg                                                            micro_data[2:0]
`define MICRO_DATA_ea_mod                                                            micro_data[6:3]
`define MICRO_DATA_ea_type                                                           micro_data[10:7]
`define MICRO_DATA_op1                                                               micro_data[14:11]
`define MICRO_DATA_op2                                                               micro_data[17:15]
`define MICRO_DATA_address                                                           micro_data[21:18]
`define MICRO_DATA_size                                                              micro_data[25:22]
`define MICRO_DATA_movem_modreg                                                      micro_data[28:26]
`define MICRO_DATA_movem_loop                                                        micro_data[30:29]
`define MICRO_DATA_movem_reg                                                         micro_data[32:31]
`define MICRO_DATA_ir                                                                micro_data[34:33]
`define MICRO_DATA_pc                                                                micro_data[37:35]
`define MICRO_DATA_trap                                                              micro_data[41:38]
`define MICRO_DATA_offset                                                            micro_data[43:42]
`define MICRO_DATA_index                                                             micro_data[45:44]
`define MICRO_DATA_stop_flag                                                         micro_data[47:46]
`define MICRO_DATA_trace_flag                                                        micro_data[49:48]
`define MICRO_DATA_group_0_flag                                                      micro_data[51:50]
`define MICRO_DATA_instruction_flag                                                  micro_data[53:52]
`define MICRO_DATA_read_modify_write_flag                                            micro_data[55:54]
`define MICRO_DATA_do_reset_flag                                                     micro_data[57:56]
`define MICRO_DATA_do_interrupt_flag                                                 micro_data[59:58]
`define MICRO_DATA_do_read_flag                                                      micro_data[61:60]
`define MICRO_DATA_do_write_flag                                                     micro_data[63:62]
`define MICRO_DATA_do_blocked_flag                                                   micro_data[65:64]
`define MICRO_DATA_data_write                                                        micro_data[67:66]
`define MICRO_DATA_an_address                                                        micro_data[69:68]
`define MICRO_DATA_an_write_enable                                                   micro_data[70:70]
`define MICRO_DATA_an_input                                                          micro_data[72:71]
`define MICRO_DATA_dn_address                                                        micro_data[73:73]
`define MICRO_DATA_dn_write_enable                                                   micro_data[74:74]
`define MICRO_DATA_alu                                                               micro_data[79:75]
`define MICRO_DATA_branch                                                            micro_data[83:80]
`define MICRO_DATA_procedure                                                         micro_data[87:84]

`define MICROPC_MOVE                                                                 9'd232
`define MICROPC_MOVE_USP_to_An                                                       9'd401
`define MICROPC_TAS                                                                  9'd333
`define MICROPC_BSR                                                                  9'd431
`define MICROPC_ADDRESS_BUS_TRAP                                                     9'd3
`define MICROPC_MOVEP_register_to_memory                                             9'd106
`define MICROPC_NEGX_CLR_NEG_NOT_NBCD                                                9'd338
`define MICROPC_RTS                                                                  9'd472
`define MICROPC_MAIN_LOOP                                                            9'd53
`define MICROPC_ADDA_SUBA                                                            9'd269
`define MICROPC_MOVE_TO_CCR_MOVE_TO_SR                                               9'd392
`define MICROPC_MOVE_FROM_SR                                                         9'd389
`define MICROPC_LOAD_EA_d8_PC_Xn                                                     9'd79
`define MICROPC_TRAP_ENTRY                                                           9'd35
`define MICROPC_PERFORM_EA_READ_memory                                               9'd89
`define MICROPC_RESET                                                                9'd486
`define MICROPC_PERFORM_EA_WRITE_Dn                                                  9'd91
`define MICROPC_ASL_LSL_ROL_ROXL_ASR_LSR_ROR_ROXR_all_memory                         9'd226
`define MICROPC_MOVEA                                                                9'd240
`define MICROPC_TST                                                                  9'd345
`define MICROPC_BTST_register                                                        9'd327
`define MICROPC_LOAD_EA_d8_An_Xn                                                     9'd68
`define MICROPC_MULS_MULU_DIVS_DIVU                                                  9'd291
`define MICROPC_MOVEQ                                                                9'd308
`define MICROPC_CMPA                                                                 9'd276
`define MICROPC_EOR                                                                  9'd246
`define MICROPC_LOAD_EA_xxx_W                                                        9'd72
`define MICROPC_DBcc                                                                 9'd375
`define MICROPC_CMPI                                                                 9'd184
`define MICROPC_LOAD_EA_xxx_L                                                        9'd74
`define MICROPC_CMPM                                                                 9'd206
`define MICROPC_MOVE_USP_to_USP                                                      9'd396
`define MICROPC_ADDQ_SUBQ_not_An                                                     9'd349
`define MICROPC_ULNK                                                                 9'd420
`define MICROPC_EXG                                                                  9'd198
`define MICROPC_ADD_to_mem_SUB_to_mem_AND_to_mem_OR_to_mem                           9'd251
`define MICROPC_Bcc_BRA                                                              9'd363
`define MICROPC_PERFORM_EA_READ_An                                                   9'd86
`define MICROPC_LOAD_EA_d16_PC                                                       9'd76
`define MICROPC_NOP                                                                  9'd480
`define MICROPC_MOVEM_register_to_memory_predecrement                                9'd131
`define MICROPC_RTE_RTR                                                              9'd460
`define MICROPC_TRAP                                                                 9'd481
`define MICROPC_ADDQ_SUBQ_An                                                         9'd352
`define MICROPC_MOVEM_register_to_memory_control                                     9'd147
`define MICROPC_BTST_immediate                                                       9'd316
`define MICROPC_MOVEP_memory_to_register                                             9'd98
`define MICROPC_PERFORM_EA_WRITE_An                                                  9'd92
`define MICROPC_CHK                                                                  9'd282
`define MICROPC_Scc                                                                  9'd356
`define MICROPC_JMP                                                                  9'd443
`define MICROPC_PEA                                                                  9'd168
`define MICROPC_SAVE_EA_minus_An                                                     9'd97
`define MICROPC_ANDI_EORI_ORI_ADDI_SUBI                                              9'd174
`define MICROPC_BCHG_BCLR_BSET_immediate                                             9'd311
`define MICROPC_LOAD_EA_An                                                           9'd62
`define MICROPC_PERFORM_EA_READ_imm                                                  9'd87
`define MICROPC_ADD_to_Dn_SUB_to_Dn_AND_to_Dn_OR_to_Dn                               9'd256
`define MICROPC_LEA                                                                  9'd162
`define MICROPC_TRAPV                                                                9'd483
`define MICROPC_LINK                                                                 9'd404
`define MICROPC_ABCD_SBCD_ADDX_SUBX                                                  9'd189
`define MICROPC_BCHG_BCLR_BSET_register                                              9'd322
`define MICROPC_PERFORM_EA_READ_Dn                                                   9'd85
`define MICROPC_LOAD_EA_illegal_command                                              9'd83
`define MICROPC_ORI_to_CCR_ORI_to_SR_ANDI_to_CCR_ANDI_to_SR_EORI_to_CCR_EORI_to_SR   9'd178
`define MICROPC_CMP                                                                  9'd263
`define MICROPC_SWAP_EXT                                                             9'd341
`define MICROPC_STOP                                                                 9'd489
`define MICROPC_PERFORM_EA_WRITE_memory                                              9'd93
`define MICROPC_JSR                                                                  9'd451
`define MICROPC_LOAD_EA_minus_An                                                     9'd63
`define MICROPC_ASL_LSL_ROL_ROXL_ASR_LSR_ROR_ROXR_all_immediate_register             9'd213
`define MICROPC_SAVE_EA_An_plus                                                      9'd95
`define MICROPC_LOAD_EA_d16_An                                                       9'd65
`define MICROPC_LOAD_EA_An_plus                                                      9'd62
`define MICROPC_MOVEM_memory_to_register                                             9'd116
// MICROCODE - DO NOT EDIT ABOVE

