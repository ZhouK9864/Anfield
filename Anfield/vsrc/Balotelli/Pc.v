module Pc (
  input Clk,
  input Rst,
  //Jump
  input [`AddrBus] JumpAddrFromCtrl,
  input [`HoldFlagBus] HoldFlagFromCtrl,
  output [`AddrBus] PcOut
);
  
  wire [`AddrBus] PcIn;

  assign PcIn = (HoldFlagFromCtrl == 3'b001) ? JumpAddrFromCtrl 
                : ((HoldFlagFromCtrl == 3'b010) ? PcOut 
                : (PcOut + 4));

  //使用Reg模板实现Pc_reg，后续只需要更改Reg模块的输入输出即可
  Reg #(`AddrRegWidth, `PcInit) Pc_reg (Clk, Rst, PcIn, PcOut, 1'b1);

endmodule
