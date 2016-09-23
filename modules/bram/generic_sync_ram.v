module generic_sync_mem(
	clk,
	address,
	data_in,
	data_out,
	cs,
	we
);
// ----------------- params ---------------
parameter DATA_WIDTH = 8;
parameter ADDR_WIDTH = 8;
parameter RAM_DEPTH = 1 << ADDR_WIDTH;

// ----------------- i/o ----------------
input clk;
input [ADDR_WIDTH-1:0] address;
input [DATA_WIDTH-1:0] data_in;
input cs;
input we;
output reg [DATA_WIDTH-1:0] data_out;


// ---------- internal variables ----------
reg [DATA_WIDTH-1:0] mem [0:RAM_DEPTH-1];
// ----------------- code -----------------

// writing
always @ (posedge clk)
begin: MEM_WRITE
	if (cs && we) begin
		mem[address] <= data_in;
	end
end

// reading
always @ (posedge clk)
begin: MEM_READ
	if (cs) begin
		data_out <= mem[address];
	end
end

endmodule
