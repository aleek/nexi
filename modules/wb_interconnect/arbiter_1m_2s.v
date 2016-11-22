/*
 * Simple arbiter for 1 master and two slaves.
 * Before writing uber awesome n:n arbiter, I'd like,
 * to write something simple.
 *
 * Selecting the slave is done by driving MSB of addr_i.
 */

module arbiter_1m_2s
	#( parameter ADDR_WIDTH=32,
		parameter DATA_WIDTH=32
	)
(
	/* Master wishbone */
	input		[ADDR_WIDTH-1:0]	m_addr_i,
	input		[DATA_WIDTH-1:0]	m_data_i,
	output 		[DATA_WIDTH-1:0]	m_data_o,
	input							m_cyc_i,
	input					[3:0]	m_sel_i,
	input							m_stb_i,
	input							m_we_i,
	output							m_ack_o,
	output							m_err_o,
	output							m_rty_o,

	/* slave one */
	output 		[ADDR_WIDTH-2:0]	s0_addr_o,
	output 		[DATA_WIDTH-1:0]	s0_data_o,
	input		[DATA_WIDTH-1:0]	s0_data_i,
	output							s0_cyc_o,
	output					[3:0]	s0_sel_o,
	output							s0_stb_o,
	output							s0_we_o,
	input							s0_ack_i,
	input							s0_err_i,
	input							s0_rty_i,

	/* slave two */
	output 		[ADDR_WIDTH-2:0]	s1_addr_o,
	output 		[DATA_WIDTH-1:0]	s1_data_o,
	input		[DATA_WIDTH-1:0]	s1_data_i,
	output							s1_cyc_o,
	output					[3:0]	s1_sel_o,
	output							s1_stb_o,
	output							s1_we_o,
	input							s1_ack_i,
	input							s1_err_i,
	input							s1_rty_i
);

wire cs = m_addr_i[24];

assign s0_stb_o = ~cs & m_stb_i;
assign s1_stb_o = cs & m_stb_i;

assign s0_addr_o = {8'b0, m_addr_i[ADDR_WIDTH-9:0]};
assign s1_addr_o = {8'b0, m_addr_i[ADDR_WIDTH-9:0]};

assign s0_data_o = m_data_i;
assign s1_data_o = m_data_i;

assign m_data_o = cs ? s1_data_i : s0_data_i;

assign s0_cyc_o = m_cyc_i;
assign s1_cyc_o = m_cyc_i;

assign s0_sel_o = m_sel_i;
assign s1_sel_o = m_sel_i;

assign s0_we_o = m_we_i;
assign s1_we_o = m_we_i;

assign m_ack_o = cs ? s1_ack_i : s0_ack_i;
assign m_err_o = cs ? s1_err_i : s0_err_i;
assign m_rty_o = cs ? s1_rty_i : s0_rty_i;


endmodule

