module Ex2Mem (
  input Clk,
  input Rst,
  input [`DataBus] RdWriteDataIn,
  input [`RegFileAddr] RdAddrIn,
  input RdWriteEnableIn,
  input [`DataBus] ImmIn,
  input [6:0] OpCodeIn,
  input [2:0] Funct3In,
  input [`DataBus] Rs1ReadDataIn,
  input [`DataBus] Rs2ReadDataIn,
  output [`DataBus] RdWriteDataOut,
  output [`RegFileAddr] RdAddrOut,
  output RdWriteEnableOut,
  output [`DataBus] ImmOut,
  output [6:0] OpCodeOut,
  output [2:0] Funct3Out,
  output [`DataBus] Rs1ReadDataOut,
  output [`DataBus] Rs2ReadDataOut
);

  Reg #(`DataWidth, `DataRegInit) RdWriteData_reg (Clk, Rst, RdWriteDataIn, RdWriteDataOut, 1'b1);

  Reg #(`RegFileAddrWidth, `RegAddrInit) RdAddr_reg (Clk, Rst, RdAddrIn, RdAddrOut, 1'b1);

  Reg #(1, 1'b0) RdWriteEnable_reg (Clk, Rst, RdWriteEnableIn, RdWriteEnableOut, 1'b1);

  Reg #(`DataWidth, `DataRegInit) Imm_reg (Clk, Rst, ImmIn, ImmOut, 1'b1);

  Reg #(7, 7'b0) OpCode_reg (Clk, Rst, OpCodeIn, OpCodeOut, 1'b1);

  Reg #(3, 3'b0) Funct3_reg (Clk, Rst, Funct3In, Funct3Out, 1'b1);

  Reg #(`DataWidth, `DataRegInit) Rs1ReadData_reg (Clk, Rst, Rs1ReadDataIn, Rs1ReadDataOut, 1'b1);

  Reg #(`DataWidth, `DataRegInit) Rs2ReadData_reg (Clk, Rst, Rs2ReadDataIn, Rs2ReadDataOut, 1'b1);

endmodule