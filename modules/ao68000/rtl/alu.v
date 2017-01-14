/*! \brief Arithmetic and Logic Unit.
 *
 * The alu module is responsible for performing all of the arithmetic and logic operations of the ao68000 processor.
 * It operates on two 32-bit registers: operand1 and operand2 from the registers module. The output is saved into
 * a result 32-bit register. This register is located in the alu module.
 * 
 * The alu module also contains the status register (SR) with the condition code register. The microcode decides what
 * operation the alu performs.
 */

`include "microcode_ops.vh"

module alu(
    input clock,
    input reset_n,

    // only zero bit
    input [31:0] address,
    // only ir[11:9] and ir[6]
    input [15:0] ir,
    // byte 2'b00, word 2'b01, long 2'b10
    input [2:0] size,

    input [31:0] operand1,
    input [31:0] operand2,

    input [2:0] interrupt_mask,
    input [4:0] alu_control,

    output reg [15:0] sr,
    output reg [31:0] result,
    
    output reg alu_signal,
    output alu_mult_div_ready,
    input [17:0] decoder_alu_reg
);

//****************************************************** Altera-specific multiplication and division modules START
/* Multiplication and division modules.
 *
 * Currently this module contains:
 * - <em>lpm_mult</em> instantiation from Altera Megafunction/LPM library,
 * - a sequential state machine for division written by Frederic Requin
 */

wire        mult_div_sign = ir[8];

// 18-2 - division calculation, 1 - waiting for result read, 0 - idle
reg  [4:0]  div_count;
reg [16:0]  quotient;
reg [31:0]  dividend, divider;

// Compute the difference with borrow
wire [32:0] div_diff = (dividend - divider);

// Overflow flag: when (quotient >= 65536) or (signed division and (quotient >= 32768 or quotient < -32768))
wire        div_overflow =
    (quotient[16] == 1'b1 ||
        (mult_div_sign == 1'b1 && (
            ((operand1[31] ^ operand2[15]) == 1'b0 && quotient[15] == 1'b1) ||
            ((operand1[31] ^ operand2[15]) == 1'b1 && quotient[15:0] > 16'd32768) )));

wire [15:0] div_quotient = 
    // positive quotient
    (((operand1[31] ^ operand2[15]) & mult_div_sign) == 1'b0)? quotient[15:0] :
    // negative quotient
    -quotient[15:0];

wire [15:0] div_remainder =
    // positive remainder
    ((operand1[31] & mult_div_sign) == 1'b0)? dividend[15:0] :
    // negative remainder
    -dividend[15:0];

always @(posedge clock or negedge reset_n) begin
    if(reset_n == 1'b0) begin
        div_count <= 5'd0;
    end
    // Cycle #0 : load the registers
    else if(alu_control == `ALU_MULS_MULU_DIVS_DIVU && ir[15:12] == 4'b1000 && div_count == 5'd0) begin
        // 17 cycles to finish + wait state
        div_count   <= 5'd18;
        // Clear the quotient
        quotient    <= 17'd0;
    
        // Unsigned divide or positive numerator
        if ((!mult_div_sign) || (!operand1[31]))    dividend <= operand1;
        // Negative numerator
        else                                        dividend <= -operand1;
        
        // Unsigned divide or positive denominator
        if ((!mult_div_sign) || (!operand2[15]))    divider <= {operand2[15:0],16'd0};
        // Negative denominator
        else                                        divider <= {-operand2[15:0],16'd0};
    end
    // Cycles #1-17 : division calculation
    else if(div_count > 5'd1) begin
        // Check difference's sign
        if (!div_diff[32]) begin
          // Difference is positive : shift a one
          dividend <= div_diff[31:0];
          quotient <= {quotient[15:0], 1'b1};
        end
        else begin
          // Difference is negative : shift a zero
          quotient <= {quotient[15:0], 1'b0};
        end
        // Shift right divider
        divider <= {1'b0, divider[31:1]};
        // Count one bit
        div_count <= div_count - 5'd1;
    end
    // result read
    else if(alu_control == `ALU_MULS_MULU_DIVS_DIVU && ir[15:12] == 4'b1000 && div_count == 5'd1) begin
        // goto idle
        div_count <= div_count - 5'd1;
    end
end

// MULS/MULU: 16-bit operand1[15:0] signed/unsigned * operand2[15:0] signed/unsigned = 32-bit result signed/unsigned
// Optimization by Frederic Requin
wire signed [33:0] mult_result;

/* for the sake of simulation,we can use verilog signed multiplication. */
// sign extension
wire signed [16:0] op1_u2;
wire signed [16:0] op2_u2;

assign op1_u2 = {operand1[15] & mult_div_sign, operand1[15:0] };
assign op2_u2 = {operand2[15] & mult_div_sign, operand2[15:0] };
// @todo make this mult defined only in simulation
assign mult_result = op1_u2 * op2_u2;

//lpm_mult muls(
//    .clock  (clock),
//    .dataa  ({operand1[15] & mult_div_sign, operand1[15:0]}),
//    .datab  ({operand2[15] & mult_div_sign, operand2[15:0]}),
//    .result (mult_result)
//);
//defparam
//    muls.lpm_widtha = 17,
//    muls.lpm_widthb = 17,
//    muls.lpm_widthp = 34,
//    muls.lpm_representation = "SIGNED",
//    muls.lpm_pipeline = 1;

// multiplication ready in one cycle, division ready when div_count in waiting or idle state
assign alu_mult_div_ready = (div_count == 5'd1 || div_count == 5'd0);

//****************************************************** Altera-specific multiplication and division modules END

wire [5:0]  result_ABCD_13_8a   = {1'b0, operand1[3:0]} + {1'b0, operand2[3:0]} + {4'b0, sr[4]};
wire [5:0]  result_ABCD_19_14   = {1'b0, operand1[7:4]} + {1'b0, operand2[7:4]};
wire [8:0]  result_ABCD_31_23   = operand1[7:0] + operand2[7:0] + {7'b0, sr[4]};
wire [5:0]  result_ABCD_13_8b   = (result_ABCD_13_8a > 6'd9) ? (result_ABCD_13_8a + 6'd6) : result_ABCD_13_8a;

wire [5:0]  result_SBCD_13_8a   = 6'd32 + {2'b0, operand1[3:0]} - {2'b0, operand2[3:0]} - {5'b0, sr[4]};
wire [5:0]  result_SBCD_19_14   = 6'd32 + {2'b0, operand1[7:4]} - {2'b0, operand2[7:4]};
wire [8:0]  result_SBCD_31_23   = operand1[7:0] - operand2[7:0] - {7'b0, sr[4]};
wire [5:0]  result_SBCD_13_8b   = (result_SBCD_13_8a < 6'd32) ? (result_SBCD_13_8a - 6'd6) : result_SBCD_13_8a;

wire [5:0]  result_ABCD2_19_14a = (result[13:8] > 6'h1F) ? (result[19:14] + 6'd2) :
                                  (result[13:8] > 6'h0F) ? (result[19:14] + 6'd1) :
                                  result[19:14];
wire [5:0]  result_ABCD2_19_14b = (result_ABCD2_19_14a > 6'd9) ? (result_ABCD2_19_14a + 6'd6) : result_ABCD2_19_14a;
wire [3:0]  result_ABCD2_7_4    = result_ABCD2_19_14b[3:0];
wire [3:0]  result_ABCD2_3_0    = result[11:8];
wire [31:0] result_ABCD2        = {result[31:20], result_ABCD2_19_14b, result[13:8], result_ABCD2_7_4, result_ABCD2_3_0};


wire [5:0]  result_SBCD2_19_14a = (result[13:8] < 6'd16) ? (result[19:14] - 6'd2) :
                                  (result[13:8] < 6'd32) ? (result[19:14] - 6'd1) :
                                  result[19:14];
wire [5:0]  result_SBCD2_19_14b = (result_SBCD2_19_14a < 6'd32 && result[31] == 1'b1) ? (result_SBCD2_19_14a - 6'd6) : result_SBCD2_19_14a;
wire [3:0]  result_SBCD2_7_4    = result_SBCD2_19_14b[3:0];
wire [3:0]  result_SBCD2_3_0    = result[11:8];
wire [31:0] result_SBCD2        = {result[31:20], result_SBCD2_19_14b, result[13:8], result_SBCD2_7_4, result_SBCD2_3_0};

wire [15:0] result_CHK          = operand1[15:0] - operand2[15:0];

wire        result_BITS8_val    = ~(operand1[ operand2[2:0] ]);
wire        result_BITS8_bit    = (ir[7:6] == 2'b01) ? result_BITS8_val : (ir[7:6] == 2'b10) ? 1'b0 : 1'b1;
wire [31:0] result_BITS8        = { operand1[31:8],
                                    (operand2[2:0] == 3'd7)? result_BITS8_bit : operand1[7],
                                    (operand2[2:0] == 3'd6)? result_BITS8_bit : operand1[6],
                                    (operand2[2:0] == 3'd5)? result_BITS8_bit : operand1[5],
                                    (operand2[2:0] == 3'd4)? result_BITS8_bit : operand1[4],
                                    (operand2[2:0] == 3'd3)? result_BITS8_bit : operand1[3],
                                    (operand2[2:0] == 3'd2)? result_BITS8_bit : operand1[2],
                                    (operand2[2:0] == 3'd1)? result_BITS8_bit : operand1[1],
                                    (operand2[2:0] == 3'd0)? result_BITS8_bit : operand1[0] };

wire        result_BITS32_val   = ~(operand1[ operand2[4:0] ]);
wire        result_BITS32_bit   = (ir[7:6] == 2'b01) ? result_BITS32_val : (ir[7:6] == 2'b10) ? 1'b0 : 1'b1;
wire [31:0] result_BITS32       = { (operand2[4:0] == 5'd31)? result_BITS32_bit : operand1[31],
                                    (operand2[4:0] == 5'd30)? result_BITS32_bit : operand1[30],
                                    (operand2[4:0] == 5'd29)? result_BITS32_bit : operand1[29],
                                    (operand2[4:0] == 5'd28)? result_BITS32_bit : operand1[28],
                                    (operand2[4:0] == 5'd27)? result_BITS32_bit : operand1[27],
                                    (operand2[4:0] == 5'd26)? result_BITS32_bit : operand1[26],
                                    (operand2[4:0] == 5'd25)? result_BITS32_bit : operand1[25],
                                    (operand2[4:0] == 5'd24)? result_BITS32_bit : operand1[24],
                                    (operand2[4:0] == 5'd23)? result_BITS32_bit : operand1[23],
                                    (operand2[4:0] == 5'd22)? result_BITS32_bit : operand1[22],
                                    (operand2[4:0] == 5'd21)? result_BITS32_bit : operand1[21],
                                    (operand2[4:0] == 5'd20)? result_BITS32_bit : operand1[20],
                                    (operand2[4:0] == 5'd19)? result_BITS32_bit : operand1[19],
                                    (operand2[4:0] == 5'd18)? result_BITS32_bit : operand1[18],
                                    (operand2[4:0] == 5'd17)? result_BITS32_bit : operand1[17],
                                    (operand2[4:0] == 5'd16)? result_BITS32_bit : operand1[16],
                                    (operand2[4:0] == 5'd15)? result_BITS32_bit : operand1[15],
                                    (operand2[4:0] == 5'd14)? result_BITS32_bit : operand1[14],
                                    (operand2[4:0] == 5'd13)? result_BITS32_bit : operand1[13],
                                    (operand2[4:0] == 5'd12)? result_BITS32_bit : operand1[12],
                                    (operand2[4:0] == 5'd11)? result_BITS32_bit : operand1[11],
                                    (operand2[4:0] == 5'd10)? result_BITS32_bit : operand1[10],
                                    (operand2[4:0] == 5'd9 )? result_BITS32_bit : operand1[9 ],
                                    (operand2[4:0] == 5'd8 )? result_BITS32_bit : operand1[8 ],
                                    (operand2[4:0] == 5'd7 )? result_BITS32_bit : operand1[7 ],
                                    (operand2[4:0] == 5'd6 )? result_BITS32_bit : operand1[6 ],
                                    (operand2[4:0] == 5'd5 )? result_BITS32_bit : operand1[5 ],
                                    (operand2[4:0] == 5'd4 )? result_BITS32_bit : operand1[4 ],
                                    (operand2[4:0] == 5'd3 )? result_BITS32_bit : operand1[3 ],
                                    (operand2[4:0] == 5'd2 )? result_BITS32_bit : operand1[2 ],
                                    (operand2[4:0] == 5'd1 )? result_BITS32_bit : operand1[1 ],
                                    (operand2[4:0] == 5'd0 )? result_BITS32_bit : operand1[0 ] };

wire [4:0]  result_NBCD_3_0a    = 5'd25 - operand1[3:0];
wire [4:0]  result_NBCD_7_4a    = (operand1[3:0] > 4'd9) ? (5'd24 - operand1[7:4]) : (5'd25 - operand1[7:4]);

wire [3:0]  result_NBCD_3_0b    =   (sr[4] == 1'b0 && result_NBCD_3_0a[3:0] == 4'd9 && result_NBCD_7_4a[3:0] == 4'd9)?      4'd0 :
                                    (sr[4] == 1'b0 && (result_NBCD_3_0a[3:0] == 4'd9 || result_NBCD_3_0a[3:0] == 4'd15))?   4'd0 :
                                    (sr[4] == 1'b0)?                                                                        result_NBCD_3_0a[3:0] + 4'd1 :
                                                                                                                            result_NBCD_3_0a[3:0];
wire [3:0]  result_NBCD_7_4b    =   (sr[4] == 1'b0 && result_NBCD_3_0a[3:0] == 4'd9 && result_NBCD_7_4a[3:0] == 4'd9)?      4'd0 :
                                    (sr[4] == 1'b0 && (result_NBCD_3_0a[3:0] == 4'd9 || result_NBCD_3_0a[3:0] == 4'd15))?   result_NBCD_7_4a[3:0] + 4'd1 :
                                                                                                                            result_NBCD_7_4a[3:0];
                                                                                                                
wire [31:0] result_blocking =
    // OR,OR to mem,OR to Dn
    (alu_control == `ALU_ARITHMETIC_LOGIC && decoder_alu_reg[0])?                               operand1[31:0] | operand2[31:0] :
    // AND,AND to mem,AND to Dn
    (alu_control == `ALU_ARITHMETIC_LOGIC && decoder_alu_reg[1])?                               operand1[31:0] & operand2[31:0] :
    // EORI,EOR
    (alu_control == `ALU_ARITHMETIC_LOGIC && decoder_alu_reg[2])?                               operand1[31:0] ^ operand2[31:0] :
    // ADD,ADD to mem,ADD to Dn,ADDQ
    (alu_control == `ALU_ARITHMETIC_LOGIC && decoder_alu_reg[3])?                               operand1[31:0] + operand2[31:0] :
    // SUBI,CMPI,CMPM,SUB to mem,SUB to Dn,CMP,SUBQ
    (alu_control == `ALU_ARITHMETIC_LOGIC && (decoder_alu_reg[4] | decoder_alu_reg[5]))?        operand1[31:0] - operand2[31:0] :
    // ABCD
    (alu_control == `ALU_ABCD_SBCD_ADDX_SUBX_prepare && ir[14:12] == 3'b100)?                   { result_ABCD_31_23, result[22:20], result_ABCD_19_14, result_ABCD_13_8b, result[7:0] } :
    // SBCD
    (alu_control == `ALU_ABCD_SBCD_ADDX_SUBX_prepare && ir[14:12] == 3'b000)?                   { result_SBCD_31_23, result[22:20], result_SBCD_19_14, result_SBCD_13_8b, result[7:0] } :
    // ABCD2
    (alu_control == `ALU_ABCD_SBCD_ADDX_SUBX && ir[14:12] == 3'b100)?                           result_ABCD2 :
    // SBCD2
    (alu_control == `ALU_ABCD_SBCD_ADDX_SUBX && ir[14:12] == 3'b000)?                           result_SBCD2 :
    // ADDX
    (alu_control == `ALU_ABCD_SBCD_ADDX_SUBX && ir[14:12] == 3'b101)?                           operand1[31:0] + operand2[31:0] + sr[4] :
    // SUBX
    (alu_control == `ALU_ABCD_SBCD_ADDX_SUBX && ir[14:12] == 3'b001)?                           operand1[31:0] - operand2[31:0] - sr[4] :
    // shift/rotate prepare
    (alu_control == `ALU_ASL_LSL_ROL_ROXL_ASR_LSR_ROR_ROXR_prepare)?                            operand1[31:0] :
    // ASL / LSL / ROL / ROXL
    (alu_control == `ALU_ASL_LSL_ROL_ROXL_ASR_LSR_ROR_ROXR && 
        (decoder_alu_reg[8] | decoder_alu_reg[9] | decoder_alu_reg[10] | decoder_alu_reg[11]))? {operand1[30:0], lbit} :
    // ASR / LSR / ROR / ROXR
    (alu_control == `ALU_ASL_LSL_ROL_ROXL_ASR_LSR_ROR_ROXR)?                                    {rbit, operand1[31:17], (size[1]) ? rbit : operand1[16], operand1[15:9],
                                                                                                 (size[0]) ? rbit : operand1[8], operand1[7:1] } :
    // MOVE
    (alu_control == `ALU_MOVE)?                                                                 operand1 :
    // ADDA,ADDQ
    (alu_control == `ALU_ADDA_SUBA_CMPA_ADDQ_SUBQ && decoder_alu_reg[6])?                       operand1[31:0] + operand2[31:0] :
    // SUBA,CMPA,SUBQ
    (alu_control == `ALU_ADDA_SUBA_CMPA_ADDQ_SUBQ)?                                             operand1[31:0] - operand2[31:0] :
    // CHK
    (alu_control == `ALU_CHK)?                                                                  { result[31:16], result_CHK } :
    // NEGX / CLR / NEG / NOT
    (alu_control == `ALU_NEGX_CLR_NEG_NOT_NBCD_SWAP_EXT &&
     ((ir[11:8] == 4'b0000) || (ir[11:8] == 4'b0010) || (ir[11:8] == 4'b0100) || (ir[11:8] == 4'b0110)))? 
                                                                                                32'b0 - (operand1[31:0] & {32{ir[10] | ~ir[9]}}) - ((sr[4] & ~ir[10] & ~ir[9]) | (ir[10] & ir[9])) :
    // NBCD
    (alu_control == `ALU_NEGX_CLR_NEG_NOT_NBCD_SWAP_EXT && ir[11:6] == 6'b1000_00)?             { result[31:8], result_NBCD_7_4b, result_NBCD_3_0b } :
    // SWAP
    (alu_control == `ALU_NEGX_CLR_NEG_NOT_NBCD_SWAP_EXT && ir[11:6] == 6'b1000_01)?             { operand1[15:0], operand1[31:16] } :
    // EXT byte to word
    (alu_control == `ALU_NEGX_CLR_NEG_NOT_NBCD_SWAP_EXT && ir[11:6] == 6'b1000_10)?             { result[31:16], {8{operand1[7]}}, operand1[7:0] } :
    // EXT word to long
    (alu_control == `ALU_NEGX_CLR_NEG_NOT_NBCD_SWAP_EXT && ir[11:6] == 6'b1000_11)?             { {16{operand1[15]}}, operand1[15:0] } :
    // else
                                                                                                result[31:0];
 
// ALU internal defines
`define Sm ((size[0] == 1'b1) ? operand2[7] :                   (size[1] == 1'b1) ? operand2[15] :                      operand2[31])

`define Dm ((size[0] == 1'b1) ? operand1[7] :                   (size[1] == 1'b1) ? operand1[15] :                      operand1[31])

`define Rm ((size[0] == 1'b1) ? result_blocking[7] :            (size[1] == 1'b1) ? result_blocking[15] :               result_blocking[31])

`define Z  ((size[0] == 1'b1) ? (result_blocking[7:0] == 8'b0) :(size[1] == 1'b1) ? (result_blocking[15:0] == 16'b0) :  (result_blocking[31:0] == 32'b0))

// ALU operations

reg [2:0] interrupt_mask_copy;
reg was_interrupt;

// Bit being shifted left
wire lbit = (`Dm & decoder_alu_reg[10]) | (sr[4] & decoder_alu_reg[11]);
// Bit being shifted right
wire rbit = (`Dm & decoder_alu_reg[12]) | (operand1[0] & decoder_alu_reg[14]) | (sr[4] & decoder_alu_reg[15]);

   
always @(posedge clock or negedge reset_n) begin
    if(reset_n == 1'b0) begin
        sr                  <= { 1'b0, 1'b0, 1'b1, 2'b0, 3'b111, 8'b0 };
        result              <= 32'd0;
        alu_signal          <= 1'b0;
        interrupt_mask_copy <= 3'b0;
        was_interrupt       <= 1'b0;
    end
    else begin
        case(alu_control)
            `ALU_SR_SET_INTERRUPT: begin
                interrupt_mask_copy <= interrupt_mask[2:0];
                was_interrupt <= 1'b1;
            end

            `ALU_SR_SET_TRAP: begin
                if(was_interrupt == 1'b1) begin
                    sr <= { 1'b0, sr[14], 1'b1, sr[12:11], interrupt_mask_copy[2:0], sr[7:0] };
                end
                else begin
                    sr <= { 1'b0, sr[14], 1'b1, sr[12:0] };
                end
                was_interrupt <= 1'b0;
            end

            `ALU_MOVEP_M2R_1: begin
                if(ir[6] == 1'b1)   result[31:24] <= operand1[7:0];
                else                result[15:8] <= operand1[7:0];
                //CCR: no change
            end
            `ALU_MOVEP_M2R_2: begin
                if(ir[6] == 1'b1)   result[23:16] <= operand1[7:0];
                else                result[7:0] <= operand1[7:0];
                //CCR: no change
            end
            `ALU_MOVEP_M2R_3: begin
                if(ir[6] == 1'b1)   result[15:8] <= operand1[7:0];
                //CCR: no change
            end
            `ALU_MOVEP_M2R_4: begin
                if(ir[6] == 1'b1)   result[7:0] <= operand1[7:0];
                //CCR: no change
            end
            

            `ALU_MOVEP_R2M_1: begin
                if(ir[6] == 1'b1)   result[7:0] <= operand1[31:24];
                else                result[7:0] <= operand1[15:8];
                // CCR: no change
            end
            `ALU_MOVEP_R2M_2: begin
                if(ir[6] == 1'b1)   result[7:0] <= operand1[23:16];
                else                result[7:0] <= operand1[7:0];
                // CCR: no change
            end
            `ALU_MOVEP_R2M_3: begin
                result[7:0] <= operand1[15:8];
                // CCR: no change
            end
            `ALU_MOVEP_R2M_4: begin
                result[7:0] <= operand1[7:0];
                // CCR: no change
            end

            `ALU_SIGN_EXTEND: begin
                // move operand1 with sign-extension to result
                if(size[1] == 1'b1) begin
                    result <= { {16{operand1[15]}}, operand1[15:0] };
                end
                else begin
                    result <= operand1;
                end
                // CCR: no change
            end

            `ALU_ARITHMETIC_LOGIC: begin
                
                result <= result_blocking;

                // Z
                sr[2] <= `Z;
                // N
                sr[3] <= `Rm;

                // CMPI,CMPM,CMP
                if(decoder_alu_reg[5]) begin
                    // C,V
                    sr[0] <= (`Sm & ~`Dm) | (`Rm & ~`Dm) | (`Sm & `Rm);
                    sr[1] <= (~`Sm & `Dm & ~`Rm) | (`Sm & ~`Dm & `Rm);
                    // X not affected
                end
                // ADDI,ADD to mem,ADD to Dn,ADDQ
                else if(decoder_alu_reg[3]) begin
                    // C,X,V
                    sr[0] <= (`Sm & `Dm) | (~`Rm & `Dm) | (`Sm & ~`Rm);
                    sr[4] <= (`Sm & `Dm) | (~`Rm & `Dm) | (`Sm & ~`Rm); //=ccr[0];
                    sr[1] <= (`Sm & `Dm & ~`Rm) | (~`Sm & ~`Dm & `Rm);
                end
                // SUBI,SUB to mem,SUB to Dn,SUBQ
                else if(decoder_alu_reg[4]) begin
                    // C,X,V
                    sr[0] <= (`Sm & ~`Dm) | (`Rm & ~`Dm) | (`Sm & `Rm);
                    sr[4] <= (`Sm & ~`Dm) | (`Rm & ~`Dm) | (`Sm & `Rm); //=ccr[0];
                    sr[1] <= (~`Sm & `Dm & ~`Rm) | (`Sm & ~`Dm & `Rm);
                end
                // ANDI,EORI,ORI,EOR,OR to mem,AND to mem,OR to Dn,AND to Dn
                else begin
                    // C,V
                    sr[0] <= 1'b0;
                    sr[1] <= 1'b0;
                    // X not affected
                end
            end
            
            `ALU_ABCD_SBCD_ADDX_SUBX_prepare: begin
                result <= result_blocking;
            end
            
            `ALU_ABCD_SBCD_ADDX_SUBX: begin
                // ABCD
                if( ir[14:12] == 3'b100) begin
                    result <= result_ABCD2;

                    // C
                    sr[0] <= (result_ABCD2[19:14] > 6'd9) ? 1'b1 : 1'b0;
                    // X = C
                    sr[4] <= (result_ABCD2[19:14] > 6'd9) ? 1'b1 : 1'b0;
                    
                    // V
                    sr[1] <= (result_ABCD2[30] == 1'b0 && result_ABCD2[7] == 1'b1) ? 1'b1 : 1'b0;
                end
                // SBCD
                else if( ir[14:12] == 3'b000 ) begin
                    result <= result_SBCD2;

                    // C
                    sr[0] <= (result_SBCD2[19:14] < 6'd32) ? 1'b1 : 1'b0;
                    // X = C
                    sr[4] <= (result_SBCD2[19:14] < 6'd32) ? 1'b1 : 1'b0;
                    
                    // V
                    sr[1] <= (result_SBCD2[30] == 1'b1 && result_SBCD2[7] == 1'b0) ? 1'b1 : 1'b0;
                end
                // ADDX
                else if( ir[14:12] == 3'b101 ) begin
                    result <= result_blocking;
                    
                    // C,X,V
                    sr[0] <= (`Sm & `Dm) | (~`Rm & `Dm) | (`Sm & ~`Rm);
                    sr[4] <= (`Sm & `Dm) | (~`Rm & `Dm) | (`Sm & ~`Rm); //=ccr[0];
                    sr[1] <= (`Sm & `Dm & ~`Rm) | (~`Sm & ~`Dm & `Rm);
                end
                // SUBX
                else if( ir[14:12] == 3'b001 ) begin
                    result[31:0] <= result_blocking;
                    
                    // C,X,V
                    sr[0] <= (`Sm & ~`Dm) | (`Rm & ~`Dm) | (`Sm & `Rm);
                    sr[4] <= (`Sm & ~`Dm) | (`Rm & ~`Dm) | (`Sm & `Rm); //=ccr[0];
                    sr[1] <= (~`Sm & `Dm & ~`Rm) | (`Sm & ~`Dm & `Rm);
                end
                
                // Z
                sr[2] <= sr[2] & `Z;
                // N
                sr[3] <= `Rm;
            end
            
            `ALU_ASL_LSL_ROL_ROXL_ASR_LSR_ROR_ROXR_prepare: begin
                // 32-bit load even for 8-bit and 16-bit operations
                // The extra bits will be anyway discarded during register / memory write
                result[31:0] <= result_blocking;
                
                // V cleared
                sr[1] <= 1'b0;
                // C for ROXL,ROXR: set to X
                if(decoder_alu_reg[11] | decoder_alu_reg[15]) begin
                    sr[0] <= sr[4];
                end
                else begin
                    // C cleared
                    sr[0] <= 1'b0;
                end

                // N set
                sr[3] <= `Rm;
                // Z set
                sr[2] <= `Z;
            end 
            
            `ALU_ASL_LSL_ROL_ROXL_ASR_LSR_ROR_ROXR: begin
                // ASL / LSL / ROL / ROXL
                if (decoder_alu_reg[8] | decoder_alu_reg[9] | decoder_alu_reg[10] | decoder_alu_reg[11]) begin
                    result[31:0] <= result_blocking;

                    sr[0] <= `Dm; // C for ASL / LSL / ROL / ROXL
                    if (decoder_alu_reg[8])
                        sr[1] <= (sr[1] == 1'b0)? (`Rm != `Dm) : 1'b1; // V for ASL
                    else
                        sr[1] <= 1'b0; // V for LSL / ROL / ROXL
                   
                    if (!decoder_alu_reg[10]) sr[4] <= `Dm; // X for ASL / LSL / ROXL
                end
                // ASR / LSR / ROR / ROXR
                else begin
                    result[31:0] <= result_blocking;
                    sr[0] <= operand1[0]; // C for ASR / LSR / ROR / ROXR
                    sr[1] <= 1'b0;        // V for ASR / LSR / ROR / ROXR
                    if (!decoder_alu_reg[14]) sr[4] <= operand1[0]; // X for ASR / LSR / ROXR
                end

                // N set
                sr[3] <= `Rm;
                // Z set
                sr[2] <= `Z;
            end
    
    
            `ALU_MOVE: begin
                result <= result_blocking;

                // X not affected
                // C cleared
                sr[0] <= 1'b0;
                // V cleared
                sr[1] <= 1'b0;

                // N set
                sr[3] <= `Rm;
                // Z set
                sr[2] <= `Z;
            end
    
            `ALU_ADDA_SUBA_CMPA_ADDQ_SUBQ: begin
                // ADDA: 1101
                // CMPA: 1011
                // SUBA: 1001
                // ADDQ,SUBQ: 0101 xxx0,1
                // operation requires that operand2 was sign extended
                
                result[31:0] <= result_blocking;
                
                // for CMPA
                if( ir[15:12] == 4'b1011 ) begin
                    // Z
                    sr[2] <= `Z;
                    // N
                    sr[3] <= `Rm;

                    // C,V
                    sr[0] <= (`Sm & ~`Dm) | (`Rm & ~`Dm) | (`Sm & `Rm);
                    sr[1] <= (~`Sm & `Dm & ~`Rm) | (`Sm & ~`Dm & `Rm);
                    // X not affected
                end
                // for ADDA,SUBA,ADDQ,SUBQ: ccr not affected
            end

            `ALU_CHK: begin
                result <= result_blocking;
                
                // undocumented behavior: Z flag, see 68knotes.txt
                //sr[2] <= (operand1[15:0] == 16'b0) ? 1'b1 : 1'b0;
                // undocumented behavior: C,V flags, see 68knotes.txt
                //sr[0] <= 1'b0;
                //sr[1] <= 1'b0;
                
                // C,X,V
                //    sr[0] <= (`Sm & ~`Dm) | (`Rm & ~`Dm) | (`Sm & `Rm);
                //    sr[4] <= (`Sm & ~`Dm) | (`Rm & ~`Dm) | (`Sm & `Rm); //=ccr[0];
                //    sr[1] <= (~`Sm & `Dm & ~`Rm) | (`Sm & ~`Dm & `Rm);
                // +: 0-1,    0-0=0, 1-1=0
                // -: 0-0=1,  1-0,   1-1=1
                // operand1 - operand2 > 0
                if( operand1[15:0] != operand2[15:0] && ((~`Dm & `Sm) | (~`Dm & ~`Sm & ~`Rm) | (`Dm & `Sm & ~`Rm)) == 1'b1 ) begin
                    // clear N
                    sr[3] <= 1'b0;
                    alu_signal <= 1'b1;
                end
                // operand1 < 0
                else if( operand1[15] == 1'b1 ) begin
                    // set N
                    sr[3] <= 1'b1;
                    alu_signal <= 1'b1;
                end
                // no trap
                else begin
                    // N undefined: not affected
                    alu_signal <= 1'b0;
                end

                // X not affected
            end
            
            `ALU_MULS_MULU_DIVS_DIVU: begin

                // division by 0
                if(ir[15:12] == 4'b1000 && operand2[15:0] == 16'b0) begin
                    // X not affected
                    // C cleared
                    sr[0] <= 1'b0;
                    // V,Z,N undefined: cleared
                    sr[1] <= 1'b0;
                    sr[2] <= 1'b0;
                    sr[3] <= 1'b0;

                    // set trap
                    alu_signal <= 1'b1;
                end
                // division in idle state
                else if(ir[15:12] == 4'b1000 && div_count == 5'd0) begin
                    alu_signal <= 1'b0;
                end
                // division overflow: divu, divs
                else if(ir[15:12] == 4'b1000 && div_overflow == 1'b1) begin
                    // X not affected
                    // C cleared
                    sr[0] <= 1'b0;
                    // V set
                    sr[1] <= 1'b1;
                    // Z,N undefined: cleared and set
                    sr[2] <= 1'b0;
                    sr[3] <= 1'b1;

                    // set trap
                    alu_signal <= 1'b1;
                end
                // division
                else if( ir[15:12] == 4'b1000 ) begin
                    result[31:0] <= {div_remainder, div_quotient};
                    
                    // X not affected
                    // C cleared
                    sr[0] <= 1'b0;
                    // V cleared
                    sr[1] <= 1'b0;
                    // Z
                    sr[2] <= (div_quotient == 16'b0);
                    // N
                    sr[3] <= (div_quotient[15] == 1'b1);

                    // set trap
                    alu_signal <= 1'b0;
                end
                // multiplication
                else if( ir[15:12] == 4'b1100 ) begin
                    result[31:0] <= mult_result[31:0];

                    // X not affected
                    // C cleared
                    sr[0] <= 1'b0;
                    // V cleared
                    sr[1] <= 1'b0;
                    // Z
                    sr[2] <= (mult_result[31:0] == 32'b0);
                    // N
                    sr[3] <= (mult_result[31] == 1'b1);

                    // set trap
                    alu_signal <= 1'b0;
                end
            end

            `ALU_BCHG_BCLR_BSET_BTST: begin // 97 LE
                // byte
                if( ir[5:3] != 3'b000 ) begin
                    sr[2] <= result_BITS8_val;
                    result <= result_BITS8;
                end
                // long
                else if( ir[5:3] == 3'b000 ) begin
                    sr[2] <= result_BITS32_val;
                    result <= result_BITS32;
                end

                // C,V,N,X not affected
            end
            
            `ALU_TAS: begin
                result[7:0] <= { 1'b1, operand1[6:0] };

                // X not affected
                // C cleared
                sr[0] <= 1'b0;
                // V cleared
                sr[1] <= 1'b0;

                // N set
                sr[3] <= (operand1[7] == 1'b1);
                // Z set
                sr[2] <= (operand1[7:0] == 8'b0);
            end


            `ALU_NEGX_CLR_NEG_NOT_NBCD_SWAP_EXT: begin
                // NEGX / CLR / NEG / NOT
                // Optimization thanks to Frederic Requin
                if ((ir[11:8] == 4'b0000) || (ir[11:8] == 4'b0010) || (ir[11:8] == 4'b0100) || (ir[11:8] == 4'b0110))
                    result <= result_blocking;
                // NBCD
                else if( ir[11:6] == 6'b1000_00 ) begin
                    result <= result_blocking;
                    
                    //V undefined: unchanged
                    //Z
                    sr[2] <= sr[2] & `Z;
                    //C,X
                    sr[0] <= (operand1[7:0] == 8'd0 && sr[4] == 1'b0) ? 1'b0 : 1'b1;
                    sr[4] <= (operand1[7:0] == 8'd0 && sr[4] == 1'b0) ? 1'b0 : 1'b1; //=C
                end
                // SWAP
                else if( ir[11:6] == 6'b1000_01 ) result <= result_blocking;
                // EXT byte to word
                else if( ir[11:6] == 6'b1000_10 ) result <= result_blocking;
                // EXT word to long
                else if( ir[11:6] == 6'b1000_11 ) result <= result_blocking;

                // N set if negative else clear
                sr[3] <= `Rm;

                // CLR,NOT,SWAP,EXT
                if( ir[11:8] == 4'b0010 || ir[11:8] == 4'b0110 || ir[11:6] == 6'b1000_01 || ir[11:7] == 5'b1000_1 ) begin
                    // X not affected
                    // C,V cleared
                    sr[0] <= 1'b0;
                    sr[1] <= 1'b0;
                    // Z set
                    sr[2] <= `Z;
                end
                // NEGX
                else if( ir[11:8] == 4'b0000 ) begin
                    // C set if borrow
                    sr[0] <= `Dm | `Rm;
                    // X=C
                    sr[4] <= `Dm | `Rm;
                    // V set if overflow
                    sr[1] <= `Dm & `Rm;
                    // Z cleared if nonzero else unchanged
                    sr[2] <= sr[2] & `Z;
                end
                // NEG
                else if( ir[11:8] == 4'b0100 ) begin
                    // C clear if zero else set
                    sr[0] <= `Dm | `Rm;
                    // X=C
                    sr[4] <= `Dm | `Rm;
                    // V set if overflow
                    sr[1] <= `Dm & `Rm;
                    // Z set if zero else clear
                    sr[2] <= `Z;
                end
            end


            `ALU_SIMPLE_LONG_ADD: begin
                result <= operand1[31:0] + operand2[31:0];

                // CCR not affected
            end

            `ALU_SIMPLE_LONG_SUB: begin
                result <= operand1[31:0] - operand2[31:0];

                // CCR not affected
            end

            `ALU_MOVE_TO_CCR_SR_RTE_RTR_STOP_LOGIC_TO_CCR_SR: begin

                // MOVE TO SR,RTE,STOP,ORI to SR,ANDI to SR,EORI to SR
                if(decoder_alu_reg[16]) sr <= { operand1[15], 1'b0, operand1[13], 2'b0, operand1[10:8], 3'b0, operand1[4:0] };
                // MOVE TO CCR,RTR,ORI to CCR,ANDI to CCR,EORI to CCR
                else                    sr <= { sr[15:8], 3'b0, operand1[4:0] };
            end

            `ALU_SIMPLE_MOVE: begin
                result <= operand1;
                
                // CCR not affected
            end
            
            `ALU_LINK_MOVE: begin
                if(ir[3:0] == 3'b111) begin
                    result <= operand1 - 32'd4;
                end
                else begin
                    result <= operand1;
                end
                
                // CCR not affected
            end

        endcase
    end
end

endmodule


