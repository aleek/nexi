module tb_tx;

reg clk;
reg rst_n;
reg command_send;
wire tx_pin;
wire done_ack;
reg [7:0] data;

initial begin
	clk = 1'b0;
	forever #1 clk = ~clk;
end

nexi_uart_tx nexi_uart_tx_instance(
	.clk_1x_bps(clk), /* TODO change the clock */
	.rst_n(rst_n),
	.command_send(command_send),
	.tx_pin(),
	.done_ack(done_ack),
	.data(data)
);

reg data_to_transmit;

initial begin
	rst_n <= 1'b0;
	command_send <= 1'b0;
	data <= 8'h00;
	$dumpfile("tb_tx.vcd");
	$dumpvars;
	#10;
	rst_n <= 1'b1;

	data <= 8'h33;
	data_to_transmit <= 1'b1;
#2;
	wait (data_to_transmit == 1'b0) #1;

	data <= 8'hcc;
	data_to_transmit <= 1'b1;
#2;
	wait (data_to_transmit == 1'b0) #1;

	data <= 8'h11;
	data_to_transmit <= 1'b1;
#2;
	wait (data_to_transmit == 1'b0) #1;

#5
	$finish;
end

/* process transmit */
reg [3:0] txstate;
`define S_TX_IDLE     4'b0001
`define S_WAIT_TX1    4'b0010
`define S_WAIT_TX2    4'b0100
`define S_WAIT_FINISH 4'b1000
always @(posedge clk)
begin
	if(~rst_n) begin
		data_to_transmit <= 1'b0;
		txstate <= `S_TX_IDLE;
	end else begin
		case(txstate)
			`S_TX_IDLE: begin
				if(data_to_transmit) begin
					command_send <= 1'b1;
					txstate <= `S_WAIT_TX1;
				end
			end
			`S_WAIT_TX1: begin
				if(~done_ack) begin
					command_send <= 1'b0;
					txstate <= `S_WAIT_TX2;
				end
			end
			`S_WAIT_TX2: begin
				if(done_ack) begin
					txstate <= `S_WAIT_FINISH;
				end
			end
			`S_WAIT_FINISH: begin
				if(done_ack) begin
					data <= 8'h00;
					data_to_transmit <= 1'b0;
					txstate <= `S_TX_IDLE;
				end
			end
		endcase
	end
end

endmodule
