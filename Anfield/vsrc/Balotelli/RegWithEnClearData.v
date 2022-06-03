`include "./vsrc/defines.v"
//当hold信号使能时清除当前数据
module RegWithEnClearData #(WIDTH = 1, RESET_VAL = 0) (
  input clk,
  input rst,
  input [WIDTH-1:0] din,
  input [`HoldFlagBus] en,
  output reg [WIDTH-1:0] dout,
  input wen
);

  always @(posedge clk or negedge rst) begin
    if (!rst | en == 3'b001 | en == 3'b010) dout <= RESET_VAL;
    else if (wen) dout <= din;
  end
  
endmodule