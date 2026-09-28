`default_nettype none



/*
* Learns a disturbance signal for a motor given an encoder position and a velocity command. 
*/
module cogging_estimator #(parameter
    int NUM_HARMONICS, // Number of harmonics to estimate.
    int TEETH_PER_REVOLUTION, // Number of motor phases.
    int WIDTH, // Bit-width of fixed-point decimal calculations.
    int POS_WIDTH, // Bit-width of the encoder reading.
    
    /* # of bits (out of WIDTH) dedicated to the fractional component
    for fixed-point calculations. */
    int FRACTION_BITS, 

    /* How many clock cycles between each new position sample.
    This should be greater than FRACTION_BITS + NUM_HARMONICS,
    since it takes FRACTION_BITS clock cycles for a new result
    to appear at the output of the cordic_cossin module
    and NUM_HARMONICS clock cycles to add together each harmonic.

    The second problem could probably be significantly mitigated
    by using a binary tree sort of combinational structure to add
    together the harmonics, rather than sequential logic. */
    int CLK_CYCLES_PER_SAMPLE,

    int INPUT_CLK_FREQ, // System clock frequency.
    
    /* Alpha for the EMA filter used to smooth out velocity error.
    Interally, this is converted to a fixed-point decimal. */
    real EMA_ALPHA,

    /* Learning rate for the Widrow-Hoff estimator.
    Internally, this is converted to a fixed-point decimal. */
    real LEARNING_RATE
) (
    input wire clk, // System clock.
    input wire rst,

    /* Encoder reading. The lowest possible value corresponds to -180 degrees,
    the highest possible value corresponds to +180 degrees. */
    input wire signed [POS_WIDTH-1:0] pos, 

    // Velocity command as a fixed-point number with FRACTION_BITS bits.
    input wire signed [WIDTH-1:0] vel_command_fxp,

    // Estimated disturbance signal.
    output logic signed [WIDTH-1:0] cogging_amt_fxp_out
);

    typedef logic signed [WIDTH-1:0] my_signed_int_t;

    function automatic my_signed_int_t real_to_signed_fxp(real num_in);
        return my_signed_int_t'(real'(2.0**FRACTION_BITS) * num_in);
    endfunction

    function automatic logic [WIDTH-1:0] fxp_multiply(logic [WIDTH-1:0] a, logic [WIDTH-1:0] b);
        logic [WIDTH * 2 - 1:0] intermediate = (WIDTH * 2)'(a) * (WIDTH * 2)'(b);
        return (WIDTH)'(intermediate >>> FRACTION_BITS);
    endfunction

    function automatic logic signed [WIDTH-1:0] fxp_signed_multiply(logic signed [WIDTH-1:0] a, logic signed [WIDTH-1:0] b);
        logic signed [WIDTH * 2 - 1:0] intermediate = (WIDTH * 2)'(a) * (WIDTH * 2)'(b);
        return signed'((WIDTH)'(intermediate >>> FRACTION_BITS));
    endfunction

    function automatic logic signed [WIDTH-1:0] abs(logic signed [WIDTH-1:0] num);
        return num[WIDTH-1] ? -num : num;
    endfunction

    localparam logic signed [WIDTH-1:0] ema_alpha_fxp = real_to_signed_fxp(EMA_ALPHA);
    localparam logic signed [WIDTH-1:0] learning_rate_fxp = real_to_signed_fxp(LEARNING_RATE);

    logic signed [WIDTH-1:0] cos_coefficients_fxp [NUM_HARMONICS-1:0];
    logic signed [WIDTH-1:0] sin_coefficients_fxp [NUM_HARMONICS-1:0];

    logic signed [NUM_HARMONICS-1:0][WIDTH-1:0] cogging_amt_fxp_adder_queue;
    logic signed [WIDTH-1:0] cogging_amt_fxp_total = '0;
    logic signed [WIDTH-1:0] cogging_amt_fxp_out_intermediate = '0;
    assign cogging_amt_fxp_out = cogging_amt_fxp_out_intermediate;

    logic is_vel_estimate_new = '0;
    logic signed [WIDTH-1:0] vel_error_fxp = '0;
    logic signed [WIDTH-1:0] vel_estimate_fxp;
    assign vel_estimate_fxp[FRACTION_BITS-1:0] = '0;
    velocity_estimator #(
        .INPUT_WIDTH(POS_WIDTH),
        .OUTPUT_WIDTH(WIDTH - FRACTION_BITS),
        .CLK_CYCLES_PER_SAMPLE(CLK_CYCLES_PER_SAMPLE),
        .INPUT_CLK_FREQ(INPUT_CLK_FREQ)
    ) vel_estimator(
        .clk(clk),
        .rst(1'b0),
        .pos(pos),
        .velocity(vel_estimate_fxp[WIDTH-1:FRACTION_BITS]),
        .new_data(is_vel_estimate_new)
    );

    logic signed [WIDTH-1:0] learning_rate_times_vel_error_fxp;
    assign learning_rate_times_vel_error_fxp = fxp_signed_multiply(learning_rate_fxp, vel_error_fxp);

    logic signed [WIDTH-1:0] cos_reference_fxp [NUM_HARMONICS-1:0];
    logic signed [WIDTH-1:0] sin_reference_fxp [NUM_HARMONICS-1:0];
    logic signed [POS_WIDTH-1:0] scaled_pos [NUM_HARMONICS-1:0];

    // sum up terms of fourier series and put on output
    generate
        genvar i;
        for (i = 0; i < NUM_HARMONICS; i++) begin
            logic signed [FRACTION_BITS-1:0] cos_intermediate; // to allow for signed integer width casting
            logic signed [FRACTION_BITS-1:-0] sin_intermediate; // ^^^
            assign cos_reference_fxp[i] = WIDTH'(cos_intermediate);
            assign sin_reference_fxp[i] = WIDTH'(sin_intermediate);
            assign scaled_pos[i] = pos * signed'(POS_WIDTH'((i + 1) * TEETH_PER_REVOLUTION));
            cordic_cossin #(.WIDTH(FRACTION_BITS), .NUM_ITERATIONS(FRACTION_BITS)) cordic(
                .clk(clk),
                .angle(
                    /* verilator lint_off WIDTHEXPAND */
                    (POS_WIDTH > FRACTION_BITS) ? FRACTION_BITS'( scaled_pos[i] >>> (POS_WIDTH - FRACTION_BITS) )
                    : FRACTION_BITS'(scaled_pos[i]) <<< (FRACTION_BITS - POS_WIDTH)
                    /* verilator lint_on WIDTHEXPAND */
                ),
                .cos(cos_intermediate),
                .sin(sin_intermediate)
            );
            
            always_ff @(posedge clk) begin
                if (is_vel_estimate_new) begin
                    cos_coefficients_fxp[i] <= cos_coefficients_fxp[i] + fxp_signed_multiply(
                        learning_rate_times_vel_error_fxp, cos_reference_fxp[i]
                    );
                    sin_coefficients_fxp[i] <= sin_coefficients_fxp[i] + fxp_signed_multiply(
                        learning_rate_times_vel_error_fxp, sin_reference_fxp[i]
                    );
                    cogging_amt_fxp_adder_queue[i] <= fxp_signed_multiply(cos_coefficients_fxp[i], cos_reference_fxp[i])
                        + fxp_signed_multiply(sin_coefficients_fxp[i], sin_reference_fxp[i]);
                end
            end
        end
    endgenerate

    always_ff @(posedge clk) begin
        // if we have a new velocity estimate, reset the cogging amt estimate
        if (is_vel_estimate_new) begin
            vel_error_fxp <= vel_error_fxp + fxp_signed_multiply(
                (vel_command_fxp - vel_estimate_fxp) - vel_error_fxp,
                ema_alpha_fxp
            );
            cogging_amt_fxp_total <= 0;

        // do nothing if the adder queue is empty
        end else if (cogging_amt_fxp_adder_queue[0] == ~WIDTH'(0)) begin 

        // if the adder queue has one element, add it to the total and simultaneously put the result on the output 
        end else if (cogging_amt_fxp_adder_queue[1] == ~WIDTH'(0) ) begin
            cogging_amt_fxp_out_intermediate <= cogging_amt_fxp_total + cogging_amt_fxp_adder_queue[0];
            cogging_amt_fxp_adder_queue <= {~WIDTH'(0), cogging_amt_fxp_adder_queue[NUM_HARMONICS-1:1]};
            cogging_amt_fxp_total <= cogging_amt_fxp_total + cogging_amt_fxp_adder_queue[0];

        // if the adder queue has more than one element, just add it normally
        end else begin
            cogging_amt_fxp_adder_queue <= {~WIDTH'(0), cogging_amt_fxp_adder_queue[NUM_HARMONICS-1:1]};
            cogging_amt_fxp_total <= cogging_amt_fxp_total + cogging_amt_fxp_adder_queue[0];
        end
    end

endmodule
