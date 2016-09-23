/***********************************************************************************************************************
 * Bus control
 **********************************************************************************************************************/
/* verilator lint_off WIDTH */
/* verilator lint_off CASEINCOMPLETE */
/*! \brief Initiate WISHBONE MASTER bus cycles.
 *
 * The bus_control module is the only module that has contact with signals from outside of the IP core.
 * It is responsible for initiating WISHBONE MASTER bus cycles. The cycles can be divided into:
 *  - memory read cycles (supervisor data, supervisor program, user data, user program)
 *  - memory write cycles (supervisor data, user data),
 *  - interrupt acknowledge.
 *
 * Every cycle is supplemented with the following tags:
 *  - standard WISHBONE cycle tags: SGL_O, BLK_O, RMW_O,
 *  - register feedback WISHBONE address tags: CTI_O and BTE_O,
 *  - ao68000 specific cycle tag: fc_o which is equivalent to  MC68000 function codes.
 *
 * The bus_control module is also responsible for registering interrupt inputs and initiating the interrupt acknowledge
 * cycle in response to a microcode request. Microcode requests a interrupt acknowledge at the end of instruction
 * processing, when the interrupt privilege level is higher than the current interrupt privilege mask, as specified
 * in the MC68000 User's Manual.
 *
 * Finally, bus_control controls also two ao68000 specific core outputs:
 *  - blocked output,  high when that the processor is blocked after encountering a double bus error. The only way
 *    to leave this block state is by reseting the ao68000 by the asynchronous reset input signal.
 *  - reset output, high when processing the RESET instruction. Can be used to reset external devices.
 */
module bus_control(
    //******************************************* external
    //****************** WISHBONE
    input CLK_I,
    input reset_n,

    output reg CYC_O,
    output reg [31:2] ADR_O,
    output reg [31:0] DAT_O,
    input [31:0] DAT_I,
    output reg [3:0] SEL_O,
    output reg STB_O,
    output reg WE_O,

    input ACK_I,
    input ERR_I,
    input RTY_I,

    // TAG_TYPE: TGC_O
    output reg SGL_O,
    output reg BLK_O,
    output reg RMW_O,

    // TAG_TYPE: TGA_O
    output reg [2:0] CTI_O,
    output [1:0] BTE_O,

    // TAG_TYPE: TGC_O
    output reg [2:0] fc_o,

    //****************** OTHER
    input [2:0] ipl_i,
    output reg reset_o = 1'b0,
    output reg blocked_o = 1'b0,

    //******************************************* internal
    input supervisor_i,
    input [2:0] ipm_i,
    input [2:0] size_i,
    input [31:0] address_i,
    input address_type_i,
    input read_modify_write_i,
    input [31:0] data_write_i,
    output reg [31:0] data_read_o,

    input [31:0] pc_i,
    input [1:0] pc_change_i,
    output reg [79:0] prefetch_ir_o,
    output reg prefetch_ir_valid_32_o = 1'b0,
    output reg prefetch_ir_valid_o = 1'b0,
    output reg prefetch_ir_valid_80_o = 1'b0,

    input do_reset_i,
    input do_blocked_i,
    input do_read_i,
    input do_write_i,
    input do_interrupt_i,

    output reg jmp_address_trap_o = 1'b0,
    output reg jmp_bus_trap_o = 1'b0,
    // read/write/interrupt
    output reg finished_o,

    output reg [7:0] interrupt_trap_o = 8'b0,
    output reg [2:0] interrupt_mask_o = 3'b0,

    /* mask==0 && trap==0            nothing
     * mask!=0                        interrupt with spurious interrupt
     */

    // write = 0/read = 1
    output reg rw_state_o,
    output reg [2:0] fc_state_o,
    output reg [31:0] fault_address_state_o
);

assign BTE_O = 2'b00;

wire [31:0] pc_i_plus_6;
assign pc_i_plus_6 = pc_i + 32'd6;
wire [31:0] pc_i_plus_4;
assign pc_i_plus_4 = pc_i + 32'd4;

wire [31:0] address_i_plus_4;
assign address_i_plus_4 = address_i + 32'd4;

reg [1:0] saved_pc_change = 2'b00;

