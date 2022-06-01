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
  output [3:0] Wmask,
  input [`DataBus] MemDataIn
);

  wire [`DataBus] MemTypeData;
  wire [`AddrBus] LoadTypeAddr;
  wire [`AddrBus] StoreTypeAddr;
  wire [`DataBus] StoreTypeData;
  wire [3:0] StoreTypeMask;

  MuxKeyWithDefault #(1, 7, 64) RdWriteData_mux (RdWriteDataOut, OpCodeIn, RdWriteDataIn, {
    //Load
    7'b0000011, MemTypeData
  });

  MuxKeyWithDefault #(7, 3, 64) MemTypeData_mux (MemTypeData, Funct3In, 64'b0, {
    //Ld
    3'b011, MemDataIn,
    //Lw
    3'b010, {{32{MemDataIn[31]}}, MemDataIn[31:0]},
    //Lh
    3'b001, {{48{MemDataIn[31]}}, MemDataIn[15:0]},
    //Lb
    3'b000, {{56{MemDataIn[31]}}, MemDataIn[7:0]},
    //Lbu
    3'b100, {{56{1'b0}}, MemDataIn[7:0]},
    //Lhu
    3'b101, {{48{1'b0}}, MemDataIn[15:0]},
    //Lwu
    3'b110, {{32{1'b0}}, MemDataIn[31:0]}
  });

  MuxKeyWithDefault #(1, 7, 64) MemRAddr_mux (RaddrOut, OpCodeIn, 64'b0, {
    //Load
    7'b0000011, LoadTypeAddr
  });

  MuxKeyWithDefault #(7, 3, 64) LoadTypeAddr_mux (LoadTypeAddr, Funct3In, 64'b0, {
    //Ld
    3'b011, Rs1ReadDataIn + ImmIn,
    //Lw
    3'b010, Rs1ReadDataIn + ImmIn,
    //Lh
    3'b001, Rs1ReadDataIn + ImmIn,
    //Lb
    3'b000, Rs1ReadDataIn + ImmIn,
    //Lbu
    3'b100, Rs1ReadDataIn + ImmIn,
    //Lhu
    3'b001, Rs1ReadDataIn + ImmIn,
    //Lwu
    3'b110, Rs1ReadDataIn + ImmIn
  });

  MuxKeyWithDefault #(1, 7, 64) MemWAddr_mux (WaddrOut, OpCodeIn, 64'b0, {
    //Store
    7'b0100011, StoreTypeAddr
  });

  MuxKeyWithDefault #(4, 3, 64) StoreTypeAddr_mux (StoreTypeAddr, Funct3In, 64'b0, {
    //Sd
    3'b011, Rs1ReadDataIn + ImmIn, 
    //Sw
    3'b010, Rs1ReadDataIn + ImmIn,
    //Sh
    3'b001, Rs1ReadDataIn + ImmIn,
    //Sb
    3'b000, Rs1ReadDataIn + ImmIn
  });

  MuxKeyWithDefault #(1, 7, 64) MemWData_mux (MemDataOut, OpCodeIn, 64'b0, {
    //Store
    7'b0100011, StoreTypeData
  });

  MuxKeyWithDefault #(4, 3, 64) StoreTypeData_mux (StoreTypeData, Funct3In, 64'b0, {
    //Sd
    3'b011, Rs2ReadDataIn,
    //Sw
    3'b010, Rs2ReadDataIn,
    //Sh
    3'b001, Rs2ReadDataIn,
    //Sb
    3'b000, Rs2ReadDataIn
  });

  MuxKeyWithDefault #(1, 7, 4) MemMask_mux (Wmask, OpCodeIn, 4'b0, {
    //Store
    7'b0100011, StoreTypeMask
  });

  //Mask output
  MuxKeyWithDefault #(4, 3, 4) StoreTypeMask_mux (StoreTypeMask, Funct3In, 4'b0, {
    //Sd
    3'b011, 4'b1000,
    //Sw
    3'b010, 4'b0100,
    //Sh
    3'b001, 4'b0010,
    //Sb
    3'b000, 4'b0001
  });

  assign RdAddrOut = RdAddrIn;
  assign RdWriteEnableOut = RdWriteEnableIn;

endmodule