`default_nettype none
module harmonic_generator #(
    parameter MAX_HARMONIC    = 10,
    parameter DATA_WIDTH      = 16,
    parameter CORDIC_NUM_ITER = 16  // latency = CORDIC_NUM_ITER + 1 cycles
) (
    input  wire clk,
    input  wire rst,
    input  wire data_valid_in,
    input  wire signed [DATA_WIDTH-1:0] angle,
    output logic signed [MAX_HARMONIC-1:0][DATA_WIDTH-1:0] cos_arr_out, // [i] = cos((i+1)*angle)
    output logic signed [MAX_HARMONIC-1:0][DATA_WIDTH-1:0] sin_arr_out,
    output logic data_valid_out
);
    logic [MAX_HARMONIC-1:0] valid_arr;

    generate
        for (genvar i = 0; i < MAX_HARMONIC; i++) begin : gen_harmonics
            logic signed [DATA_WIDTH-1:0] angle_n;
            assign angle_n = (i + 1) * angle; // wraps naturally, which is correct for angles

            cordic_cossin #(.WIDTH(DATA_WIDTH), .NUM_ITERATIONS(CORDIC_NUM_ITER)) 
            nth_cordic (
                .clk(clk), .rst(rst),
                .data_angle_valid_in(data_valid_in),
                .angle(angle_n),
                .cos(cos_arr_out[i]),
                .sin(sin_arr_out[i]),
                .data_cossin_valid_out(valid_arr[i]) // all cordic modules should have same latency
            );
        end
    endgenerate

    assign data_valid_out = &valid_arr; // does bitwise ANDing of all valid_out bits
endmodule
`default_nettype wire
