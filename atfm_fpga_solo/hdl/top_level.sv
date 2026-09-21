`default_nettype none

module top_level(
    input wire clk_100mhz,          // 100 MHz clock from Urbana board
    input wire [15:0] sw,           // Switches
    input wire [3:0] btn,           // Buttons
    output logic [15:0] led,        // LEDs
    output logic [2:0] rgb0,        // RGB LED 0
    output logic [2:0] rgb1,        // RGB LED 1
    // output logic [3:0] ss0_an,      // Seven segment anodes
    // output logic [3:0] ss1_an,
    // output logic [6:0] ss0_c,       // Seven segment cathodes
    // output logic [6:0] ss1_c,
    
    // PMOD JA pins for SSI (differential pairs)
    // Use PMOD connector with differential capability

    // output wire dclk_plus,              // SSI Clock positive
    // output wire dclk_minus,              // SSI Clock negative
    // input wire data_plus,               // SSI Data positive
    // input wire data_minus,                // SSI Data negative

    //FPGA (con) -> encoder SPI
    output wire   copi_enco,          // (Controller-Out-Peripheral-In)
    input wire    cipo_enco,          // (Controller-In-Peripheral-Out)
    output wire   dclk_enco,          // (Data Clock) - from controller (FPGA)
    output wire   cs_enco,             // (Chip Select) - from controller (FPGA)

    output wire   probe_copi,          // (Controller-Out-Peripheral-In)
    output wire    probe_cipo,          // (Controller-In-Peripheral-Out)
    output wire   probe_dclk,          // (Data Clock) - from controller (FPGA)
    output wire   probe_cs,             // (Chip Select) - from controller (FPGA)


    input wire              uart_rxd, // UART computer->FPGA
    output logic            uart_txd, // UART FPGA->computer
    // output logic            uart_txd_debug,

    //PSOC (con) -> FPGA SPI
    input wire   copi,          // (Controller-Out-Peripheral-In)
    output wire cipo,          // (Controller-In-Peripheral-Out)
    input wire   dclk,          // (Data Clock) - from controller
    input wire   cs,             // (Chip Select) - from controller

    input wire spi_trigger       //from PSOC con (teensy)
);

    parameter int ENCO_SPI_CLK_PERIOD = 28; // 100MHz / 28 ~= 3.5 MHz

    parameter int ENCO_SPI_PKT_WIDTH = 32;
    parameter int ENCO_POS_DATA_WIDTH = 18;
    parameter int ENCO_STATUS_DATA_WIDTH = 10; //error + warning bits, crc bits

    assign probe_copi  = copi_enco;
    assign probe_cipo  = cipo_enco;
    assign probe_dclk  = dclk_enco;
    assign probe_cs  = cs_enco;
    // assign uart_txd_debug = uart_txd;

    // ***************** Trigger Logic ***************** //
    logic rst;
    logic trigger;
    logic [23:0] auto_trigger_counter;
    logic auto_trigger;
    
    assign rst = btn[0];
    
    // Auto-trigger for continuous reading (adjustable rate)
    always_ff @(posedge clk_100mhz) begin
        if (rst) begin
            auto_trigger_counter <= '0;
            auto_trigger <= 1'b0;
        end else begin
            // Trigger every 100ms (well above 70us requirement)
            if (auto_trigger_counter >= 6'd50) begin
                auto_trigger_counter <= '0;
                auto_trigger <= 1'b1;
            end else begin
                auto_trigger_counter <= auto_trigger_counter + 1;
                auto_trigger <= 1'b0;
            end
        end
    end
    
    // Manual trigger with debouncing
    logic [19:0] btn_debounce;
    logic btn_trigger;
    
    always_ff @(posedge clk_100mhz) begin
        if (rst) begin
            btn_debounce <= '0;
            btn_trigger <= 1'b0;
        end else begin
            if (btn[1]) begin
                if (btn_debounce < 20'd100_000) begin
                    btn_debounce <= btn_debounce + 1;
                    btn_trigger <= 1'b0;
                end else begin
                    btn_trigger <= 1'b1;
                end
            end else begin
                btn_debounce <= '0;
                btn_trigger <= 1'b0;
            end
        end
    end
    
    // Select trigger source: SW[15] = 1 for auto, 0 for manual
    assign trigger = sw[15] ? auto_trigger : !spi_trigger;

    // *************************************************** //

    /*  ***************** Original SSI Master Code ***************** //
    // logic [9:0] ssi_clk_freq;
    // assign ssi_clk_freq = 12'd1000;
    
    // ssi_master #(
    //     .CLK_FREQ_MHZ(100),
    //     .POSITION_BITS(19),
    //     .STATUS_BITS(10),
    //     .TOTAL_BITS(30)
    // ) ssi_inst (
    //     .clk(clk_100mhz),
    //     .rst(rst),
    //     .trigger(trigger),
    //     .ssi_clk_freq_khz(ssi_clk_freq),
        
    //     // Differential I/O 
    //     .ssi_clk_p(dclk_plus),
    //     .ssi_clk_n(dclk_minus),
    //     .ssi_data_p(data_plus),
    //     .ssi_data_n(data_minus),
        
    //     // Parallel outputs
    //     .position(encoder_position),
    //     .status(encoder_status),
    //     .data_valid(data_valid),
    //     .busy(busy),
    //     .error_flag(error_flag),
    //     .warning_flag(warning_flag)
    // );

    // *************************************************** */

    // ***************** SPI: FPGA Con to Encoder Per ***************** //
    logic [ENCO_SPI_PKT_WIDTH - 1: 0]   encoder_data_out;
    logic                               encoder_data_valid;

    logic [ENCO_POS_DATA_WIDTH - 1:0] encoder_position;
    logic [ENCO_STATUS_DATA_WIDTH - 1:0] encoder_status;
    // logic data_valid;
    logic enco_busy;
    logic error_flag, warning_flag;
    logic n_error_flag; //TODO: need to see how this is used

    logic test_trigger;
    localparam COUNT_12_5KHZ_MAX = 8000;
    localparam COUNT_100HZ_MAX = 1_000_000; 
    logic [$clog2(COUNT_100HZ_MAX) - 1 : 0] clk_counter_12khz;


    always_ff @(posedge clk_100mhz) begin
        if (rst) begin
            clk_counter_12khz <= 0;
            test_trigger <= 0;
        end else if (clk_counter_12khz == COUNT_100HZ_MAX - 1) begin
            test_trigger <= 0;
            clk_counter_12khz <= 0;
        end else begin
            clk_counter_12khz <= clk_counter_12khz + 1;

            if (clk_counter_12khz >= (COUNT_100HZ_MAX/2 - 1)) test_trigger <= 1;
            else test_trigger <= 0;
        end
    end

    spi_con #(
        .DATA_WIDTH(ENCO_SPI_PKT_WIDTH), //4 bytes of encoder data
        .DATA_CLK_PERIOD(ENCO_SPI_CLK_PERIOD) // 100MHz/ 28 = ~3.5MHz
    ) fpga_spi_con_to_enco (
        .clk(clk_100mhz),
        .rst(rst),
        .data_in(0), //data to send to peripheral (encoder)
        .trigger(test_trigger), //TODO: change to spi_trigger
        .data_out(encoder_data_out), //data from encoder
        .data_valid(encoder_data_valid),

        .copi(copi_enco),
        .cipo(cipo_enco),
        .dclk(dclk_enco),
        .cs(cs_enco),

        .busy(enco_busy)

        // .position(encoder_position),
        // .status(encoder_status),
        // .n_error(error_flag),
        // .warning(warning_flag)
    );

    //set parsed encoder outputs
    assign encoder_position = encoder_data_out[ENCO_SPI_PKT_WIDTH - 1: ENCO_SPI_PKT_WIDTH - ENCO_POS_DATA_WIDTH];
    assign encoder_status = encoder_data_out[ENCO_STATUS_DATA_WIDTH - 1:0];
    assign error_flag = encoder_data_out[9]; // 1 means no error
    assign warning_flag = encoder_data_out[8];

    // *************************************************** //


    // ***************** Latch Encoder Data ***************** //

    // Encoder data buffer signals
    logic [ENCO_SPI_PKT_WIDTH - 1:0] encoder_data_latched;
    logic [ENCO_POS_DATA_WIDTH - 1:0] encoder_position_latched;
    logic [ENCO_STATUS_DATA_WIDTH - 1:0]  encoder_status_latched;
    logic        error_flag_latched;
    logic        warning_flag_latched;
    logic        data_valid_d; //prev value of encoder_data_valid
    logic        send_pending;
    
    //data latching
    always_ff @(posedge clk_100mhz) begin
        if (rst) begin
            // Data latching signals
            encoder_data_latched <= '0;
            encoder_position_latched <= '0;
            encoder_status_latched   <= '0;
            error_flag_latched       <= 1'b0;
            warning_flag_latched     <= 1'b0;
            data_valid_d             <= 1'b0;
            send_pending             <= 1'b0;
        end
        else begin
            // Edge detect on data_valid
            data_valid_d <= encoder_data_valid;
            
            // Latch incoming SPI data
            if (encoder_data_valid && !data_valid_d) begin
                encoder_data_latched     <= encoder_data_out;
                encoder_position_latched <= encoder_position;
                encoder_status_latched   <= encoder_status;
                error_flag_latched       <= error_flag;
                warning_flag_latched     <= warning_flag;
                send_pending             <= 1'b1;
            end
        end
    end

    // *************************************************** //

    // ***************** LED Logic ***************** //
    
    assign led[15] = rst; //sw[15];            // Auto-trigger mode indicator
    assign led[14] = enco_busy;              // Busy indicator
    assign led[13] = error_flag;        // Error flag
    assign led[12] = warning_flag;      // Warning flag
    assign led[11] = data_valid_d;        // Data valid pulse
    // assign led[10] = test_trigger;
    // assign led[9:0] = encoder_position_latched[ENCO_POS_DATA_WIDTH - 1 : ENCO_POS_DATA_WIDTH - 10];  // Upper 10 bits of position
    assign led[10:0] = encoder_data_latched[ENCO_SPI_PKT_WIDTH - 1 : ENCO_SPI_PKT_WIDTH - 11];

    // RGB0: Error/Warning/OK status - 
    assign rgb0[0] = error_flag_latched;                        // Red = Error
    assign rgb0[1] = warning_flag_latched && !error_flag_latched;       // Green = Warning
    assign rgb0[2] = !error_flag_latched && !warning_flag_latched;      // Blue = OK
    
    // RGB1: Busy/Activity indicator (blink on data valid)
    logic [23:0] blink_counter;
    logic blink;
    
    always_ff @(posedge clk_100mhz) begin
        if (rst) begin
            blink_counter <= '0;
            blink <= 1'b0;
        end else begin
            if (encoder_data_valid) begin
                blink_counter <= 24'd5_000_000;  // 50ms blink
            end else if (blink_counter > 0) begin
                blink_counter <= blink_counter - 1;
            end
            
            blink <= (blink_counter > 0);
        end
    end
    
    assign rgb1[0] = 1'b0;
    assign rgb1[1] = blink;  // Green blink on new data
    assign rgb1[2] = 1'b0;

    // *************************************************** //
    
    spi_peripheral #(
        .DATA_WIDTH(8)
    ) spi_mcu_con_to_fpga_per ( //teensy or psoc
        .clk(clk_100mhz),
        .rst(rst),
        .data_in(spi_data_to_send),    // data to send to psoc controller
        .data_out(),                    // Ignore received data for now
        .data_valid(spi_byte_valid),    // Pulses after each byte
        .busy(spi_busy),
        .copi(copi),
        .cipo(cipo),
        .dclk(dclk),
        .cs(cs)
    );

    

    logic [ENCO_SPI_PKT_WIDTH - 1:0] spi_packet;
    logic [ENCO_SPI_PKT_WIDTH - 1:0] spi_shift_reg;
    logic [2:0]  spi_byte_count;
    logic        spi_byte_valid;
    logic [7:0]  spi_data_to_send;
    logic        spi_busy;
    logic        spi_packet_ready;
    logic        spi_transaction_done;
    logic        encoder_data_available;  // NEW: Track if we have valid data

    // assign spi_packet = uart_packet;
    //what I'm thinking
    // always_comb begin
    //     spi_packet = {
    //         encoder_data_latched[7:0],
    //         encoder_data_latched[15:8],
    //         encoder_data_latched[23:16],
    //         encoder_data_latched[31:24]
    //     };
    // end

    // analogous to SSI data format
    always_comb begin
        spi_packet = {
            encoder_status_latched[7:0],                          // byte 4: status[7:0]
            {warning_flag_latched, error_flag_latched,            // byte 3:
            encoder_status_latched[9:8], 2'b0,                   //  W E S9 S8 0 0
            encoder_position_latched[17:16]},                    //  pos[17:16]
            encoder_position_latched[15:8],                       // byte 2: pos[15:8]
            encoder_position_latched[7:0],                        // byte 1: pos[7:0]
            8'hA5                                                 // byte 0: SYNC (sent first)
        };
    end

    assign spi_transaction_done = (spi_byte_count == 3'd3) && spi_byte_valid;

    // enco packet is 4 bytes
    always_ff @(posedge clk_100mhz) begin

        if (rst) begin
            spi_shift_reg          <= {ENCO_SPI_PKT_WIDTH{1'b0}};
            spi_byte_count         <= 3'b0;
            spi_packet_ready       <= 1'b0;
            encoder_data_available <= 1'b0;  // NEW
        end 
        else if (spi_packet_ready) spi_packet_ready <= 1'b0;  // Drop interrupt

        //complete transaction
        else if (spi_transaction_done) begin
            spi_byte_count         <= 3'b0;
            encoder_data_available <= 1'b0;  // Mark data as consumed
        end
        
        // Shift to next byte 
        else if (spi_byte_valid) begin
            spi_shift_reg  <= {8'b0, spi_shift_reg[ENCO_SPI_PKT_WIDTH-1:8]};
            spi_byte_count <= spi_byte_count + 1'b1;
        end
        
        //Load new encoder data
        else if (encoder_data_valid && !data_valid_d) begin 
            // Always load fresh encoder data when it arrives
            spi_shift_reg          <= spi_packet;
            spi_byte_count         <= 3'b0;
            encoder_data_available <= 1'b1;  // Mark as available
            
            // Raise interrupt ONLY if SPI is idle
            if (!spi_busy && !spi_packet_ready) begin
                spi_packet_ready <= 1'b1;
            end
        end
    end

    assign spi_data_to_send = spi_shift_reg[7:0]; //why are bottom bits being grabbed first

    
    // Packet format signals
    // logic [39:0] uart_packet;
    // logic [39:0] uart_shift_reg;
    // logic [2:0]  uart_byte_count;  // 3 bits to count 0-7
    // logic        packet_waiting;
    
    // logic [7:0]  uart_data_in;
    // logic        uart_data_valid;
    // logic        uart_busy;

    // always_comb begin
    //     uart_packet = {
    //         {error_flag_latched, warning_flag_latched, 6'b000001},
    //         encoder_status_latched[7:0],
    //         encoder_position_latched[7:0],
    //         encoder_position_latched[15:8],
    //         5'b10000,
    //         encoder_position_latched[18:16]
    //     };
    // end

    // always_comb begin
    //     uart_packet = {
    //         encoder_status_latched[7:0],                          // byte 4: status[7:0]
    //         {warning_flag_latched, error_flag_latched,            // byte 3:
    //         encoder_status_latched[9:8], 1'b0,                   //  W E S9 S8 0
    //         encoder_position_latched[18:16]},                    //  pos[18:16]
    //         encoder_position_latched[15:8],                       // byte 2: pos[15:8]
    //         encoder_position_latched[7:0],                        // byte 1: pos[7:0]
    //         8'hA5                                                 // byte 0: SYNC (sent first)
    //     };
    // end

    

  
    // always_ff @(posedge clk_100mhz) begin
    //     if (rst) begin
    //         // Data latching signals
    //         encoder_position_latched <= '0;
    //         encoder_status_latched   <= '0;
    //         error_flag_latched       <= 1'b0;
    //         warning_flag_latched     <= 1'b0;
    //         data_valid_d             <= 1'b0;
    //         send_pending             <= 1'b0;
            
    //         // UART transmission signals
    //         // uart_shift_reg           <= 40'd0;
    //         // uart_byte_count          <= 3'd0;
    //         // packet_waiting           <= 1'b0; 
    //     end else begin
    //         // Edge detect on data_valid
    //         data_valid_d <= data_valid;
            
    //         // Latch incoming SSI data
    //         if (data_valid && !data_valid_d) begin
    //             encoder_position_latched <= encoder_position;
    //             encoder_status_latched   <= encoder_status;
    //             error_flag_latched       <= error_flag;
    //             warning_flag_latched     <= warning_flag;
    //             send_pending             <= 1'b1;
    //         end
            
    //         // Load packet when ready
    //         // if (send_pending && !packet_waiting) begin
    //         //     uart_shift_reg  <= uart_packet;
    //         //     uart_byte_count <= 3'd0;
    //         //     packet_waiting  <= 1'b1;
    //         //     send_pending    <= 1'b0;  // Clear flag after loading
    //         // end 
    //         // Transmit bytes one at a time
    //         // else if (uart_data_valid) begin
    //         //     if (uart_byte_count == 3'd7) begin  // 0-7 = 8 bytes
    //         //         packet_waiting <= 1'b0;
    //         //     end else begin
    //         //         uart_shift_reg  <= {8'd0, uart_shift_reg[39:8]};
    //         //         uart_byte_count <= uart_byte_count + 1'b1;
    //         //     end
    //         // end
    //     end
    // end

    // uart_transmit
    // #(
    //     .INPUT_CLOCK_FREQ(100_000_000),
    //     .BAUD_RATE(921600)
    // ) my_uart_transmit (
    //     .clk(clk_100mhz),
    //     .rst(rst),
    //     .din(uart_data_in),
    //     .trigger(uart_data_valid),
    //     .busy(uart_busy),
    //     .dout(uart_txd)
    // );

    // assign uart_data_valid = packet_waiting && !uart_busy;
    // assign uart_data_in    = uart_shift_reg[7:0];
    

endmodule


`default_nettype wire