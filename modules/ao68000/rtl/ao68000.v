/* 
 * Copyright 2010, Aleksander Osman, alfik@poczta.fm. All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without modification, are
 * permitted provided that the following conditions are met:
 *
 *  1. Redistributions of source code must retain the above copyright notice, this list of
 *     conditions and the following disclaimer.
 *
 *  2. Redistributions in binary form must reproduce the above copyright notice, this list
 *     of conditions and the following disclaimer in the documentation and/or other materials
 *     provided with the distribution.
 *
 * THIS SOFTWARE IS PROVIDED BY THE AUTHOR ``AS IS'' AND ANY EXPRESS OR IMPLIED
 * WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND
 * FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE AUTHOR OR
 * CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
 * SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON
 * ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING
 * NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF
 * ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */
/******************************************************************************
 * ao68000 top level module
 ******************************************************************************/

/*! \brief ao68000 top level module.
 *
 * This module contains only instantiations of sub-modules and wire declarations.
 */
module ao68000 (
    //****************** WISHBONE
    input           CLK_I,              //% \copydoc CLK_I
    input           reset_n,            //% \copydoc reset_n

    output          CYC_O,              //% \copydoc CYC_O
    output  [31:2]  ADR_O,              //% \copydoc ADR_O
    output  [31:0]  DAT_O,              //% \copydoc DAT_O
    input   [31:0]  DAT_I,              //% \copydoc DAT_I
    output  [3:0]   SEL_O,              //% \copydoc SEL_O
    output          STB_O,              //% \copydoc STB_O
    output          WE_O,               //% \copydoc WE_O

    input           ACK_I,              //% \copydoc ACK_I
    input           ERR_I,              //% \copydoc ERR_I
    input           RTY_I,              //% \copydoc RTY_I

    // TAG_TYPE: TGC_O
    output          SGL_O,              //% \copydoc SGL_O
    output          BLK_O,              //% \copydoc BLK_O
    output          RMW_O,              //% \copydoc RMW_O

    // TAG_TYPE: TGA_O
    output [2:0]    CTI_O,              //% \copydoc CTI_O
    output [1:0]    BTE_O,              //% \copydoc BTE_O

    // TAG_TYPE: TGC_O
    output [2:0]    fc_o,               //% \copydoc fc_o
    
    //****************** OTHER
    /* interrupt acknowlege:
     * ACK_I: interrupt vector on DAT_I[7:0]
     * ERR_I: spurious interrupt
     * RTY_I: autovector
     */
    input [2:0]     ipl_i,              //% \copydoc ipl_i
    output          reset_o,            //% \copydoc reset_o
    output          blocked_o           //% \copydoc blocked_o
);

wire [15:0] sr;
wire [2:0]  size;
wire [31:0] address;
wire        address_type;
wire        read_modify_write_flag;
wire [31:0] data_read;
wire [31:0] data_write;
wire [31:0] pc;
wire        prefetch_ir_valid;
wire [79:0] prefetch_ir;
wire        do_reset;
wire        do_read;
wire        do_write;
wire        do_interrupt;
wire        do_blocked;
wire        jmp_address_trap;
wire        jmp_bus_trap;
wire        finished;
wire [7:0]  interrupt_trap;
wire [2:0]  interrupt_mask;
wire        rw_state;
wire [2:0]  fc_state;
wire [7:0]  decoder_trap;
wire [31:0] usp;
wire [31:0] Dn_output;
wire [31:0] An_output;
wire [31:0] result;
wire [3:0]  An_address;
wire [31:0] An_input;
wire [2:0]  Dn_address;
wire [15:0] ir;
wire [8:0]  decoder_micropc;
wire        alu_signal;
wire        alu_mult_div_ready;
wire [8:0]  load_ea;
wire [8:0]  perform_ea_read;
wire [8:0]  perform_ea_write;
wire [8:0]  save_ea;
wire        trace_flag;
wire        group_0_flag;
wire        stop_flag;
wire [8:0]  micro_pc;
wire [31:0] operand1;
wire [31:0] operand2;
wire [4:0]  movem_loop;
wire [15:0] movem_reg;
wire        condition;
wire [87:0] micro_data;
wire [31:0] fault_address_state;
wire [1:0]  pc_change;
wire        prefetch_ir_valid_32;
wire [3:0]  ea_type;
wire [2:0]  ea_mod;
wire [2:0]  ea_reg;
wire [17:0] decoder_alu;
wire [17:0] decoder_alu_reg;

