`default_nettype none

/*
Outputs an input buffer as a series of UART transmissions.
*/
module uart_struct_transmit #(parameter
    WORDS, // # of UART transmissions in the input buffer.
    DATA_BITS, // # of bits in a UART transmission.
    INPUT_CLOCK_FREQ, // System clock frequency.
    BAUD_RATE // UART baud rate.
) (
    input wire clk, // System clock.
    input wire [(WORDS * DATA_BITS - 1):0] din, // Input buffer.
    input wire trigger, // Will transmit as long as this is high.
    output logic dout // UART output.
);

    localparam TOTAL_BITS = WORDS * DATA_BITS;

    logic [TOTAL_BITS - 1:0] data_buf = '1;
    logic [$clog2(WORDS):0] words_sent = WORDS;
    logic should_transmit;
    logic sending_word;

    uart_transmit #(
        .DATA_BITS(DATA_BITS),
        .INPUT_CLOCK_FREQ(INPUT_CLOCK_FREQ),
        .BAUD_RATE(BAUD_RATE))
    word_transmitter(
        .clk(clk),
        .trigger(should_transmit),
        .busy(sending_word),
        .din(data_buf[DATA_BITS - 1:0]),
        .dout(dout)
    );

    initial begin
        $display("%d", $clog2(WORDS));
    end

    always_ff @(posedge clk) begin

        if (words_sent < WORDS || sending_word) begin
            if (~sending_word && ~should_transmit) begin // transmission not started
                should_transmit <= 1;
                words_sent <= words_sent + 1;
            end else if (sending_word && should_transmit) begin // transmission was started on last clock cycle
                should_transmit <= 0;
                data_buf <= { {DATA_BITS{1'b1}}, data_buf[TOTAL_BITS - 1 : DATA_BITS] };
            end
        end else if (trigger) begin
            words_sent <= 0;
            data_buf <= din;
            should_transmit <= 0;
        end else begin
            should_transmit <= 0;
        end

    end

endmodule