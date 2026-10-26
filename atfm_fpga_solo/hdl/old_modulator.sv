`default_nettype none
module old_modulator
#(
    MAX_HARMONIC = 10,
    DATA_WIDTH = 16
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

    // Expected latency (in clk cycles): CORDIC_NUM_ITER + MAX_HARMONIC + 2
    // = (CORDIC_NUM_ITER + 1) + 1 (storing after hgen_valid_out) + MAX_HARMONIC

    localparam MAC_WIDTH = 2*DATA_WIDTH + $clog2(2*MAX_HARMONIC);
    logic signed [DATA_WIDTH-1:0] angle_reg;
    logic signed [MAX_HARMONIC-1:0] [DATA_WIDTH-1:0] a_reg;
    logic signed [MAX_HARMONIC-1:0] [DATA_WIDTH-1:0] b_reg;

    logic signed [MAX_HARMONIC-1:0] [DATA_WIDTH-1:0] cos_unlatched, cos_harmonics; // Output cosine for [1, MAX_HARMONIC]
    logic signed [MAX_HARMONIC-1:0] [DATA_WIDTH-1:0] sin_unlatched, sin_harmonics; // Output sine.
    logic hgen_valid_out, hgen_busy, mult_acc_active;

    logic [$clog2(MAX_HARMONIC + 1)-1:0] idx;
    logic signed [MAC_WIDTH -1:0] mac_cur, mac_next;

    harmonic_generator #(.MAX_HARMONIC(MAX_HARMONIC), .DATA_WIDTH(DATA_WIDTH))
    serial_hgen (
        .clk(clk),
        .rst(rst),
        .data_valid_in(data_valid_in && !busy),
        .angle(angle),
        .cos_arr_out(cos_unlatched),
        .sin_arr_out(sin_unlatched),
        .data_valid_out(hgen_valid_out)
        // .busy(hgen_busy)
    );


    always_comb begin
        mac_next = mac_cur + $signed(a_reg[idx]) * $signed(cos_harmonics[idx])
        + $signed(b_reg[idx]) * $signed(sin_harmonics[idx]);
    end


    always_ff @(posedge clk) begin
        if (rst) begin
            // Outputs
            modulator_sum_out <= 0;
            data_valid_out <= 1'b0;

            // Multiply & Accum
            mac_cur <= '0;
            mult_acc_active <= 1'b0;
            idx <= 0;

            busy <= 1'b0;
            a_reg <= 0;
            b_reg <= 0;
        end else begin
            data_valid_out <= 1'b0;

            if (data_valid_in && !busy)begin //accepting a, b values
                a_reg <= a_values;
                b_reg <= b_values;
                busy <= 1'b1;
            end

            if (mult_acc_active) begin
                if (idx == MAX_HARMONIC - 1) begin //reset
                    busy <= 1'b0;
                    modulator_sum_out <= mac_next >>> (DATA_WIDTH - 1);
                    data_valid_out <= 1'b1;

                    idx <= 0;
                    mult_acc_active <= 1'b0;
                    mac_cur <= '0;
                end else begin
                    idx <= idx + 1;
                    mac_cur <= mac_next;
                end
            end
            else if (hgen_valid_out) begin
                cos_harmonics <= cos_unlatched;
                sin_harmonics <= sin_unlatched;

                idx <= '0;
                mac_cur <= '0;
                mult_acc_active <= 1'b1;
            end
        end
    end

endmodule
`default_nettype wire
