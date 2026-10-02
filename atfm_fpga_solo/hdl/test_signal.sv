`timescale 1ns / 1ps
`default_nettype none

module test_signal 
    import signal_pkg::*;
#(
    parameter SIGNAL_TYPE = SAWTOOTH,
    parameter DATA_WIDTH = 32,
    parameter DUTY_COUNT = 8000, //12.5 kHz
    parameter MIN_AMP = 0,
    parameter MAX_AMP = 10000,
    parameter COSSIN_NUM_ITER = 16)
    (
        input wire   clk,           // system clock (100 MHz)
        input wire   rst,           // reset signal
        // input wire   [DATA_WIDTH - 1:0] max_amp,    
        // input wire   [DATA_WIDTH - 1:0] min_amp,    
        // input wire   [DATA_WIDTH - 1:0] step_count,    
        output logic   [2*DATA_WIDTH - 1:0] val_out    //val_out is data_width long unless cossin moutput
    );
    localparam FIXED_PT_FRAC_SHIFT = 16; 
    logic [$clog2(DUTY_COUNT) - 1 : 0] duty_counter;
    logic end_half_duty;

    // logic [DATA_WIDTH-1:0] angle_in;
    logic [DATA_WIDTH-1:0] cos_out;
    logic [DATA_WIDTH-1:0] sin_out;

    wire n_cossin_trigger = (SIGNAL_TYPE != SINUSOID);

    localparam ANGLE_ACC_WIDTH       = ANGLE_BITS + FIXED_PT_FRAC_SHIFT;
    localparam [ANGLE_ACC_WIDTH-1:0] PHASE_INC_FP = (ANGLE_ACC_WIDTH'(1) << ANGLE_ACC_WIDTH) / DUTY_COUNT;

    logic [ANGLE_ACC_WIDTH-1:0] phase_acc;
    always_ff @(posedge clk) begin
        if (rst) phase_acc <= 0;
        else     phase_acc <= phase_acc + PHASE_INC_FP;     // wraps naturally = full circle
    end
    //shift back out the FIXED_PT_FRAC_SHIFT
    wire [DATA_WIDTH-1:0] angle_in = DATA_WIDTH'(phase_acc[ANGLE_ACC_WIDTH-1:FIXED_PT_FRAC_SHIFT]);

    cordic_cossin #(.WIDTH(DATA_WIDTH), .NUM_ITERATIONS(COSSIN_NUM_ITER)) 
    cordic(
        .clk(clk),
        .rst(rst || n_cossin_trigger), // if SINUSOID, should be 0
        .angle(angle_in), //
        .cos(cos_out),
        .sin(sin_out)
    );

    always_ff @(posedge clk) begin
        if (rst) begin
            duty_counter <= 0;
            end_half_duty <= 0;
            angle_in <= 0;
        end
        else if (duty_counter == DUTY_COUNT - 1) begin
                duty_counter <= 0;
                end_half_duty <= 0;
                angle_in <= angle_in + 182; //65536/360 = 182 counts = 1 radian
            end else begin
                duty_counter <= duty_counter + 1;

                if (duty_counter >= (DUTY_COUNT/2 - 1)) end_half_duty <= 1;
                else end_half_duty <= 0;
            end
    end

    localparam ACC_WIDTH     = DATA_WIDTH + FIXED_PT_FRAC_SHIFT;
    localparam RANGE     = MAX_AMP - MIN_AMP;

    // Sawtooth: MIN at count 0, MAX at count DUTY_COUNT-1 -> DUTY_COUNT-1 steps
    localparam [ACC_WIDTH-1:0] SAW_STEP_FP = (ACC_WIDTH'(RANGE) << FIXED_PT_FRAC_SHIFT) / (DUTY_COUNT - 1);

    // Triangle: half period up, half period down -> DUTY_COUNT/2 steps each way
    localparam [ACC_WIDTH-1:0] TRI_STEP_FP = (ACC_WIDTH'(RANGE) << FIXED_PT_FRAC_SHIFT) / (DUTY_COUNT / 2);

    localparam [ACC_WIDTH-1:0] MIN_FP = ACC_WIDTH'(MIN_AMP) << FIXED_PT_FRAC_SHIFT;
    localparam [ACC_WIDTH-1:0] MAX_FP = ACC_WIDTH'(MAX_AMP) << FIXED_PT_FRAC_SHIFT;

    logic [ACC_WIDTH-1:0] fixed_pt_accum;

    always_ff @(posedge clk) begin
        if (rst) begin
            fixed_pt_accum <= MIN_FP;
        end else if (duty_counter == DUTY_COUNT - 1) begin
            fixed_pt_accum <= MIN_FP;                       // restart period
        end else begin
            case (SIGNAL_TYPE)
                SAWTOOTH: fixed_pt_accum <= fixed_pt_accum + SAW_STEP_FP;
                TRIANGLE: fixed_pt_accum <= end_half_duty ? fixed_pt_accum - TRI_STEP_FP
                                            : fixed_pt_accum + TRI_STEP_FP;
                SQUARE:   fixed_pt_accum <= end_half_duty ? MAX_FP : MIN_FP;
                default:  fixed_pt_accum <= MAX_FP; // CONSTANT
            endcase
        end
    end

    // >> right shift out last FIXED_PT_FRAC_SHIFT num bits
    // wire [DATA_WIDTH-1:0] amp = fixed_pt_accum[ACC_WIDTH-1:FIXED_PT_FRAC_SHIFT]; 
    wire [DATA_WIDTH-1:0] amp =
    (fixed_pt_accum + (ACC_WIDTH'(1) << (FIXED_PT_FRAC_SHIFT-1))) >> FIXED_PT_FRAC_SHIFT;
    // assign val_out
    always_ff @(posedge clk) begin
        if (rst) val_out <= 0;
        else if (SIGNAL_TYPE == SINUSOID) val_out <= {cos_out, sin_out};
        else                         val_out <= {{DATA_WIDTH{1'b0}}, amp};
    end

    // always_ff @(posedge clk) begin
    //     if (rst) begin
    //         val_out <= 0;
    //     end else begin
    //         // duty & half counters
    //         if (duty_counter == 0) begin
    //             val_out <= MIN_AMP;
    //         end else begin

    //         case (SIGNAL_TYPE)
    //             SAWTOOTH: begin
    //                 val_out <= val_out + STEP;
    //             end

    //             TRIANGLE: begin
    //                 if (!end_half_duty) val_out <= val_out + 2*STEP;
    //                 else val_out <= val_out - 2*STEP;
    //             end

    //             SQUARE: begin
    //                 if (!end_half_duty) val_out <= MIN_AMP;
    //                 else val_out <= MAX_AMP;
    //             end

    //             SINUSOID: begin
    //                 val_out <= {cos_out, sin_out};
    //             end

    //             CONSTANT: val_out <= MAX_AMP;
    //         default: val_out <= MAX_AMP; //default is CONSTANT
    //         endcase
    //         end
    //     end
    // end
    

endmodule

`default_nettype wire