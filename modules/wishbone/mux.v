
module multiplexer_2(in1, in2, in3, in4, sel, out);

parameter IO_WIDTH = 0;

input [IO_WIDTH:0] in1;
input [IO_WIDTH:0] in2;
input [IO_WIDTH:0] in3;
input [IO_WIDTH:0] in4;

input [1:0] sel;

output out;

always @(*)

