/***********************************************************************************************************************
 * Microcode branch
 **********************************************************************************************************************/

/*! \brief Select the next microcode word to execute.
 *
 * The microcode_branch module is responsible for selecting the next microcode word to execute. This decision is based
 * on the value of the current microcode word, the value of the interrupt privilege level, the state of the current
 * bus cycle and other internal signals.
 *
 * The microcode_branch module implements a simple stack for the microcode addresses. This makes it possible to call
 * subroutines inside the microcode.
 */
module microcode_branch(
    input clock,
    input reset_n,

    input [4:0]     movem_loop,
    input [15:0]    movem_reg,
    input [31:0]    operand2,
    input           alu_signal,
    input           alu_mult_div_ready,
    input           condition,
    input [31:0]    result,
    input           overflow,
    input           stop_flag,
    input [15:0]    ir,
    input [7:0]     decoder_trap,
    input           trace_flag,
    input           group_0_flag,
    input [2:0]     interrupt_mask,

    input [8:0]     load_ea,
    input [8:0]     perform_ea_read,
    input [8:0]     perform_ea_write,
    input [8:0]     save_ea,
    input [8:0]     decoder_micropc,

    input           prefetch_ir_valid_32,
    input           prefetch_ir_valid,
    input           jmp_address_trap,
    input           jmp_bus_trap,
    input           finished,

    input [3:0]     branch_control,
    input [3:0]     branch_offset,
    output [8:0]    micro_pc
);

reg [8:0] micro_pc_0 = 9'd0;
reg [8:0] micro_pc_1;
reg [8:0] micro_pc_2;
reg [8:0] micro_pc_3;

