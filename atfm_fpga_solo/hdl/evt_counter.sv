`default_nettype none
module evt_counter
#(
    parameter MAX_COUNT = 100,
    parameter COUNT_WIDTH = 16
    )
    (   input wire          clk,
        input wire          rst,
        input wire          evt,
        output logic[COUNT_WIDTH - 1:0]  count
    );
    always_ff @(posedge clk) begin
        if (rst) begin
            count <= 16'b0;
        end else begin
            count <= evt ? ((count == MAX_COUNT - 1) ? 0 : count + 1 ) : count;
        end
    end
endmodule
`default_nettype wire