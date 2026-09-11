`default_nettype none
module ssi_master #(
    parameter CLK_FREQ_MHZ = 100,
    parameter POSITION_BITS = 19,
    parameter STATUS_BITS = 10,
    parameter TOTAL_BITS = 30
)(
    input wire clk,
    input wire rst,
    input wire trigger,
    input wire [11:0] ssi_clk_freq_khz,      // Configurable SSI clock frequency
    
    // Differential SSI interface
    output wire ssi_clk_p,
    output wire ssi_clk_n,
    input wire ssi_data_p,
    input wire ssi_data_n,
    
    // Parallel outputs
    output logic [POSITION_BITS-1:0] position,
    output logic [STATUS_BITS-1:0] status,
    output logic data_valid,
    output logic busy,
    output logic error_flag,
    output logic warning_flag
);

    logic ssi_clk_internal;
    logic ssi_data_internal;

    assign ssi_clk_p = ssi_clk_internal; 
    assign ssi_clk_n = !ssi_clk_p;

    
    // logic ssi_data_sync1, ssi_data_sync2; //for buffer

    // always_ff @(posedge clk) begin
    //     ssi_data_sync1 <= ssi_data_p;     
    //     ssi_data_sync2 <= ssi_data_sync1;  
    // end

    assign ssi_data_internal = ssi_data_p;

    //we dont need this anymore now that we have a transceiver chip
    // // ===== Differential I/O Buffers =====
    // // OBUFDS: Convert single-ended clock to differential
    // OBUFDS #(     
    //     .SLEW("FAST")               // Slow slew rate for cleaner edges
    // ) obufds_clk_inst (
    //     .I(ssi_clk_internal),       // Single-ended input
    //     .O(ssi_clk_p),              // Positive output
    //     .OB(ssi_clk_n)              // Negative output (inverted)
    // );
    
    // // IBUFDS: Convert differential data to single-ended
    // IBUFDS #(
    //     // .DIFF_TERM("TRUE"),         // Enable 100Ω differential termination
    //     // .IOSTANDARD("LVCMOS33")
    // ) ibufds_data_inst (
    //     .I(ssi_data_p),             // Positive input
    //     .IB(ssi_data_n),            // Negative input
    //     .O(ssi_data_internal)       // Single-ended output
    // );
    
    // SSI Core 
    logic [$clog2(25*CLK_FREQ_MHZ)-1:0] timer;
    logic [$clog2(1000)-1:0] clk_counter;
    logic [$clog2(TOTAL_BITS+1)-1:0] bit_counter;
    logic [TOTAL_BITS-1:0] shift_reg;
    logic got_bit;
    
    logic [7:0] ssi_clk_half_period;
    assign ssi_clk_half_period = 8'd50;
    
    typedef enum logic [3:0] {
        IDLE,
        WAIT_INITIAL,
        CLOCK_LOW,
        CLOCK_HIGH,
        FINAL_CLOCK_LOW,
        WAIT_MONOFLOP,
        WAIT_PAUSE,
        DONE
    } state_t;
    
    state_t state;
    
    // Trigger edge detection
    logic [2:0] trigger_pipe;
    logic trigger_edge;
    
    always_ff @(posedge clk) begin
        if (rst) begin
            trigger_pipe <= 3'b000;
        end else begin
            trigger_pipe <= {trigger_pipe[1:0], trigger};
        end
    end
    
    assign trigger_edge = trigger_pipe[1] && !trigger_pipe[2];
    
    // Main state machine
    always_ff @(posedge clk) begin
        if (rst) begin
            state <= IDLE;
            ssi_clk_internal <= 1'b1;
            shift_reg <= 0;
            bit_counter <= 0;
            clk_counter <= 0;
            timer <= 0;
            position <= 0;
            status <= 0;
            data_valid <= 1'b0;
            busy <= 1'b0;
            error_flag <= 1'b0;
            warning_flag <= 1'b0;    
            got_bit <= 0;
        end else begin
            
            case (state)
                IDLE: begin
                    ssi_clk_internal <= 1'b1;
                    bit_counter <= 0;
                    clk_counter <= 0;
                    timer <= 0;
                    busy <= 1'b0;
                    data_valid <= 1'b0;  // Default: pulse
                    
                    if (trigger_edge) begin
                        busy <= 1'b1;
                        shift_reg <= 0;
                        state <= WAIT_INITIAL;
                    end
                end
                
                WAIT_INITIAL: begin
                    // Wait 3us before first clock
                    ssi_clk_internal <= 1'b0;
                    timer <= timer + 1;
                    if (timer >= (3 * CLK_FREQ_MHZ) - 1) begin    //FIX all of these. Delay should not change if CLK_FREQ changes
                        timer <= 0;
                        state <= CLOCK_LOW;
                    end
                end
                
                CLOCK_LOW: begin
                    ssi_clk_internal <= 1'b0;
                    clk_counter <= clk_counter + 1;
                    
                    if (clk_counter >= ssi_clk_half_period - 1) begin
                        clk_counter <= 0;
                        state <= CLOCK_HIGH;
                    end
                end
                
                CLOCK_HIGH: begin
                    ssi_clk_internal <= 1'b1;
                    clk_counter <= clk_counter + 1;
                    
                    if ((!got_bit) && (clk_counter >= (ssi_clk_half_period >> 1) - 1)) begin //read data
                        shift_reg <= {shift_reg[TOTAL_BITS-2:0], ssi_data_internal};
                        bit_counter <= bit_counter + 1;
                        got_bit <= 1'b1;
                    end

                    if (clk_counter >= ssi_clk_half_period - 1) begin
                        got_bit <= 0;
                        clk_counter <= 0;
                        if (bit_counter >= TOTAL_BITS - 1) begin
                            state <= FINAL_CLOCK_LOW;  
                        end else begin
                            state <= CLOCK_LOW;
                        end
                    end
                end
                
                // CAPTURE_DATA: begin
                //     shift_reg <= {shift_reg[TOTAL_BITS-2:0], ssi_data_internal};
                //     bit_counter <= bit_counter + 1;
                    
                //     if (bit_counter >= TOTAL_BITS - 1) begin
                //         clk_counter <= 0;
                //         state <= FINAL_CLOCK_LOW;  // ← ADD THIS
                //     end else begin
                //         clk_counter <= 0;
                //         state <= CLOCK_LOW;
                //     end
                // end

                FINAL_CLOCK_LOW: begin
                    // Complete the cycle with final low pulse
                    ssi_clk_internal <= 1'b0;
                    clk_counter <= clk_counter + 1;
                    
                    if (clk_counter >= (ssi_clk_half_period - 1)) begin
                        // Let monoflop timeout trigger data line transitions
                        state <= WAIT_MONOFLOP;
                        timer <= 0;
                    end
                end

                WAIT_MONOFLOP: begin
                    ssi_clk_internal <= 1'b1;  // Clock goes high during tM
                    timer <= timer + 1;
                    
                    // Wait for monoflop timeout 
                    if (timer >= (22 * CLK_FREQ_MHZ) - 1) begin
                        timer <= 0;
                        
                        position <= shift_reg[28:10];
                        status <= shift_reg[9:0];
                        error_flag <= shift_reg[9];
                        warning_flag <= shift_reg[8];
                        
                        state <= WAIT_PAUSE;
                    end
                end
                            
                WAIT_PAUSE: begin
                    ssi_clk_internal <= 1'b1;
                    timer <= timer + 1;
                    
                    // Wait 25us
                    if (timer >= (25 * CLK_FREQ_MHZ) - 1) begin
                        state <= DONE;
                    end
                end
                
                DONE: begin
                    data_valid <= 1'b1;
                    busy <= 1'b0;
                    state <= IDLE;
                end
                
                default: state <= IDLE;
            endcase
        end
    end

endmodule

`default_nettype wire