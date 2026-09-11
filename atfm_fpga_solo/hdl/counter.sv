`default_nettype none // prevents system from inferring an undeclared logic (good practice)

module counter(     input wire clk,
                    input wire rst,
                    input wire [31:0] period,
                    output logic [31:0] count
              );

      always_ff @(posedge clk)begin
        count <= rst ? 0 : (count >= period - 1 ? 0 : count + 1);
      end
endmodule

`default_nettype wire
