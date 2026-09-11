`timescale 1ns / 1ps
`default_nettype none

module uart_transmit
  #(
    parameter INPUT_CLOCK_FREQ = 100_000_000,
    parameter BAUD_RATE = 9600
    )
   (
    input wire 	     clk,
    input wire 	     rst,
    input wire [7:0] din,
    input wire 	     trigger,
    output logic     busy,
    output logic     dout
    );

  localparam BAUD_BIT_PERIOD = INPUT_CLOCK_FREQ / BAUD_RATE; 
  localparam MAX_COUNTER_BITS = $clog2(BAUD_BIT_PERIOD) - 1; 
  logic [3 : 0] idx;
  logic [MAX_COUNTER_BITS : 0] counter; 
  logic [7 : 0] current_din;

  always_ff @(posedge clk) begin
    if (rst) begin
      busy <= 0; 
      idx <= 0; 
      counter <= 0; 
    end else if (trigger && !busy) begin
      //start transmitting, read din, output start bit
      busy <= 1; 
      idx <= 0; 
      counter <= 0;
      current_din <= din;
      dout <= 0;
    end else if (busy && (counter == BAUD_BIT_PERIOD - 1)) begin
      counter <= 0; 
      if (idx == 8) begin 
        //done transmitting the byte, send end bit
        idx <= idx + 1;
        dout <= 1;
      end else if (idx == 9) begin
        busy <= 0;
      end else begin 
        //during byte transmission - send the nxt one 
        current_din <= current_din >> 1; 
        dout <= current_din;
        idx <= idx + 1; 
      end 
    end else begin 
      //just inc counter 
      counter <= counter + 1; 
    end
  end 

endmodule // uart_transmit

`default_nettype wire
