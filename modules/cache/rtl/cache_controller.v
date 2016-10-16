/*
 * Copyright 2016, Aleksander Dutkowski <aleksander@dutkowski.me>
 */

module nexi_cache_controller
	#( parameter ADDR_WIDTH=32,
		parameter DATA_WIDTH=32
	)
(
	input		clk_i,
	input		reset_ni,
	input 		cs_i,
	/* CPU side - wishbone slave */
	input		[ADDR_WIDTH-1:0]	cpu_addr_i,
	input		[DATA_WIDTH-1:0]	cpu_data_i,
	output reg	[DATA_WIDTH-1:0]	cpu_data_o,
	input							cpu_cyc_i,
	input							cpu_sel_i,
	input							cpu_stb_i,
	input							cpu_we_i,
	output reg						cpu_ack_o,
	output reg						cpu_err_o,
	output reg						cpu_rty_o,

	/* bus side - wishbone master */
	output 		[ADDR_WIDTH-1:0]	bus_addr_o,
	output 		[DATA_WIDTH-1:0]	bus_data_o,
	input		[DATA_WIDTH-1:0]	bus_data_i,
	output reg						bus_cyc_o,
	output reg						bus_sel_o,
	output reg						bus_stb_o,
	output reg						bus_we_o,
	input							bus_ack_i,
	input							bus_err_i,
	input							bus_rty_i,

	/* bus side - passive sniffer */
	input		[ADDR_WIDTH-1:0]	snif_addr_i,
	input		[DATA_WIDTH-1:0]	snif_data_i,
	input							snif_cyc_i,
	input							snif_sel_i,
	input							snif_stb_i,
	input							snif_we_i,
	input							snif_ack_i,
	input							snif_err_i,
	input							snif_rty_i

	/* Cache side*/
);


endmodule
