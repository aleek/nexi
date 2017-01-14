/*
* https://github.com/freecores/uart16550/blob/master/rtl/verilog/uart_wb.v
*/

module nexi_uart_16550a_wb(
	clk_i,
	rst_ni,
	
	we_i,
	stb_i,
	cyc_i,
	addr_i,
	data_i,
	sel_i,

	ack_o,
	data_o,
	irq_o,

	/* uart pins */
	rx_pin,
	tx_pin
);

parameter DATA_WIDTH = 8;

/* general signals */
input						clk_i;
input 						rst_ni; /* reset with active low */

/* wishbone bus signals */
input 						we_i;
input 						stb_i; /* a.k.a. chip select */
input 						cyc_i;
input [2:0] 				addr_i;
input [31:0] 				data_i;
input [3:0]					sel_i;

output reg 					ack_o;
output reg [31:0] 			data_o;
output reg					irq_o;

/* uart pins */
input 						rx_pin;
output 						tx_pin;

/* clocks */
wire clk_rx;
wire clk_tx;
nexi_uart_clocks uart_clk(
	.clk(clk_i),
	.clk_rx(clk_rx),
	.clk_tx(clk_tx)
);

/* internal registers/wires */
`define RBR 4'b1000 /* receive buffer register */
`define THR 4'b0100 /* transmit holder register */
`define IER 4'b0010 /* interrupt enable register */
`define ISR 4'b0001 /* interrupt status register */

`define ISR_TX_IRQ 8'h01
`define ISR_RX_IRQ 8'h02

reg [7:0] rbr; /* receive buffer register */
reg [7:0] thr; /* transmit holder register */
reg [7:0] ier; /* interrupt enable register */
reg [7:0] isr; /* interrupt status register */

reg data_to_transmit;
reg command_send;
wire tx_done_ack;

/* wishbone ACK FSM */
reg [1:0] wbstate;
`define S_IDLE 0
`define S_BEGIN_CYCLE 1
`define S_CYCLE1 2
`define S_CYCLE2 3

/* register operations */
always @(posedge clk_i)
begin
	if(~rst_ni) begin
		ack_o <= 1'b0;
		wbstate <= `S_IDLE;
		data_o <= 8'h00;
	end else begin
		if(cyc_i & stb_i & ~ack_o) begin
			if(we_i) begin
				case (sel_i)
					`THR: begin
						thr <= data_i[23:16];
						data_to_transmit <= 1'b1;
					end
					`IER: ier <= data_i[15:8];
				endcase
			end
			
			case (sel_i)
				`RBR : begin data_o <= { rbr, 24'h000000}; end
				`ISR : begin data_o <= {24'h000000, isr}; isr <= 8'h00; end
			endcase
			ack_o <= 1'b1;
		end
		if(!cyc_i & !stb_i & ack_o) ack_o <= 1'b0;
	end
end

nexi_uart_tx nexi_uart_tx_instance(
	.clk_1x_bps(clk_tx), /* TODO change the clock */
	.rst_n(rst_ni),
	.command_send(command_send),
	.tx_pin(tx_pin),
	.done_ack(tx_done_ack),
	.data(thr)
);

/* process transmit */
reg [3:0] txstate;
`define S_TX_IDLE     4'b0001
`define S_WAIT_TX1    4'b0010
`define S_WAIT_TX2    4'b0100
`define S_WAIT_FINISH 4'b1000
always @(posedge clk_i)
begin
	if(~rst_ni) begin
		data_to_transmit <= 1'b0;
		txstate <= `S_TX_IDLE;
		thr <= 8'h00;
	end else begin
		case(txstate)
			`S_TX_IDLE: begin
				if(data_to_transmit) begin
					$write( "%c", thr);
					$fflush();
					command_send <= 1'b1;
					txstate <= `S_WAIT_TX1;
				end
			end
			`S_WAIT_TX1: begin
				if(~tx_done_ack) begin
					command_send <= 1'b0;
					txstate <= `S_WAIT_TX2;
				end
			end
			`S_WAIT_TX2: begin
				if(tx_done_ack) begin
					txstate <= `S_WAIT_FINISH;
				end
			end
			`S_WAIT_FINISH: begin
				if(tx_done_ack) begin
					thr <= 8'h00;
					isr <= isr | (ier & `ISR_TX_IRQ);
					data_to_transmit <= 1'b0;
					txstate <= `S_TX_IDLE;
				end
			end
		endcase
	end
end

/* process receive */
reg [1:0] rxstate;
`define S_RX_IDLE 0
`define S_RX_FINISH 1

reg data_ready;
reg rx_done_ack;
wire [7:0] rx_data_buf;

nexi_uart_rx nexi_uart_rx_instance(
	.clk_16x_bps(clk_rx),
	.rst_n(rst_ni),
	.rx_pin(rx_pin),
	.read_ack(rx_done_ack),
	.data(rx_data_buf),
	.data_ready(rx_data_ready)
);

always @(posedge clk_i)
begin
	if(~rst_ni) begin
		rx_done_ack <= 1'b0;
		rxstate <= `S_RX_IDLE;
		rbr <= 8'h00;
	end else begin 
		case(rxstate)
			`S_RX_IDLE : begin
				if(rx_data_ready) begin
					/* we don't care, if user haven't read last byte, we just
						* overwrite it. */
					rbr <= rx_data_buf;
					rx_done_ack <= 1'b1;
					rxstate <= `S_RX_FINISH;
					isr <= isr | (ier & `ISR_RX_IRQ);
				end
			end
			`S_RX_FINISH : begin
				if(~rx_data_ready) begin
					rx_done_ack <= 1'b0;
					rxstate <= `S_RX_IDLE;
				end
			end
		endcase
	end
end

/* interrupt processing */
/* TODO change to combinational model: assign irq_o <= |isr; */
always @(posedge clk_i)
begin
	if(~rst_ni) begin
		isr <= 8'h00;
		ier <= 8'h00;
	end else begin
		if(isr) begin
			irq_o <= 1'b1;
		end else begin
			irq_o <= 1'b0;
		end
	end
end

endmodule

