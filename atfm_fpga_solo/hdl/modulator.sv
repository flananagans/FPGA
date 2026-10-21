`default_nettype none
module harmonic_modulator
#(
    MAX_HARMONIC = 10,
    DATA_WIDTH = 32
) (
    input wire          clk,
    input wire          rst,
    input wire          data_valid_in,
    input wire signed [DATA_WIDTH-1:0] angle,
    input wire signed [MAX_HARMONIC-1:0] [DATA_WIDTH-1:0] a_values,
    input wire signed [MAX_HARMONIC-1:0] [DATA_WIDTH-1:0] b_values,
    output logic signed [DATA_WIDTH-1:0] modulator_sum_out,
    output logic data_valid_out,
    output logic busy
);

    logic signed [DATA_WIDTH-1:0] angle_reg;


    logic signed [MAX_HARMONIC-1:0] [DATA_WIDTH-1:0] cos_unlatched, cos_harmonics; // Output cosine for [1, MAX_HARMONIC]
    logic signed [MAX_HARMONIC-1:0] [DATA_WIDTH-1:0] sin_unlatched, sin_harmonics; // Output sine.
    logic hgen_valid_out, hgen_busy;

    logic [$clog2(MAX_HARMONIC+1) - 1:0] idx;
    logic [DATA_WIDTH-1:0] inter_sum_out;

    /* Do I need to latch angle, a_vals and b_vals into registers */
    // always_ff @(posedge clk) begin
    //     if (rst) begin
    //     end
    // end

    assign busy = hgen_busy;

    harmonic_generator #(.MAX_HARMONIC(MAX_HARMONIC), .DATA_WIDTH(DATA_WIDTH)) 
    serial_hgen (
        .clk(clk),
        .rst(rst),
        .data_valid_in(data_valid_in),
        .angle(angle),
        .cos_arr_out(cos_unlatched),
        .sin_arr_out(sin_unlatched),
        .data_valid_out(hgen_valid_out),
        .busy(hgen_busy)
    );

    always_comb begin
        if (hgen_valid_out) begin
            for (int i = 0; i < MAX_HARMONIC; i++) begin
                inter_sum_out = inter_sum_out + a_values[i] * cos_harmonics[i] + b_values[i] * sin_harmonics[i];
            end
        end
    end


    always_ff @(posedge clk) begin
        if (rst) begin
            modulator_sum_out <= 0;
            data_valid_out <= 1'b0;
            busy <= 1'b0;

            idx <= 0;
        end else begin
            data_valid_out <= 1'b0;
            if (hgen_valid_out) begin
                cos_harmonics <= cos_unlatched;
                sin_harmonics <= sin_unlatched;

                modulator_sum_out <= inter_sum_out;

                if (idx == MAX_HARMONIC - 1) begin
                    idx <= 0;
                    modulator_sum_out <= inter_sum_out;
                    data_valid_out <= 1'b1;
                end else idx <= idx + 1;
            end
        end
    end

endmodule
`default_nettype wire