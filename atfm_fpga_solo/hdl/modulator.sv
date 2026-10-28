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

    logic [$clog2(MAX_HARMONIC + LOAD_MAC_DELAY + 1)-1:0] idx;
    logic signed [MAC_WIDTH -1:0] mac_cur, mac_next;


    typedef enum logic [1:0] {
        BUFFER,
        MAC,
        DONE
    } state_t;

    state_t mac_state;

    // always_comb begin
    //     mac_next = mac_cur + $signed(a_reg[idx]) * $signed(cos_reg[idx])
    //     + $signed(b_reg[idx]) * $signed(sin_reg[idx]);
    // end

    localparam LOAD_MAC_DELAY = 2;
    logic signed [DATA_WIDTH-1:0] a_temp, b_temp, cos_temp, sin_temp;
    logic signed [2*DATA_WIDTH-1:0] prod_a_temp, prod_b_temp;

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

            // LOAD Stage 1: takes one cycle after BUFFER
            a_temp   <= (idx < MAX_HARMONIC) ? a_reg[idx]   : '0;
            b_temp   <= (idx < MAX_HARMONIC) ? b_reg[idx]   : '0;
            cos_temp <= (idx < MAX_HARMONIC) ? cos_reg[idx] : '0;
            sin_temp <= (idx < MAX_HARMONIC) ? sin_reg[idx] : '0;
            // Stage 2: takes one cycle after LOAD
            prod_a_temp <= a_temp * cos_temp;
            prod_b_temp <= b_temp * sin_temp;

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
                    idx <= idx + 1;
                    //need to wait for Stage 1 and 2 to finish first
                    if (idx >= LOAD_MAC_DELAY) mac_cur <= mac_cur + prod_a_temp + prod_b_temp; // first mac_cur is garbage (not calculated yet)
                    // else if (idx == MAX_HARMONIC - 1) mac_pipe_count <= mac_pipe_count + 1;
                    // else if (mac_pipe_count == LOAD_MAC_DELAY) mac_state <= DONE;
                    if (idx == MAX_HARMONIC + LOAD_MAC_DELAY - 1) mac_state <= DONE; //idx = 11
                end

                DONE: begin
                    modulator_sum_out <= mac_cur >>> (DATA_WIDTH - 1);
                    data_valid_out    <= 1'b1;
                    busy              <= 1'b0;
                    mac_state         <= BUFFER;
                end

                default: mac_state <= BUFFER;

            endcase
        end

    end

endmodule
`default_nettype wire
