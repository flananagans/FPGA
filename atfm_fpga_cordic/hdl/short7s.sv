`default_nettype none

/* displays a 16-bit value on a 4-digit 7-segment display */
module short7s #(parameter PERIOD = 32'd100000) (
    input wire clk,
    input wire [15:0] num,
    output logic [3:0] anode,
    output logic [6:0] cathode);

    logic [6:0] not_cathode;
    logic [3:0] bto7s_num;
    logic [31:0] count;
    logic [1:0] active_digit;

    always_ff @(posedge clk)begin
        if (count >= PERIOD) begin
            count <= 0;
            active_digit <= active_digit + 1;
        end else begin
            count <= count + 1;
        end
    end

    always_comb begin
        case (active_digit)
            2'd0 : begin
                bto7s_num = num[3:0];
                anode = 4'b1110;
            end
            2'd1 : begin
                bto7s_num = num[7:4];
                anode = 4'b1101;
            end
            2'd2 : begin
                bto7s_num = num[11:8];
                anode = 4'b1011;
            end
            2'd3 : begin
                bto7s_num = num[15:12];
                anode = 4'b0111;
            end
            default : begin
                bto7s_num = num[3:0];
                anode = 4'b1111;
            end
        endcase
    end

    bto7s bto7s_internal(
        .x(bto7s_num[3:0]),
        .s(not_cathode)
    );

    assign cathode = ~not_cathode;

endmodule