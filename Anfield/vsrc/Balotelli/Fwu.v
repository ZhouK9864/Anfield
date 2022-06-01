`include "./vsrc/defines.v"
//Forwarding unit
module Fwu (
  input [`DataBus] RdWriteDataExIn,
  input [`RegFileAddr] RdAddrExIn,
  input RdWriteEnableExIn,
  input [`DataBus] RdWriteDataMemIn,
  input [`RegFileAddr] RdAddrMemIn,
  input RdWriteEnableMemIn,
  input [`DataBus] RdWriteDataWbIn,
  input [`RegFileAddr] RdAddrWbIn,
  input RdWriteEnableWbIn,
  input [`DataBus] Rs1ReadDataRegFileIn,
  input [`DataBus] Rs2ReadDataRegFileIn,
  input [`RegFileAddr] Rs1AddrRegFileIn,
  input [`RegFileAddr] Rs2AddrRegFileIn,
  input Rs1ReadEnableIn,
  input Rs2ReadEnableIn,
  output [`DataBus] Rs1ReadDataFwuOut,
  output [`DataBus] Rs2ReadDataFwuOut
);
    //Rs1 Data
    reg [2:0] ForwardA;
    always @( * ) begin
      if((RdAddrExIn == Rs1AddrRegFileIn) && RdWriteEnableExIn && Rs1ReadEnableIn)
        ForwardA = 3'b100;
      else if((RdAddrMemIn == Rs1AddrRegFileIn) && RdWriteEnableMemIn && Rs1ReadEnableIn) 
        ForwardA = 3'b010;
      else if((RdAddrWbIn == Rs1AddrRegFileIn) && RdWriteEnableWbIn && Rs1ReadEnableIn) 
        ForwardA = 3'b001;
      else 
        ForwardA = 3'b000;
    end
    MuxKeyWithDefault #(4, 3, 64) ForwardAChooseDataSource (Rs1ReadDataFwuOut, ForwardA, 64'b0, {
      //RV32
      3'b000, Rs1ReadDataRegFileIn,
      3'b001, RdWriteDataWbIn,
      3'b010, RdWriteDataMemIn,
      3'b100, RdWriteDataExIn
    });

    //Rs2 Data
    reg [2:0] ForwardB;
    always @( * ) begin
      if((RdAddrExIn == Rs2AddrRegFileIn) && RdWriteEnableExIn && Rs2ReadEnableIn)
        ForwardB = 3'b100;
      else if((RdAddrMemIn == Rs2AddrRegFileIn)  && RdWriteEnableMemIn && Rs2ReadEnableIn) 
        ForwardB = 3'b010;
      else if((RdAddrWbIn == Rs2AddrRegFileIn) && RdWriteEnableWbIn && Rs2ReadEnableIn) 
        ForwardB = 3'b001;
      else 
        ForwardB = 3'b000;
    end
    MuxKeyWithDefault #(4, 3, 64) ForwardBChooseDataSource (Rs2ReadDataFwuOut, ForwardB, 64'b0, {
      //RV32
      3'b000, Rs2ReadDataRegFileIn,
      3'b001, RdWriteDataWbIn,
      3'b010, RdWriteDataMemIn,
      3'b100, RdWriteDataExIn
    });

endmodule