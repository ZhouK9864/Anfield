module Mem (
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
  //load or store
  output [`AddrBus] RaddrOut,
  output [`AddrBus] WaddrOut,
  output [`DataBus] MemDataOut,
  input [`DataBus] MemDataIn
);

  wire [`DataBus] LoadTypeAddr;
  wire [`DataBus] StoreTypeAddr;
  wire [`DataBus] StoreTypeData;

  MuxKeyWithDefault #(1, 7, 64) RdWriteData_mux (RdWriteDataOut, OpCodeIn, RdWriteDataIn, {
    //Load
    7'b0000011, MemDataIn
  });

  MuxKeyWithDefault #(1, 7, 64) MemRAddr_mux (RaddrOut, OpCodeIn, 64'b0, {
    //Load
    7'b0000011, LoadTypeAddr
  });

  MuxKeyWithDefault #(1, 7, 64) MemWAddr_mux (WaddrOut, OpCodeIn, 64'b0, {
    //Store
    7'b0100011, StoreTypeAddr
  });


  MuxKeyWithDefault #(1, 3, 64) LoadTypeAddr_mux (LoadTypeAddr, Funct3In, 64'b0, {
    //Ld
    3'b011, Rs1ReadDataIn + ImmIn
  });

  MuxKeyWithDefault #(1, 3, 64) StoreTypeAddr_mux (StoreTypeAddr, Funct3In, 64'b0, {
    //Sd
    3'b011, Rs1ReadDataIn + ImmIn
  });

  MuxKeyWithDefault #(1, 7, 64) MemWData_mux (MemDataOut, OpCodeIn, 64'b0, {
    //Store
    7'b0100011, StoreTypeData
  });

  MuxKeyWithDefault #(1, 3, 64) StoreTypeData_mux (StoreTypeData, Funct3In, 64'b0, {
    //Sd
    3'b011, Rs2ReadDataIn
  });


  assign RdAddrOut = RdAddrIn;
  assign RdWriteEnableOut = RdWriteEnableIn;

endmodule