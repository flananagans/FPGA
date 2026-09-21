`timescale 1ns / 1ps
`default_nettype none
module spi_con #(
        parameter DATA_WIDTH = 8, //changed to encoder pkt width
        parameter DATA_CLK_PERIOD = 100 //change to have roughly 3.5 MHz clock
        // parameter POSITION_BITS = 18,
        // parameter STATUS_BITS = 10 
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
        output logic cs, // (Chip Select)

        // output logic [POSITION_BITS-1:0] position,
        // output logic [STATUS_BITS-1:0] status,
        output logic busy
        // output logic n_error, // 1 means no error
        // output logic warning
 
      );
    localparam MAX_IDX = $clog2(DATA_WIDTH) - 1;
    localparam DUTY = DATA_CLK_PERIOD & 8'b0000_0001 ? (DATA_CLK_PERIOD - 1) / 2 : DATA_CLK_PERIOD / 2;
    logic [$clog2(DUTY) - 1: 0] dcounter; 
    logic [DATA_WIDTH-1:0] current_data_in; 
    logic [DATA_WIDTH-1:0] current_data_out;
    logic [MAX_IDX : 0] idx; //keep track of what bit we're on

    //encoder specifics
    localparam TS_DELAY_NUM_CYCLES = 10'd00;
    logic [$clog2(TS_DELAY_NUM_CYCLES) - 1: 0] ts_delay_counter;
    logic past_ts_delay;
    logic data_frame_end;

    logic trigger_d;
    logic trigger_fall_edge;

    always_ff @(posedge clk) begin
        if (rst) begin
            trigger_d <= 0;
            trigger_fall_edge <= 0;
        end else begin
            trigger_d <= trigger;
        end

    end

    typedef enum logic [3:0] {
        IDLE,
        WAIT_TS_DELAY,
        CLOCK_HIGH,
        CLOCK_LOW,
        FINAL_CLOCK_LOW,
        FORMAT_DATA_OUT,
        WAIT_TP_DELAY,
        DONE
    } state_t;
    state_t spi_state;
    
    //SPI Mode 1: CPOL = 0, means clks is low when no data transfers; CPHA = 1 means sample on falling edge of DCLK, but outputted on the rising edge
    
    always_ff @(posedge clk) begin
        if (rst) begin 
            dclk <= 0; 
            dcounter <= 0; 
            cs <= 1'b1; 
            data_out <= 0; 
            data_valid <= 0;
            current_data_out <= 0;

            ts_delay_counter <= 0;
            past_ts_delay <= 0;
            data_frame_end <= 0;

            busy <= 1'b0;
            spi_state <= IDLE;
        end else begin
            
            case (spi_state) 
                IDLE: begin
                    if (trigger && cs) begin //  
                        // begin transmission of data
                        busy <= 1'b1;
                        cs <= 1'b0; //set cs low 
                        data_valid <= 0;
                        current_data_in <= data_in;
                        idx <= DATA_WIDTH - 1; 
                        copi <= data_in[DATA_WIDTH-1];

                        dcounter <= 0;
                        // past_ts_delay <= 1'b0; 
                        spi_state <= WAIT_TS_DELAY;
                    end 
                end

                WAIT_TS_DELAY: begin
                    if (ts_delay_counter < TS_DELAY_NUM_CYCLES - 1) ts_delay_counter <= ts_delay_counter + 1;
                    else begin
                        ts_delay_counter <= 0;
                        dcounter <= 0; //for dclk
                        dclk <= 0; //redundant
                        spi_state <= CLOCK_LOW; //one cycle before rising edge
                        // past_ts_delay <= 1'b1;
                    end
                end

                CLOCK_LOW: begin
                    if (dcounter == (DUTY - 1)) begin  
                        // end of data transmission - last index, end of period, about to be falling edge
                        if (idx > 0) begin
                            copi <= current_data_in[idx - 1];
                            idx  <= idx - 1;
                        end
                        // data_valid <= 1'b1;
                        // cs <= 1'b1;
                        // data_frame_end <= 1'b1;
                        // data_out <= current_data_out; //new frame of bits
                        dclk <= 1; 
                        dcounter <= 0;
                        spi_state <= CLOCK_HIGH;
                    end 
                    else dcounter <= dcounter + 1;
                end

                CLOCK_HIGH: begin
                    if (dcounter == DUTY - 1) begin 

                        current_data_out <= {current_data_out, cipo}; //cipo is 1'b, equiv to (current_data_out << 1) | cipo;  
                        dcounter <= 0; 
                        dclk <= 0; 

                        if (idx == 0) begin //end of SPI packet
                            data_out         <= {current_data_out, cipo};
                            data_valid       <= 1'b1;
                            ts_delay_counter <= 0;
                            spi_state        <= WAIT_TP_DELAY;
                        end 
                        else spi_state <= CLOCK_LOW; // idx > 0 and DCLK = 1; sample on rising edge 
                    end 
                    else dcounter <= dcounter + 1; // in the middle of edges
                end
                    
                WAIT_TP_DELAY: begin
                    if (ts_delay_counter < TS_DELAY_NUM_CYCLES)  ts_delay_counter <= ts_delay_counter + 1;
                    else begin
                        ts_delay_counter <= 0;

                        //lastly reset everything, pull cs
                        dcounter <= 0; 
                        cs <= 1'b1; 
                        current_data_out <= 0; 
                        data_frame_end <= 1'b0;  

                        busy <= 1'b0;
                        spi_state <= IDLE;
                    end
                end

            default: spi_state <= IDLE;
            endcase
        end

        // else 
        //need to wait 5 microseconds after cs pulled low for ts delay
        // else if (!cs && !past_ts_delay) begin 
        //     if (ts_delay_counter < TS_DELAY_NUM_CYCLES) ts_delay_counter <= ts_delay_counter + 1;
        //     else begin
        //         ts_delay_counter <= 0;
        //         past_ts_delay <= 1'b1;
        //     end
        // end
        // CPHA = 1 means sample on falling edge of DCLK, but outputted on the rising edge
        // else if (!cs && past_ts_delay && !data_frame_end) begin
        //     // right before falling edge
        //     if (idx == 0 && dcounter == (DUTY - 1) && dclk) begin  
        //         // end of data transmission - last index, end of period, about to be falling edge
        //         data_valid <= 1'b1;
        //         // cs <= 1'b1;
        //         data_frame_end <= 1'b1;
        //         data_out <= current_data_out; //new frame of bits
        //         dclk <= 0; 
        //     end 
            // else if (dcounter == DUTY - 1) begin 
            //     // A) dclk: 0 -> 1
            //     if (!dclk) begin  // DCLK = 0 （no data tx), rising edge
            //         if (idx > 0) begin
            //             copi <= current_data_in[idx - 1]; 
            //             idx <= idx - 1;
            //         end
            //     end else begin // idx > 0 and DCLK = 1; sample on rising edge
            //         current_data_out <= {current_data_out, cipo}; //cipo is 1'b, equiv to (current_data_out << 1) | cipo;  
            //     end 
            //     dcounter <= 0; 
            //     dclk <= ~dclk; 
            // end else begin // in the middle of edges
            //     dcounter <= dcounter + 1;
            // end 
        // end else if (!cs && past_ts_delay && data_frame_end) begin 
        //     //need to wait tp (5us) before ending transaction
        //     if (ts_delay_counter < TS_DELAY_NUM_CYCLES)  ts_delay_counter <= ts_delay_counter + 1;
        //     else begin
        //         ts_delay_counter <= 0;

        //         //lastly reset everything, pull cs
        //         dclk <= 0; 
        //         dcounter <= 0; 
        //         cs <= 1'b1; 
        //         data_out <= 0; 
        //         data_valid <= 0;
        //         current_data_out <= 0;
        //         past_ts_delay <= 1'b0;
        //         data_frame_end <= 1'b0;  

        //         busy <= 1'b0;
        //     end
            
        // end
    end
    
endmodule

//spi notes
//DCLK = 1 & CPOL = 0, so data tx on fall; dcounter only goes up to half a cycle
`default_nettype wire