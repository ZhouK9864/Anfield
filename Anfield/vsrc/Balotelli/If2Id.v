module If2Id (
  input Clk,
  input Rst,
  input [`AddrBus] InstAddrIn,
  input [`InstBus] InstIn,
  //Jump
  input [`HoldFlagBus] HoldFlagFromCtrl,
  output [`AddrBus] InstAddrOut,
  output [`InstBus] InstOut
);

  RegWithEnHoldData #(`AddrRegWidth, `PcInit) InstAddr_reg (Clk, Rst, InstAddrIn, HoldFlagFromCtrl, InstAddrOut, 1'b1);

  RegWithEnHoldData #(`InstRegWidth, `InstRegInit) Inst_reg (Clk, Rst, InstIn, HoldFlagFromCtrl, InstOut, 1'b1);

endmodule