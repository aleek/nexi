/* 
 * Copyright 2016, Aleksander Dutkowski, aleksander@dutkowski.me. All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without modification, are
 * permitted provided that the following conditions are met:
 *
 *  1. Redistributions of source code must retain the above copyright notice, this list of
 *     conditions and the following disclaimer.
 *
 *  2. Redistributions in binary form must reproduce the above copyright notice, this list
 *     of conditions and the following disclaimer in the documentation and/or other materials
 *     provided with the distribution.
 *
 * THIS SOFTWARE IS PROVIDED BY THE AUTHOR ``AS IS'' AND ANY EXPRESS OR IMPLIED
 * WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND
 * FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE AUTHOR OR
 * CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
 * SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON
 * ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING
 * NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF
 * ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */
`timescale 10ns/1ns

module tb_m68k_p2p_ram;
	reg clk;
	reg rst_n;
	wire cyc;
	wire [31:0] addr;
	wire [31:0] data_out;
	wire [31:0] data_in;
	wire [3:0] sel;
	wire stb;
	wire we;
	wire ack;
	wire err;
	wire rty;
	wire sgl;
	wire blk;
	wire rmw;
	wire [2:0] cti;
	wire [1:0] bte;
	wire [2:0] fc;
	wire [2:0] ipl;
	wire reset_output;
	wire blocked_output;


	ao68000 ao68000_m(
		.CLK_I(clk),
		.reset_n(~rst_n),
		.CYC_O(cyc),
		.ADR_O(addr[31:2]),
		.DAT_O(data_out),
		.DAT_I(data_in),
		.SEL_O(sel),
		.STB_O(stb),
		.WE_O(we),

		.ACK_I(ack),
		.ERR_I(err),
		.RTY_I(rty),

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

	wb_ram #(32,20,4) wb_ram_m(
		.clk(clk),
		.adr_i(addr[19:0]),
		.dat_i(data_out),
		.dat_o(data_in),
		.we_i(we),
		.sel_i(sel),
		.stb_i(stb),
		.ack_o(ack),
		.cyc_i(cyc)
	);

	assign addr[1:0] = 2'b00;

	initial begin
		rst_n = 1'b1;
		$dumpfile("output.vcd");
		$dumpvars;
		$readmemh( "./m68k_initial_ram.vmem", wb_ram_m.mem);
		#10;
		rst_n = 1'b0;
		#3000;
		$finish;
	end

	initial begin
		clk = 1'b0;
		forever #5 clk = ~clk;
	end


endmodule
