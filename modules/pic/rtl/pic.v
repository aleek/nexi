/*
 * Interrupt controller.
 * The priority functionality assumes, that the interrupt generator
 * will not undrive its irq pin unless it is told to.
 */
module nexi_pic(
	/* syscon signals */
	clk_i,
	rst_ni,

	/* wishbone bus signals */
	we_i,
	stb_i,
	cyc_i,
	addr_i,
	data_i,

	ack_o,
	data_o,

	/* input interrupts from clients */
	int_irq_i,

	/* output interrupt to CPU's */
	irq_o,
);

parameter N_CPU = 1;
parameter N_INT_IRQ = 4;


/* ports */
input						clk_i;
input						rst_ni;

input 						we_i;
input 						stb_i; /* a.k.a. chip select */
input 						cyc_i;
input [2:0] 				addr_i;
input [7:0] 				data_i;

output reg 					ack_o;
output reg [7:0] 			data_o;
output reg					irq_o;

input [N_INT_IRQ-1:0] int_irq_i;

output reg [2:0] irq_o [N_CPU-1:0];

/* internal registers, available via wishbone */
reg [15:0] version_r = 16'h0001;
reg [15:0] pic_control_r;
reg [15:0] pic_status_r;
reg [15:0] vector_ack_r;
reg [15:0] eoi_r;
/* Map of external irq register
 * 
 *|15 14 13 12 11 10  9  8  7  6  5  4  3  2  1  0|
 *| M| A|        |  PRIO  |        VECTOR         |
 *
 * M      - mask.
 *          0 - unmasked (can be triggered)
 *          1 - masked
 *
 * A      - activity - the irq is currently being serviced
 * PRIO   - priority in m68k nomenclature
 *          0 - lowest priority
 *          ...
 *          7 - highest priority
 *
 * VECTOR - custom value that is written to VECTOR_ACK register,
 *          when interrupt is triggered
 */
`define IRQ_REG_M 16'h8000
`define IRQ_REG_A 16'b4000
`define IRQ_REG_PRIO 16'h0700
`define IRQ_REG_VECTOR 16'h00FF

reg [15:0] int_irq_regs [0:N_EXT_IRQ-1];

wire [N_INT_IRQ-1:0] int_irqs_with_mask;

/*
 * To speed up things, AND the incoming interupt
 * with it's mask value.
 */
generate
	genvar i;
	for(i=0;i<N_INT_IRQ; i=i+1) begin
		assign int_irqs_with_mask[i] = int_irq_i[i] && ~int_irq_regs[i][15];
	end
endgenerate

reg [2:0] int_state;
`define S_INT_IDLE 0
`define S_INT_FIND_MOST_IMPORTANT_IRQ 1

reg [7:0] int_vector;
reg [N_INT_IRQ-1:0] copied_irqs;
always @(posedge cli_i)
begin
	if(~rst_ni) begin
		int_state <= S_INT_IDLE;
	case(int_state):
		S_INT_IDLE: begin
			if(int_irqs_with_mask) begin
				copied_irqs <= int_irqs_with_mask;
				int_state <= S_INT_COMPUTE_PRIO;
			end
		end
		S_INT_FIND_MOST_IMPORTANT_IRQ: begin
			if(copied_irqs[0] = 1'b1) begin
				int_vector <= int_irq_regs[0][7:0];
				if( copied_irqs & 4'b1110) begin 
					int_state <= S_INT_FIND_MOST_IMPORTANT_IRQ
					copied_irqs <= copied_irqs & 4'b1110;
				end else begin
					int_state <= S_INT_TRIGGER_INT;
				end
			end else if(copied_irqs[1] = 1'b1) begin
				int_vector <= int_irq_regs[1][7:0];
				if( copied_irqs & 4'b1101) begin 
					int_state <= S_INT_FIND_MOST_IMPORTANT_IRQ
					copied_irqs <= copied_irqs & 4'b1101;
				end else begin
					int_state <= S_INT_TRIGGER_INT;
				end
			end else if(copied_irqs[2] = 1'b1) begin
				int_vector <= int_irq_regs[2][7:0];
				if( copied_irqs & 4'b1011) begin 
					int_state <= S_INT_FIND_MOST_IMPORTANT_IRQ
					copied_irqs <= copied_irqs & 4'b1011;
				end else begin
					int_state <= S_INT_TRIGGER_INT;
				end
			end else if(copied_irqs[3] = 1'b1) begin
				int_vector <= int_irq_regs[4][7:0];
				if( copied_irqs & 4'b0111) begin 
					int_state <= S_INT_FIND_MOST_IMPORTANT_IRQ
					copied_irqs <= copied_irqs & 4'b1110;
				end else begin
					int_state <= S_INT_TRIGGER_INT;
				end
			end



