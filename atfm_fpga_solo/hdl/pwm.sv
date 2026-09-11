`default_nettype none // prevents system from inferring an undeclared logic (good practice)

module pwm(   input wire clk,
              input wire rst,
              input wire [7:0] dc_in,
              output logic sig_out);
 
    logic [31:0] count;
    counter mc(.clk(clk),
                .rst(rst),
                .period(255),
                .count(count));
     
    logic [7:0] current_dc;
    always_ff @(posedge clk) begin
        current_dc <= rst ? 0 : ((count == 254) ? dc_in : current_dc);
    end 

    assign sig_out = count < current_dc; //very simple threshold check
endmodule

`default_nettype wire
