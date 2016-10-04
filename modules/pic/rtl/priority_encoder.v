
module priority_encoder(
	input enable_i,
	input [7:0] encoder_i,
	output wire [2:0] binary_o,
	output reg output_valid
);

assign output_valid = |encoder_i;

assign binary_o = ( (!enable_i) ? 0 : (
	encoder_i[7] ? 7 :
	encoder_i[6] ? 6 :
	encoder_i[5] ? 5 :
	encoder_i[4] ? 4 :
	encoder_i[3] ? 3 :
	encoder_i[2] ? 2 :
	encoder_i[1] ? 1 : 0);

endmodule
