`timescale 1ns / 1ps
`default_nettype none
 
module uart_receive
  #(
    parameter INPUT_CLOCK_FREQ = 100_000_000,
    parameter BAUD_RATE = 9600
    )
   (
    input wire 	       clk,
    input wire 	       rst,
    input wire 	       din,
    output logic       dout_valid,
    output logic [7:0] dout
    );
 
  typedef enum {
    IDLE = 0, START = 1, DATA = 2, STOP = 3, TRANSMIT = 4
    // TODO: define the rest of the states your receiver needs to operate
  } uart_state;
 
  // note: for the online checker, don't rename this variable
  uart_state state;
  logic [3:0] datacount;
  localparam UART_BIT_PERIOD = INPUT_CLOCK_FREQ / BAUD_RATE; 
  localparam HALF_PERIOD = UART_BIT_PERIOD >> 1; 
  localparam MAX_COUNTER_BITS = $clog2(UART_BIT_PERIOD) - 1; 
  logic [MAX_COUNTER_BITS : 0] counter; 
 
    always_ff @(posedge clk) begin 
        if (rst) begin 
            datacount <= 0; 
            dout_valid <= 0;
            state <= IDLE;
            counter <= 0; 
        end else begin 
            if (state == IDLE && din == 0) begin 
                state <= START; 
                counter <= HALF_PERIOD; 
                dout_valid <= 0;
                datacount <= 0;
            end else begin 
                if (counter == UART_BIT_PERIOD - 1) begin 
                    counter <= 0;
                    case (state) 
                        START: state <= din == 0 ? DATA : IDLE;
                        DATA: begin
                            dout <= {din, dout[7:1]};
                            state <= datacount == 7 ? STOP : DATA;   
                            datacount <= datacount + 1;                    
                        end 
                        STOP: begin 
                            if (din == 1) begin 
                                state <= TRANSMIT;
                                dout_valid <= 1; 
                            end else begin 
                                state <= IDLE;
                            end 
                        end 
                        default: state <= IDLE; 
                    endcase 
                end else if (state == TRANSMIT) begin 
                    state <= IDLE; 
                    dout_valid <= 0; 
                end else begin 
                    counter <= counter + 1; 
                end 
            end 
        end 
    end 
   // TODO: module to read UART rx wire
 
endmodule // uart_receive
 
`default_nettype wire