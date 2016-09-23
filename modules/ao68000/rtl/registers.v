/***********************************************************************************************************************
 * Registers
 **********************************************************************************************************************/

/* verilator lint_off WIDTH */
/*! \brief Microcode controlled registers.
 *
 * Most of the ao68000 IP core registers are located in this module. At every clock cycle the microcode controls what
 * to save into these registers. Some of the more important registers include:
 *  - operand1, operand2 registers are inputs to the ALU,
 *  - address, size, do_read_flag, do_write_flag, do_interrupt_flag registers tell the bus_control module what kind
 *    of bus cycle to perform,
 *  - pc register stores the current program counter,
 *  - ir register stores the current instruction word,
 *  - ea_mod, ea_type registers store the currently selected addressing mode.
 */
module registers(
    input clock,
    input reset_n,

    input [31:0] data_read,
    input [79:0] prefetch_ir,
    input prefetch_ir_valid,
    input [31:0] result,
    input [15:0] sr,
    input rw_state,
    input [2:0] fc_state,
    input [31:0] fault_address_state,
    input [7:0] interrupt_trap,
    input [2:0] interrupt_mask,
    input [7:0] decoder_trap,

    input [31:0] usp,
    input [31:0] Dn_output,
    input [31:0] An_output,

    output [1:0] pc_change,

    output reg [2:0] ea_reg,
    input [2:0] ea_reg_control,

    output reg [2:0] ea_mod,
    input [3:0] ea_mod_control,

    output reg [3:0] ea_type,
    input [3:0] ea_type_control,

    // for DIVU/DIVS simulation, register must be not zero
    output reg [31:0] operand1 = 32'hFFFFFFFF,
    input [3:0] operand1_control,

    output reg [31:0] operand2 = 32'hFFFFFFFF,
    input [2:0] operand2_control,

    output reg [31:0] address,
    output reg address_type,
    input [3:0] address_control,

    output reg [2:0] size,
    input [3:0] size_control,

    output reg [5:0] movem_modreg,
    input [2:0] movem_modreg_control,

    output reg [4:0] movem_loop,
    input [1:0] movem_loop_control,

    output reg [15:0] movem_reg,
    input [1:0] movem_reg_control,

    output reg [15:0] ir,
    input [1:0] ir_control,

    output reg [31:0] pc,
    input [2:0] pc_control,

    output reg [7:0] trap,
    input [3:0] trap_control,

    output reg [31:0] offset,
    input [1:0] offset_control,

    output reg [31:0] index,
    input [1:0] index_control,


    output reg stop_flag,
    input [1:0] stop_flag_control,

    output reg trace_flag,
    input [1:0] trace_flag_control,

    output reg group_0_flag,
    input [1:0] group_0_flag_control,

    output reg instruction_flag,
    input [1:0] instruction_flag_control,

    output reg read_modify_write_flag,
    input [1:0] read_modify_write_flag_control,

    output reg do_reset_flag,
    input [1:0] do_reset_flag_control,

    output reg do_interrupt_flag,
    input [1:0] do_interrupt_flag_control,

    output reg do_read_flag,
    input [1:0] do_read_flag_control,

    output reg do_write_flag,
    input [1:0] do_write_flag_control,

    output reg do_blocked_flag,
    input [1:0] do_blocked_flag_control,

    output reg [31:0] data_write,
    input [1:0] data_write_control,


    output [3:0] An_address,
    input [1:0] An_address_control,

    output [31:0] An_input,
    input [1:0] An_input_control,

    output [2:0] Dn_address,
    input Dn_address_control,
    
    input [17:0] decoder_alu,
    output reg [17:0] decoder_alu_reg
);

reg [31:0] pc_valid;

