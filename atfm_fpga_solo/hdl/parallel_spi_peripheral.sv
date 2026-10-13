`default_nettype none

/*
* Generic module that implements a Mode 0 dual/quad/octal SPI peripheral.

* As of now, it works as follows:
* CMD_WIDTH bits are read on all of the IO lines and read into final_cmd;
* when final_cmd == 0xAF, the module will copy the current value of data_in
* and put it on the IO lines.
*/
module parallel_spi_peripheral
    #(
        parameter SENT_DATA_WIDTH, // Bit width of data_in.
        parameter DATA_LINES, // # of IO lines (2 for dual SPI, 4 for quad, etc.)
        parameter CMD_WIDTH // Bit width of a command from the master.
    )
    (
        input wire   clk, // System clock (100 MHz)
        input wire   rst, // reset signal
        input wire   [SENT_DATA_WIDTH-1:0] data_in,  // Data to send to master.
        output logic [CMD_WIDTH-1:0] cmd_out, // Command from the master.
        inout wire [DATA_LINES-1:0] io, // IO lines.
        input wire   dclk_in, // SPI clock.
        input wire   cs_in // Chip select.
    );

    function int ceil_div(input int a, input int b);
        return (a + b - 1)/b;
    endfunction
    
    localparam MAX_CMD_IDX = ceil_div(CMD_WIDTH, DATA_LINES);
    localparam CMD_IDX_WIDTH = $clog2(MAX_CMD_IDX + 1);
    
    logic [DATA_LINES-1:0] data_out;

    // Edge detection for dclk and cs (CDC - Clock Domain Crossing)
    logic [1:0] dclk_sync;
    logic [1:0] cs_sync;
    logic dclk_rising;
    logic dclk_falling;
    logic cs_falling;
    logic cs_rising;

    // Edge detection
    assign dclk_rising = (dclk_sync == 2'b01);
    assign dclk_falling = (dclk_sync == 2'b10);
    assign cs_falling = (cs_sync == 2'b10);
    assign cs_rising = (cs_sync == 2'b01);
    
    // Data registers
    logic [SENT_DATA_WIDTH-1:0] data_to_send;
    logic [CMD_WIDTH-1:0] current_cmd = '0;
    logic [CMD_WIDTH-1:0] final_cmd = '0;
    assign cmd_out = final_cmd;
    logic [CMD_IDX_WIDTH-1:0] cmd_idx = '0;

    logic [DATA_LINES-1:0] output_lines;
    logic should_output;
    assign should_output = cmd_idx == MAX_CMD_IDX && final_cmd == CMD_WIDTH'(8'hAF);

    assign io = (should_output && !cs_sync[0]) ? output_lines : 'z;
    
    always_ff @(posedge clk) begin
        if (rst) begin
            dclk_sync <= 2'b00;
            cs_sync <= 2'b11;
            cmd_idx <= 0;
            output_lines <= '0;
        end else begin
            dclk_sync <= {dclk_sync[0], dclk_in};
            cs_sync <= {cs_sync[0], cs_in};
        end

        if (cs_falling || cs_rising) begin
            cmd_idx <= 0;
            output_lines <= '0;
        end

        // 
        if (!should_output && !cs_sync[0] && dclk_rising) begin
            current_cmd <= {current_cmd[DATA_LINES-1:0], io};
            unique case (cmd_idx)
                MAX_CMD_IDX-1: begin
                    cmd_idx <= cmd_idx + 1;
                    final_cmd <= {current_cmd[DATA_LINES-1:0], io};
                    data_to_send <= data_in;
                end
                MAX_CMD_IDX: begin end
                default: cmd_idx <= cmd_idx + 1;
            endcase
        end
        
        if (should_output && !cs_sync[0] && (dclk_falling || cs_falling)) begin
            // transmit most significant nibble first
            output_lines <= data_to_send[SENT_DATA_WIDTH-1 : SENT_DATA_WIDTH-DATA_LINES];
            data_to_send <= {data_to_send[SENT_DATA_WIDTH-DATA_LINES-1 : 0], DATA_LINES'(0)};
        end

    end
    
endmodule

`default_nettype wire