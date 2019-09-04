module nexi_uart_tx(
	input clk_1x_bps,
	input rst_n,
	input command_send,
	output tx_pin,
	output done_ack,
	input [7:0] data
);

reg tx_r;
reg done_r;
reg [3:0] cnt;
wire [3:0] ncnt;
reg [7:0] tx_data;
reg send_cmd,send_cmd_tmp;

assign ncnt = cnt + 1;
assign tx_pin = tx_r;
assign done_ack = done_r;

/* metastability fence */
always @(posedge clk_1x_bps)
begin
	send_cmd_tmp <= command_send;
	send_cmd <= send_cmd_tmp;
end

always @(posedge clk_1x_bps)
begin
	if(~rst_n)
	begin
		done_r	<= 1'b1;
		tx_r	<= 1'b1;
	end
	else
	begin
		if(send_cmd & done_r)
		begin
			done_r	<= 1'b0;
			cnt		<= 4'b0;
			tx_r	<= 1'b0;
			tx_data	<= data;
		end
		else
		begin
			if(~done_r)
			begin
				cnt <= ncnt;
				if(ncnt < 9)
				begin
					tx_r <= tx_data[0];
					tx_data <= {tx_data[0], tx_data[7:1]};
				end else begin
					if(ncnt == 4'd9)
					begin
						tx_r <= 1'b1;
					end else begin
						done_r <= 1'b1;
					end
				end
			end
		end
	end
end
endmodule

