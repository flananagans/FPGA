`default_nettype none

/*
Given an input angle in the range -2^(WIDTH-1) to 2^(WIDTH-1)-1
(corresponding to -180 to 180 degrees), outputs the cosine and sine
of that angle as signed integers in the range -2^(WIDTH - 1) to 2^(WIDTH - 1).
*/
module cordic_cossin #(
    parameter WIDTH = 16, // Bit width of the input and output.
    parameter NUM_ITERATIONS=16 // Number of CORDIC iterations to perform.
) (
    input wire clk, // System clock.
    input wire signed [WIDTH-1:0] angle, // Input angle.
    output logic signed [WIDTH-1:0] cos, // Output cosine.
    output logic signed [WIDTH-1:0] sin // Output sine.
);

    localparam real PI = 3.14159265358979323846;

    function automatic real get_cordic_scaling(int iterations);
        real factor = 1.0;
        for (int i = 0; i < iterations; i++) begin
            factor = factor * $cos($atan(0.5**i));
        end
        return factor;
    endfunction

    function automatic logic signed [WIDTH-1:0] get_fixed_angle(int i);
        real fixed_angle_tan = 0.5**(real'(i));
        real out = $atan(fixed_angle_tan) / (2.0 * PI) * (2.0**WIDTH);
        return signed'(WIDTH'(int'(out)));
    endfunction 

    function automatic logic signed [WIDTH-1:0] trim_overflow_bit(logic signed [WIDTH:0] inp);
        unique case (inp[WIDTH:WIDTH-1])
            2'b01:   return {1'b0, {(WIDTH-1){1'b1}}}; // Positive overflow: clamp to max positive
            2'b10:   return {1'b1, {(WIDTH-1){1'b0}}}; // Negative overflow: clamp to max negative
            default: return inp[WIDTH-1:0];            // No overflow (00 or 11): truncate and return
        endcase
    endfunction

    localparam real SCALING_FACTOR_REAL = get_cordic_scaling(100);
    
    /* need 1 extra bit on x_pipe and y_pipe to avoid overflow/underflow
    when sin/cos are about 1 or -1*/
    localparam logic signed [WIDTH:0] X_INIT = (WIDTH + 1)'(longint'(SCALING_FACTOR_REAL * 2.0**(real'(WIDTH) - 1.0)));
    localparam logic signed [WIDTH:0] Y_INIT = 0;
    logic signed [WIDTH:0] x_pipe [0:NUM_ITERATIONS];
    logic signed [WIDTH:0] y_pipe [0:NUM_ITERATIONS];
    logic x_flip_pipe [0:NUM_ITERATIONS];
    logic signed [WIDTH-1:0] total_angle_pipe [0:NUM_ITERATIONS];
    logic signed [WIDTH-1:0] desired_angle_pipe [0:NUM_ITERATIONS];
    

    always_ff @(posedge clk) begin
        x_pipe[0] <= X_INIT;
        y_pipe[0] <= Y_INIT;
        total_angle_pipe[0] <= 0;
        unique case (angle[WIDTH-1:WIDTH-2])
            2'b00, 2'b11 : begin
                desired_angle_pipe[0] <= angle;
                x_flip_pipe[0] <= 1'b0;
            end
            2'b01, 2'b10 : begin
                desired_angle_pipe[0] <= (1 << (WIDTH - 1)) - angle;
                x_flip_pipe[0] <= 1'b1;
            end
        endcase
    end

    // some logic to trim the extra bit off x and y, and unflip the cosine of angles in 2nd and 3rd quadrants
    always_comb begin
        cos = trim_overflow_bit(
            x_flip_pipe[NUM_ITERATIONS]
            ? -x_pipe[NUM_ITERATIONS]
            : x_pipe[NUM_ITERATIONS]
        );
        sin = trim_overflow_bit(y_pipe[NUM_ITERATIONS]);
    end


    generate
        genvar i;
        for (i = 0; i < NUM_ITERATIONS; i++) begin : cordic_pipeline
            always_ff @(posedge clk) begin

                if (total_angle_pipe[i] < desired_angle_pipe[i] ) begin
                    x_pipe[i + 1] <= x_pipe[i] - (y_pipe[i] >>> i);
                    y_pipe[i + 1] <= y_pipe[i] + (x_pipe[i] >>> i);
                    total_angle_pipe[i + 1] <= total_angle_pipe[i] + get_fixed_angle(i);
                end else begin
                    x_pipe[i + 1] <= x_pipe[i] + (y_pipe[i] >>> i);
                    y_pipe[i + 1] <= y_pipe[i] - (x_pipe[i] >>> i);
                    total_angle_pipe[i + 1] <= total_angle_pipe[i] - get_fixed_angle(i);
                end
                desired_angle_pipe[i + 1] <= desired_angle_pipe[i];
                x_flip_pipe[i + 1] <= x_flip_pipe[i];
            end
        end
    endgenerate

endmodule
`default_nettype wire
