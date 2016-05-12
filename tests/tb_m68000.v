`timescale 10ns / 1ns

module tb_ao68000;

// inputs
reg clk;
reg rst_n;
reg [31:0] data_in;
reg ack;
wire err;
wire rty;
wire [2:0] ipl;

// outputs
wire cyc;
wire [31:2] addr;
wire [31:0] data_out;
wire [3:0] sel;
wire stb;
wire we;
wire sgl;
wire blk;
wire rmw;
wire [2:0] cti;
wire [1:0] bte;
wire [2:0] fc;
wire reset_output;
wire blocked_output;

ao68000 ao68000_m(
	.CLK_I(clk),
	.reset_n(rst_n),

	.DAT_I(data_in),
	.ACK_I(ack),
	.ERR_I(err),
	.RTY_I(rty),


	.CYC_O(cyc),
	.ADR_O(addr),
	.DAT_O(data_out),
	.SEL_O(sel),
	.STB_O(stb),
	.WE_O(we),

	.SGL_O(sgl),
	.BLK_O(blk),
	.RMW_O(rmw),
	.CTI_O(cti),
	.BTE_O(bte),

	.fc_o(fc),

	.ipl_i(ipl),
	.reset_o(reset_output),
	.blocked_o(blocked_output)
);


endmodule

