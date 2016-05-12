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

module tb_generic_sync_ram;
	reg clk;
	reg [7:0] address;
	reg [7:0] data_in;
	wire [7:0] data_out;
	reg [7:0] data_out_r;
	reg cs;
	reg we;
	reg oe;

	generic_sync_mem mem
	(
		.clk(clk),
		.address(address),
		.data_in(data_in),
		.data_out(data_out),
		.cs(cs),
		.we(we),
		.oe(oe)
	);

	initial begin
		clk = 1'b1;
		forever #5 clk = ~clk;
	end

	initial begin
		$dumpfile("tb_generic_sync_ram.vcd");
		$dumpvars;
		#10;

		cs = 1'b1;
		we = 1'b1;
		oe = 1'b0;
		data_in = 8'hff;
		address = 8'h00;
		#10;

		cs = 1'b1;
		we = 1'b1;
		oe = 1'b0;
		data_in = 8'hbb;
		address = 8'h01;
		#10;

		cs = 1'b1;
		we = 1'b1;
		oe = 1'b0;
		data_in = 8'hcc;
		address = 8'h02;
		#10;

		cs = 1'b1;
		we = 1'b1;
		oe = 1'b0;
		data_in = 8'hdd;
		address = 8'h03;
		#10;

		cs = 1'b1;
		we = 1'b0;
		oe = 1'b1;
		address = 8'h00;
		#10;

		cs = 1'b1;
		we = 1'b0;
		oe = 1'b1;
		address = 8'h01;
		#10;

		cs = 1'b1;
		we = 1'b0;
		oe = 1'b1;
		address = 8'h02;
		#10;

		cs = 1'b1;
		we = 1'b0;
		oe = 1'b1;
		address = 8'h03;
		#10;
		$finish;
	end
endmodule

