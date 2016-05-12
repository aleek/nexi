/***********************************************************************************************************************
 * Condition
 **********************************************************************************************************************/

/*! \brief Condition tests.
 *
 * The condition module implements the condition tests of the MC68000. Its inputs are the condition codes
 * and the currently selected test. The output is binary: the test is true or false. The output of the condition module
 * is an input to the microcode_branch module, that decides which microcode word to execute next.
 */
module condition(
    input [3:0] cond,
    input [7:0] ccr,
    output condition
);

wire C,V,Z,N;
assign C = ccr[0];
assign V = ccr[1];
assign Z = ccr[2];
assign N = ccr[3];

assign condition =  (cond == 4'b0000) ? 1'b1 :                              // true
                    (cond == 4'b0001) ? 1'b0 :                              // false
                    (cond == 4'b0010) ? ~C & ~Z    :                        // high
                    (cond == 4'b0011) ? C | Z :                             // low or same
                    (cond == 4'b0100) ? ~C :                                // carry clear
                    (cond == 4'b0101) ? C :                                 // carry set
                    (cond == 4'b0110) ? ~Z :                                // not equal
                    (cond == 4'b0111) ? Z :                                 // equal
                    (cond == 4'b1000) ? ~V :                                // overflow clear
                    (cond == 4'b1001) ? V :                                 // overflow set
                    (cond == 4'b1010) ? ~N :                                // plus
                    (cond == 4'b1011) ? N :                                 // minus
                    (cond == 4'b1100) ? (N & V) | (~N & ~V) :               // greater or equal
                    (cond == 4'b1101) ? (N & ~V) | (~N & V)    :            // less than
                    (cond == 4'b1110) ? (N & V & ~Z) | (~N & ~V & ~Z) :     // greater than
                    (cond == 4'b1111) ? (Z) | (N & ~V) | (~N & V) :         // less or equal
                    1'b0;
endmodule


