`default_nettype none // prevents system from inferring an undeclared logic (good practice)

module old_top_level
    (
    input wire              clk_100mhz, //100 MHz onboard clock
    input wire [15:0]       sw, //all 16 input slide switches
    input wire [3:0]        btn, //all four momentary button switches
    output logic [15:0]     led, //16 green output LEDs (located right above switches)
    output logic [2:0]      rgb0, //RGB channels of RGB LED0
    output logic [2:0]      rgb1, //RGB channels of RGB LED1
    output logic            spkl, spkr, // left and right channels of line out port
    input wire              cipo, // SPI controller-in peripheral-out
    output logic            copi, dclk, cs, // SPI controller output signals
    input wire              uart_rxd, // UART computer->FPGA
    output logic            uart_txd, // UART FPGA->computer

    //debug ports:
    output logic debug_copi,        //change name of pmodb[0] in default xdc
    output logic debug_cipo,        //change name of pmodb[1] in default xdc
    output logic debug_dclk,        //change name of pmodb[2] in default xdc
    output logic debug_cs,          //change name of pmodb[3] in default xdc
    output logic debug_uart_rxd,    //change name of pmodb[4] in default xdc
    output logic debug_uart_txd     //change name of pmodb[5] in default xdc
    );

    //shut up those rgb LEDs for now (active high):
    assign rgb1 = 0; //set to 0.
    assign rgb0 = 0; //set to 0.

    //have btnd control system reset
    logic   sys_rst;
    assign sys_rst = btn[0];

    //debug connections:
    assign debug_copi       = copi;
    assign debug_cipo       = cipo;
    assign debug_dclk       = dclk;
    assign debug_cs         = cs;
    assign debug_uart_rxd   = uart_rxd;
    assign debug_uart_txd   = uart_txd;

    // Checkoff 1: Microphone->SPI->UART->Computer

    // 8kHz trigger using a week 1 counter!

    // TODO: set this parameter to the number of clock cycles between each cycle of an 8kHz trigger
    localparam CYCLES_PER_TRIGGER = 12500; // DONE

    logic [31:0]    trigger_count;
    logic           spi_trigger;

    counter counter_8khz_trigger
    (   .clk(clk_100mhz),
        .rst(sys_rst),
        .period(CYCLES_PER_TRIGGER),
        .count(trigger_count)
    );

    // TODO: use the trigger_count output to make spi_trigger a single-cycle high with 8kHz frequency

    // SPI Controller on our ADC

    // TODO: bring in the instantiation of your SPI controller from the end of last week's lab!
    // you updated some parameter values based on the MCP3008's specification, bring those updates here.
    // see: "The Whole Thing", last checkoff from Week 02
    parameter ADC_DATA_WIDTH = 17; //DONE
    parameter ADC_DATA_CLK_PERIOD = 50; //DONE

    // SPI interface controls
    logic [ADC_DATA_WIDTH-1:0] spi_write_data;
    logic [ADC_DATA_WIDTH-1:0] spi_read_data;
    logic                      spi_read_data_valid;


    // Since now we're only ever reading from one channel, spi_write_data can stay constant.
    // TODO: Assign it a proper value for accessing CH7!
    assign spi_write_data = 17'b11111_0000_0000_0000; // DONE

    //built last week:
    spi_con
    #(  .DATA_WIDTH(ADC_DATA_WIDTH),
        .DATA_CLK_PERIOD(ADC_DATA_CLK_PERIOD)
    )my_spi_con
    (   .clk(clk_100mhz),
        .rst(sys_rst),
        .data_in(spi_write_data),
        .trigger(spi_trigger),
        .data_out(spi_read_data),
        .data_valid(spi_read_data_valid), //high when output data is present.
        .copi(copi), //(serial dout preferably)
        .cipo(cipo), //(serial din preferably)
        .dclk(dclk),
        .cs(cs)
    );

    logic [7:0]                audio_sample;

    // TODO: store your audio sample from the SPI controller, only when the data is valid!

    // Line out Audio
    logic [7:0]                line_out_audio;

    // for checkoff 1: pass-through the audio sample we captured from SPI!
    // also, make the value much much smaller so that we don't kill our ears :)
    assign line_out_audio = audio_sample >> 3;
    logic                      spk_out;
    // TODO: instantiate a pwm module to drive spk_out based on the
    // set both output channels equal to the same PWM signal!
    assign spkl = spk_out;
    assign spkr = spk_out;

    pwm speaker_pwm(   .clk(clk_100mhz),
              .rst(sys_rst),
              .dc_in(douta),
              .sig_out(spk_out)); // DONE

    // Data Buffer SPI-UART
    // TODO: write some sequential logic to keep track of whether the
    //  current audio_sample is waiting to be sent,
    //  and to set the uart_transmit inputs appropriately.
    //  **be sure to only ever set uart_data_valid high if sw[0] is on,
    //  so we only send data on UART when we're trying to receive it!
    logic                      audio_sample_waiting;
    logic [7:0]                uart_data_in;
    logic                      uart_data_valid;
    logic                      uart_busy;

    uart_transmit
  #(
    .INPUT_CLOCK_FREQ(100_000_000),
    .BAUD_RATE(115200)
  ) my_uart_transmit
    (
    .clk(clk_100mhz),
    .rst(sys_rst),
    .din(uart_data_in),
    .trigger(uart_data_valid),
    .busy(uart_busy),
    .dout(uart_txd)
    );

    assign uart_data_valid = audio_sample_waiting && sw[0];
    always_ff @(posedge clk_100mhz) begin
        spi_trigger <= trigger_count == 0 ? 1 : 0; 
        if (spi_read_data_valid) begin 
            audio_sample <= spi_read_data[9:2]; 
            uart_data_in <= spi_read_data[9:2];
            audio_sample_waiting <= 1; 
        end else if (audio_sample_waiting && !uart_busy) begin 
            audio_sample_waiting <= 0;
        end 
    end 

    // UART Transmitter to FTDI2232
    // TODO: instantiate the UART transmitter you just wrote, using the input signals from above.


    // Checkoff 2: leave this stuff commented until you reach the second checkoff page!

    // Synchronizer (Lecture 5)
    // TODO: pass your uart_rx data through a couple buffer synchronization flip-flops,
    // save yourself the pain of metastability!
    // uart_rxd should drive uart_rx_buf0 should drive uart_rx_buf1, all sequentially
    logic                      uart_rx_buf0, uart_rx_buf1;

    // UART Receiver
    // TODO: instantiate your uart_receive module, connected up to the synchronized uart_rx signal
    // declare any signals you need to keep track of!
    always_ff @(posedge clk_100mhz) begin 
        uart_rx_buf0 <= uart_rxd; 
        uart_rx_buf1 <= uart_rx_buf0;
    end 

    logic uart_receive_valid;
     
    uart_receive
  #(
    .INPUT_CLOCK_FREQ(100_000_000),
    .BAUD_RATE(115200)
    )
    my_uart_receive
   (
    .clk(clk_100mhz),
    .rst(sys_rst),
    .din(uart_rx_buf1),
    .dout_valid(uart_receive_valid),
    .dout(dinb)
    );
    // BRAM Memory
    // We've configured this for you, but you'll need to hook up your address and data ports to the rest of your logic!

    parameter BRAM_WIDTH = 8;
    parameter BRAM_DEPTH = 40_000; // 40_000 samples = 5 seconds of samples at 8kHz sample
    parameter ADDR_WIDTH = $clog2(BRAM_DEPTH);

    // only using port a for reads: we only use dout
    logic [BRAM_WIDTH-1:0]     douta;
    logic [ADDR_WIDTH-1:0]     addra;

    // only using port b for writes: we only use din
    logic [BRAM_WIDTH-1:0]     dinb;
    logic [ADDR_WIDTH-1:0]     addrb;

    xilinx_true_dual_port_read_first_2_clock_ram
    #(  .RAM_WIDTH(BRAM_WIDTH),
        .RAM_DEPTH(BRAM_DEPTH)
    ) audio_bram(
        // PORT A:
        .addra(addra),
        .dina(0), // we only use port A for reads!
        .clka(clk_100mhz),
        .wea(1'b0), // read only
        .ena(1'b1),
        .rsta(sys_rst),
        .regcea(1'b1),
        .douta(douta),
        // PORT B:
        .addrb(addrb),
        .dinb(dinb),
        .clkb(clk_100mhz),
        .web(1'b1), // write always
        .enb(1'b1),
        .rstb(sys_rst),
        .regceb(1'b1),
        .doutb() // we only use port B for writes!
        );


    // Memory addressing
    // TODO: instantiate an event counter that increments once every 8000th of a second
    // for addressing the (port A) data we want to send out to LINE OUT!
    evt_counter
#(
    .MAX_COUNT(BRAM_DEPTH), 
    .COUNT_WIDTH(ADDR_WIDTH)
) evt_a
    (   .clk(clk_100mhz),
        .rst(sys_rst),
        .evt(spi_trigger),
        .count(addra)
    );

    // TODO: instantiate another event counter that increments with each new UART data byte
    // for addressing the (port B) place to send our UART_RX data!
    // reminder TODO: go up to your PWM module, wire up the speaker to play the data from port A dout.
    evt_counter
#(
    .MAX_COUNT(BRAM_DEPTH), 
    .COUNT_WIDTH(ADDR_WIDTH)
) evt_b
    (   .clk(clk_100mhz),
        .rst(sys_rst),
        .evt(uart_receive_valid),
        .count(addrb)
    );

endmodule // top_level

`default_nettype wire