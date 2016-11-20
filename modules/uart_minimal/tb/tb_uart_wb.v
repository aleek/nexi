module tb_tx;

reg clk;
reg rst_n;
reg we;
reg stb;
reg cyc;
reg [2:0] addr;
reg [7:0] data_o;
wire [7:0] data_i;
wire ack;
wire irq;
wire uart_pin;

reg [7:0] rx_data;
reg [7:0] irq_data;

nexi_uart_16550a_wb uart1 (
	.clk_i(clk),
	.rst_ni(rst_n),
	.we_i(we),
	.stb_i(stb),
	.cyc_i(cyc),
	.addr_i(addr),
	.data_i(data_o),
	.data_o(data_i),
	.ack_o(ack),
	.irq_o(irq),
	.rx_pin(uart_pin), //loopback
	.tx_pin(uart_pin)
);


initial begin
	clk = 1'b0;
	forever #1 clk = ~clk;
end

`define WB_WRITE(_addr, _data) \
	addr   <= _addr; \
	data_o <= _data; \
	stb    <= 1'b1;  \
	cyc    <= 1'b1;  \
	we     <= 1'b1;  \
	wait ( ack == 1'b1) #1; \
	addr   <= 2'b00; \
	data_o <= 8'h00; \
	stb    <= 1'b0;  \
	cyc    <= 1'b0;  \
	we     <= 1'b0;  \
	wait ( ack == 1'b0) #1;

`define WB_READ(_addr, _reg) \
	addr   <= _addr; \
	stb    <= 1'b1;  \
	cyc    <= 1'b1;  \
	we     <= 1'b0;  \
	wait ( ack == 1'b1) #1; \
	addr   <= 2'b00; \
	_reg   <= data_i;\
	stb    <= 1'b0;  \
	cyc    <= 1'b0;  \
	wait ( ack == 1'b0) #1;

initial begin
	$dumpfile("tb_uart_wb.vcd");
	$dumpvars;
	rst_n  <= 1'b0;
	we     <= 1'b0;
	stb    <= 1'b0;
	cyc    <= 1'b0;
	addr   <= 2'b00;
	data_o <= 8'h00;
#30; // wait for tx to init
	rst_n  <= 1'b1;
#1;
	/* enable rx interrupt */
	`WB_WRITE( 3'b010, 8'h02)
	/* send data */
	`WB_WRITE( 3'b001, 8'h55)
	/* wait for rx */
	wait (irq == 1'b1);
	`WB_READ( 3'b000, rx_data)
	$display( "Read data is %0x\n", rx_data);

	$finish;
end

endmodule
