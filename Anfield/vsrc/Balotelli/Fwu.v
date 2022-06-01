`include "./vsrc/defines.v"
//Forwarding unit
module Fwu (
  input [`DataBus] RdWriteDataExIn,
  input [`RegFileAddr] RdAddrExIn,
  input RdWriteEnableExIn,
  input [`DataBus] RdWriteDataEx2MemIn,
  input [`RegFileAddr] RdAddrEx2MemIn,
  input RdWriteEnableEx2MemIn,
  input [`DataBus] RdWriteDataMem2WbIn,
  input [`RegFileAddr] RdAddrMem2WbIn,
  input RdWriteEnableMem2WbIn,
  input [`DataBus] Rs1ReadDataRegFileIn,
  input [`DataBus] Rs2ReadDataRegFileIn,
  input [`RegFileAddr] Rs1AddrRegFileIn,
  input [`RegFileAddr] Rs2AddrRegFileIn,
  output [`DataBus] Rs1ReadDataFwuOut,
  output [`DataBus] Rs2ReadDataFwuOut
);
    //Rs1 Data
    reg [2:0] ForwardA;
    always @( * ) begin
      if((RdAddrExIn == Rs1AddrRegFileIn) && RdWriteEnableExIn)
        ForwardA = 3'b100;
      else if((RdAddrEx2MemIn == Rs1AddrRegFileIn) && RdWriteEnableEx2MemIn) 
        ForwardA = 3'b010;
      else if((RdAddrMem2WbIn == Rs1AddrRegFileIn) && RdWriteEnableMem2WbIn) 
        ForwardA = 3'b001;
      else 
        ForwardA = 3'b000;
    end
    MuxKeyWithDefault #(4, 3, 64) ForwardAChooseDataSource (Rs1ReadDataFwuOut, ForwardA, 64'b0, {
      //RV32
      3'b000, Rs1ReadDataRegFileIn,
      3'b001, RdWriteDataMem2WbIn,
      3'b010, RdWriteDataEx2MemIn,
      3'b100, RdWriteDataExIn
    });

    //Rs2 Data
    reg [2:0] ForwardB;
    always @( * ) begin
      if((RdAddrExIn == Rs2AddrRegFileIn) && RdWriteEnableExIn)
        ForwardB = 3'b100;
      else if((RdAddrEx2MemIn == Rs2AddrRegFileIn)  && RdWriteEnableEx2MemIn) 
        ForwardB = 3'b010;
      else if((RdAddrMem2WbIn == Rs2AddrRegFileIn) && RdWriteEnableMem2WbIn) 
        ForwardB = 3'b001;
      else 
        ForwardB = 3'b000;
    end
    MuxKeyWithDefault #(4, 3, 64) ForwardBChooseDataSource (Rs2ReadDataFwuOut, ForwardB, 64'b0, {
      //RV32
      3'b000, Rs2ReadDataRegFileIn,
      3'b001, RdWriteDataMem2WbIn,
      3'b010, RdWriteDataEx2MemIn,
      3'b100, RdWriteDataExIn
    });

endmodule