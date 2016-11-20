module nexi_uart_clocks(
	input clk,
	output clk_tx,
	output clk_rx
);
parameter N=1;
parameter K=1;

reg [N-1:0] acc = 0;
reg [3:0] cnt = 0;
reg clk_1_16 = 0;

always @(clk)
begin
	acc <= acc+K;
end

assign clk_rx = acc[N-1];

always @(posedge clk_rx)
begin
	if(cnt < 4'd7) cnt <= cnt+1;
	else
	begin
		cnt <= 0;
		clk_1_16 <= ~clk_1_16;
	end
end

assign clk_tx = clk_1_16;

endmodule
