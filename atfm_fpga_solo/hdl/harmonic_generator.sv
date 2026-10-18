`default_nettype none
module harmonic_generator
#(
    parameter MAX_HARMONIC = 10,
    parameter DATA_WIDTH      = 32,
    parameter DUTY_COUNT      = 8000, //12.5kHz
    parameter CORDIC_NUM_ITER = 16 //cordic module takes CORDIC_NUM_ITER + 1 number of cycles to finish
) (
    input wire          clk,
    input wire          rst,
    input wire signed [WIDTH-1:0] angle,
    output logic signed [MAX_HARMONIC-1:0] [WIDTH-1:0] cos, // Output cosine for [1, MAX_HARMONIC]
    output logic signed [MAX_HARMONIC-1:0] [WIDTH-1:0] sin, // Output sine.
    output logic data_valid_out
);
    generate
        // creates 10 parallel multipliers at compile time (before synthesis)
        for (genvar i = 0; i < MAX_HARMONIC + 1; i++) begin : 
            assign angle_n_arr = (i + 1)* angle;
            cordic_cossin #(.WIDTH(DATA_WIDTH), .NUM_ITERATIONS(CORDIC_NUM_ITER)) 
            cordic_harmonic_n (
                .clk(clk),
                .rst(rst), 
                .angle(angle_n_arr[i]), //
                .cos(cos[i-1]),
                .sin(sin[i-1])
            );
        end
    endgenerate

    logic [$clog2(CORDIC_NUM_ITER+1) - 1: 0] cordic_iter_counter;

    always_ff @(posedge_clk) begin
        if (rst) begin
            cos <= 0;
            sin <= 0;
            data_valid_out <= 0;
            cordic_iter_counter <= 0;
        end
        else begin
            if (cordic_iter_counter == CORDIC_NUM_ITER) begin
                cordic_iter_counter <= 0; // not - 1 because 1 + NUM_ITER cycles
                data_valid_out <= 0;
            end
            else begin 
                cordic_iter_counter <= cordic_iter_counter + 1;
                data_valid_out <= 1;
            end
        end
    end

endmodule

`default_nettype wire
