`include "./vsrc/defines.v"
//Forwarding unit
module Fwu (
  input [`DataBus] RdWriteDataEx2MemIn,
  input [`RegFileAddr] RdAddrEx2MemIn,
  input RdWriteEnableEx2MemIn,
  input [`DataBus] RdWriteDataMem2WbIn,
  input [`RegFileAddr] RdAddrMem2WbIn,
  input RdWriteEnableMem2WbIn,
  input [`DataBus] Rs1ReadDataRegFileIn,
  input [`DataBus] Rs2ReadDataRegFileIn,
  input [`RegFileAddr] Rs1AddrRegFileIn,
  input Rs1ReadEnableRegFileIn,
  input [`RegFileAddr] Rs2AddrRegFileIn,
  input Rs2ReadEnableRegFileIn,
  output [`DataBus] Rs1ReadDataFwuOut,
  output [`DataBus] Rs2ReadDataFwuOut
);
    //Rs1 Data
    reg [1:0] ForwardA;
    always @( * ) begin
      if((RdAddrEx2MemIn == Rs1AddrRegFileIn) && Rs1ReadEnableRegFileIn && RdWriteEnableEx2MemIn) 
        ForwardA = 2'b10;
      else if((RdAddrMem2WbIn == Rs1AddrRegFileIn) && Rs1ReadEnableRegFileIn && RdWriteEnableMem2WbIn) 
        ForwardA = 2'b01;
      else 
        ForwardA = 2'b00;
    end
    MuxKeyWithDefault #(3, 2, 64) ForwardAChooseDataSource (Rs1ReadDataFwuOut, ForwardA, 64'b0, {
    //RV32
    2'b00, Rs1ReadDataRegFileIn,
    2'b01, RdWriteDataMem2WbIn,
    2'b10, RdWriteDataEx2MemIn
    });

    //Rs2 Data
    reg [1:0] ForwardB;
    always @( * ) begin
      if((RdAddrEx2MemIn == Rs2AddrRegFileIn) && Rs2ReadEnableRegFileIn && RdWriteEnableEx2MemIn) 
        ForwardB = 2'b10;
      else if((RdAddrMem2WbIn == Rs2AddrRegFileIn) && Rs2ReadEnableRegFileIn && RdWriteEnableMem2WbIn) 
        ForwardB = 2'b01;
      else 
        ForwardB = 2'b00;
    end
    MuxKeyWithDefault #(3, 2, 64) ForwardBChooseDataSource (Rs2ReadDataFwuOut, ForwardB, 64'b0, {
    //RV32
    2'b00, Rs2ReadDataRegFileIn,
    2'b01, RdWriteDataMem2WbIn,
    2'b10, RdWriteDataEx2MemIn
    });

endmodule