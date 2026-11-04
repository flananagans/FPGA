`default_nettype none

module pid_controller #(
    K_DATA_WIDTH = 32,
    SIG_DATA_WIDTH = 14,
    FRAC_WIDTH = 16 // for Q16.16
) (
    input wire          clk,
    input wire          rst,
    input wire          data_valid_in,
    input wire signed [SIG_DATA_WIDTH - 1:0] inp_sig,
    input wire signed [SIG_DATA_WIDTH - 1:0] ref_sig,
    input wire signed [K_DATA_WIDTH - 1:0] Kp,
    input wire signed [K_DATA_WIDTH - 1:0] Ki,
    input wire signed [K_DATA_WIDTH - 1:0] Kd,

    output logic signed [SIG_DATA_WIDTH - 1:0] out_sig,
    output logic        sat_hi,       // output clamped at max (2^ (SIG_DATA_WIDTH - 1)- 1)
    output logic        sat_lo,        // output clamped at min (-1 * 2^ (SIG_DATA_WIDTH - 1))
    output logic data_valid_out,
    output logic busy
);
    assign accept_data = data_valid_in && !busy;

    // 1. Calculate error
    logic signed [SIG_DATA_WIDTH : 0] err, err_d; // err[n] = ref_sig[n] - inp_sig[n]; err_d[n] = err[n-1] (latched)
    logic signed [SIG_DATA_WIDTH + 1: 0] deriv_err; // need extra bit to do err[n] - err[n-1] = err - err_d
    assign deriv_err = err - err_d;

    always_ff @(posedge clk) begin
        if (rst) begin
            err   <= '0;
            err_d <= '0;
        end else if (accept_data) begin
            err   <= ref_sig - inp_sig; //current error
            err_d <= err;               //prev error
        end
    end

    // 2. Calculate P, I, D products
    localparam int PROD_WIDTH = SIG_DATA_WIDTH + 1 + K_DATA_WIDTH;    // widest product (48 bits)
    logic signed [PROD_WIDTH - 1:0] p_prod, i_prod, d_prod;

    always_ff @(posedge clk) begin
        if (rst) begin
            p_prod <= '0;
            i_prod <= '0;
            d_prod <= '0;
            busy <= 1'b0;
        end else if (accept_data) begin
            busy <= 1'b1;
            p_prod <= err  * Kp;
            i_prod <= err  * Ki;
            d_prod <= deriv_err * Kd;
        end else busy <= 1'b0;
    end

    // 3. Calculate full P, I, D terms

    // Output max & min (for integrator clamping)
    localparam logic signed [SIG_DATA_WIDTH - 1:0] OUT_MAX = {1'b0, {(SIG_DATA_WIDTH-1){1'b1}}};
    localparam logic signed [SIG_DATA_WIDTH - 1:0] OUT_MIN = {1'b1, {(SIG_DATA_WIDTH-1){1'b0}}};

    localparam logic signed [PROD_WIDTH-1:0] I_MAX = PROD_WIDTH'(longint'(OUT_MAX) <<< FRAC_WIDTH); //OUT_WIDTH by spread over FRAC_WIDTH addl bits
    localparam logic signed [PROD_WIDTH-1:0] I_MIN = PROD_WIDTH'(longint'(OUT_MIN) <<< FRAC_WIDTH); //longint is 8 bytes = 64 bits

    // logic signed [PROD_WIDTH - 1 : 0]   p_term, d_term;
    logic signed [PROD_WIDTH : 0]     i_next;
    // logic signed [PROD_WIDTH - 1 : 0]   i_current;
    // assign i_next = (PROD_WIDTH+1)'(i_current) + (PROD_WIDTH+1)'(i_prod); //casting to higher bitwidth for signed addn


    logic non_pos_i_prod, i_clamp;
    assign non_pos_i_prod = i_prod[PROD_WIDTH - 1]; //error_sign
    assign i_clamp = (sat_hi && !non_pos_i_prod && (i_prod != '0)) || (sat_lo && non_pos_i_prod);

    always_ff @(posedge clk) begin
        if (rst) begin
            i_current <= '0;
            // p_term <= '0;
            // d_term <= '0;
        end else if (accept_data) begin
            // p_term <= p_prod >>> FRAC_WIDTH;
            // d_term <= d_prod >>> FRAC_WIDTH;

            if (!i_clamp) begin
                // clamp integrator to the output range
                if (i_next > I_MAX)
                    i_current <= I_MAX;
                else if (i_next < I_MIN)
                    i_current <= I_MIN;
                else
                    i_current <= (PROD_WIDTH+1)'(i_current) + (PROD_WIDTH+1)'(i_prod);
            end
        end
    end

    // 4. Calculate P + I + D sum, output clamp
    logic signed [PROD_WIDTH+2:0] pid_sum; //room for two additions

    assign pid_sum = (p_prod >>> FRAC_WIDTH) + (i_current >>> FRAC_WIDTH) + (d_prod >>> FRAC_WIDTH);

    always_ff @(posedge clk) begin
        if (rst) begin
            out_sig    <= '0;
            sat_hi <= 1'b0;
            sat_lo <= 1'b0;
            data_valid_out <= 1'b0;
        end else if (accept_data) begin
            data_valid_out <= 1'b1;
            if (pid_sum > OUT_MAX) begin
                out_sig    <= OUT_MAX;
                sat_hi <= 1'b1;
                sat_lo <= 1'b0;
            end else if (pid_sum < OUT_MIN) begin
                out_sig    <= OUT_MIN;
                sat_hi <= 1'b0;
                sat_lo <= 1'b1;
            end else begin
                out_sig    <= pid_sum;
                sat_hi <= 1'b0;
                sat_lo <= 1'b0;
            end
        end
    end
    // // Proportional path logic
    // assign p_term_full = err * reg_kp;
    // assign p_term = p_term_full >>> 16; // Shift back to align with fractional part

    // // Anti-windup logic snippet

    // always_ff @(posedge clk) begin
    //     if (!output_saturated || (error_sign != output_sign)) begin
    //         i_state <= i_state + (signed_error * reg_ki);
    //     end
    // end



endmodule
`default_nettype wire
