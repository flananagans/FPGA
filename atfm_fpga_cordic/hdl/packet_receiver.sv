`default_nettype none
//`timescale 1ns/1ps

/* Concatenates multiple transmissions (e.g. 8-bit UART transmissions) into
one data block after receiving a start-of-packet signal. */
module packet_receiver #(
    parameter WORDS, // # of transmissions in a packet, not including start of packet
    parameter WORD_WIDTH, // bit-width of a word
    parameter SOP_WORDS = 1, // # of transmissions in the SOP
    parameter logic [SOP_WORDS-1:0][WORD_WIDTH-1:0] START_OF_PACKET,
    parameter logic LITTLE_WORD_ORDER = 1'b1, // 1 if the word at index 0 is received first
    parameter logic LITTLE_BIT_ORDER = 1'b1 // 1 if the least significant bit in a word is at index 0
) (
    input wire clk,
    input wire [WORD_WIDTH-1:0] word_in,
    input wire should_sample, // word_in will be sampled every clock cycle this is high 
    output logic [WORDS-1:0][WORD_WIDTH-1:0] data_out, // output (little endian)
    output logic busy
);

    localparam int IDX_WIDTH = $clog2(WORDS) + 1;
    localparam logic [IDX_WIDTH-1:0] MAX_IDX = IDX_WIDTH'(WORDS); 

    logic [IDX_WIDTH-1:0] idx = MAX_IDX;

    logic [WORD_WIDTH-1:0] logical_word_in;
    assign logical_word_in = LITTLE_BIT_ORDER
        ? word_in
        : {<<{word_in}}; // reverse big endian input words

    logic [WORDS-1:0][WORD_WIDTH-1:0] last_data_internal;
    logic [WORDS-1:0][WORD_WIDTH-1:0] present_data_internal;
    assign present_data_internal = LITTLE_WORD_ORDER
        ? {logical_word_in, last_data_internal[WORDS-1:1]}
        : {last_data_internal[WORDS-2:0], logical_word_in};

    logic [SOP_WORDS-1:0][WORD_WIDTH-1:0] last_sop_buffer;
    logic [SOP_WORDS-1:0][WORD_WIDTH-1:0] present_sop_buffer;
    assign present_sop_buffer = LITTLE_WORD_ORDER
        ? {logical_word_in, last_sop_buffer[SOP_WORDS-1:1]}
        : {last_sop_buffer[SOP_WORDS-2:0], logical_word_in};

    assign busy = idx < MAX_IDX;

    always_ff @(posedge clk) begin

        if (should_sample) begin
            last_data_internal <= present_data_internal;
            if (idx < MAX_IDX - 1) begin
                idx <= idx + 1;
            end

            // this was the last word, put it on the output
            if (idx == MAX_IDX - 1) begin
                idx <= idx + 1;
                data_out <= present_data_internal;
            end

            // we're waiting for SOP
            if (idx == MAX_IDX) begin
                last_sop_buffer <= present_sop_buffer;
                if (present_sop_buffer == START_OF_PACKET) begin
                    idx <= 0;
                    last_data_internal <= {(WORDS * WORD_WIDTH){1'b0}};
                end
            end
        end
        
    end

endmodule