parameter [4:0]
    S_INIT      = 5'd0,
    S_RESET     = 5'd1,
    S_BLOCKED   = 5'd2,
    S_INT_1     = 5'd3,
    S_READ_1    = 5'd4,
    S_READ_2    = 5'd5,
    S_READ_3    = 5'd6,
    S_WAIT      = 5'd7,
    S_WRITE_1   = 5'd8,
    S_WRITE_2   = 5'd9,
    S_WRITE_3   = 5'd10,
    S_PC_0      = 5'd11,
    S_PC_1      = 5'd12,
    S_PC_2      = 5'd13,
    S_PC_3      = 5'd14,
    S_PC_4      = 5'd15,
    S_PC_5      = 5'd16,
    S_PC_6      = 5'd17;

parameter [2:0]
    FC_USER_DATA            = 3'd1,
    FC_USER_PROGRAM         = 3'd2,
    FC_SUPERVISOR_DATA      = 3'd5,        // all exception vector entries except reset
    FC_SUPERVISOR_PROGRAM   = 3'd6,        // exception vector for reset
    FC_CPU_SPACE            = 3'd7;        // interrupt acknowlege bus cycle

parameter [2:0]
    CTI_CLASSIC_CYCLE       = 3'd0,
    CTI_CONST_CYCLE         = 3'd1,
    CTI_INCR_CYCLE          = 3'd2,
    CTI_END_OF_BURST        = 3'd7;

parameter [7:0]
    VECTOR_BUS_TRAP         = 8'd2,
    VECTOR_ADDRESS_TRAP     = 8'd3;

reg [4:0] current_state;
reg [7:0] reset_counter;

