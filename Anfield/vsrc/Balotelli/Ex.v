`include "./vsrc/defines.v"
module Ex (
  input [`AddrBus] InstAddrIn,
  input [`RegFileAddr] RdAddrIn,
  input RdWriteEnableIn,
  input [`DataBus] Rs1ReadDataIn,
  input [`DataBus] Rs2ReadDataIn,
  input [`DataBus] ImmIn,
  input [6:0] OpCodeIn,
  input [2:0] Funct3In,
  input [6:0] Funct7In,
  output reg [`DataBus] RdWriteDataOut,
  output [`RegFileAddr] RdAddrOut,
  output RdWriteEnableOut
);

  assign RdAddrOut = RdAddrIn;
  assign RdWriteEnableOut = RdWriteEnableIn;
  
  wire [`DataBus] Funct3_I_typeOut;

  MuxKeyWithDefault #(1, 3, 64) Funct3_I_type (Funct3_I_typeOut, Funct3In, 64'b0, {
    3'b000, (ImmIn + Rs1ReadDataIn)
  });

  MuxKeyWithDefault #(1, 7, 64) OpOcde_RdWriteDataOut (RdWriteDataOut, OpCodeIn, 64'b0, {
    7'b0010011, Funct3_I_typeOut
  });
  
endmodule