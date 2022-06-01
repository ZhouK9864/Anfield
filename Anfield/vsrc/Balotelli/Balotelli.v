`include "./vsrc/defines.v"
module Balotelli (
  input Clk,
  input Rst,
  input [`InstBus] InstIn,
  //to mem
  output [`DataBus] raddr,
  input [`DataBus] LoadData,
  //test
  output [`AddrBus] PcOut,
  output [`AddrBus] RaddrOut,
  output [`AddrBus] WaddrOut,
  output [`DataBus] MemDataOut,
  output [3:0] Wmask,
  input [`DataBus] MemDataIn
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
  wire [4:0] Shamt_IdOut;

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
  wire [4:0] Shamt_ExIn;
  //Ex Out
  wire [`DataBus] RdWriteData_ExOut;
  wire [`RegFileAddr] RdAddr_ExOut;
  wire RdWriteEnable_ExOut;
  wire [`DataBus] Imm_ExOut;
  wire [6:0] OpCode_ExOut;
  wire [2:0] Funct3_ExOut;
  wire [`DataBus] Rs1ReadData_ExOut;
  wire [`DataBus] Rs2ReadData_ExOut;


  //Mem In
  wire [`DataBus] Imm_MemIn;
  wire [6:0] OpCode_MemIn;
  wire [2:0] Funct3_MemIn;
  wire [`DataBus] Rs1ReadData_MemIn;
  wire [`DataBus] Rs2ReadData_MemIn;
  wire [`DataBus] RdWriteData_MemIn;
  wire [`RegFileAddr] RdAddr_MemIn;
  wire RdWriteEnable_MemIn;
  //Mem Out
  wire [`DataBus] RdWriteData_MemOut;
  wire [`RegFileAddr] RdAddr_MemOut;
  wire RdWriteEnable_MemOut;

  //Fwu in
  wire [`DataBus] Rs1ReadData_FwuIn;
  wire [`DataBus] Rs2ReadData_FwuIn;
  wire [`RegFileAddr] Rs1Addr_FwuIn;
  wire [`RegFileAddr] Rs2Addr_FwuIn;
  wire Rs1ReadEnable_FwuIn;
  wire Rs2ReadEnable_FwuIn;
  //Fwu out
  wire [`DataBus] Rs1ReadData_FwuOut;
  wire [`DataBus] Rs2ReadData_FwuOut;

  //Jar
  wire [`AddrBus] JumpAddr_PcIn;
  wire JumpFlag_PcIn;
  wire [`AddrBus] JumpAddr_ExOut;
  wire JumpFlag_ExOut;
  wire HoldFlag;

  Pc Balotelli_Pc (
    .Clk(Clk),
    .Rst(Rst),
    //Jump
    .JumpAddrFromCtrl(JumpAddr_PcIn),
    .JumpFlagFromCtrl(JumpFlag_PcIn),
    .PcOut(PcOut)
  );

  If2Id Balotelli_If2Id (
    .Clk(Clk),
    .Rst(Rst),
    .InstAddrIn(PcOut),
    .InstIn(InstIn),
    //Jump
    .HoldFlagFromCtrl(HoldFlag),
    .InstAddrOut(InstAddr_IdIn),
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
    .Funct7(Funct7_IdOut),
    .Shamt(Shamt_IdOut)
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
    .Rs1ReadDataIn(Rs1ReadData_FwuOut),
    .Rs2ReadDataIn(Rs2ReadData_FwuOut),
    // .Rs1AddrIn(Rs1Addr_IdOut),
    // .Rs2AddrIn(Rs2Addr_IdOut),
    .ImmIn(Imm_IdOut),
    .OpCodeIn(OpCode_IdOut),
    .Funct3In(Funct3_IdOut),
    .Funct7In(Funct7_IdOut),
    .ShamtIn(Shamt_IdOut),
    .HoldFlagFromCtrl(HoldFlag),
    .InstAddrOut(InstAddr_ExIn),
    .RdAddrOut(RdAddr_ExIn),
    .RdWriteEnableOut(RdWriteEnable_ExIn),
    //to Fwu
    .Rs1ReadDataOut(Rs1ReadData_ExIn),
    .Rs2ReadDataOut(Rs2ReadData_ExIn),
    // .Rs1AddrOut(),
    // .Rs2AddrOut(),
    //to Mem
    .ImmOut(Imm_ExIn),
    .OpCodeOut(OpCode_ExIn),
    .Funct3Out(Funct3_ExIn),
    .Funct7Out(Funct7_ExIn),
    .ShamtOut(Shamt_ExIn)
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
    .ShamtIn(Shamt_ExIn),
    .RdWriteDataOut(RdWriteData_ExOut),
    .RdAddrOut(RdAddr_ExOut),
    .RdWriteEnableOut(RdWriteEnable_ExOut),
    .JumpFlagToCtrl(JumpFlag_ExOut),
    .JumpAddrToCtrl(JumpAddr_ExOut),
    .ImmOut(Imm_ExOut),
    .OpCodeOut(OpCode_ExOut),
    .Funct3Out(Funct3_ExOut),
    .Rs1ReadDataOut(Rs1ReadData_ExOut),
    .Rs2ReadDataOut(Rs2ReadData_ExOut)
  );

  Ex2Mem Balotelli_Ex2Mem (
    .Clk(Clk),
    .Rst(Rst),
    .RdWriteDataIn(RdWriteData_ExOut),
    .RdAddrIn(RdAddr_ExOut),
    .RdWriteEnableIn(RdWriteEnable_ExOut),
    .ImmIn(Imm_ExOut),
    .OpCodeIn(OpCode_ExOut),
    .Funct3In(Funct3_ExOut),
    .Rs1ReadDataIn(Rs1ReadData_ExOut),
    .Rs2ReadDataIn(Rs2ReadData_ExOut), 
    .RdWriteDataOut(RdWriteData_MemIn),
    .RdAddrOut(RdAddr_MemIn),
    .RdWriteEnableOut(RdWriteEnable_MemIn),
    .ImmOut(Imm_MemIn),
    .OpCodeOut(OpCode_MemIn),
    .Funct3Out(Funct3_MemIn),
    .Rs1ReadDataOut(Rs1ReadData_MemIn),
    .Rs2ReadDataOut(Rs2ReadData_MemIn)
  );

  Mem Balotelli_Mem (
    .RdWriteDataIn(RdWriteData_MemIn),
    .RdAddrIn(RdAddr_MemIn),
    .RdWriteEnableIn(RdWriteEnable_MemIn),
    .ImmIn(Imm_MemIn),
    .OpCodeIn(OpCode_MemIn),
    .Funct3In(Funct3_MemIn),
    .Rs1ReadDataIn(Rs1ReadData_MemIn),
    .Rs2ReadDataIn(Rs2ReadData_MemIn), 
    .RdWriteDataOut(RdWriteData_MemOut),
    .RdAddrOut(RdAddr_MemOut),
    .RdWriteEnableOut(RdWriteEnable_MemOut),
    //mem 
    .RaddrOut(RaddrOut),
    .WaddrOut(WaddrOut),
    .MemDataOut(MemDataOut),
    .MemDataIn(MemDataIn),
    .Wmask(Wmask)
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

  Fwu Balotelli_Fwu (
    .RdWriteDataExIn(RdWriteData_ExOut),
    .RdAddrExIn(RdAddr_ExOut),
    .RdWriteEnableExIn(RdWriteEnable_ExOut),
    .RdWriteDataMemIn(RdWriteData_MemOut),
    .RdAddrMemIn(RdAddr_MemOut),
    .RdWriteEnableMemIn(RdWriteEnable_MemOut),
    .RdWriteDataWbIn(RdWriteData_RegFileIn),
    .RdAddrWbIn(RdAddr_RegFileIn),
    .RdWriteEnableWbIn(RdWriteEnable_RegFileIn),
    .Rs1ReadDataRegFileIn(Rs1ReadData_RegFileOut),
    .Rs2ReadDataRegFileIn(Rs2ReadData_RegFileOut),
    .Rs1AddrRegFileIn(Rs1Addr_IdOut),
    .Rs2AddrRegFileIn(Rs2Addr_IdOut),
    .Rs1ReadEnableIn(Rs1ReadEnable_IdOut),
    .Rs2ReadEnableIn(Rs2ReadEnable_IdOut),
    .Rs1ReadDataFwuOut(Rs1ReadData_FwuOut),
    .Rs2ReadDataFwuOut(Rs2ReadData_FwuOut)
  );

  Ctrl Balotelli_Ctrl (
    .JumpFlagFromEx(JumpFlag_ExOut),
    .JumpAddrFromEx(JumpAddr_ExOut),
    .JumpAddrToPc(JumpAddr_PcIn),
    .JumpFlagToPc(JumpFlag_PcIn),
    .HoldFlagOut(HoldFlag)
  );

endmodule