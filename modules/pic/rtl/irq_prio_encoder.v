module irq_priority_encoder(
	input clk_i,
	input rst_i,
	input [7:0] irq_matrix [0:7],
	output reg [2:0] most_important_irq,
	output reg output_valid
);

/*
 * Sum up all irq's with the same priority, in order to
 * forward the signal to the priority encoder
 */
reg [7:0] prio_sum;
reg [7:0] at_least_one_irq_active;
assign prio_sum[7] = |irq_matrix[7];
assign prio_sum[6] = |irq_matrix[6];
assign prio_sum[5] = |irq_matrix[5];
assign prio_sum[4] = |irq_matrix[4];
assign prio_sum[3] = |irq_matrix[3];
assign prio_sum[2] = |irq_matrix[2];
assign prio_sum[1] = |irq_matrix[1];
assign prio_sum[0] = |irq_matrix[0];
assign at_least_one_irq_active = |prio_sum;

/*
 * For every priority level, we must choose only one irq,
 * that will be chosen for handling.
 * The following formula is Find Leading One:
 * flo = vector AND ((~vector)+1)
 *
 * and is taken from http://www.edaboard.com/thread201958.html#post850697
 */
reg [7:0] prio_flo [0:7];
assign prio_flo[7] = irq_matrix[7] & ((~irq_matrix[7]) + 1);
assign prio_flo[6] = irq_matrix[6] & ((~irq_matrix[6]) + 1);
assign prio_flo[5] = irq_matrix[5] & ((~irq_matrix[5]) + 1);
assign prio_flo[4] = irq_matrix[4] & ((~irq_matrix[4]) + 1);
assign prio_flo[3] = irq_matrix[3] & ((~irq_matrix[3]) + 1);
assign prio_flo[2] = irq_matrix[2] & ((~irq_matrix[2]) + 1);
assign prio_flo[1] = irq_matrix[1] & ((~irq_matrix[1]) + 1);
assign prio_flo[0] = irq_matrix[0] & ((~irq_matrix[0]) + 1);

reg pe_ov;
reg [2:0]  pe_selected_prio;
priority_encoder pe(
	.enable(at_least_one_irq_active),
	.encoder_i(prio_sum),
	.binary_o(pe_selected_prio),
	.output_valid(pe_ov)
);

priority_encoder one_hot_to_binary (
	.enable(pe_ov),
	.encoder_i(prio_flo[pe_selected_prio]),
	.binary_o(irq_winner),
	.output_valid(irq_winner_valid)
);


reg state;

always @(clk_i)
begin
	if(rst_i) begin
		output_valid <= 1'b0;
		state <= 0;
	end else
		if(pe_ov) begin
			winning_irq <= prio_flo[pe_selected_prio];




