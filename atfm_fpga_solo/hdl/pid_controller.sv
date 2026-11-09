// `default_nettype none

// module pid_controller #(
//     GAIN_DATA_WIDTH = 32,
//     SIG_DATA_WIDTH = 14,
//     FRAC_WIDTH = 16 // for Q16.16
// ) (
//     input wire          clk,
//     input wire          rst,
//     input wire          data_valid_in,
//     input wire signed [SIG_DATA_WIDTH - 1:0] inp_sig,
//     input wire signed [SIG_DATA_WIDTH - 1:0] ref_sig,
//     input wire signed [GAIN_DATA_WIDTH - 1:0] Kp,
//     input wire signed [GAIN_DATA_WIDTH - 1:0] Ki,
//     input wire signed [GAIN_DATA_WIDTH - 1:0] Kd,

//     output logic signed [SIG_DATA_WIDTH - 1:0] out_sig,
//     output logic        sat_hi,       // output clamped at max (2^ (SIG_DATA_WIDTH - 1)- 1)
//     output logic        sat_lo,        // output clamped at min (-1 * 2^ (SIG_DATA_WIDTH - 1))
//     output logic data_valid_out,
//     output logic busy
// );
//     logic accept_data;
//     assign accept_data = data_valid_in && !busy;

//     // 1. Calculate error = velocity
//     logic signed [SIG_DATA_WIDTH : 0] vel, vel_d; // vel[n] = ref_sig[n] - inp_sig[n]; vel_d[n] = vel[n-1] (latched)
//     assign vel = ref_sig - inp_sig; // current error

//     localparam ALPHA_DIV_FACTOR = 3; // A = >> 3 = 0.125x
//     // scale up by DERIV_FRAC_BITS to get better accuracy
//     localparam DERIV_FRAC_BITS   = 5;                 // fractional bits held in the state
//     logic signed [SIG_DATA_WIDTH + 1 + DERIV_FRAC_BITS: 0] deriv_vel; // need extra bit to do vel[n] - vel[n-1] = vel - vel_d
//     assign deriv_vel = vel - vel_d;

//     logic signed [SIG_DATA_WIDTH + 1 + DERIV_FRAC_BITS: 0] deriv_scaled, deriv_vel_filt; // running sum of vel_filt + A*(vel - vel_filt)
//     assign deriv_scaled = deriv_vel <<< DERIV_FRAC_BITS;


//     always_ff @(posedge clk) begin
//         if (rst) begin
//             // smoothed_vel  <= '0;
//             vel_d               <= '0;
//             deriv_vel_filt      <= '0;
//         end else if (accept_data) begin
//             //LPF filtering
//             deriv_vel_filt <= deriv_vel_filt + ( (deriv_scaled - deriv_vel_filt) >>> ALPHA_DIV_FACTOR ) ; //
//             // d_prod <= (deriv_vel_filt + (1 <<< (DERIV_FRAC_BITS-1)));
//             vel_d <= vel;               //prev error
//         end
//     end

//     // 2. Calculate P, I, D products
//     localparam int PROD_WIDTH = SIG_DATA_WIDTH + 1 + GAIN_DATA_WIDTH;    // widest product (48 bits)
//     logic signed [PROD_WIDTH - 1:0] p_prod, i_prod, d_prod;

//     always_ff @(posedge clk) begin
//         if (rst) begin
//             p_prod <= '0;
//             i_prod <= '0;
//             d_prod <= '0;
//             busy <= 1'b0;
//         end else if (accept_data) begin
//             busy <= 1'b1;
//             p_prod <= vel  * Kp;
//             i_prod <= vel  * Ki; // do i need smoothed error for integrator
//             // d_prod <= (deriv_vel_filt >>> DERIV_FRAC_BITS) * Kd;
//             d_prod <= ((deriv_vel_filt + (1 <<< (DERIV_FRAC_BITS-1))) >>> DERIV_FRAC_BITS) * Kd; //need to understand
//         end else busy <= 1'b0;
//     end

//     // 3. Calculate full P, I, D terms

//     // Output max & min (for integrator clamping)
//     localparam logic signed [SIG_DATA_WIDTH - 1:0] OUT_MAX = {1'b0, {(SIG_DATA_WIDTH-1){1'b1}}};
//     localparam logic signed [SIG_DATA_WIDTH - 1:0] OUT_MIN = {1'b1, {(SIG_DATA_WIDTH-1){1'b0}}};

//     //Integrator max & min
//     // localparam logic signed [PROD_WIDTH-1:0] I_MAX = PROD_WIDTH'(longint'(OUT_MAX) <<< FRAC_WIDTH); //OUT_WIDTH by spread over FRAC_WIDTH addl bits
//     // localparam logic signed [PROD_WIDTH-1:0] I_MIN = PROD_WIDTH'(longint'(OUT_MIN) <<< FRAC_WIDTH); //longint is 8 bytes = 64 bits