reg [2:0] last_interrupt_mask;
always @(posedge CLK_I or negedge reset_n) begin
    if(reset_n == 1'b0) begin
        interrupt_mask_o <= 3'b000;
        last_interrupt_mask <= 3'b000;
    end
    else if(ipl_i > ipm_i && do_interrupt_i == 1'b0) begin
        interrupt_mask_o <= ipl_i;
        last_interrupt_mask <= interrupt_mask_o;
    end
    else if(do_interrupt_i == 1'b1) begin
        interrupt_mask_o <= last_interrupt_mask;
    end
    else begin
        interrupt_mask_o <= 3'b000;
        last_interrupt_mask <= 3'b000;
    end
end

// change pc_i in middle of prefetch operation: undefined

always @(posedge CLK_I or negedge reset_n) begin
    if(reset_n == 1'b0) begin
        current_state <= S_INIT;
        interrupt_trap_o <= 8'd0;
        prefetch_ir_valid_o <= 1'b0;
        prefetch_ir_valid_32_o <= 1'b0;
        prefetch_ir_valid_80_o <= 1'b0;

        jmp_address_trap_o <= 1'b0;
        jmp_bus_trap_o <= 1'b0;
        
        CYC_O <= 1'b0;
        ADR_O <= 30'd0;
        DAT_O <= 32'd0;
        SEL_O <= 4'b0;
        STB_O <= 1'b0;
        WE_O <= 1'b0;
        SGL_O <= 1'b0;
        BLK_O <= 1'b0;
        RMW_O <= 1'b0;
        CTI_O <= 3'd0;
        fc_o <= 3'd0;
        reset_o <= 1'b0;
        blocked_o <= 1'b0;
        data_read_o <= 32'd0;
        finished_o <= 1'b0;
        rw_state_o <= 1'b0;
        fc_state_o <= 3'd0;
        fault_address_state_o <= 32'd0;
        saved_pc_change <= 2'b0;
        reset_counter <= 8'd0;
    end
    else begin
        case(current_state)
            S_INIT: begin
                finished_o <= 1'b0;
                jmp_address_trap_o <= 1'b0;
                jmp_bus_trap_o <= 1'b0;
                reset_o <= 1'b0;
                blocked_o <= 1'b0;

                // block
                if(do_blocked_i == 1'b1) begin
                    blocked_o <= 1'b1;
                    current_state <= S_BLOCKED;
                end
                // reset
                else if(do_reset_i == 1'b1) begin
                    reset_o <= 1'b1;
                    reset_counter <= 8'd124;
                    current_state <= S_RESET;
                end
                // read
                else if(do_read_i == 1'b1) begin
                    WE_O <= 1'b0;
                    if(supervisor_i == 1'b1)    fc_o <= (address_type_i == 1'b0) ? FC_SUPERVISOR_DATA : FC_SUPERVISOR_PROGRAM;
                    else                        fc_o <= (address_type_i == 1'b0) ? FC_USER_DATA : FC_USER_PROGRAM;

                    if(address_i[0] == 1'b1 && (size_i[0] == 1'b0)) begin // WORD or LONG WORD
                        fault_address_state_o <= address_i;
                        rw_state_o <= 1'b1;
                        fc_state_o <= (supervisor_i == 1'b1) ?  ((address_type_i == 1'b0) ? FC_SUPERVISOR_DATA : FC_SUPERVISOR_PROGRAM) :
                                                                ((address_type_i == 1'b0) ? FC_USER_DATA : FC_USER_PROGRAM);
                        interrupt_trap_o <= VECTOR_ADDRESS_TRAP;

                        jmp_address_trap_o <= 1'b1;
                        current_state <= S_WAIT;
                    end
                    else begin
                        CYC_O <= 1'b1;
                        ADR_O <= address_i[31:2];
                        SEL_O <=    (size_i[0] == 1'b1 && address_i[1:0] == 2'b00)? 4'b1000 :
                                    (size_i[0] == 1'b1 && address_i[1:0] == 2'b01)? 4'b0100 :
                                    (size_i[0] == 1'b1 && address_i[1:0] == 2'b10)? 4'b0010 :
                                    (size_i[0] == 1'b1 && address_i[1:0] == 2'b11)? 4'b0001 :
                                    (size_i[1] == 1'b1 && address_i[1] == 2'b0)?    4'b1100 :
                                    (size_i[0] == 1'b0 && address_i[1] == 2'b1)?    4'b0011 :
                                                                                    4'b1111;
                        STB_O <= 1'b1;

                        if(read_modify_write_i == 1'b1) begin
                            SGL_O <= 1'b0;
                            BLK_O <= 1'b0;
                            RMW_O <= 1'b1;
                            CTI_O <= CTI_END_OF_BURST;
                        end
                        else if(address_i[1:0] == 2'b10 && size_i[2] == 1'b1) begin
                            SGL_O <= 1'b0;
                            BLK_O <= 1'b1;
                            RMW_O <= 1'b0;
                            CTI_O <= CTI_INCR_CYCLE;
                        end
                        else begin
                            SGL_O <= 1'b1;
                            BLK_O <= 1'b0;
                            RMW_O <= 1'b0;
                            CTI_O <= CTI_END_OF_BURST;
                        end

                        current_state <= S_READ_1;
                    end
                end
                // write
                else if(do_write_i == 1'b1) begin
                    WE_O <= 1'b1;
                    if(supervisor_i == 1'b1)    fc_o <= FC_SUPERVISOR_DATA;
                    else                        fc_o <= FC_USER_DATA;

                    if(address_i[0] == 1'b1 && size_i[0] == 1'b0) begin // WORD or LONG WORD
                        fault_address_state_o <= address_i;
                        rw_state_o <= 1'b0;
                        fc_state_o <= (supervisor_i == 1'b1) ? FC_SUPERVISOR_DATA : FC_USER_DATA;
                        interrupt_trap_o <= VECTOR_ADDRESS_TRAP;

                        jmp_address_trap_o <= 1'b1;
                        current_state <= S_WAIT;
                    end
                    else begin
                        CYC_O <= 1'b1;
                        ADR_O <= address_i[31:2];
                        STB_O <= 1'b1;

                        if(address_i[1:0] == 2'b10 && size_i[2] == 1'b1) begin
                            DAT_O <= { 16'b0, data_write_i[31:16] };
                            SEL_O <= 4'b0011;
                        end
                        else if(address_i[1:0] == 2'b00 && size_i[2] == 1'b1) begin
                            DAT_O <= data_write_i[31:0];
                            SEL_O <= 4'b1111;
                        end
                        else if(address_i[1:0] == 2'b10 && size_i[1] == 1'b1) begin
                            DAT_O <= { 16'b0, data_write_i[15:0] };
                            SEL_O <= 4'b0011;
                        end
                        else if(address_i[1:0] == 2'b00 && size_i[1] == 1'b1) begin
                            DAT_O <= { data_write_i[15:0], 16'b0 };
                            SEL_O <= 4'b1100;
                        end
                        else if(address_i[1:0] == 2'b11 && size_i[0] == 1'b1) begin
                            DAT_O <= { 24'b0, data_write_i[7:0] };
                            SEL_O <= 4'b0001;
                        end
                        else if(address_i[1:0] == 2'b10 && size_i[0] == 1'b1) begin
                            DAT_O <= { 16'b0, data_write_i[7:0], 8'b0 };
                            SEL_O <= 4'b0010;
                        end
                        else if(address_i[1:0] == 2'b01 && size_i[0] == 1'b1) begin
                            DAT_O <= { 8'b0, data_write_i[7:0], 16'b0 };
                            SEL_O <= 4'b0100;
                        end
                        else if(address_i[1:0] == 2'b00 && size_i[0] == 1'b1) begin
                            DAT_O <= { data_write_i[7:0], 24'b0 };
                            SEL_O <= 4'b1000;
                        end

                        if(read_modify_write_i == 1'b1) begin
                            SGL_O <= 1'b0;
                            BLK_O <= 1'b0;
                            RMW_O <= 1'b1;
                            CTI_O <= CTI_END_OF_BURST;
                        end
                        else if(address_i[1:0] == 2'b10 && size_i[2] == 1'b1) begin
                            SGL_O <= 1'b0;
                            BLK_O <= 1'b1;
                            RMW_O <= 1'b0;
                            CTI_O <= CTI_INCR_CYCLE;
                        end
                        else begin
                            SGL_O <= 1'b1;
                            BLK_O <= 1'b0;
                            RMW_O <= 1'b0;
                            CTI_O <= CTI_END_OF_BURST;
                        end

                        current_state <= S_WRITE_1;
                    end
                end
                // pc
                else if(prefetch_ir_valid_o == 1'b0 || pc_change_i != 2'b00) begin

                    if(prefetch_ir_valid_o == 1'b0 || pc_change_i == 2'b10 || pc_change_i == 2'b11) begin
                        // load 4 words: [79:16] in 2,3 cycles
                        prefetch_ir_valid_32_o <= 1'b0;
                        prefetch_ir_valid_o <= 1'b0;
                        prefetch_ir_valid_80_o <= 1'b0;

                        current_state <= S_PC_0;
                    end
                    else if(prefetch_ir_valid_80_o == 1'b0 && pc_change_i == 2'b01) begin
                        // load 2 words: [31:0] in 1 cycle
                        prefetch_ir_valid_32_o <= 1'b1;
                        prefetch_ir_valid_o <= 1'b0;
                        prefetch_ir_valid_80_o <= 1'b0;

                        prefetch_ir_o <= { prefetch_ir_o[63:0], 16'b0 };
                        current_state <= S_PC_0;
                    end
                    else begin
                        // do not load any words
                        prefetch_ir_valid_32_o <= 1'b1;
                        prefetch_ir_valid_o <= 1'b1;
                        prefetch_ir_valid_80_o <= 1'b0;

                        prefetch_ir_o <= { prefetch_ir_o[63:0], 16'b0 };
                    end


                end
                // interrupt
                else if(do_interrupt_i == 1'b1) begin
                    CYC_O <= 1'b1;
                    ADR_O <= { 27'b111_1111_1111_1111_1111_1111_1111, last_interrupt_mask };
                    SEL_O <= 4'b1111;
                    STB_O <= 1'b1;
                    WE_O <= 1'b0;

                    SGL_O <= 1'b1;
                    BLK_O <= 1'b0;
                    RMW_O <= 1'b0;
                    CTI_O <= CTI_END_OF_BURST;

                    fc_o <= FC_CPU_SPACE;

                    current_state <= S_INT_1;
                end
            end

            S_RESET: begin
                reset_counter <= reset_counter - 8'd1;

                if(reset_counter == 8'd0) begin
                    finished_o <= 1'b1;
                    current_state <= S_WAIT;
                end
            end

            S_BLOCKED: begin
            end

            S_INT_1: begin
                if(ACK_I == 1'b1) begin
                    CYC_O <= 1'b0;
                    STB_O <= 1'b0;

                    interrupt_trap_o <= DAT_I[7:0];

                    finished_o <= 1'b1;
                    current_state <= S_WAIT;
                end
                else if(RTY_I == 1'b1) begin
                    CYC_O <= 1'b0;
                    STB_O <= 1'b0;

                    interrupt_trap_o <= 8'd24 + { 5'b0, interrupt_mask_o };

                    finished_o <= 1'b1;
                    current_state <= S_WAIT;
                end
                else if(ERR_I == 1'b1) begin
                    CYC_O <= 1'b0;
                    STB_O <= 1'b0;

                    interrupt_trap_o <= 8'd24; // spurious interrupt

                    finished_o <= 1'b1;
                    current_state <= S_WAIT;
                end
            end

            S_PC_0: begin
                WE_O <= 1'b0;
                if(supervisor_i == 1'b1)    fc_o <= FC_SUPERVISOR_PROGRAM;
                else                        fc_o <= FC_USER_PROGRAM;

                if(pc_i[0] == 1'b1) begin
                    prefetch_ir_valid_32_o <= 1'b1;
                    prefetch_ir_valid_o <= 1'b1;
                    prefetch_ir_valid_80_o <= 1'b1;

                    fault_address_state_o <= pc_i;
                    rw_state_o <= 1'b1;
                    fc_state_o <= (supervisor_i == 1'b1) ? FC_SUPERVISOR_PROGRAM : FC_USER_PROGRAM;
                    interrupt_trap_o <= VECTOR_ADDRESS_TRAP;

                    jmp_address_trap_o <= 1'b1;
                    current_state <= S_WAIT;
                end
                else begin
                    CYC_O <= 1'b1;
                    
                    if(prefetch_ir_valid_32_o == 1'b0)                      ADR_O <= pc_i[31:2];
                    else                                                    ADR_O <= pc_i_plus_6[31:2];
                    
                    SEL_O <= (prefetch_ir_valid_32_o == 1'b0 && pc_i[1:0] == 2'b10)?    4'b0011 :
                                                                                        4'b1111;
                    STB_O <= 1'b1;

                    if(prefetch_ir_valid_32_o == 1'b0) begin
                        SGL_O <= 1'b0;
                        BLK_O <= 1'b1;
                        RMW_O <= 1'b0;
                        CTI_O <= CTI_INCR_CYCLE;
                    end
                    else begin
                        SGL_O <= 1'b1;
                        BLK_O <= 1'b0;
                        RMW_O <= 1'b0;
                        CTI_O <= CTI_END_OF_BURST;
                    end

                    saved_pc_change <= pc_change_i;
                    prefetch_ir_valid_32_o <= 1'b0;

                    current_state <= S_PC_1;
                end
            end

            S_PC_1: begin
                if(pc_change_i != 2'b00) saved_pc_change <= pc_change_i;

                if(ACK_I == 1'b1) begin
                    if(CTI_O == CTI_INCR_CYCLE) begin
                        //CYC_O <= 1'b1;
                        ADR_O <= pc_i_plus_4[31:2];
                        SEL_O <= 4'b1111;
                        //STB_O <= 1'b1;
                        //WE_O <= 1'b0;

                        if(pc_i[1:0] == 2'b10) begin
                            SGL_O <= 1'b0;
                            BLK_O <= 1'b1;
                            RMW_O <= 1'b0;
                            CTI_O <= CTI_INCR_CYCLE;
                        end
                        else begin
                            SGL_O <= 1'b0;
                            BLK_O <= 1'b1;
                            RMW_O <= 1'b0;
                            CTI_O <= CTI_END_OF_BURST;
                        end

                        //if(supervisor_i == 1'b1)    fc_o <= FC_SUPERVISOR_PROGRAM;
                        //else                        fc_o <= FC_USER_PROGRAM;

                        if(pc_i[1:0] == 2'b10)      prefetch_ir_o <= { DAT_I[15:0], 64'b0 };
                        else                        prefetch_ir_o <= { DAT_I[31:0], 48'b0 };

                        current_state <= S_PC_3;
                    end
                    else begin
                        CYC_O <= 1'b0;
                        STB_O <= 1'b0;

                        if(saved_pc_change == 2'b10 || saved_pc_change == 2'b11 || pc_change_i == 2'b10 || pc_change_i == 2'b11) begin
                            // load 4 words: [79:16] in 2,3 cycles
                            prefetch_ir_valid_32_o <= 1'b0;
                            prefetch_ir_valid_o <= 1'b0;
                            prefetch_ir_valid_80_o <= 1'b0;

                            current_state <= S_PC_0;
                        end
                        else if(saved_pc_change == 2'b01 || pc_change_i == 2'b01) begin
                            // do not load any words
                            prefetch_ir_valid_32_o <= 1'b1;
                            prefetch_ir_valid_o <= 1'b1;
                            prefetch_ir_valid_80_o <= 1'b0;

                            prefetch_ir_o <= { prefetch_ir_o[63:32], DAT_I[31:0], 16'b0 };
                            current_state <= S_INIT;
                        end
                        else begin
                            prefetch_ir_valid_32_o <= 1'b1;
                            prefetch_ir_valid_o <= 1'b1;
                            prefetch_ir_valid_80_o <= 1'b1;

                            prefetch_ir_o <= { prefetch_ir_o[79:32], DAT_I[31:0] };
                            current_state <= S_INIT;
                        end
                    end
                end
                else if(RTY_I == 1'b1) begin
                    CYC_O <= 1'b0;
                    STB_O <= 1'b0;

                    current_state <= S_PC_2;
                end
                else if(ERR_I == 1'b1) begin
                    CYC_O <= 1'b0;
                    STB_O <= 1'b0;

                    fault_address_state_o <= { ADR_O, 2'b00 };
                    rw_state_o <= ~WE_O;
                    fc_state_o <= fc_o;
                    interrupt_trap_o <= VECTOR_BUS_TRAP;

                    jmp_bus_trap_o <= 1'b1;
                    current_state <= S_WAIT;
                end
            end
            S_PC_2: begin
                CYC_O <= 1'b1;
                STB_O <= 1'b1;

                current_state <= S_PC_1;
            end
            S_PC_3: begin
                if(ACK_I == 1'b1) begin
                    if(pc_i[1:0] == 2'b10) begin
                        //CYC_O <= 1'b1;
                        ADR_O <= pc_i_plus_6[31:2];
                        SEL_O <= 4'b1111;
                        //STB_O <= 1'b1;
                        //WE_O <= 1'b0;

                        SGL_O <= 1'b0;
                        BLK_O <= 1'b1;
                        RMW_O <= 1'b0;
                        CTI_O <= CTI_END_OF_BURST;

                        //if(supervisor_i == 1'b1)    fc_o <= FC_SUPERVISOR_PROGRAM;
                        //else                        fc_o <= FC_USER_PROGRAM;

                        prefetch_ir_o <= { prefetch_ir_o[79:64], DAT_I[31:0], 32'b0 };

                        current_state <= S_PC_5;
                    end
                    else begin
                        CYC_O <= 1'b0;
                        STB_O <= 1'b0;

                        prefetch_ir_o <= { prefetch_ir_o[79:48], DAT_I[31:0], 16'b0 };

                        prefetch_ir_valid_32_o <= 1'b1;
                        prefetch_ir_valid_o <= 1'b1;
                        prefetch_ir_valid_80_o <= 1'b0;
                        current_state <= S_INIT;
                    end
                end
                else if(RTY_I == 1'b1) begin
                    CYC_O <= 1'b0;
                    STB_O <= 1'b0;

                    current_state <= S_PC_4;
                end
                else if(ERR_I == 1'b1) begin
                    CYC_O <= 1'b0;
                    STB_O <= 1'b0;

                    fault_address_state_o <= { ADR_O, 2'b00 };
                    rw_state_o <= ~WE_O;
                    fc_state_o <= fc_o;
                    interrupt_trap_o <= VECTOR_BUS_TRAP;

                    jmp_bus_trap_o <= 1'b1;
                    current_state <= S_WAIT;
                end
            end
            S_PC_4: begin
                CYC_O <= 1'b1;
                STB_O <= 1'b1;

                current_state <= S_PC_3;
            end
            S_PC_5: begin
                if(ACK_I == 1'b1) begin
                    CYC_O <= 1'b0;
                    STB_O <= 1'b0;

                    prefetch_ir_o <= { prefetch_ir_o[79:32], DAT_I[31:0] };

                    prefetch_ir_valid_32_o <= 1'b1;
                    prefetch_ir_valid_o <= 1'b1;
                    prefetch_ir_valid_80_o <= 1'b1;
                    current_state <= S_INIT;
                end
                else if(RTY_I == 1'b1) begin
                    CYC_O <= 1'b0;
                    STB_O <= 1'b0;

                    current_state <= S_PC_6;
                end
                else if(ERR_I == 1'b1) begin
                    CYC_O <= 1'b0;
                    STB_O <= 1'b0;

                    fault_address_state_o <= { ADR_O, 2'b00 };
                    rw_state_o <= ~WE_O;
                    fc_state_o <= fc_o;
                    interrupt_trap_o <= VECTOR_BUS_TRAP;

                    jmp_bus_trap_o <= 1'b1;
                    current_state <= S_WAIT;
                end
            end
            S_PC_6: begin
                CYC_O <= 1'b1;
                STB_O <= 1'b1;

                current_state <= S_PC_5;
            end

            //*******************
            S_READ_1: begin
                if(ACK_I == 1'b1) begin
                    if(address_i[1:0] == 2'b10 && size_i[2] == 1'b1) begin
                        //CYC_O <= 1'b1;
                        ADR_O <= address_i_plus_4[31:2];
                        SEL_O <= 4'b1100;
                        //STB_O <= 1'b1;
                        //WE_O <= 1'b0;

                        //SGL_O <= 1'b0;
                        //BLK_O <= 1'b1;
                        //RMW_O <= 1'b0;
                        CTI_O <= CTI_END_OF_BURST;

                        //if(supervisor_i == 1'b1)    fc_o <= (address_type_i == 1'b0) ? FC_SUPERVISOR_DATA : FC_SUPERVISOR_PROGRAM;
                        //else                        fc_o <= (address_type_i == 1'b0) ? FC_USER_DATA : FC_USER_PROGRAM;

                        data_read_o <= { DAT_I[15:0], 16'b0 };

                        current_state <= S_READ_2;
                    end
                    else begin
                        if(read_modify_write_i == 1'b1) begin
                            CYC_O <= 1'b1;
                            STB_O <= 1'b0;
                        end
                        else begin
                            CYC_O <= 1'b0;
                            STB_O <= 1'b0;
                        end

                        if(address_i[1:0] == 2'b00 && size_i[2] == 1'b1)             data_read_o <= DAT_I[31:0];
                        else if(address_i[1:0] == 2'b10 && size_i[1] == 1'b1)        data_read_o <= { {16{DAT_I[15]}}, DAT_I[15:0] };
                        else if(address_i[1:0] == 2'b00 && size_i[1] == 1'b1)        data_read_o <= { {16{DAT_I[31]}}, DAT_I[31:16] };
                        else if(address_i[1:0] == 2'b11 && size_i[0] == 1'b1)        data_read_o <= { {24{DAT_I[7]}}, DAT_I[7:0] };
                        else if(address_i[1:0] == 2'b10 && size_i[0] == 1'b1)        data_read_o <= { {24{DAT_I[15]}}, DAT_I[15:8] };
                        else if(address_i[1:0] == 2'b01 && size_i[0] == 1'b1)        data_read_o <= { {24{DAT_I[23]}}, DAT_I[23:16] };
                        else if(address_i[1:0] == 2'b00 && size_i[0] == 1'b1)        data_read_o <= { {24{DAT_I[31]}}, DAT_I[31:24] };

                        finished_o <= 1'b1;
                        current_state <= S_WAIT;
                    end
                end
                else if(RTY_I == 1'b1) begin
                    CYC_O <= 1'b0;
                    STB_O <= 1'b0;

                    current_state <= S_INIT;
                end
                else if(ERR_I == 1'b1) begin
                    CYC_O <= 1'b0;
                    STB_O <= 1'b0;

                    fault_address_state_o <= { ADR_O, 2'b00 };
                    rw_state_o <= ~WE_O;
                    fc_state_o <= fc_o;
                    interrupt_trap_o <= VECTOR_BUS_TRAP;

                    jmp_bus_trap_o <= 1'b1;
                    current_state <= S_WAIT;
                end
            end
            S_READ_2: begin
                if(ACK_I == 1'b1) begin
                    CYC_O <= 1'b0;
                    STB_O <= 1'b0;

                    data_read_o <= { data_read_o[31:16], DAT_I[31:16] };

                    finished_o <= 1'b1;
                    current_state <= S_WAIT;

                end
                else if(RTY_I == 1'b1) begin
                    CYC_O <= 1'b0;
                    STB_O <= 1'b0;

                    current_state <= S_READ_3;
                end
                else if(ERR_I == 1'b1) begin
                    CYC_O <= 1'b0;
                    STB_O <= 1'b0;

                    fault_address_state_o <= { ADR_O, 2'b00 };
                    rw_state_o <= ~WE_O;
                    fc_state_o <= fc_o;
                    interrupt_trap_o <= VECTOR_BUS_TRAP;

                    jmp_bus_trap_o <= 1'b1;
                    current_state <= S_WAIT;
                end

            end
            S_READ_3: begin
                CYC_O <= 1'b1;
                STB_O <= 1'b1;

                current_state <= S_READ_2;
            end


            S_WAIT: begin
                jmp_address_trap_o <= 1'b0;
                jmp_bus_trap_o <= 1'b0;

                if(do_read_i == 1'b0 && do_write_i == 1'b0 && do_interrupt_i == 1'b0 && do_reset_i == 1'b0) begin
                    finished_o <= 1'b0;
                    current_state <= S_INIT;
                end
            end

            //**********************
            S_WRITE_1: begin
                if(ACK_I == 1'b1) begin
                    if(address_i[1:0] == 2'b10 && size_i[2] == 1'b1) begin
                        //CYC_O <= 1'b1;
                        ADR_O <= address_i_plus_4[31:2];
                        //STB_O <= 1'b1;
                        //WE_O <= 1'b1;

                        DAT_O <= { data_write_i[15:0], 16'b0 };
                        SEL_O <= 4'b1100;

                        //SGL_O <= 1'b0;
                        //BLK_O <= 1'b1;
                        //RMW_O <= 1'b0;
                        CTI_O <= CTI_END_OF_BURST;

                        //if(supervisor_i == 1'b1)    fc_o <= FC_SUPERVISOR_DATA;
                        //else                        fc_o <= FC_USER_DATA;

                        current_state <= S_WRITE_2;
                    end
                    else begin
                        CYC_O <= 1'b0;
                        STB_O <= 1'b0;

                        finished_o <= 1'b1;
                        current_state <= S_WAIT;
                    end
                end
                else if(RTY_I == 1'b1) begin
                    CYC_O <= 1'b0;
                    STB_O <= 1'b0;

                    current_state <= S_INIT;
                end
                else if(ERR_I == 1'b1) begin
                    CYC_O <= 1'b0;
                    STB_O <= 1'b0;

                    fault_address_state_o <= { ADR_O, 2'b00 };
                    rw_state_o <= ~WE_O;
                    fc_state_o <= fc_o;
                    interrupt_trap_o <= VECTOR_BUS_TRAP;

                    jmp_bus_trap_o <= 1'b1;
                    current_state <= S_WAIT;
                end

            end
            S_WRITE_2: begin
                if(ACK_I == 1'b1) begin
                    CYC_O <= 1'b0;
                    STB_O <= 1'b0;

                    finished_o <= 1'b1;
                    current_state <= S_WAIT;

                end
                else if(RTY_I == 1'b1) begin
                    CYC_O <= 1'b0;
                    STB_O <= 1'b0;

                    current_state <= S_WRITE_3;
                end
                else if(ERR_I == 1'b1) begin
                    CYC_O <= 1'b0;
                    STB_O <= 1'b0;

                    fault_address_state_o <= { ADR_O, 2'b00 };
                    rw_state_o <= ~WE_O;
                    fc_state_o <= fc_o;
                    interrupt_trap_o <= VECTOR_BUS_TRAP;

                    jmp_bus_trap_o <= 1'b1;
                    current_state <= S_WAIT;
                end

            end
            S_WRITE_3: begin
                CYC_O <= 1'b1;
                STB_O <= 1'b1;

                current_state <= S_WRITE_2;
            end

        endcase
    end
end

endmodule

