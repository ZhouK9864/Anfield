module Pc (
  input Clk,
  input Rst,
  //Jump
  input [`AddrBus] JumpAddrFromCtrl,
  input JumpFlagFromCtrl,
  output [`AddrBus] PcOut
);
  
  wire [`AddrBus] PcIn;

  assign PcIn = JumpFlagFromCtrl ? JumpAddrFromCtrl : (PcOut + 4);

  //使用Reg模板实现Pc_reg，后续只需要更改Reg模块的输入输出即可
  Reg #(`AddrRegWidth, `PcInit) Pc_reg (Clk, Rst, PcIn, PcOut, 1'b1);

endmodule
