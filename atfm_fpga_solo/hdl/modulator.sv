`default_nettype none
module modulator
#(
    MAX_HARMONIC = 10,
    DATA_WIDTH = 16
) (
    input wire          clk,
    input wire          rst,
    input wire          data_valid_in,
    input wire signed [MAX_HARMONIC-1:0] [DATA_WIDTH-1:0] a_values,
    input wire signed [MAX_HARMONIC-1:0] [DATA_WIDTH-1:0] b_values,
    input wire signed [MAX_HARMONIC-1:0] [DATA_WIDTH-1:0] cos_harmonics,
    input wire signed [MAX_HARMONIC-1:0] [DATA_WIDTH-1:0] sin_harmonics,
    output logic signed [DATA_WIDTH-1:0] modulator_sum_out,
    output logic data_valid_out,
    output logic busy
);

    // Expected latency (in clk cycles): CORDIC_NUM_ITER + MAX_HARMONIC + 2
    // = (CORDIC_NUM_ITER + 1) + 1 (storing after hgen_valid_out) + MAX_HARMONIC

    localparam MAC_WIDTH = 2*DATA_WIDTH + $clog2(2*MAX_HARMONIC);
    logic signed [MAX_HARMONIC-1:0] [DATA_WIDTH-1:0] a_reg;
    logic signed [MAX_HARMONIC-1:0] [DATA_WIDTH-1:0] b_reg;

    logic signed [MAX_HARMONIC-1:0] [DATA_WIDTH-1:0] cos_reg; // Output cosine for [1, MAX_HARMONIC]
    logic signed [MAX_HARMONIC-1:0] [DATA_WIDTH-1:0] sin_reg; // Output sine.
    // logic mult_acc_active;

    logic [$clog2(MAX_HARMONIC + 1)-1:0] idx;
    logic signed [MAC_WIDTH -1:0] mac_cur, mac_next;


    typedef enum logic {
        BUFFER,
        MAC
    } state_t;

    state_t mac_state;

    always_comb begin
        mac_next = mac_cur + $signed(a_reg[idx]) * $signed(cos_reg[idx])
        + $signed(b_reg[idx]) * $signed(sin_reg[idx]);
    end


    always_ff @(posedge clk) begin
        if (rst) begin
            // Outputs
            modulator_sum_out <= 0;
            data_valid_out <= 1'b0;

            // Multiply & Accum
            mac_cur <= '0;
            idx <= 0;
            mac_state <= BUFFER;

            busy <= 1'b0;
            a_reg <= 0;
            b_reg <= 0;
            cos_reg <= 0;
            sin_reg <= 0;

        end else begin
            data_valid_out <= 1'b0;
            case (mac_state)


                BUFFER: begin
                    if (data_valid_in && !busy) begin //accepting a, b values
                        a_reg <= a_values;
                        b_reg <= b_values;

                        cos_reg <= cos_harmonics;
                        sin_reg <= sin_harmonics;

                        busy <= 1'b1;
                        mac_state <= MAC;

                        //reset
                        idx <= '0;
                        mac_cur <= '0;
                    end
                end

                MAC: begin
                    if (idx == MAX_HARMONIC - 1) begin
                        modulator_sum_out <= mac_next >>> (DATA_WIDTH - 1);
                        data_valid_out    <= 1'b1;
                        busy              <= 1'b0;
                        mac_state         <= BUFFER;
                    end else begin
                        mac_cur <= mac_next;
                        idx     <= idx + 1;
                    end
                end

                default: mac_state <= BUFFER;

            endcase
        end

    end

endmodule
`default_nettype wire
