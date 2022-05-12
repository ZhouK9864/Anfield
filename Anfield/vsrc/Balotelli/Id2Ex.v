`include "./vsrc/defines.v"
module Id2Ex (
  input Clk,
  input Rst,
  input [`AddrBus] InstAddrIn,
  input [`RegFileAddr] RdAddrIn,
  input RdWriteEnableIn,
  input [`DataBus] Rs1ReadDataIn,
  input [`DataBus] Rs2ReadDataIn,
  input [`RegFileAddr] Rs1AddrIn,
  input [`RegFileAddr] Rs2AddrIn,
  input [`DataBus] ImmIn,
  input [6:0] OpCodeIn,
  input [2:0] Funct3In,
  input [6:0] Funct7In,
  //Jump
  input HoldFlagFromCtrl,
  output reg [`AddrBus] InstAddrOut,
  output reg [`RegFileAddr] RdAddrOut,
  output reg RdWriteEnableOut,
  output reg [`DataBus] Rs1ReadDataOut,
  output reg [`DataBus] Rs2ReadDataOut,
  output reg [`RegFileAddr] Rs1AddrOut,
  output reg [`RegFileAddr] Rs2AddrOut,
  output reg [`DataBus] ImmOut,
  output reg [6:0] OpCodeOut,
  output reg [2:0] Funct3Out,
  output reg [6:0] Funct7Out
);

  RegWithEn #(`InstRegWidth, `PcInit) InstAddr_reg (Clk, Rst, InstAddrIn, HoldFlagFromCtrl, InstAddrOut, 1'b1);
  
  RegWithEn #(`RegFileAddrWidth, `RegAddrInit) Rs1Addr_reg (Clk, Rst, Rs1AddrIn, HoldFlagFromCtrl, Rs1AddrOut, 1'b1);

  RegWithEn #(`RegFileAddrWidth, `RegAddrInit) Rs2Addr_reg (Clk, Rst, Rs2AddrIn, HoldFlagFromCtrl, Rs2AddrOut, 1'b1);

  RegWithEn #(`RegFileAddrWidth, `RegAddrInit) RdAddr_reg (Clk, Rst, RdAddrIn, HoldFlagFromCtrl, RdAddrOut, 1'b1);

  RegWithEn #(1, 1'b0) RdWriteEnable_reg (Clk, Rst, RdWriteEnableIn, HoldFlagFromCtrl, RdWriteEnableOut, 1'b1);

  RegWithEn #(`DataWidth, `DataRegInit) Rs1ReadData_reg (Clk, Rst, Rs1ReadDataIn, HoldFlagFromCtrl, Rs1ReadDataOut, 1'b1);

  RegWithEn #(`DataWidth, `DataRegInit) Rs2ReadData_reg (Clk, Rst, Rs2ReadDataIn, HoldFlagFromCtrl, Rs2ReadDataOut, 1'b1);

  RegWithEn #(`DataWidth, `DataRegInit) Imm_reg (Clk, Rst, ImmIn, HoldFlagFromCtrl, ImmOut, 1'b1);
 
  RegWithEn #(7, 7'b0) OpCode_reg (Clk, Rst, OpCodeIn, HoldFlagFromCtrl, OpCodeOut, 1'b1);

  RegWithEn #(3, 3'b0) Funct3_reg (Clk, Rst, Funct3In, HoldFlagFromCtrl, Funct3Out, 1'b1);

  RegWithEn #(7, 7'b0) Funct7_reg (Clk, Rst, Funct7In, HoldFlagFromCtrl, Funct7Out, 1'b1);

endmodule