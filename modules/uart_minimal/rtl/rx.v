module nexi_uart_rx(
	input clk_16x_bps,	/* this clock must be 8 times faster than  */
	input rst_n,		/* negated reset */
	input rx_pin,		/* rx pin of uart transciever */
	input read_ack,		/* master has read the data */
	output [7:0] data,	/**/
	output data_ready	/* the data is ready */
);

reg [7:0] rxdata;
reg [3:0] cnt;
reg r1,r2,r3,start,rxbit,rxdone;
reg rx_sync1, rx_sync2, rx_m, rd_ack_sync1, rd_ack_sync2;
reg [3:0] bcnt;

assign data = rxdata;
assign data_ready = rxdone;

/*
 * This block compares the three samples from rx_pin.
 * The ourput (rxbit) is the same as two out of three values
 */
always @(*)
begin
	case ({r1,r2,r3})
		3'b000: rxbit=0;
		3'b001: rxbit=0;
		3'b010: rxbit=0;
		3'b011: rxbit=1;
		3'b100: rxbit=0;
		3'b101: rxbit=1;
		3'b110: rxbit=1;
		3'b111: rxbit=1;
	endcase
end

/*
 * This block performs synchronization
 */
always @(posedge clk_16x_bps)
begin
	rx_sync1 <= rx_pin;
	rx_sync2 <= rx_sync1;
	rx_m <= rx_sync2;
	rd_ack_sync1 <= read_ack;
	rd_ack_sync2 <= rd_ack_sync1;
end

always @(posedge clk_16x_bps)
begin
	if(~rst_n)
	begin
		start  <= 1'b0;
		rxdone <= 1'b0;
		rxdata <= 8'd0;
	end
	else
	begin
		if(rxdone)
		begin
			if(rd_ack_sync2) rxdone <= 1'b0;

			if(rx_m & ~rx_sync2 & ~start)
			begin
				start <= 1'b1;
				cnt   <= 4'd15;
				bcnt  <= 4'd0;
			end

			if(start)
			begin
				/* sampling the input */
				if(cnt == 5'd11) r3 <= rx_sync2;
				if(cnt == 5'd8)  r2 <= rx_sync2;
				if(cnt == 5'd4)  r1 <= rx_sync2;
				if(cnt) 
				begin
					cnt <= cnt-1;
				end else begin
					/* writing sampled data into the register */
					cnt <= 4'd15;
					rxdata <= {rxbit,rxdata[7:1]};
					if(bcnt<8) 
					begin
						bcnt <= bcnt + 1;
						end else begin
						start <= 1'b0;
						rxdone <= 1'b1;
					end
				end
			end
		end
	end
end
endmodule

