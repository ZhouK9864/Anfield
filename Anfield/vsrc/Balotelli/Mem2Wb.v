module Mem2Wb (
  input Clk,
  input Rst,
  input [`DataBus] RdWriteDataIn,
  input [`RegFileAddr] RdAddrIn,
  input RdWriteEnableIn,
  output reg [`DataBus] RdWriteDataOut,
  output reg [`RegFileAddr] RdAddrOut,
  output reg RdWriteEnableOut
);

  Reg #(`DataWidth, `DataRegInit) RdWriteData (Clk, Rst, RdWriteDataIn, RdWriteDataOut, 1'b1);

  Reg #(`RegFileAddrWidth, `RegAddrInit) RdAddr (Clk, Rst, RdAddrIn, RdAddrOut, 1'b1);

  Reg #(1, 1'b0) RdWriteEnable (Clk, Rst, RdWriteEnableIn, RdWriteEnableOut, 1'b1);


endmodule