bus_control bus_control_m(
    .CLK_I                  (CLK_I),
    .reset_n                (reset_n),
    .CYC_O                  (CYC_O),
    .ADR_O                  (ADR_O),
    .DAT_O                  (DAT_O),
    .DAT_I                  (DAT_I),
    .SEL_O                  (SEL_O),
    .STB_O                  (STB_O),
    .WE_O                   (WE_O),
    .ACK_I                  (ACK_I),
    .ERR_I                  (ERR_I),
    .RTY_I                  (RTY_I),
    .SGL_O                  (SGL_O),
    .BLK_O                  (BLK_O),
    .RMW_O                  (RMW_O),
    .CTI_O                  (CTI_O),
    .BTE_O                  (BTE_O),
    .fc_o                   (fc_o),
    .ipl_i                  (ipl_i),
    .reset_o                (reset_o),
    .blocked_o              (blocked_o),

    .supervisor_i           (sr[13]),
    .ipm_i                  (sr[10:8]),
    .size_i                 (size),
    .address_i              (address),
    .address_type_i         (address_type),
    .read_modify_write_i    (read_modify_write_flag),
    .data_write_i           (data_write),
    .data_read_o            (data_read),
    .pc_i                   (pc),
    .pc_change_i            (pc_change),
    .prefetch_ir_o          (prefetch_ir),
    .prefetch_ir_valid_32_o (prefetch_ir_valid_32),
    .prefetch_ir_valid_o    (prefetch_ir_valid),
    .prefetch_ir_valid_80_o (),
    .do_reset_i             (do_reset),
    .do_blocked_i           (do_blocked),
    .do_read_i              (do_read),
    .do_write_i             (do_write),
    .do_interrupt_i         (do_interrupt),
    .jmp_address_trap_o     (jmp_address_trap),
    .jmp_bus_trap_o         (jmp_bus_trap),
    .finished_o             (finished),
    .interrupt_trap_o       (interrupt_trap),
    .interrupt_mask_o       (interrupt_mask),
    .rw_state_o             (rw_state),
    .fc_state_o             (fc_state),
    .fault_address_state_o  (fault_address_state)
);

