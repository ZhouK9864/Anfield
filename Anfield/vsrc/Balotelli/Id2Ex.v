`include "./vsrc/defines.v"
module Id2Ex (
  input Clk,
  input Rst,
  input [`AddrBus] InstAddrIn,
  input [`RegFileAddr] RdAddrIn,
  input RdWriteEnableIn,
  input [`DataBus] Rs1ReadDataIn,
  input [`DataBus] Rs2ReadDataIn,
  // input [`RegFileAddr] Rs1AddrIn,
  // input [`RegFileAddr] Rs2AddrIn,
  input [`DataBus] ImmIn,
  input [6:0] OpCodeIn,
  input [2:0] Funct3In,
  input [6:0] Funct7In,
  input [4:0] ShamtIn,
  //Jump
  input HoldFlagFromCtrl,
  output [`AddrBus] InstAddrOut,
  output [`RegFileAddr] RdAddrOut,
  output RdWriteEnableOut,
  output [`DataBus] Rs1ReadDataOut,
  output [`DataBus] Rs2ReadDataOut,
  // output [`RegFileAddr] Rs1AddrOut,
  // output [`RegFileAddr] Rs2AddrOut,
  output [`DataBus] ImmOut,
  output [6:0] OpCodeOut,
  output [2:0] Funct3Out,
  output [6:0] Funct7Out,
  output [4:0] ShamtOut
);

  RegWithEn #(`InstRegWidth, `PcInit) InstAddr_reg (Clk, Rst, InstAddrIn, HoldFlagFromCtrl, InstAddrOut, 1'b1);
  
  // RegWithEn #(`RegFileAddrWidth, `RegAddrInit) Rs1Addr_reg (Clk, Rst, Rs1AddrIn, HoldFlagFromCtrl, Rs1AddrOut, 1'b1);

  // RegWithEn #(`RegFileAddrWidth, `RegAddrInit) Rs2Addr_reg (Clk, Rst, Rs2AddrIn, HoldFlagFromCtrl, Rs2AddrOut, 1'b1);

  RegWithEn #(`RegFileAddrWidth, `RegAddrInit) RdAddr_reg (Clk, Rst, RdAddrIn, HoldFlagFromCtrl, RdAddrOut, 1'b1);

  RegWithEn #(1, 1'b0) RdWriteEnable_reg (Clk, Rst, RdWriteEnableIn, HoldFlagFromCtrl, RdWriteEnableOut, 1'b1);

  RegWithEn #(`DataWidth, `DataRegInit) Rs1ReadData_reg (Clk, Rst, Rs1ReadDataIn, HoldFlagFromCtrl, Rs1ReadDataOut, 1'b1);

  RegWithEn #(`DataWidth, `DataRegInit) Rs2ReadData_reg (Clk, Rst, Rs2ReadDataIn, HoldFlagFromCtrl, Rs2ReadDataOut, 1'b1);

  RegWithEn #(`DataWidth, `DataRegInit) Imm_reg (Clk, Rst, ImmIn, HoldFlagFromCtrl, ImmOut, 1'b1);
 
  RegWithEn #(7, 7'b0) OpCode_reg (Clk, Rst, OpCodeIn, HoldFlagFromCtrl, OpCodeOut, 1'b1);

  RegWithEn #(3, 3'b0) Funct3_reg (Clk, Rst, Funct3In, HoldFlagFromCtrl, Funct3Out, 1'b1);

  RegWithEn #(7, 7'b0) Funct7_reg (Clk, Rst, Funct7In, HoldFlagFromCtrl, Funct7Out, 1'b1);
  
  RegWithEn #(5, 5'b0) Shamt_reg (Clk, Rst, ShamtIn, HoldFlagFromCtrl, ShamtOut, 1'b1);

endmodule