`timescale 1ns / 1ps
`default_nettype none
module spi_con
     #(parameter DATA_WIDTH = 8, //changed from 8, because encoder returns back 4 bytes
       parameter DATA_CLK_PERIOD = 100 //changed from 100; want a roughly 3.5 MHz clock
      )
    (   input wire   clk, //system clock (100 MHz)
        input wire   rst, //reset in signal
        input wire   [DATA_WIDTH-1:0] data_in, //data to send
        input wire   trigger, //start a transaction
        output logic [DATA_WIDTH-1:0] data_out, //data received!
        output logic data_valid, //high when output data is present.
 
        output logic copi, //(Controller-Out-Peripheral-In)
        input wire   cipo, //(Controller-In-Peripheral-Out)
        output logic dclk, //(Data Clock)
        output logic cs // (Chip Select)
 
      );
    parameter MAX_IDX = $clog2(DATA_WIDTH) - 1;
    parameter DUTY = DATA_CLK_PERIOD & 8'b0000_0001 ? (DATA_CLK_PERIOD - 1) / 2 : DATA_CLK_PERIOD / 2;
    logic [DUTY - 1: 0] dcounter; 
    logic [DATA_WIDTH-1:0] current_data_in; 
    logic [DATA_WIDTH-1:0] current_data_out;
    logic [MAX_IDX : 0] idx; //keep track of what bit we're on

    always_ff @(posedge clk) begin
        if (rst) begin 
            dclk <= 0; 
            dcounter <= 0; 
            cs <= 1'b1; 
            data_out <= 0; 
            data_valid <= 0;
            current_data_out <= 0;
        end else if (trigger && cs) begin
            //need to wait 5 microseconds after cs pulled low
            // begin transmission of data
            cs <= 1'b0; //set cs low 
            data_valid <= 0;
            current_data_in <= data_in;
            idx <= DATA_WIDTH - 1; 
            copi <= data_in[DATA_WIDTH-1];
            dcounter <= dcounter + 1; 
        end 
        else if (!cs) begin 
            // during data transmission
            if (idx == 0 && dcounter == (DUTY - 1) && dclk) begin 
                // end of data transmission - last index, end of period
                data_valid <= 1'b1;
                cs <= 1'b1;
                data_out <= current_data_out;
                dclk <= 0; 
            end else if (dcounter == DUTY - 1) begin
                if (!dclk) begin
                    current_data_out <= (current_data_out << 1) | cipo;  
                end 
                else begin
                    copi <= current_data_in[idx - 1]; 
                    idx <= idx - 1;
                end 
                dcounter <= 0; 
                dclk <= ~dclk; 
            end else begin
                dcounter <= dcounter + 1;
            end 
        end else begin
            dclk <= 0; 
            dcounter <= 0; 
            cs <= 1'b1; 
            data_out <= 0; 
            data_valid <= 0;
            current_data_out <= 0;
        end
    end
endmodule
`default_nettype wire