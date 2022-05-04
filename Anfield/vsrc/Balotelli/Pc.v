module Pc (
  input Clk,
  input Rst,
  output [`AddrBus] PcOut
);

  //使用Reg模板实现Pc_reg，后续只需要更改Reg模块的输入输出即可
  Reg #(`AddrRegWidth, `PcInit) Pc_reg (Clk, Rst, PcOut + 64'h4, PcOut, 1'b1);

endmodule
