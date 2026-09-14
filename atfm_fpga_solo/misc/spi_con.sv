//Your SPI (Serial Peripheral Interface) controller module from the exercise this week
module spi_con
     #(parameter DATA_WIDTH = 8,
       parameter DATA_CLK_PERIOD = 100
      )
(      input wire   clk_in, //system clock (100 MHz)
       input wire   rst_in, //reset in signal
       input wire   [DATA_WIDTH-1:0] data_in, //data to send
       input wire   trigger_in, //start a transaction (to write to data_in)
       output logic [DATA_WIDTH-1:0] data_out, //data received!
       output logic data_valid_out, //high when output data is present (to read from data_out)
 
       output logic copi, //(COPI)
       input wire   cipo, //(CIPO)
       output logic dclk, //(DCLK)
       output logic cs // (CS)
    );

//   localparam duty_cycle = 0.5;
    logic [31:0] clk_counter;
    logic [$clog2(DATA_WIDTH)-1:0] data_width_counter;
    logic [DATA_WIDTH-1:0] store_copi_data;
    logic [DATA_WIDTH-1:0] store_cipo_data;

    //encoder specifics
    parameter TS_DELAY_NUM_CYCLES = 13'd5000;
    logic [$clog2(TS_DELAY_NUM_CYCLES) - 1: 0] ts_delay_counter;
    logic past_ts_delay;

    // logic start_data_exchange;

  always_ff @(posedge clk_in) begin
    if (rst_in) begin
        copi <= 0; //COPI
        clk_counter <= 1'b1; 
        dclk <= 0; //DCLK
        cs <= 1'b1; //CS
        store_copi_data <= 0;
        start_data_exchange <= 0;
        data_width_counter <= DATA_WIDTH - 1;
        data_valid_out <= 0;

        ts_delay_counter <= 0;
        past_ts_delay <= 0;
    end else begin
        if (data_valid_out) data_valid_out <= 0;
        // begin transmission of data
        if (trigger_in) begin //at the beg of first half of DATA_CLK_PERIOD
            cs <= 1'b0; // active low signal that tells Peripheral that transaction is starting
            copi <= data_in[DATA_WIDTH - 1]; //COPI assigned data_in[7]
            start_data_exchange <= 1;
            dclk <= 0; //DCLK
            store_copi_data <= data_in[DATA_WIDTH - 2:0];//here
            clk_counter <= 1; 
            data_valid_out <= 0;

        end else if (!cs) begin //only want to run when transaction active
        

        // DCLK syncing
        if (clk_counter <  DATA_CLK_PERIOD/2) begin //DCLK = 0, -> x/2 rounds down by default
            //falling edge
            clk_counter <= clk_counter +1;
            dclk <= 0;
        end else if (clk_counter < DATA_CLK_PERIOD) begin  //DCLK = 1
            //rising edge
            if (!dclk) store_cipo_data <= {store_cipo_data, cipo};

            clk_counter <= clk_counter +1;
            dclk <= 1;

            
        end else begin //clk_counter == DATA_CLK_PERIOD restart clk counter, falling edge of DATA_CLK
            //right before DCLK is about to fall
            dclk <= 0;
            clk_counter <= 1;
            data_width_counter <= data_width_counter - 1; //decrement # of bits

            //on DCLK falling: store the full data_out and data_in bc values won't be held 
            store_copi_data <= (store_copi_data<<1); //Copi data, shift left so that msb is at DATA_WIDTH - 1 position
            copi <= store_copi_data[DATA_WIDTH - 2]; //COPI data set next data_out
            
            //CIPO

            if (data_width_counter == 0) begin //clean up after all bits sent
                cs <= 1;
                data_valid_out <= 1; //data was fully sent out
                data_width_counter <= DATA_WIDTH -1; //reset data_width (# of bits of data)
                data_out <= store_cipo_data;
            end
        end

        end
    end
    end
  
endmodule

