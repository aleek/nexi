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
`timescale 1ns/1ns

module tb_m68k_ram_uart;
	reg clk;
	reg rst_n;

	/* m68k <=> arbiter connections */
	wire [31:0] ao_addr;
	wire [31:0] ao_data_out;
	wire [31:0] ao_data_in;
	wire  [3:0] ao_sel;
	wire        ao_cyc;
	wire        ao_stb; //chip select
	wire        ao_we;
	wire        ao_ack;
	wire        ao_err;
	wire        ao_rty;

	/* ram <=> arbiter connections */
	wire [31:0] ram_addr;
	wire [31:0] ram_data_out;
	wire [31:0] ram_data_in;
	wire  [3:0] ram_sel;
	wire        ram_cyc;
	wire        ram_stb; //chip select
	wire        ram_we;
	wire        ram_ack;

	/* ram <=> arbiter connections */
	wire [31:0] uart_addr;
	wire [31:0] uart_data_out;
	wire [31:0] uart_data_in;
	wire  [3:0] uart_sel;
	wire        uart_cyc;
	wire        uart_stb; //chip select
	wire        uart_we;
	wire        uart_ack;
	wire        uart_err;
	wire        uart_rty;

	ao68000 ao68000_m(
		.CLK_I(clk),
		.reset_n(rst_n),
		.CYC_O(ao_cyc),
		.ADR_O(ao_addr[31:2]),
		.DAT_O(ao_data_out),
		.DAT_I(ao_data_in),
		.SEL_O(ao_sel),
		.STB_O(ao_stb),
		.WE_O(ao_we),

		.ACK_I(ao_ack),
		.ERR_I(ao_err),
		.RTY_I(ao_rty),

		.SGL_O(),
		.BLK_O(),
		.RMW_O(),

		.CTI_O(),
		.BTE_O(),

		.fc_o(),

		.ipl_i(),
		.reset_o(),
		.blocked_o()
	);
	assign ao_addr[1:0] = 2'b00;

	wb_ram #(32,24,4) wb_ram_m(
		.clk(clk),

		.adr_i(ram_addr[23:0]),
		.dat_i(ram_data_in),
		.dat_o(ram_data_out),
		.we_i(ram_we),
		.sel_i(ram_sel),
		.stb_i(ram_stb),
		.ack_o(ram_ack),
		.cyc_i(ram_cyc)
	);

	wire uart_pin;
	nexi_uart_16550a_wb uart1 (
		.clk_i(clk),
		.rst_ni(rst_n),

		.we_i(uart_we),
		.stb_i(uart_stb),
		.cyc_i(uart_cyc),
		.addr_i(uart_addr[2:0]),
		.data_i(uart_data_in),
		.sel_i(uart_sel),

		.ack_o(uart_ack),
		.data_o(uart_data_out),
		.irq_o(),
		.rx_pin(uart_pin), //loopback
		.tx_pin(uart_pin)
	);

	arbiter_1m_2s arbiter(
		.m_addr_i(ao_addr),
		.m_data_i(ao_data_out),
		.m_data_o(ao_data_in),
		.m_cyc_i(ao_cyc),
		.m_sel_i(ao_sel),
		.m_stb_i(ao_stb),
		.m_we_i(ao_we),
		.m_ack_o(ao_ack),
		.m_err_o(ao_err),
		.m_rty_o(ao_rty),

	/* slave one */
		.s0_addr_o(ram_addr[30:0]),
		.s0_data_o(ram_data_in),
		.s0_data_i(ram_data_out),
		.s0_cyc_o(ram_cyc),
		.s0_sel_o(ram_sel),
		.s0_stb_o(ram_stb),
		.s0_we_o(ram_we),
		.s0_ack_i(ram_ack),
		.s0_err_i(),
		.s0_rty_i(),

	/* slave two */
		.s1_addr_o(uart_addr[30:0]),
		.s1_data_o(uart_data_in),
		.s1_data_i(uart_data_out),
		.s1_cyc_o(uart_cyc),
		.s1_sel_o(uart_sel),
		.s1_stb_o(uart_stb),
		.s1_we_o(uart_we),
		.s1_ack_i(uart_ack),
		.s1_err_i(),
		.s1_rty_i()
	);


	initial begin
		rst_n = 1'b0;
		//$dumpfile("m68k_linux.vcd");
		//$dumpvars;
		$readmemh( "/home/aleek/src/m68k/nexi/m68klinux.vmem", wb_ram_m.mem);
		//$readmemh( "/home/aleek/src/m68k/nexi/sw/uart_test.vmem", wb_ram_m.mem);
		#80;
		rst_n = 1'b1;
		#100000000;
		$finish;
	end

	initial begin
		clk = 1'b1;
		forever #5 clk = ~clk;
	end

endmodule
