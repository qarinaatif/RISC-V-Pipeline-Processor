module sram_top #(
    parameter NUM_WMASKS = 4,
    parameter DATA_WIDTH = 32,
    parameter ADDR_WIDTH = 28,
    parameter RAM_DEPTH = 1 << ADDR_WIDTH,
    parameter IZERO = 0,  // binary / Initial RAM with zeros (has priority over INITFILE)
    parameter DELAY = 3,
    parameter IFILE = ""
) (
    input clk,
        reset,
        we,
        [ADDR_WIDTH - 1: 0] addr,
        [DATA_WIDTH - 1: 0] data_i,
        [NUM_WMASKS - 1: 0] wmask,
    output reg [DATA_WIDTH - 1: 0] data_o
);
integer i;
reg [DATA_WIDTH-1:0]    mem [0:RAM_DEPTH-1];
initial
    if (IZERO)
        for (i = 0; i < RAM_DEPTH; i = i + 1)
            mem[i] = {DATA_WIDTH{1'b0}};
    else
        if (IFILE != "") $readmemh(IFILE, mem);

    // Memory Write Block Port
    // Write Operation: When we = 1
    always@(negedge clk)
    begin: MEM_WRITE
        if (we && !reset) begin
            if (wmask[0])
                mem[addr][7:0] = data_i[7:0];
            if (wmask[1])
                mem[addr][15:8] = data_i[15:8];
            if (wmask[2])
                mem[addr][23:16] = data_i[23:16];
            if (wmask[3])
                mem[addr][31:24] = data_i[31:24];
    end
end

// Memory Read Block Port
// Read Operation: When we = 0
always@(negedge clk)
begin: MEM_READ
    if (!we && !reset)
       data_o <= #(DELAY) mem[addr];
end
endmodule