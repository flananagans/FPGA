`default_nettype none
module counter (
    input wire clk,
    input wire rst,
    input wire [15:0] period,
    output logic [15:0] count);

    always_ff @(posedge clk)begin
        if (rst || (count >= period) )
            count <= 0;
        else
            count <= count + 1;
    end
endmodule

module pwm(   input wire clk,
              input wire rst,
              input wire [3:0] dc_in,
              output logic sig_out);
 
    logic [31:0] count;
    counter mc (.clk(clk),
                .rst(rst),
                .period(16'd15),
                .count(count));
    assign sig_out = count<dc_in; //very simple threshold check
endmodule