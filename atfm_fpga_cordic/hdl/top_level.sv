`default_nettype none // prevents system from inferring an undeclared logic (good practice)
`timescale 1ns/1ps
module top_level(
        input wire [15:0] sw, //all 16 input slide switches
        input wire [3:0] btn, //all four momentary button switches
        input wire [7:0] pmoda,
        inout wire [7:0] pmodb,
        input wire clk_100mhz,
        output logic [15:0] led, //16 green output LEDs (located right above switches)
        output logic [2:0] rgb0, //RGB channels of RGB LED0
        output logic [2:0] rgb1, //RGB channels of RGB LED1
        output logic [3:0] ss0_an,//anode control for upper four digits of seven-seg display
        output logic [3:0] ss1_an,//anode control for lower four digits of seven-seg display
        output logic [6:0] ss0_c, //cathode controls for the segments of upper four digits
        output logic [6:0] ss1_c, //cathod controls for the segments of lower four digits
        output logic uart_txd
    );
 
    logic qspi_clk;
    logic qspi_cs;
    logic [3:0] qspi_io;
    always_comb begin
        qspi_clk = pmodb[2];
        qspi_cs = pmodb[5];
        qspi_io = {pmodb[1], pmodb[7], pmodb[6], pmodb[3]};
    end

    logic [15:0] cos_out;
    logic [15:0] sin_out;
    logic [31:0] display_num;
    assign display_num = {cos_out, sin_out};

    cordic_cossin #(.WIDTH(16), .NUM_ITERATIONS(16)) cordic(
        .clk(clk_100mhz),
        .angle(sw[15:0]),
        .cos(cos_out),
        .sin(sin_out)
    );

    logic [7:0] spi_byte;
    logic data_valid;
    /*spi_peripheral #(.DATA_WIDTH(8)) spi(
        .clk(clk_100mhz),
        .rst(1'b0),
        .data_in('0),
        .data_out(spi_byte),
        .cipo(pmoda[1]),
        .copi(pmoda[0]),
        .dclk(pmoda[2]),
        .cs(pmoda[3]),
        .data_valid(data_valid)
    );

    logic [1:0][31:0] spi_packet;
    packet_receiver #(
        .WORDS(8),
        .WORD_WIDTH(8),
        .SOP_WORDS(4),
        .START_OF_PACKET(32'hDEADBEEF),
        .LITTLE_WORD_ORDER(1'b1),
        .LITTLE_BIT_ORDER(1'b1)
    ) spi_receiver(
        .clk(clk_100mhz),
        .word_in(spi_byte),
        .should_sample(data_valid),
        .data_out(spi_packet),
        .busy(led[15])
        //.last_sop_buffer(display_num)
    );*/

    logic [7:0] qspi_byte;
    parallel_spi_peripheral #(.SENT_DATA_WIDTH(32), .DATA_LINES(4), .CMD_WIDTH(8) )qspi(
        .clk(clk_100mhz),
        .rst(1'b0),
        .data_in(display_num),
        .cmd_out(qspi_byte),
        .io(qspi_io),
        .dclk_in(qspi_clk),
        .cs_in(qspi_cs)
    );

    //assign display_num = spi_packet[0];
    //assign led[14:0] = spi_packet[0][14:0]; 

    short7s ss1(
        .clk(clk_100mhz),
        .num(display_num[15:0]),
        .anode(ss1_an),
        .cathode(ss1_c)
    );

    short7s ss0(
        .clk(clk_100mhz),
        .num(/*display_num[31:16]*/qspi_byte),
        .anode(ss0_an),
        .cathode(ss0_c)
    );

    /*logic [(8 * 8 - 1):0] uart_packet;
    assign uart_packet = {
        sin_out[15:0],
        cos_out[15:0],
        32'hEFBEADDE
    };

    uart_struct_transmit #(.INPUT_CLOCK_FREQ(100000000), .BAUD_RATE(9600), .DATA_BITS(8), .WORDS(8)) uart(
        .clk(clk_100mhz),
        .trigger(1'b1),
        .din(uart_packet),
        .dout(uart_txd)
    );*/

    //uart_transmit #(.INPUT_CLOCK_FREQ(100000000), .BAUD_RATE(9600), .DATA_BITS(8)) uart(
    //    .clk(clk_100mhz),
    //    .trigger(1),
    //    .rst(0),
    //    .din(cos_out[15:8]),
    //    .dout(uart_txd)
    //);
 
    //assign led = sw;
    assign rgb0 = 3'b0; //just shut up rgb0 (it is bright)
    assign rgb1 = 3'b0; //just shut up rgb1 (it is bright)
 
endmodule // top_level
/* I usually add a comment to associate my endmodule line with the module name
 * this helps when if you have multiple module definitions in a file
 */
 
// reset the default net type to wire, sometimes other code expects this.
`default_nettype wire