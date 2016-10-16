/*
 * Copyright 2016, Aleksander Dutkowski <aleksander@dutkowski.me>
 */

/*
 * cpu_sel_i is the only signal, that tells cache to work.
 * If you want to limit the address region, or cpu level, you should
 * generate a sel_o signal from address lines and fc lines in M68000
 * implementation.
 */

/*
 *    ,----------.      ,----------.
 *    |   CPU    |      |    CPU   |
 *    `----------'      `----------'
 *         ||                ||
 *         ||                ||
 *         ||                ||
 *    ,----------.      ,----------.
 *    |          |      |          |
 *    |          |      |          |
 *    |  Cache   |======|   Cache  |
 *    |          |      |          |
 *    |          |      |          |
 *    `----------'      `----------'
 *         ||                ||
 *         ||                ||
 *         ||                ||
 * ======================================
 *             shared bus
 */ 
module nexi_cache
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
	output 		[DATA_WIDTH-1:0]	cpu_data_o,
	input							cpu_cyc_i,
	input							cpu_sel_i,
	input							cpu_stb_i,
	input							cpu_we_i,
	output							cpu_ack_o,
	output							cpu_err_o,
	output							cpu_rty_o,

	/* bus side - wishbone master */
	output 		[ADDR_WIDTH-1:0]	bus_addr_o,
	output 		[DATA_WIDTH-1:0]	bus_data_o,
	input		[DATA_WIDTH-1:0]	bus_data_i,
	output							bus_cyc_o,
	output							bus_sel_o,
	output							bus_stb_o,
	output							bus_we_o,
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

/*
 * Multiplexing diagram:
 * -.
 * B|                                                                      .-
 * U|    cs_i driven mux                           cs_i driven mux         |
 * S|       ,----.                                     ,----.              |C
 *  |=======|  X |=====================================| X  |==============|P
 * W|       `----'                                     `----'              |U
 * B|         ||                                         ||                |
 * -'         ||                                         ||                `-
 *            ||                                         ||
 *            ||                                         ||
 * .------------------------------------------------------------------------.
 * |    BUS wishbone                                CPU wishbone            |
 * |                                                                        |
 */

/* Wishbone slave for cache <=> cpu communication*/
wire [ADDR_WIDTH-1:0] cc_addr_w;
wire [DATA_WIDTH-1:0] cc_data_iw;
wire [DATA_WIDTH-1:0] cc_data_ow;
wire cc_cyc_w;
wire cc_sel_w;
wire cc_stb_w;
wire cc_we_w;
wire cc_ack_w;
wire cc_err_w;
wire cc_rty_w;

/* Wishbone slave for cache <=> bus communication*/
wire [ADDR_WIDTH-1:0] cb_addr_w;
wire [DATA_WIDTH-1:0] cb_data_iw;
wire [DATA_WIDTH-1:0] cb_data_ow;
wire cb_cyc_w;
wire cb_sel_w;
wire cb_stb_w;
wire cb_we_w;
wire cb_ack_w;
wire cb_err_w;
wire cb_rty_w;

nexi_cache_controller ncc (
	.cpu_addr_i(cc_addr_w),
	.cpu_data_i(cc_data_iw),
	.cpu_data_o(cc_data_ow),
	.cpu_cyc_i(cc_cyc_w),
	.cpu_sel_i(cc_sel_w),
	.cpu_stb_i(cc_stb_w),
	.cpu_we_i(cc_we_w),
	.cpu_ack_o(cc_ack_w),
	.cpu_err_o(cc_err_w),
	.cpu_rty_o(cc_rty_w),

	.bus_addr_o(cb_addr_w),
	.bus_data_o(cb_data_ow),
	.bus_data_i(cb_data_iw),
	.bus_cyc_o(cb_cyc_w),
	.bus_sel_o(cb_sel_w),
	.bus_stb_o(cb_stb_w),
	.bus_we_o(cb_we_w),
	.bus_ack_i(cb_ack_w),
	.bus_err_i(cb_err_w),
	.bus_rty_i(cb_rty_w),

	.snif_addr_i(snif_addr_i),
	.snif_data_i(snif_data_i),
	.snif_cyc_i(snif_cyc_i),
	.snif_sel_i(snif_sel_i),
	.snif_stb_i(snif_stb_i),
	.snif_we_i(snif_we_i),
	.snif_ack_i(snif_ack_i),
	.snif_err_i(snif_err_i),
	.snif_rty_i(snif_rty_i)
);

/* Depending on cpu_sel_i, we act transparent or start computing stuff */
assign cpu_addr_i = cs_i ? cc_addr_w  : bus_addr_o;
assign cpu_data_i = cs_i ? cc_data_iw : bus_data_o;
assign cpu_data_o = cs_i ? cc_data_ow : bus_data_i;
assign cpu_cyc_i  = cs_i ? cc_cyc_w   : bus_cyc_o;
assign cpu_sel_i  = cs_i ? cc_sel_w   : bus_sel_o;
assign cpu_stb_i  = cs_i ? cc_stb_w   : bus_stb_o;
assign cpu_we_i   = cs_i ? cc_we_w    : bus_we_o;
assign cpu_ack_o  = cs_i ? cc_ack_w   : bus_ack_i;
assign cpu_err_o  = cs_i ? cc_err_w   : bus_err_i;
assign cpu_rty_o  = cs_i ? cc_rty_w   : bus_rty_i;

assign bus_addr_o = cs_i ? cb_addr_w  : cpu_addr_i;
assign bus_data_o = cs_i ? cb_data_iw : cpu_data_i;
assign bus_data_i = cs_i ? cb_data_ow : cpu_data_o;
assign bus_cyc_o  = cs_i ? cb_cyc_w   : cpu_cyc_i;
assign bus_sel_o  = cs_i ? cb_sel_w   : cpu_sel_i;
assign bus_stb_o  = cs_i ? cb_stb_w   : cpu_stb_i;
assign bus_we_o   = cs_i ? cb_we_w    : cpu_we_i;
assign bus_ack_i  = cs_i ? cb_ack_w   : cpu_ack_o;
assign bus_err_i  = cs_i ? cb_err_w   : cpu_err_o;
assign bus_rty_i  = cs_i ? cb_rty_w   : cpu_rty_o;













endmodule

