`include "./vsrc/defines.v"
module Id2Ex (
  input Clk,
  input Rst,
  input [`AddrBus] InstAddrIn,
  input [`RegFileAddr] RdAddrIn,
  input RdWriteEnableIn,
  input [`DataBus] Rs1ReadDataIn,
  input [`DataBus] Rs2ReadDataIn,
  input [`DataBus] ImmIn,
  input [6:0] OpCodeIn,
  input [2:0] Funct3In,
  input [6:0] Funct7In,
  output reg [`AddrBus] InstAddrOut,
  output reg [`RegFileAddr] RdAddrOut,
  output reg RdWriteEnableOut,
  output reg [`DataBus] Rs1ReadDataOut,
  output reg [`DataBus] Rs2ReadDataOut,
  output reg [`DataBus] ImmOut,
  output reg [6:0] OpCodeOut,
  output reg [2:0] Funct3Out,
  output reg [6:0] Funct7Out
);

  Reg #(`InstRegWidth, `PcInit) InstAddr (Clk, Rst, InstAddrIn, InstAddrOut, 1'b1);
  
  Reg #(`RegFileAddrWidth, `RegAddrInit) RdAddr (Clk, Rst, RdAddrIn, RdAddrOut, 1'b1);

  Reg #(1, 1'b0) RdWriteEnable (Clk, Rst, RdWriteEnableIn, RdWriteEnableOut, 1'b1);

  Reg #(`DataWidth, `DataRegInit) Rs1ReadData (Clk, Rst, Rs1ReadDataIn, Rs1ReadDataOut, 1'b1);

  Reg #(`DataWidth, `DataRegInit) Rs2ReadData (Clk, Rst, Rs2ReadDataIn, Rs2ReadDataOut, 1'b1);

  Reg #(`DataWidth, `DataRegInit) Imm (Clk, Rst, ImmIn, ImmOut, 1'b1);
 
  Reg #(7, 7'b0) OpCode (Clk, Rst, OpCodeIn, OpCodeOut, 1'b1);

  Reg #(3, 3'b0) Funct3 (Clk, Rst, Funct3In, Funct3Out, 1'b1);

  Reg #(7, 7'b0) Funct7 (Clk, Rst, Funct7In, Funct7Out, 1'b1);

endmodule