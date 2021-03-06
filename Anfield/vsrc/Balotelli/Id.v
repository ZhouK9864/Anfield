`include "./vsrc/defines.v"
module Id (
  input [`AddrBus] InstAddrIn,
  input [`InstBus] InstIn,
  input [`DataBus] Rs1ReadDataIn,
  input [`DataBus] Rs2ReadDataIn,
  output [`AddrBus] InstAddrOut,
  output reg [`RegFileAddr] Rs1AddrOut,
  output reg Rs1ReadEnable,
  output reg [`RegFileAddr] Rs2AddrOut,
  output reg Rs2ReadEnable,
  output reg [`RegFileAddr] RdAddrOut,
  output reg RdWriteEnable,
  output [`DataBus] Rs1ReadDataOut,
  output [`DataBus] Rs2ReadDataOut,
  output reg [`DataBus] Imm,
  output [6:0] OpCode,
  output [2:0] Funct3,
  output [6:0] Funct7,
  output [4:0] Shamt
  );
  
  //通用译码
  assign OpCode = InstIn[6:0];
  assign Funct3 = InstIn[14:12];
  assign Funct7 = InstIn[31:25];
  //I-Type译码
  wire [11:0] Imm_I_Type = InstIn[31:20];
  //S-Type译码
  wire [11:0] Imm_S_Type = {InstIn[31:25], InstIn[11:7]};
  //B-Type译码
  wire [12:1] Imm_B_Type = {InstIn[31], InstIn[7], InstIn[30:25], InstIn[11:8]};
  //U-Type译码
  wire [31:12] Imm_U_Type = InstIn[31:12];
  //J-Type译码
  wire [20:1] Imm_J_Type = {InstIn[31], InstIn[19:12], InstIn[20], InstIn[30:21]};

  assign InstAddrOut = InstAddrIn;
  assign Rs1ReadDataOut = Rs1ReadDataIn;
  assign Rs2ReadDataOut = Rs2ReadDataIn;
  
  //wire of Shamt come out
  wire [4:0] ShamtFunct3_00;
  wire [4:0] ShamtFunct3_01; 
  wire [4:0] ShamtFunct7;

  //Shamt在移位操作时输出至ex
  MuxKeyWithDefault #(1, 7, 5) Shamt_mux (Shamt, OpCode, 5'b0, {
    7'b0010011, ShamtFunct7
  });

  MuxKeyWithDefault #(2, 7, 5) ShamtFunct7_mux (ShamtFunct7, Funct7, 5'b0, {
    7'b0000000, ShamtFunct3_00,
    7'b0100000, ShamtFunct3_01
  });

  MuxKeyWithDefault #(2, 3, 5) ShamtFunct3_00_mux (ShamtFunct3_00, Funct3, 5'b0, {
    3'b001, Rs2AddrOut,
    3'b101, Rs2AddrOut
  });

  MuxKeyWithDefault #(1, 3, 5) ShamtFunct3_01_mux (ShamtFunct3_01, Funct3, 5'b0, {
    3'b101, Rs2AddrOut 
  });

  //Warning!!!部分扩展指令集也做了译码实现，但是不一定正确！！！
  MuxKeyWithDefault #(15, 7, 1) Id_Rs1ReadEnable_mux (Rs1ReadEnable, OpCode, 1'b0, {
    //RV32
    7'b0110111, 1'b0,
    7'b0010111, 1'b0,
    7'b1101111, 1'b0,
    7'b1100111, 1'b1,
    7'b1100011, 1'b1,
    7'b0000011, 1'b1,
    7'b0100011, 1'b1,
    7'b0010011, 1'b1,
    7'b0110011, 1'b1,
    7'b0001111, 1'b1,
    7'b1110011, 1'b1,
    //RV64增加
    7'b0011011, 1'b1,
    7'b0111011, 1'b1,
    7'b0101111, 1'b1,
    7'b1010011, 1'b1
  });

  MuxKeyWithDefault #(15, 7, 5) Id_Rs1AddrOut (Rs1AddrOut, OpCode, 5'b0, {
    7'b0110111, 5'b0,
    7'b0010111, 5'b0,
    7'b1101111, 5'b0,
    7'b1100111, InstIn[19:15],
    7'b1100011, InstIn[19:15],
    7'b0000011, InstIn[19:15],
    7'b0100011, InstIn[19:15],
    7'b0010011, InstIn[19:15],
    7'b0110011, InstIn[19:15],
    7'b0001111, InstIn[19:15],
    7'b1110011, InstIn[19:15],
    //RV64增加
    7'b0011011, InstIn[19:15],
    7'b0111011, InstIn[19:15],
    7'b0101111, InstIn[19:15],
    7'b1010011, InstIn[19:15]
  });

  MuxKeyWithDefault #(15, 7, 1) Id_Rs2ReadEnable (Rs2ReadEnable, OpCode, 1'b0, {
    7'b0110111, 1'b0,
    7'b0010111, 1'b0,
    7'b1101111, 1'b0,
    7'b1100111, 1'b0,
    7'b1100011, 1'b1,
    7'b0000011, 1'b0,
    7'b0100011, 1'b1,
    7'b0010011, 1'b0,
    7'b0110011, 1'b1,
    7'b0001111, 1'b1,
    7'b1110011, 1'b0,
    //RV64增加
    7'b0011011, 1'b0,
    7'b0111011, 1'b1,
    7'b0101111, 1'b1,
    7'b1010011, 1'b1
  });

  MuxKeyWithDefault #(15, 7, 5) Id_Rs2AddrOut (Rs2AddrOut, OpCode, 5'b0, {
    7'b0110111, 5'b0,
    7'b0010111, 5'b0,
    7'b1101111, 5'b0,
    7'b1100111, 5'b0,
    7'b1100011, InstIn[24:20],
    7'b0000011, 5'b0,
    7'b0100011, InstIn[24:20],
    7'b0010011, 5'b0,
    7'b0110011, InstIn[24:20],
    7'b0001111, InstIn[24:20],
    7'b1110011, 5'b0,
    //RV64增加
    7'b0011011, 5'b0,
    7'b0111011, InstIn[24:20],
    7'b0101111, InstIn[24:20],
    7'b1010011, InstIn[24:20]
  });

  MuxKeyWithDefault #(15, 7, 1) Id_RdWriteEnable (RdWriteEnable, OpCode, 1'b0, {
    7'b0110111, 1'b1,
    7'b0010111, 1'b1,
    7'b1101111, 1'b1,
    7'b1100111, 1'b1,
    7'b1100011, 1'b0,
    //Load，Rd写应该使能，但由于数据前推，Rd并不能在Ex环节被赋予数据，因此RdEn也同样放到Mem中
    7'b0000011, 1'b0,
    7'b0100011, 1'b0,
    7'b0010011, 1'b1,
    7'b0110011, 1'b1,
    7'b0001111, 1'b1,
    7'b1110011, 1'b1,
    //RV64增加
    7'b0011011, 1'b1,
    7'b0111011, 1'b1,
    7'b0101111, 1'b1,
    7'b1010011, 1'b1
  });

  MuxKeyWithDefault #(15, 7, 5) Id_RdAddrOut (RdAddrOut, OpCode, 5'b0, {
    7'b0110111, InstIn[11:7],
    7'b0010111, InstIn[11:7],
    7'b1101111, InstIn[11:7],
    //Jalr rd默认1
    7'b1100111, 5'b00001,
    7'b1100011, 5'b0,
    7'b0000011, InstIn[11:7],
    7'b0100011, 5'b0,
    7'b0010011, InstIn[11:7],
    7'b0110011, InstIn[11:7],
    7'b0001111, InstIn[11:7],
    7'b1110011, InstIn[11:7],
    //RV64增加
    7'b0011011, InstIn[11:7],
    7'b0111011, InstIn[11:7],
    7'b0101111, InstIn[11:7],
    7'b1010011, InstIn[11:7]
  });

  MuxKeyWithDefault #(15, 7, 64) Id_Imm (Imm, OpCode, 64'b0, {
    //??????????
    7'b0110111, {{44{Imm_U_Type[19]}}, Imm_U_Type},
    //??????????
    7'b0010111, {{44{Imm_U_Type[19]}}, Imm_U_Type},
    7'b1101111, {{43{Imm_J_Type[20]}}, Imm_J_Type, {1'b0}},
    7'b1100111, {{52{Imm_I_Type[11]}}, Imm_I_Type},
    7'b1100011, {{51{Imm_B_Type[12]}}, Imm_B_Type, {1'b0}},
    7'b0000011, {{52{Imm_I_Type[11]}}, Imm_I_Type},
    7'b0100011, {{52{Imm_S_Type[11]}}, Imm_S_Type},
    7'b0010011, {{52{Imm_I_Type[11]}}, Imm_I_Type},
    7'b0110011, 64'b0,
    7'b0001111, {{52{Imm_I_Type[11]}}, Imm_I_Type},
    7'b1110011, {{52{Imm_I_Type[11]}}, Imm_I_Type},
    //RV64增加
    7'b0011011, {{52{Imm_I_Type[11]}}, Imm_I_Type},
    7'b0111011, 64'b0,
    7'b0101111, 64'b0,
    7'b1010011, 64'b0
  });

endmodule