`default_nettype none

/* Outputs a byte(ish) as a UART transmission. */
module uart_transmit #(
    parameter INPUT_CLOCK_FREQ, // System clock frequency.
    parameter BAUD_RATE, // Baud rate.
    parameter DATA_BITS // Data bits in one transmission.
) (
    input wire clk, // System clock.
    input wire [DATA_BITS-1:0] din, // Input byte(ish).
    input wire trigger, // Transmit as long as this is high.
    output logic busy = 1'b0, // High when a transmission is in progress.
    output logic dout = 1'b1 // UART output.
);

    localparam logic [31:0] PERIOD = INPUT_CLOCK_FREQ/BAUD_RATE - 1;
    localparam int TOTAL_BITS = DATA_BITS + 2;

    logic [DATA_BITS-1:0] data_buf = 8'hFF;
    logic [$clog2(PERIOD+1):0] count = PERIOD;
    logic [$clog2(DATA_BITS+1):0] bits_sent = 11;

    always_ff @(posedge clk) begin

        if (count == PERIOD) begin
            if (bits_sent < TOTAL_BITS) begin // transmission in progress
                count <= 0;
                dout <= data_buf[0];
                data_buf <= {1'b1, data_buf[7:1]};
                bits_sent <= bits_sent + 1'b1;
            end else if (trigger) begin // transmission wanted but not started
                data_buf <= din;
                dout <= 0; // start bit
                count <= 0;
                bits_sent <= 1;
                busy <= 1;
            end else begin // transmission not started and not wanted
                count <= PERIOD;
                dout <= 1;
                busy <= 0;
            end
        end else begin
            count <= count + 1;
        end

    end

endmodule