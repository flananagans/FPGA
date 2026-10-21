`default_nettype none
module harmonic_generator
#(
    parameter MAX_HARMONIC = 10,
    parameter DATA_WIDTH      = 32,
    // parameter DUTY_COUNT      = 8000, //12.5kHz
    parameter CORDIC_NUM_ITER = 16 //cordic module takes CORDIC_NUM_ITER + 1 number of cycles to finish
) (
    input wire          clk,
    input wire          rst,
    input wire          data_valid_in,
    input wire signed [DATA_WIDTH-1:0] angle,
    output logic signed [MAX_HARMONIC-1:0] [DATA_WIDTH-1:0] cos_arr_out, // Output cosine for [1, MAX_HARMONIC]
    output logic signed [MAX_HARMONIC-1:0] [DATA_WIDTH-1:0] sin_arr_out, // Output sine.
    output logic data_valid_out,
    output logic busy //if angle data is already being processed (busy = 1), data_valid_in is ignored
);
    

    logic cordic_processing, cordic_valid_out;
    logic signed [DATA_WIDTH-1:0] angle_reg, cos_reg, sin_reg, nth_harmonic_angle;
    logic [$clog2(MAX_HARMONIC + 1) - 1: 0] harmonic_counter, idx; 

    //harmonic_counter is [1...MAX_HARMONIC], idx is [0...MAX_HARMONIC - 1]
    assign nth_harmonic_angle = harmonic_counter * angle_reg;

    cordic_cossin #(.WIDTH(DATA_WIDTH), .NUM_ITERATIONS(CORDIC_NUM_ITER)) 
        cordic_harmonic_n (
            .clk(clk),
            .rst(rst), 
            .data_angle_valid_in(cordic_processing),
            .angle(nth_harmonic_angle), 
            .cos(cos_reg),
            .sin(sin_reg),
            .data_cossin_valid_out(cordic_valid_out)
        );

    assign busy = cordic_processing;

    always_ff @(posedge clk) begin
        if (rst) begin
            cos <= 0;
            sin <= 0;
            data_valid_out <= 0;
            harmonic_counter <= 1;
            busy <= 0;

            cordic_processing <= 0;
            idx <= 0;
        end
        else begin
            data_valid_out <= 1'b0; // driven to 1 only if cordic_valid_out at last harmonic

            if (!cordic_processing) begin
                if (data_valid_in) begin
                    angle_reg <= angle;
                    cordic_processing <= 1'b1;
                end
            end
            else begin
                if (harmonic_counter == MAX_HARMONIC) begin
                    harmonic_counter <= 1; // not - 1 because 1 + NUM_ITER cycles
                    cordic_processing <= 1'b0;
                end
                else begin 
                    harmonic_counter <= harmonic_counter + 1;
                end
            end

            if (cordic_valid_out) begin
                cos_arr_out[idx] <= cos_reg;
                sin_arr_out[idx] <= sin_reg;
                if (idx == MAX_HARMONIC - 1) begin
                    idx <= 0;
                    data_valid_out <= 1'b1;
                end else begin
                    idx <= idx + 1;
                end
            end
        end
    end

endmodule

`default_nettype wire
