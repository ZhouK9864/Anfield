`include "./vsrc/defines.v"
module Balotelli (
  input Clk,
  input Rst,
  input [`InstBus] InstIn,
  output [`AddrBus] PcOut
); 

  //RegFile In
  wire [`DataBus] RdWriteData_RegFileIn;
  wire [`RegFileAddr] RdAddr_RegFileIn;
  wire RdWriteEnable_RegFileIn;
  //RegFile Out
  wire [`DataBus] Rs1ReadData_RegFileOut;
  wire [`DataBus] Rs2ReadData_RegFileOut;  
  
  //Id IN
  wire [`InstBus] Inst_IdIn;
  wire [`AddrBus] InstAddr_IdIn;
  //Id OUT
  wire [`RegFileAddr] Rs1Addr_IdOut;
  wire [`RegFileAddr] Rs2Addr_IdOut;
  wire [`AddrBus] InstAddr_IdOut;
  wire Rs1ReadEnable_IdOut;
  wire Rs2ReadEnable_IdOut;
  wire [`RegFileAddr] RdAddr_IdOut;
  wire RdWriteEnable_IdOut;
  wire [`DataBus] Rs1ReadData_IdOut;
  wire [`DataBus] Rs2ReadData_IdOut;
  wire [`DataBus] Imm_IdOut;
  wire [6:0] OpCode_IdOut;
  wire [2:0] Funct3_IdOut;
  wire [6:0] Funct7_IdOut;

  //Ex In
  wire [`AddrBus] InstAddr_ExIn;
  wire [`RegFileAddr] RdAddr_ExIn;
  wire RdWriteEnable_ExIn;
  wire [`DataBus] Rs1ReadData_ExIn;
  wire [`DataBus] Rs2ReadData_ExIn;
  wire [`DataBus] Imm_ExIn;
  wire [6:0] OpCode_ExIn;
  wire [2:0] Funct3_ExIn;
  wire [6:0] Funct7_ExIn;
  //Ex Out
  wire [`DataBus] RdWriteData_ExOut;
  wire [`RegFileAddr] RdAddr_ExOut;
  wire RdWriteEnable_ExOut;

  //Mem In
  wire [`DataBus] RdWriteData_MemIn;
  wire [`RegFileAddr] RdAddr_MemIn;
  wire RdWriteEnable_MemIn;
  //Mem Out
  wire [`DataBus] RdWriteData_MemOut;
  wire [`RegFileAddr] RdAddr_MemOut;
  wire RdWriteEnable_MemOut;

  Pc Balotelli_Pc (
    .Clk(Clk),
    .Rst(Rst),
    .PcOut(PcOut)
  );

  If2Id Balotelli_If2Id (
    .Clk(Clk),
    .Rst(Rst),
    .InstAddrIn(PcOut),
    .InstAddrOut(InstAddr_IdIn),
    .InstIn(InstIn),
    .InstOut(Inst_IdIn)
  );

  Id Balotelli_Id (
    .InstAddrIn(InstAddr_IdIn),
    .InstIn(Inst_IdIn),
    .Rs1ReadDataIn(Rs1ReadData_RegFileOut),
    .Rs2ReadDataIn(Rs2ReadData_RegFileOut),
    .InstAddrOut(InstAddr_IdOut),
    .Rs1AddrOut(Rs1Addr_IdOut),
    .Rs1ReadEnable(Rs1ReadEnable_IdOut),
    .Rs2AddrOut(Rs2Addr_IdOut),
    .Rs2ReadEnable(Rs2ReadEnable_IdOut),
    .RdAddrOut(RdAddr_IdOut),
    .RdWriteEnable(RdWriteEnable_IdOut),
    .Rs1ReadDataOut(Rs1ReadData_IdOut),
    .Rs2ReadDataOut(Rs2ReadData_IdOut),
    .Imm(Imm_IdOut),
    .OpCode(OpCode_IdOut),
    .Funct3(Funct3_IdOut),
    .Funct7(Funct7_IdOut)
  );

  RegFile Balotelli_RegFile (
    .Clk(Clk),
    .Rst(Rst),
    .RdWriteData(RdWriteData_RegFileIn),
    .RdWriteAddr(RdAddr_RegFileIn),
    .RdWriteEnable(RdWriteEnable_RegFileIn),
    .Rs1AddrIn(Rs1Addr_IdOut),
    .Rs1ReadEnable(Rs1ReadEnable_IdOut),
    .Rs2AddrIn(Rs2Addr_IdOut),
    .Rs2ReadEnable(Rs2ReadEnable_IdOut),
    .Rs1ReadData(Rs1ReadData_RegFileOut),
    .Rs2ReadData(Rs2ReadData_RegFileOut)
  );

  Id2Ex Balotelli_Id2Ex (
    .Clk(Clk),
    .Rst(Rst),
    .InstAddrIn(InstAddr_IdOut),
    .RdAddrIn(RdAddr_IdOut),
    .RdWriteEnableIn(RdWriteEnable_IdOut),
    .Rs1ReadDataIn(Rs1ReadData_IdOut),
    .Rs2ReadDataIn(Rs2ReadData_IdOut),
    .ImmIn(Imm_IdOut),
    .OpCodeIn(OpCode_IdOut),
    .Funct3In(Funct3_IdOut),
    .Funct7In(Funct7_IdOut),
    .InstAddrOut(InstAddr_ExIn),
    .RdAddrOut(RdAddr_ExIn),
    .RdWriteEnableOut(RdWriteEnable_ExIn),
    .Rs1ReadDataOut(Rs1ReadData_ExIn),
    .Rs2ReadDataOut(Rs2ReadData_ExIn),
    .ImmOut(Imm_ExIn),
    .OpCodeOut(OpCode_ExIn),
    .Funct3Out(Funct3_ExIn),
    .Funct7Out(Funct7_ExIn) 
  );

  Ex Balotelli_Ex (
    .InstAddrIn(InstAddr_ExIn),
    .RdAddrIn(RdAddr_ExIn),
    .RdWriteEnableIn(RdWriteEnable_ExIn),
    .Rs1ReadDataIn(Rs1ReadData_ExIn),
    .Rs2ReadDataIn(Rs2ReadData_ExIn),
    .ImmIn(Imm_ExIn),
    .OpCodeIn(OpCode_ExIn),
    .Funct3In(Funct3_ExIn),
    .Funct7In(Funct7_ExIn),
    .RdWriteDataOut(RdWriteData_ExOut),
    .RdAddrOut(RdAddr_ExOut),
    .RdWriteEnableOut(RdWriteEnable_ExOut)
  );

  Ex2Mem Balotelli_Ex2Mem (
    .Clk(Clk),
    .Rst(Rst),
    .RdWriteDataIn(RdWriteData_ExOut),
    .RdAddrIn(RdAddr_ExOut),
    .RdWriteEnableIn(RdWriteEnable_ExOut),
    .RdWriteDataOut(RdWriteData_MemIn),
    .RdAddrOut(RdAddr_MemIn),
    .RdWriteEnableOut(RdWriteEnable_MemIn)
  );

  Mem Balotelli_Mem (
    .RdWriteDataIn(RdWriteData_MemIn),
    .RdAddrIn(RdAddr_MemIn),
    .RdWriteEnableIn(RdWriteEnable_MemIn),
    .RdWriteDataOut(RdWriteData_MemOut),
    .RdAddrOut(RdAddr_MemOut),
    .RdWriteEnableOut(RdWriteEnable_MemOut)
  );

  Mem2Wb Balotelli_Mem2Wb (
    .Clk(Clk),
    .Rst(Rst),  
    .RdWriteDataIn(RdWriteData_MemOut),
    .RdAddrIn(RdAddr_MemOut),
    .RdWriteEnableIn(RdWriteEnable_MemOut),
    .RdWriteDataOut(RdWriteData_RegFileIn),
    .RdAddrOut(RdAddr_RegFileIn),
    .RdWriteEnableOut(RdWriteEnable_RegFileIn)
  );

endmodule