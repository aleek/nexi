/**
 * Copyright (c) 2015-2016, Aleksander Dutkowski <aleksander@dutkowski.me>
 * All rights reserved.

 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:

 * 1. Redistributions of source code must retain the above copyright notice, this
 *    list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright notice,
 *    this list of conditions and the following disclaimer in the documentation
 *    and/or other materials provided with the distribution.

 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
 * WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 * DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR
 * ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
 * (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 * LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
 * ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
 * SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

/*
 * Module irq_priority encoder takes a matrix of interrupts, and decides which
 * irq should be processed first.
 * Number of irq inputs: <N_IRQS * N_PRIORITIES>.
 * Master module is responsible of directing each interrupt to proper line.
 *
 * If N_IRQS == 3 and N_PRIORITES == 2, irq0 and irq2 has priority0,
 * and irq1 has priority 1 then:
 *
 *            ,------------------------------------.
 * -----.     |                                    |
 * irq0 -------- irq0prio0     most_important_irq ---
 * -----'     |                                    |
 *           --- irq0prio1           output_valid ---
 * -----.     |                                    |
 * irq1 --.  --- irq1prio0                         |
 * -----' |   |                                    |
 *        `----- irq1prio1                         |
 * -----.     |                                    |
 * irq2 -------- irq2prio0                         |
 * -----'     |                                    |
 *           --- irq2prio1                         |
 *            |                                    |
 *            `------------------------------------'
 *
 * How does it work:
 *
 * 1. For every priority, it sums up all signals, and stores the result in
 * prio_sum vector
 * 2. For every priority, it chooses only one interrupt. It is the irq, that
 * will be processed, if the priority associated to it, will be the highest.
 * 3. prio_sum vector is passed to the priority encoder. It decides, which
 * interrupt level is the highest.
 * 4. The result of 3. is passed to another priority encoder, which works as
 * a one-hot-to-binary encoder. The output of this module is passed outside
 * as an active interrupt number with highest priority.
 */
 

module irq_priority_encoder(
	input clk_i,
	input rst_i,
	input [63:0] irq_matrix,
	output [2:0] most_important_irq,
	output output_valid
);

/*
 * Sum up all irq's with the same priority, in order to
 * forward the signal to the priority encoder.
 */
wire [7:0] prio_sum;
wire at_least_one_irq_active;
assign prio_sum[7] = |irq_matrix[63-:8];
assign prio_sum[6] = |irq_matrix[55-:8];
assign prio_sum[5] = |irq_matrix[47-:8];
assign prio_sum[4] = |irq_matrix[39-:8];
assign prio_sum[3] = |irq_matrix[31-:8];
assign prio_sum[2] = |irq_matrix[23-:8];
assign prio_sum[1] = |irq_matrix[15-:8];
assign prio_sum[0] = |irq_matrix[7-:8];
assign at_least_one_irq_active = |prio_sum;

/*
 * For every priority level, we must choose only one irq,
 * that will be chosen for handling.
 * The following formula is Find Leading One:
 * flo = vector AND ((~vector)+1)
 *
 * and is taken from http://www.edaboard.com/thread201958.html#post850697
 */
wire [7:0] prio_flo [0:7];
assign prio_flo[7] = irq_matrix[7] & ((~irq_matrix[7]) + 1);
assign prio_flo[6] = irq_matrix[6] & ((~irq_matrix[6]) + 1);
assign prio_flo[5] = irq_matrix[5] & ((~irq_matrix[5]) + 1);
assign prio_flo[4] = irq_matrix[4] & ((~irq_matrix[4]) + 1);
assign prio_flo[3] = irq_matrix[3] & ((~irq_matrix[3]) + 1);
assign prio_flo[2] = irq_matrix[2] & ((~irq_matrix[2]) + 1);
assign prio_flo[1] = irq_matrix[1] & ((~irq_matrix[1]) + 1);
assign prio_flo[0] = irq_matrix[0] & ((~irq_matrix[0]) + 1);

wire pe_ov;
wire [2:0]  pe_selected_prio;

/*
 * Compute priority
 */
priority_encoder pe(
	.enable_i(at_least_one_irq_active),
	.priorities_i(prio_sum),
	.binary_o(pe_selected_prio),
	.output_valid(pe_ov)
);

/*
 * One hot to binary decoder.
 */
priority_encoder one_hot_to_binary (
	.enable_i(pe_ov),
	.priorities_i(prio_flo[pe_selected_prio]),
	.binary_o(most_important_irq),
	.output_valid(output_valid)
);

endmodule