assign micro_pc =
    (reset_n == 1'b0) ? 9'd0 :
    (jmp_address_trap == 1'b1 || jmp_bus_trap == 1'b1) ? `MICROPC_ADDRESS_BUS_TRAP :
    (   (branch_control == `BRANCH_movem_loop               && movem_loop == 5'b10000) ||
        (branch_control == `BRANCH_movem_reg                && movem_reg[0] == 0) ||
        (branch_control == `BRANCH_operand2                 && operand2[5:0] == 6'b0) ||
        (branch_control == `BRANCH_alu_signal               && alu_signal == 1'b0) ||
        (branch_control == `BRANCH_alu_mult_div_ready       && alu_mult_div_ready == 1'b1) ||
        (branch_control == `BRANCH_condition_0              && condition == 1'b0) ||
        (branch_control == `BRANCH_condition_1              && condition == 1'b1) ||
        (branch_control == `BRANCH_result                   && result[15:0] == 16'hFFFF) ||
        (branch_control == `BRANCH_V                        && overflow == 1'b0) ||
        (branch_control == `BRANCH_movep_16                 && ir[6] == 1'b0) ||
        (branch_control == `BRANCH_stop_flag_wait_ir_decode && stop_flag == 1'b1) ||
        (branch_control == `BRANCH_ir                       && ir[7:0] != 8'b0) ||
        (branch_control == `BRANCH_trace_flag_and_interrupt && trace_flag == 1'b0 && interrupt_mask != 3'b000) ||
        (branch_control == `BRANCH_group_0_flag             && group_0_flag == 1'b0)
    ) ? micro_pc_0 + { 5'd0, branch_offset } :
    (branch_control == `BRANCH_stop_flag_wait_ir_decode && prefetch_ir_valid == 1'b1 && decoder_trap == 8'd0) ?         decoder_micropc :
    (branch_control == `BRANCH_trace_flag_and_interrupt && trace_flag == 1'b0 && interrupt_mask == 3'b000) ?            `MICROPC_MAIN_LOOP :
    (branch_control == `BRANCH_procedure && branch_offset == `PROCEDURE_jump_to_main_loop) ?                            `MICROPC_MAIN_LOOP :
    (branch_control == `BRANCH_procedure && branch_offset == `PROCEDURE_call_load_ea && load_ea != 9'd0) ?              load_ea :
    (branch_control == `BRANCH_procedure && branch_offset == `PROCEDURE_call_perform_ea_read) ?                         perform_ea_read :
    (branch_control == `BRANCH_procedure && branch_offset == `PROCEDURE_call_perform_ea_write) ?                        perform_ea_write :
    (branch_control == `BRANCH_procedure && branch_offset == `PROCEDURE_call_save_ea && save_ea != 9'd0) ?              save_ea :

    (branch_control == `BRANCH_procedure && branch_offset == `PROCEDURE_call_read && load_ea != 9'd0) ?                 load_ea :
    (branch_control == `BRANCH_procedure && branch_offset == `PROCEDURE_call_read && load_ea == 9'd0) ?                 perform_ea_read :

    (branch_control == `BRANCH_procedure && branch_offset == `PROCEDURE_call_write) ?                                   perform_ea_write :

    (branch_control == `BRANCH_procedure && branch_offset == `PROCEDURE_call_trap) ?                                    `MICROPC_TRAP_ENTRY :
    (branch_control == `BRANCH_procedure && branch_offset == `PROCEDURE_return) ?                                       micro_pc_1 :
    (branch_control == `BRANCH_procedure && branch_offset == `PROCEDURE_interrupt_mask && interrupt_mask == 3'b000) ?   `MICROPC_MAIN_LOOP :
    (    (branch_control == `BRANCH_procedure && branch_offset == `PROCEDURE_wait_finished && finished == 1'b0) ||
        (branch_control == `BRANCH_procedure && branch_offset == `PROCEDURE_wait_prefetch_valid && prefetch_ir_valid == 1'b0) ||
        (branch_control == `BRANCH_procedure && branch_offset == `PROCEDURE_wait_prefetch_valid_32 && prefetch_ir_valid_32 == 1'b0) ||
        (branch_control == `BRANCH_stop_flag_wait_ir_decode && prefetch_ir_valid == 1'b0)
    ) ? micro_pc_0 :
    micro_pc_0 + 9'd1
;

always @(posedge clock or negedge reset_n) begin
    if(reset_n == 1'b0) micro_pc_0 <= 9'd0;
    else                micro_pc_0 <= micro_pc;
end

always @(posedge clock or negedge reset_n) begin
    if(reset_n == 1'b0) begin
        micro_pc_1 <= 9'd0;
        micro_pc_2 <= 9'd0;
        micro_pc_3 <= 9'd0;
    end
    else if(branch_control == `BRANCH_stop_flag_wait_ir_decode && prefetch_ir_valid == 1'b1 && decoder_trap == 8'd0)
    begin
        micro_pc_1 <= micro_pc_0 + { 5'd0, branch_offset };
        micro_pc_2 <= micro_pc_1;
        micro_pc_3 <= micro_pc_2;
    end
    else if(branch_control == `BRANCH_procedure) begin
        if(branch_offset == `PROCEDURE_call_read && load_ea != 9'd0) begin
            micro_pc_1 <= perform_ea_read;
            micro_pc_2 <= micro_pc_0 + 9'd1;
            micro_pc_3 <= micro_pc_1;
        end
        else if(branch_offset == `PROCEDURE_call_read && load_ea == 9'd0) begin
            micro_pc_1 <= micro_pc_0 + 9'd1;
            micro_pc_2 <= micro_pc_1;
            micro_pc_3 <= micro_pc_2;
        end
        else if(branch_offset == `PROCEDURE_call_write && save_ea != 9'd0) begin
            micro_pc_1 <= save_ea;
            micro_pc_2 <= micro_pc_1;
            micro_pc_3 <= micro_pc_2;
        end
        else if((branch_offset == `PROCEDURE_call_load_ea && load_ea != 9'd0) ||
                (branch_offset == `PROCEDURE_call_perform_ea_read) ||
                (branch_offset == `PROCEDURE_call_perform_ea_write) ||
                (branch_offset == `PROCEDURE_call_save_ea && save_ea != 9'd0) ||
                (branch_offset == `PROCEDURE_call_trap) )
        begin
            micro_pc_1 <= micro_pc_0 + 9'd1;
            micro_pc_2 <= micro_pc_1;
            micro_pc_3 <= micro_pc_2;
        end
        else if(branch_offset == `PROCEDURE_return) begin
            micro_pc_1 <= micro_pc_2;
            micro_pc_2 <= micro_pc_3;
            micro_pc_3 <= 9'd0;
        end
        else if(branch_offset == `PROCEDURE_push_micropc) begin
            micro_pc_1 <= micro_pc_0;
            micro_pc_2 <= micro_pc_1;
            micro_pc_3 <= micro_pc_2;
        end
        else if(branch_offset == `PROCEDURE_pop_micropc) begin
            micro_pc_1 <= micro_pc_2;
            micro_pc_2 <= micro_pc_3;
            micro_pc_3 <= 9'd0;
        end
    end
end

endmodule

