`timescale 1ns / 1ps
`default_nettype none

module multi_cont_test_signal
    import signal_pkg::*;
#(
    parameter DATA_WIDTH      = 32,
    parameter DUTY_COUNT      = 8000, //12.5kHz
    parameter CYCLES_PER_TYPE = 5
)(
    input  wire                   clk,
    input  wire                   rst,
    output logic [DATA_WIDTH-1:0] sig_out,      // currently selected waveform
    output logic [2:0]            sig_type_out  // which type is active
);

    // ---------------- one generator per type ----------------
    logic [2*DATA_WIDTH-1:0] saw_val, tri_val, sqr_val, sin_val, const_val;

    test_signal #(.SIGNAL_TYPE(SAWTOOTH), .DATA_WIDTH(DATA_WIDTH), .DUTY_COUNT(DUTY_COUNT))
        u_saw   (.clk(clk), .rst(rst), .val_out(saw_val));

    test_signal #(.SIGNAL_TYPE(TRIANGLE), .DATA_WIDTH(DATA_WIDTH), .DUTY_COUNT(DUTY_COUNT))
        u_tri   (.clk(clk), .rst(rst), .val_out(tri_val));

    test_signal #(.SIGNAL_TYPE(SQUARE),   .DATA_WIDTH(DATA_WIDTH), .DUTY_COUNT(DUTY_COUNT))
        u_sqr   (.clk(clk), .rst(rst), .val_out(sqr_val));

    test_signal #(.SIGNAL_TYPE(SINUSOID), .DATA_WIDTH(DATA_WIDTH), .DUTY_COUNT(DUTY_COUNT))
        u_sin   (.clk(clk), .rst(rst), .val_out(sin_val));

    test_signal #(.SIGNAL_TYPE(CONSTANT), .DATA_WIDTH(DATA_WIDTH), .DUTY_COUNT(DUTY_COUNT))
        u_const (.clk(clk), .rst(rst), .val_out(const_val));

    // ---------------- sequencer ----------------
    localparam HOLD_COUNT = DUTY_COUNT * CYCLES_PER_TYPE;   // clocks per type

    logic [$clog2(HOLD_COUNT)-1:0] hold_counter;
    signal_t sel;

    always_ff @(posedge clk) begin
        if (rst) begin
            hold_counter <= '0;
            sel          <= SAWTOOTH;
        end else if (hold_counter == HOLD_COUNT - 1) begin
            hold_counter <= '0;
            sel          <= (sel == CONSTANT) ? SAWTOOTH : signal_t'(sel + 1'b1);
        end else begin
            hold_counter <= hold_counter + 1;
        end
    end

    // ---------------- output mux ----------------
    always_ff @(posedge clk) begin
        if (rst) begin
            sig_out <= '0;
        end else begin
            case (sel)
                SAWTOOTH: sig_out <= saw_val[DATA_WIDTH-1:0];
                TRIANGLE: sig_out <= tri_val[DATA_WIDTH-1:0];
                SQUARE:   sig_out <= sqr_val[DATA_WIDTH-1:0];
                SINUSOID: sig_out <= sin_val[DATA_WIDTH-1:0];   // low half = sin_out
                CONSTANT: sig_out <= const_val[DATA_WIDTH-1:0];
                default:  sig_out <= '0;
            endcase
        end
    end

    assign sig_type_out = sel;

endmodule

`default_nettype wire