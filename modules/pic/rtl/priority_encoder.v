
module priority_encoder(
	input enable_i,
	input [7:0] priorities_i,
	output wire [2:0] binary_o,
	output wire output_valid
);

assign output_valid = |priorities_i;

assign binary_o = ( (!enable_i) ? 0 : (
	priorities_i[7] ? 7 :
	priorities_i[6] ? 6 :
	priorities_i[5] ? 5 :
	priorities_i[4] ? 4 :
	priorities_i[3] ? 3 :
	priorities_i[2] ? 2 :
	priorities_i[1] ? 1 : 0));

endmodule
