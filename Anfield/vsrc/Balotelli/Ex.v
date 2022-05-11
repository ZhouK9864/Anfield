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
  
  wire [`DataBus] Funct3_RV32_I_TypeOut;

  wire [`DataBus] Funct7_RV32_R_TypeOut;
    //Funct7为7'b0000000
    wire [`DataBus] Funct3_RV32_R_Type_ZeroOut;
    //Funct7为7'b0100000
    wire [`DataBus] Funct3_RV32_R_Type_OneOut;

  wire [`DataBus] Funct3_RV64_I_TypeOut;
  wire [`DataBus] Funct7_RV64_R_TypeOut;
    //Funct7为7'b0000000
    wire [`DataBus] Funct3_RV64_R_Type_ZeroOut;
    //Funct7为7'b0100000
    wire [`DataBus] Funct3_RV64_R_Type_OneOut;
  

  //ALU
    //ADDI
    wire [`DataBus] ImmAddRs1ReadData = ImmIn + Rs1ReadDataIn;
    //ADD
    wire [`DataBus] Rs1ReadDataAddRs2ReadData = Rs1ReadDataIn + Rs2ReadDataIn;
    //SUB
    wire [`DataBus] Rs1ReadDataSubRs2ReadData = Rs1ReadDataIn - Rs2ReadDataIn;
    //AND
    wire [`DataBus] Rs1ReadDataAndRs2ReadData = Rs1ReadDataIn & Rs2ReadDataIn;
    //OR
    wire [`DataBus] Rs1ReadDataOrRs2ReadData = Rs1ReadDataIn | Rs2ReadDataIn;
    //XOR
    wire [`DataBus] Rs1ReadDataXorRs2ReadData = Rs1ReadDataIn ^ Rs2ReadDataIn;

  //RV32I
    //I类型执行模块
    MuxKeyWithDefault #(1, 3, 64) Funct3_RV32_I_Type (Funct3_RV32_I_TypeOut, Funct3In, 64'b0, {
      //ADDI
      3'b000, {{32{1'b0}}, ImmAddRs1ReadData[31:0]}
    });
    
    //R类型执行模块
    MuxKeyWithDefault #(2, 7, 64) Funct7_RV32_R_Type (Funct7_RV32_R_TypeOut, Funct7In, 64'b0, {
      7'b0000000, Funct3_RV32_R_Type_ZeroOut,
      7'b0100000, Funct3_RV32_R_Type_OneOut
    }); 
      //Funct7为7'b0000000
      MuxKeyWithDefault #(4, 3, 64) Funct3_RV32_R_Type_Zero (Funct3_RV32_R_Type_ZeroOut, Funct3In, 64'b0, {
        //ADD
        3'b000, {{32{1'b0}}, Rs1ReadDataAddRs2ReadData[31:0]},
        //XOR
        3'b100, Rs1ReadDataXorRs2ReadData,
        //OR
        3'b110, Rs1ReadDataOrRs2ReadData,
        //AND
        3'b111, Rs1ReadDataAndRs2ReadData
      });
      //Funct7为7'b0100000
      MuxKeyWithDefault #(1, 3, 64) Funct3_RV32_R_Type_One (Funct3_RV32_R_Type_OneOut, Funct3In, 64'b0, {
        //SUB
        3'b000, {{32{1'b0}}, Rs1ReadDataSubRs2ReadData[31:0]}
      });

  //RV64I
    //I类型执行模块
    MuxKeyWithDefault #(1, 3, 64) Funct3_RV64_I_Type (Funct3_RV64_I_TypeOut, Funct3In, 64'b0, {
      //ADDIW
      3'b000, {{32{ImmAddRs1ReadData[31]}}, ImmAddRs1ReadData[31:0]}
    });

    //R类型执行模块 
    MuxKeyWithDefault #(2, 7, 64) Funct7_RV64_R_Type (Funct7_RV64_R_TypeOut, Funct7In, 64'b0, {
      //ADD
      7'b0000000, Funct3_RV64_R_Type_ZeroOut,
      //SUB
      7'b0100000, Funct3_RV64_R_Type_OneOut
    });
      
      MuxKeyWithDefault #(1, 3, 64) Funct3_RV64_R_Type_Zero (Funct3_RV64_R_Type_ZeroOut, Funct3In, 64'b0, {
        3'b000, {{32{Rs1ReadDataAddRs2ReadData[31]}}, Rs1ReadDataAddRs2ReadData[31:0]}
      });

      MuxKeyWithDefault #(1, 3, 64) Funct3_RV64_R_Type_One (Funct3_RV64_R_Type_OneOut, Funct3In, 64'b0, {
        3'b000, {{32{Rs1ReadDataSubRs2ReadData[31]}}, Rs1ReadDataSubRs2ReadData[31:0]}
      });

   

  //Output
  MuxKeyWithDefault #(4, 7, 64) OpOcde_RdWriteDataOut (RdWriteDataOut, OpCodeIn, 64'b0, {
    //RV32I
    7'b0010011, Funct3_RV32_I_TypeOut,
    7'b0110011, Funct7_RV32_R_TypeOut,
    7'b0010111, ((InstAddrIn + ImmIn) << 12),

    //RV64I
    7'b0011011, Funct3_RV64_I_TypeOut,
    7'b0111011, Funct7_RV64_R_TypeOut

  });
  
endmodule