registers registers_m(
    .clock                          (CLK_I),
    .reset_n                        (reset_n),
    .data_read                      (data_read),
    .prefetch_ir                    (prefetch_ir),
    .prefetch_ir_valid              (prefetch_ir_valid),
    .result                         (result),
    .sr                             (sr),
    .rw_state                       (rw_state),
    .fc_state                       (fc_state),
    .fault_address_state            (fault_address_state),
    .interrupt_trap                 (interrupt_trap),
    .interrupt_mask                 (interrupt_mask),
    .decoder_trap                   (decoder_trap),
    .usp                            (usp),
    .Dn_output                      (Dn_output),
    .An_output                      (An_output),

    .pc_change                      (pc_change),

    .ea_reg                         (ea_reg),
    .ea_reg_control                 (`MICRO_DATA_ea_reg),
    .ea_mod                         (ea_mod),
    .ea_mod_control                 (`MICRO_DATA_ea_mod),
    .ea_type                        (ea_type),
    .ea_type_control                (`MICRO_DATA_ea_type),
    .operand1                       (operand1),
    .operand1_control               (`MICRO_DATA_op1),
    .operand2                       (operand2),
    .operand2_control               (`MICRO_DATA_op2),
    .address                        (address),
    .address_type                   (address_type),
    .address_control                (`MICRO_DATA_address),
    .size                           (size),
    .size_control                   (`MICRO_DATA_size),
    .movem_modreg                   (),
    .movem_modreg_control           (`MICRO_DATA_movem_modreg),
    .movem_loop                     (movem_loop),
    .movem_loop_control             (`MICRO_DATA_movem_loop),
    .movem_reg                      (movem_reg),
    .movem_reg_control              (`MICRO_DATA_movem_reg),
    .ir                             (ir),
    .ir_control                     (`MICRO_DATA_ir),
    .pc                             (pc),
    .pc_control                     (`MICRO_DATA_pc),
    .trap                           (),
    .trap_control                   (`MICRO_DATA_trap),
    .offset                         (),
    .offset_control                 (`MICRO_DATA_offset),
    .index                          (),
    .index_control                  (`MICRO_DATA_index),
    .stop_flag                      (stop_flag),
    .stop_flag_control              (`MICRO_DATA_stop_flag),
    .trace_flag                     (trace_flag),
    .trace_flag_control             (`MICRO_DATA_trace_flag),
    .group_0_flag                   (group_0_flag),
    .group_0_flag_control           (`MICRO_DATA_group_0_flag),
    .instruction_flag               (),
    .instruction_flag_control       (`MICRO_DATA_instruction_flag),
    .read_modify_write_flag         (read_modify_write_flag),
    .read_modify_write_flag_control (`MICRO_DATA_read_modify_write_flag),
    .do_reset_flag                  (do_reset),
    .do_reset_flag_control          (`MICRO_DATA_do_reset_flag),
    .do_interrupt_flag              (do_interrupt),
    .do_interrupt_flag_control      (`MICRO_DATA_do_interrupt_flag),
    .do_read_flag                   (do_read),
    .do_read_flag_control           (`MICRO_DATA_do_read_flag),
    .do_write_flag                  (do_write),
    .do_write_flag_control          (`MICRO_DATA_do_write_flag),
    .do_blocked_flag                (do_blocked),
    .do_blocked_flag_control        (`MICRO_DATA_do_blocked_flag),
    .data_write                     (data_write),
    .data_write_control             (`MICRO_DATA_data_write),
    .An_address                     (An_address),
    .An_address_control             (`MICRO_DATA_an_address),
    .An_input                       (An_input),
    .An_input_control               (`MICRO_DATA_an_input),
    .Dn_address                     (Dn_address),
    .Dn_address_control             (`MICRO_DATA_dn_address),
    .decoder_alu                    (decoder_alu),
    .decoder_alu_reg                (decoder_alu_reg)
);

memory_registers memory_registers_m(
    .clock              (CLK_I),
    .reset_n            (reset_n),
    .An_address         (An_address),
    .An_input           (An_input),
    .An_write_enable    (`MICRO_DATA_an_write_enable),
    .An_output          (An_output),
    .usp                (usp),
    .Dn_address         (Dn_address),
    .Dn_input           (result),
    .Dn_write_enable    (`MICRO_DATA_dn_write_enable),
    .Dn_size            (size),
    .Dn_output          (Dn_output),
    .micro_pc           (micro_pc),
    .micro_data         (micro_data)
);

decoder decoder_m(
    .clock              (CLK_I),
    .reset_n            (reset_n),
    .supervisor         (sr[13]),
    .ir                 (prefetch_ir[79:64]),
    .decoder_trap       (decoder_trap),
    .decoder_micropc    (decoder_micropc),
    .decoder_alu        (decoder_alu),
    
    .load_ea            (load_ea),
    .perform_ea_read    (perform_ea_read),
    .perform_ea_write   (perform_ea_write),
    .save_ea            (save_ea),
    
    .ea_type            (ea_type),
    .ea_mod             (ea_mod),
    .ea_reg             (ea_reg)
);

condition condition_m(
    .cond               (ir[11:8]),
    .ccr                (sr[7:0]),
    .condition          (condition)
);

alu alu_m(
    .clock              (CLK_I),
    .reset_n            (reset_n),
    .address            (address),
    .ir                 (ir),
    .size               (size),
    .operand1           (operand1),
    .operand2           (operand2),
    .interrupt_mask     (interrupt_mask),
    .alu_control        (`MICRO_DATA_alu),
    .sr                 (sr),
    .result             (result),
    .alu_signal         (alu_signal),
    .alu_mult_div_ready (alu_mult_div_ready),
    .decoder_alu_reg    (decoder_alu_reg)
);

microcode_branch microcode_branch_m(
    .clock                  (CLK_I),
    .reset_n                (reset_n),
    .movem_loop             (movem_loop),
    .movem_reg              (movem_reg),
    .operand2               (operand2),
    .alu_signal             (alu_signal),
    .alu_mult_div_ready     (alu_mult_div_ready),
    .condition              (condition),
    .result                 (result),
    .overflow               (sr[1]),
    .stop_flag              (stop_flag),
    .ir                     (ir),
    .decoder_trap           (decoder_trap),
    .trace_flag             (trace_flag),
    .group_0_flag           (group_0_flag),
    .interrupt_mask         (interrupt_mask),
    .load_ea                (load_ea),
    .perform_ea_read        (perform_ea_read),
    .perform_ea_write       (perform_ea_write),
    .save_ea                (save_ea),
    .decoder_micropc        (decoder_micropc),
    .prefetch_ir_valid_32   (prefetch_ir_valid_32),
    .prefetch_ir_valid      (prefetch_ir_valid),
    .jmp_address_trap       (jmp_address_trap),
    .jmp_bus_trap           (jmp_bus_trap),
    .finished               (finished),
    .branch_control         (`MICRO_DATA_branch),
    .branch_offset          (`MICRO_DATA_procedure),
    .micro_pc               (micro_pc)
);

endmodule