wire [31:0] pc_next =
    (pc_control == `PC_FROM_RESULT)?        result :
    (pc_control == `PC_INCR_BY_2)?          pc + 32'd2 :
    (pc_control == `PC_INCR_BY_4)?          pc + 32'd4 :
    (pc_control == `PC_INCR_BY_SIZE)?       (size[2] == 1'b0) ? pc + 32'd2 : pc + 32'd4 :
    (pc_control == `PC_FROM_PREFETCH_IR)?   prefetch_ir[47:16] :
    (pc_control == `PC_INCR_BY_2_IN_MAIN_LOOP && prefetch_ir_valid == 1'b1 && decoder_trap == 8'd0 && stop_flag == 1'b0)?
                                            pc + 32'd2 :
                                            pc;

// pc_change connected
always @(posedge clock or negedge reset_n) begin
    if(reset_n == 1'b0) begin
        pc <= 32'd0;
        pc_valid <= 32'd0;
    end
    else begin
        pc <= pc_next;
        
        if(pc_next[0] == 1'b0)  pc_valid <= pc_next;
    end
end

assign pc_change =
    (    pc_control == `PC_FROM_RESULT || pc_control == `PC_FROM_PREFETCH_IR
    ) ? 2'b11 :
    (    pc_control == `PC_INCR_BY_4 || (pc_control == `PC_INCR_BY_SIZE && size[2] == 1'b1)
    ) ? 2'b10 :
    (    pc_control == `PC_INCR_BY_2 || (pc_control == `PC_INCR_BY_SIZE && size[2] == 1'b0) ||
        (pc_control == `PC_INCR_BY_2_IN_MAIN_LOOP && prefetch_ir_valid == 1'b1 && decoder_trap == 8'd0 && stop_flag == 1'b0)
    ) ? 2'b01 :
    2'b00;

always @(posedge clock or negedge reset_n) begin
    if(reset_n == 1'b0) begin
        size <= 2'b00;
    end
    else if(size_control != `SIZE_IDLE) begin
        // BYTE
        size[0] <= (size_control == `SIZE_BYTE)
                | ((size_control == `SIZE_3) && (ir[7:6] == 2'b00))
                | ((size_control == `SIZE_4) && (ir[13:12] == 2'b01))
                | ((size_control == `SIZE_6) && (ir[5:3] != 3'b000));
        // WORD
        size[1] <= (size_control == `SIZE_WORD)
                | ((size_control == `SIZE_1) && (ir[7:6] == 2'b00))
                | ((size_control == `SIZE_1_PLUS) && (ir[7:6] == 2'b10))
                | ((size_control == `SIZE_2) && (ir[6] == 1'b0))
                | ((size_control == `SIZE_3) && (ir[7:6] == 2'b01))
                | ((size_control == `SIZE_4) && (ir[13:12] == 2'b11))
                | ((size_control == `SIZE_5) && (ir[8] == 1'b0));
        // LONG
        size[2] <= (size_control == `SIZE_LONG)
                | ((size_control == `SIZE_1) && (ir[7:6] != 2'b00))
                | ((size_control == `SIZE_1_PLUS) && (ir[7:6] != 2'b10))
                | ((size_control == `SIZE_2) && (ir[6] == 1'b1))
                | ((size_control == `SIZE_3) && (ir[7] == 1'b1))
                | ((size_control == `SIZE_4) && (ir[12] == 1'b0))
                | ((size_control == `SIZE_5) && (ir[8] == 1'b1))
                | ((size_control == `SIZE_6) && (ir[5:3] == 3'b000));
    end
end

always @(posedge clock or negedge reset_n) begin
    if(reset_n == 1'b0)                                         ea_reg <= 3'b000;
    else if(ea_reg_control == `EA_REG_IR_2_0)                   ea_reg <= ir[2:0];
    else if(ea_reg_control == `EA_REG_IR_11_9)                  ea_reg <= ir[11:9];
    else if(ea_reg_control == `EA_REG_MOVEM_REG_2_0)            ea_reg <= movem_modreg[2:0];
    else if(ea_reg_control == `EA_REG_3b111)                    ea_reg <= 3'b111;
    else if(ea_reg_control == `EA_REG_3b100)                    ea_reg <= 3'b100;
end

always @(posedge clock or negedge reset_n) begin
    if(reset_n == 1'b0)                                         ea_mod <= 3'b000;
    else if(ea_mod_control == `EA_MOD_IR_5_3)                   ea_mod <= ir[5:3];
    else if(ea_mod_control == `EA_MOD_MOVEM_MOD_5_3)            ea_mod <= movem_modreg[5:3];
    else if(ea_mod_control == `EA_MOD_IR_8_6)                   ea_mod <= ir[8:6];
    else if(ea_mod_control == `EA_MOD_PREDEC)                   ea_mod <= 3'b100;
    else if(ea_mod_control == `EA_MOD_3b111)                    ea_mod <= 3'b111;
    else if(ea_mod_control == `EA_MOD_DN_PREDEC)                ea_mod <= (ir[3] == 1'b0) ? /* Dn */ 3'b000 : /* -(An) */ 3'b100;
    else if(ea_mod_control == `EA_MOD_DN_AN_EXG)                ea_mod <= (ir[7:3] == 5'b01000 || ir[7:3] == 5'b10001) ? /* Dn */ 3'b000 : /* An */ 3'b001;
    else if(ea_mod_control == `EA_MOD_POSTINC)                  ea_mod <= 3'b011;
    else if(ea_mod_control == `EA_MOD_AN)                       ea_mod <= 3'b001;
    else if(ea_mod_control == `EA_MOD_DN)                       ea_mod <= 3'b000;
    else if(ea_mod_control == `EA_MOD_INDIRECTOFFSET)           ea_mod <= 3'b101;
end

always @(posedge clock or negedge reset_n) begin
    if(reset_n == 1'b0)                                         ea_type <= `EA_TYPE_IDLE;
    else if(ea_type_control == `EA_TYPE_ALL)                    ea_type <= `EA_TYPE_ALL;
    else if(ea_type_control == `EA_TYPE_CONTROL_POSTINC)        ea_type <= `EA_TYPE_CONTROL_POSTINC;
    else if(ea_type_control == `EA_TYPE_CONTROLALTER_PREDEC)    ea_type <= `EA_TYPE_CONTROLALTER_PREDEC;
    else if(ea_type_control == `EA_TYPE_CONTROL)                ea_type <= `EA_TYPE_CONTROL;
    else if(ea_type_control == `EA_TYPE_DATAALTER)              ea_type <= `EA_TYPE_DATAALTER;
    else if(ea_type_control == `EA_TYPE_DN_AN)                  ea_type <= `EA_TYPE_DN_AN;
    else if(ea_type_control == `EA_TYPE_MEMORYALTER)            ea_type <= `EA_TYPE_MEMORYALTER;
    else if(ea_type_control == `EA_TYPE_DATA)                   ea_type <= `EA_TYPE_DATA;
end

always @(posedge clock or negedge reset_n) begin
    if(reset_n == 1'b0)                                         operand1 <= 32'hFFFFFFFF;
    else if(operand1_control == `OP1_FROM_OP2)                  operand1 <= operand2;
    else if(operand1_control == `OP1_FROM_ADDRESS)              operand1 <= address;
    else if(operand1_control == `OP1_FROM_DATA)                 operand1 <=
                                                                    (size[0] == 1'b1) ? { {24{data_read[7]}}, data_read[7:0] } :
                                                                    (size[1] == 1'b1) ? { {16{data_read[15]}}, data_read[15:0] } :
                                                                    data_read[31:0];
    else if(operand1_control == `OP1_FROM_IMMEDIATE)            operand1 <=
                                                                    (size[0] == 1'b1) ? { {24{prefetch_ir[71]}}, prefetch_ir[71:64] } :
                                                                    (size[1] == 1'b1) ? { {16{prefetch_ir[79]}}, prefetch_ir[79:64] } :
                                                                    prefetch_ir[79:48];
    else if(operand1_control == `OP1_FROM_RESULT)               operand1 <= result;
    else if(operand1_control == `OP1_MOVEQ)                     operand1 <= { {24{ir[7]}}, ir[7:0] };
    else if(operand1_control == `OP1_FROM_PC)                   operand1 <= pc_valid;
    else if(operand1_control == `OP1_LOAD_ZEROS)                operand1 <= 32'b0;
    else if(operand1_control == `OP1_LOAD_ONES)                 operand1 <= 32'hFFFFFFFF;
    else if(operand1_control == `OP1_FROM_SR)                   operand1 <= { 16'b0, sr[15], 1'b0, sr[13], 2'b0, sr[10:8], 3'b0, sr[4:0] };
    else if(operand1_control == `OP1_FROM_USP)                  operand1 <= usp;
    else if(operand1_control == `OP1_FROM_AN)                   operand1 <= 
                                                                    (size[1] == 1'b1) ? { {16{An_output[15]}}, An_output[15:0] } :
                                                                    An_output[31:0];
    else if(operand1_control == `OP1_FROM_DN)                   operand1 <=
                                                                    (size[0] == 1'b1) ? { {24{Dn_output[7]}}, Dn_output[7:0] } :
                                                                    (size[1] == 1'b1) ? { {16{Dn_output[15]}}, Dn_output[15:0] } :
                                                                    Dn_output[31:0];
    else if(operand1_control == `OP1_FROM_IR)                   operand1 <= { 16'b0, ir[15:0] };
    else if(operand1_control == `OP1_FROM_FAULT_ADDRESS)        operand1 <= fault_address_state;
end

always @(posedge clock or negedge reset_n) begin
    if(reset_n == 1'b0)                                         operand2 <= 32'hFFFFFFFF;
    else if(operand2_control == `OP2_FROM_OP1)                  operand2 <= operand1;
    else if(operand2_control == `OP2_LOAD_1)                    operand2 <= 32'd1;
    else if(operand2_control == `OP2_LOAD_COUNT)                operand2 <=
                                                                    (ir[5] == 1'b0) ? ( (ir[11:9] == 3'b000) ? 32'b1000 : { 29'b0, ir[11:9] } ) :
                                                                    { 26'b0, operand2[5:0] };
    else if(operand2_control == `OP2_ADDQ_SUBQ)                 operand2 <= (ir[11:9] == 3'b000) ? 32'b1000 : { 29'b0, ir[11:9] };
    else if(operand2_control == `OP2_MOVE_OFFSET)               operand2 <= (ir[7:0] == 8'b0) ? operand2[31:0] : { {24{ir[7]}}, ir[7:0] };
    else if(operand2_control == `OP2_MOVE_ADDRESS_BUS_INFO)     operand2 <= { 16'b0, 11'b0, rw_state, instruction_flag, fc_state};
    else if(operand2_control == `OP2_DECR_BY_1)                 operand2 <= operand2 - 32'b1;
end

always @(posedge clock or negedge reset_n) begin
    if(reset_n == 1'b0)                                         address <= 32'b0;
    else if(address_control == `ADDRESS_INCR_BY_SIZE)           address <= ((size[0]) && ea_reg == 3'b111) ? address + 32'd2 : address + {29'd0,size};
    else if(address_control == `ADDRESS_DECR_BY_SIZE)           address <= ((size[0]) && ea_reg == 3'b111) ? address - 32'd2 : address - {29'd0,size};
    else if(address_control == `ADDRESS_INCR_BY_2)              address <= address + 32'd2;
    else if(address_control == `ADDRESS_FROM_AN_OUTPUT)         address <= An_output;
    else if(address_control == `ADDRESS_FROM_BASE_INDEX_OFFSET) address <= address + index + offset;
    else if(address_control == `ADDRESS_FROM_IMM_16)            address <= { {16{prefetch_ir[79]}}, prefetch_ir[79:64] };
    else if(address_control == `ADDRESS_FROM_IMM_32)            address <= prefetch_ir[79:48];
    else if(address_control == `ADDRESS_FROM_PC_INDEX_OFFSET)   address <= pc_valid + index + offset;
    else if(address_control == `ADDRESS_FROM_TRAP)              address <= {22'b0, trap[7:0], 2'b0};
end

always @(posedge clock or negedge reset_n) begin
    if(reset_n == 1'b0)                                         address_type <= 1'b0;
    else if(address_control == `ADDRESS_FROM_PC_INDEX_OFFSET)   address_type <= 1'b1;
    else if(address_control != `ADDRESS_IDLE)                   address_type <= 1'b0;
end

always @(posedge clock or negedge reset_n) begin
    if(reset_n == 1'b0)                                         movem_modreg <= 6'b0;
    else if(movem_modreg_control == `MOVEM_MODREG_LOAD_0)       movem_modreg <= 6'b0;
    else if(movem_modreg_control == `MOVEM_MODREG_LOAD_6b001111)movem_modreg <= 6'b001111;
    else if(movem_modreg_control == `MOVEM_MODREG_INCR_BY_1)    movem_modreg <= movem_modreg + 6'd1;
    else if(movem_modreg_control == `MOVEM_MODREG_DECR_BY_1)    movem_modreg <= movem_modreg - 6'd1;
end

always @(posedge clock or negedge reset_n) begin
    if(reset_n == 1'b0)                                         movem_loop <= 5'b0;
    else if(movem_loop_control == `MOVEM_LOOP_LOAD_0)           movem_loop <= 5'b0;
    else if(movem_loop_control == `MOVEM_LOOP_INCR_BY_1)        movem_loop <= movem_loop + 5'd1;
end

always @(posedge clock or negedge reset_n) begin
    if(reset_n == 1'b0)                                         movem_reg <= 16'b0;
    else if(movem_reg_control == `MOVEM_REG_FROM_OP1)           movem_reg <= operand1[15:0];
    else if(movem_reg_control == `MOVEM_REG_SHIFT_RIGHT)        movem_reg <= { 1'b0, movem_reg[15:1] };
end

always @(posedge clock or negedge reset_n) begin
    if(reset_n == 1'b0)                                         ir <= 16'b0;
    else if(ir_control == `IR_LOAD_WHEN_PREFETCH_VALID && prefetch_ir_valid == 1'b1 && stop_flag == 1'b0)
                                                                ir <= prefetch_ir[79:64];
end

always @(posedge clock or negedge reset_n) begin
    if(reset_n == 1'b0)                                         decoder_alu_reg <= 18'b0;
    else if(ir_control == `IR_LOAD_WHEN_PREFETCH_VALID && prefetch_ir_valid == 1'b1 && stop_flag == 1'b0)
                                                                decoder_alu_reg <= decoder_alu;
end

always @(posedge clock or negedge reset_n) begin
    if(reset_n == 1'b0)                                         trap <= 8'd0;
    else if(trap_control == `TRAP_ILLEGAL_INSTR)                trap <= 8'd4;
    else if(trap_control == `TRAP_DIV_BY_ZERO)                  trap <= 8'd5;
    else if(trap_control == `TRAP_CHK)                          trap <= 8'd6;
    else if(trap_control == `TRAP_TRAPV)                        trap <= 8'd7;
    else if(trap_control == `TRAP_PRIVIL_VIOLAT)                trap <= 8'd8;
    else if(trap_control == `TRAP_TRACE)                        trap <= 8'd9;
    else if(trap_control == `TRAP_TRAP)                         trap <= { 4'b0010, ir[3:0] };
    else if(trap_control == `TRAP_FROM_DECODER)                 trap <= decoder_trap;
    else if(trap_control == `TRAP_FROM_INTERRUPT)               trap <= interrupt_trap;
end

always @(posedge clock or negedge reset_n) begin
    if(reset_n == 1'b0)                                         offset <= 32'd0;
    else if(offset_control == `OFFSET_IMM_8)                    offset <= { {24{prefetch_ir[71]}}, prefetch_ir[71:64] };
    else if(offset_control == `OFFSET_IMM_16)                   offset <= { {16{prefetch_ir[79]}}, prefetch_ir[79:64] };
end

always @(posedge clock or negedge reset_n) begin
    if(reset_n == 1'b0)                                         index <= 32'd0;
    else if(index_control == `INDEX_0)                          index <= 32'd0;
    else if(index_control == `INDEX_LOAD_EXTENDED)              index <=
                                                                    (prefetch_ir[79] == 1'b0) ?
                                                                    (     (prefetch_ir[75] == 1'b0)  ?
                                                                            { {16{Dn_output[15]}}, Dn_output[15:0] } : Dn_output[31:0]
                                                                    ) :
                                                                    (     (prefetch_ir[75] == 1'b0) ?
                                                                            { {16{An_output[15]}}, An_output[15:0] } : An_output[31:0]
                                                                    );
end

always @(posedge clock or negedge reset_n) begin
    if(reset_n == 1'b0)                                         stop_flag <= 1'b0;
    else if(stop_flag_control == `STOP_FLAG_SET)                stop_flag <= 1'b1;
    else if(stop_flag_control == `STOP_FLAG_CLEAR)              stop_flag <= 1'b0;
end

always @(posedge clock or negedge reset_n) begin
    if(reset_n == 1'b0)                                         trace_flag <= 1'b0;
    else if(trace_flag_control == `TRACE_FLAG_COPY_WHEN_NO_STOP && prefetch_ir_valid == 1'b1 && decoder_trap == 8'd0 && stop_flag == 1'b0)
                                                                trace_flag <= sr[15];
end

always @(posedge clock or negedge reset_n) begin
    if(reset_n == 1'b0)                                         group_0_flag <= 1'b0;
    else if(group_0_flag_control == `GROUP_0_FLAG_SET)          group_0_flag <= 1'b1;
    else if(group_0_flag_control == `GROUP_0_FLAG_CLEAR_WHEN_VALID_PREFETCH && prefetch_ir_valid == 1'b1 && stop_flag == 1'b0)
                                                                group_0_flag <= 1'b0;
end

always @(posedge clock or negedge reset_n) begin
    if(reset_n == 1'b0)                                         instruction_flag <= 1'b0;
    else if(instruction_flag_control == `INSTRUCTION_FLAG_SET)  instruction_flag <= 1'b1;
    else if(instruction_flag_control == `INSTRUCTION_FLAG_CLEAR_IN_MAIN_LOOP && prefetch_ir_valid == 1'b1 && decoder_trap == 8'd0 && stop_flag == 1'b0)
                                                                instruction_flag <= 1'b0;
end

always @(posedge clock or negedge reset_n) begin
    if(reset_n == 1'b0)                                                         read_modify_write_flag <= 1'b0;
    else if(read_modify_write_flag_control == `READ_MODIFY_WRITE_FLAG_SET)      read_modify_write_flag <= 1'b1;
    else if(read_modify_write_flag_control == `READ_MODIFY_WRITE_FLAG_CLEAR)    read_modify_write_flag <= 1'b0;
end

always @(posedge clock or negedge reset_n) begin
    if(reset_n == 1'b0)                                         do_reset_flag <= 1'b0;
    else if(do_reset_flag_control == `DO_RESET_FLAG_SET)        do_reset_flag <= 1'b1;
    else if(do_reset_flag_control == `DO_RESET_FLAG_CLEAR)      do_reset_flag <= 1'b0;
end

always @(posedge clock or negedge reset_n) begin
    if(reset_n == 1'b0)                                                         do_interrupt_flag <= 1'b0;
    else if(do_interrupt_flag_control == `DO_INTERRUPT_FLAG_SET_IF_ACTIVE)      do_interrupt_flag <= (interrupt_mask != 3'b000) ? 1'b1 : 1'b0;
    else if(do_interrupt_flag_control == `DO_INTERRUPT_FLAG_CLEAR)              do_interrupt_flag <= 1'b0;
end

always @(posedge clock or negedge reset_n) begin
    if(reset_n == 1'b0)                                         do_read_flag <= 1'b0;
    else if(do_read_flag_control == `DO_READ_FLAG_SET)          do_read_flag <= 1'b1;
    else if(do_read_flag_control == `DO_READ_FLAG_CLEAR)        do_read_flag <= 1'b0;
end

always @(posedge clock or negedge reset_n) begin
    if(reset_n == 1'b0)                                         do_write_flag <= 1'b0;
    else if(do_write_flag_control == `DO_WRITE_FLAG_SET)        do_write_flag <= 1'b1;
    else if(do_write_flag_control == `DO_WRITE_FLAG_CLEAR)      do_write_flag <= 1'b0;
end

always @(posedge clock or negedge reset_n) begin
    if(reset_n == 1'b0)                                         do_blocked_flag <= 1'b0;
    else if(do_blocked_flag_control == `DO_BLOCKED_FLAG_SET)    do_blocked_flag <= 1'b1;
end

always @(posedge clock or negedge reset_n) begin
    if(reset_n == 1'b0)                                         data_write <= 32'd0;
    else if(data_write_control == `DATA_WRITE_FROM_RESULT)      data_write <= result;
end

assign An_address =
    (An_address_control == `AN_ADDRESS_FROM_EXTENDED) ? { sr[13], prefetch_ir[78:76] } :
    (An_address_control == `AN_ADDRESS_USP) ?           4'b0111 :
    (An_address_control == `AN_ADDRESS_SSP) ?           4'b1111 :
    { sr[13], ea_reg };

assign An_input =
    (An_input_control == `AN_INPUT_FROM_ADDRESS) ?      address :
    (An_input_control == `AN_INPUT_FROM_PREFETCH_IR) ?  prefetch_ir[79:48] :
    result;

assign Dn_address = (Dn_address_control == `DN_ADDRESS_FROM_EXTENDED) ? prefetch_ir[78:76] : ea_reg;

endmodule


