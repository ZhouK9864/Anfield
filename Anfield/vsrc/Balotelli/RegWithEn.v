// 触发器模板
module RegWithEn #(WIDTH = 1, RESET_VAL = 0) (
  input clk,
  input rst,
  input [WIDTH-1:0] din,
  input en,
  output reg [WIDTH-1:0] dout,
  input wen
);

  always @(posedge clk or negedge rst) begin
    if (!rst | en) dout <= RESET_VAL;
    else if (wen) dout <= din;
  end
  
endmodule