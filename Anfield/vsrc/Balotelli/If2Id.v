module If2Id (
  input Clk,
  input Rst,
  input [`AddrBus] InstAddrIn,
  input [`InstBus] InstIn,
  output [`AddrBus] InstAddrOut,
  output [`InstBus] InstOut
);

  Reg #(`AddrRegWidth, `PcInit) InstAddr_reg (Clk, Rst, InstAddrIn, InstAddrOut, 1'b1);

  Reg #(`InstRegWidth, `InstRegInit) Inst_reg (Clk, Rst, InstIn, InstOut, 1'b1);

endmodule