//     localparam logic signed [PROD_WIDTH-1:0] I_MAX = (PROD_WIDTH'(OUT_MAX) <<< FRAC_WIDTH) / 10; // |T_pid,i| <= 0.1 * |T_pid,max|
//     localparam logic signed [PROD_WIDTH-1:0] I_MIN = -I_MAX; //

//     logic signed [PROD_WIDTH - 1 : 0]   p_term, d_term;
//     logic signed [PROD_WIDTH : 0]     i_next;
//     logic signed [PROD_WIDTH - 1 : 0]   i_current;
//     assign i_next = (PROD_WIDTH+1)'(i_current) + (PROD_WIDTH+1)'(i_prod); //used below; casting to higher bitwidth for signed addn

//     logic signed [PROD_WIDTH+2:0] pid_sum, unbounded_pid_sum; //room for two additions
//     // TRUE output:
//     assign unbounded_pid_sum = (p_prod >>> FRAC_WIDTH) + (i_current >>> FRAC_WIDTH) + (d_prod >>> FRAC_WIDTH);

//     logic non_pos_i_prod, i_clamp;
//     assign non_pos_i_prod = i_prod[PROD_WIDTH - 1]; //error_sign

//     logic sat_hi_current, sat_lo_current;
//     assign sat_hi_current = (pid_sum > OUT_MAX);
//     assign sat_lo_current = (pid_sum < OUT_MIN);
//     // assign i_clamp = (sat_hi_current && (i_prod > 0)) || (sat_lo_current && (i_prod < 0));
//     // assign i_clamp = (sat_hi_current && !non_pos_i_prod && (i_prod != '0)) || (sat_lo_current && non_pos_i_prod);
//     // logic signed [PROD_WIDTH+2:0] pid_sum;

//     assign i_clamp = ((unbounded_pid_sum > OUT_MAX) && (i_prod > 0)) || ((unbounded_pid_sum < OUT_MIN) && (i_prod < 0));

//     logic signed [PROD_WIDTH-1:0] i_bounded;   // value i_current will take this sample

//     always_comb begin
//         if (i_clamp)               i_bounded = i_current;   // frozen
//         else if (i_next > I_MAX)   i_bounded = I_MAX;
//         else if (i_next < I_MIN)   i_bounded = I_MIN;
//         else                       i_bounded = i_next[PROD_WIDTH-1:0];
//     end

//     assign pid_sum = (p_prod >>> FRAC_WIDTH) + (i_bounded >>> FRAC_WIDTH) + (d_prod >>> FRAC_WIDTH);


//     always_ff @(posedge clk) begin
//         if (rst) begin
//             i_current <= '0;
//             p_term <= '0;
//             d_term <= '0;
//         end else if (accept_data) begin
//             p_term <= p_prod >>> FRAC_WIDTH; //for probing
//             d_term <= d_prod >>> FRAC_WIDTH; //for probing
//             i_current <= i_bounded;
//             // if (!i_clamp) begin
//             //     // clamp integrator to the output range
//             //     if (i_next > I_MAX)
//             //         i_current <= I_MAX;
//             //     else if (i_next < I_MIN)
//             //         i_current <= I_MIN;
//             //     else
//             //         i_current <= (PROD_WIDTH+1)'(i_current) + (PROD_WIDTH+1)'(i_prod);
//             // end
//         end
//     end

//     // 4. Calculate P + I + D sum, output clamp

//     always_ff @(posedge clk) begin
//         if (rst) begin
//             out_sig    <= '0;
//             sat_hi <= 1'b0;
//             sat_lo <= 1'b0;
//             data_valid_out <= 1'b0;
//         end else if (accept_data) begin
//             data_valid_out <= 1'b1;
//             if (pid_sum > OUT_MAX) begin
//                 out_sig    <= OUT_MAX;
//                 sat_hi <= 1'b1;
//                 sat_lo <= 1'b0;
//             end else if (pid_sum < OUT_MIN) begin
//                 out_sig    <= OUT_MIN;
//                 sat_hi <= 1'b0;
//                 sat_lo <= 1'b1;
//             end else begin
//                 out_sig    <= pid_sum;
//                 sat_hi <= 1'b0;
//                 sat_lo <= 1'b0;
//             end
//         end else data_valid_out <= 1'b0;
//     end
//     // // Proportional path logic
//     // assign p_term_full = vel * reg_kp;
//     // assign p_term = p_term_full >>> 16; // Shift back to align with fractional part

//     // // Anti-windup logic snippet

//     // always_ff @(posedge clk) begin
//     //     if (!output_saturated || (error_sign != output_sign)) begin
//     //         i_state <= i_state + (signed_velor * reg_ki);
//     //     end
//     // end



// endmodule
// `default_nettype wire
