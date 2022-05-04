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
  output [6:0] Funct7
  );

  //通用译码
  assign OpCode = InstIn[6:0];
  assign Funct3 = InstIn[14:12];
  assign Funct7 = InstIn[31:25];
  //I-Type译码
  wire [11:0] Imm_I_type = InstIn[31:20];
  //S-Type译码
  wire [11:0] Imm_S_type = {InstIn[31:25], InstIn[11:7]};
  //B-Type译码
  wire [11:0] Imm_B_type = {InstIn[31], InstIn[7], InstIn[30:25], InstIn[11:8]};
  //U-Type译码
  wire [19:0] Imm_U_type = InstIn[31:12];
  //J-Type译码
  wire [19:0] Imm_J_type = {InstIn[31], InstIn[19:12], InstIn[20], InstIn[30:21]};

  assign InstAddrOut = InstAddrIn;
  assign Rs1ReadDataOut = Rs1ReadDataIn;
  assign Rs2ReadDataOut = Rs2ReadDataIn;

  MuxKeyWithDefault #(11, 7, 1) Id_Rs1ReadEnable (Rs1ReadEnable, OpCode, 1'b0, {
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
    7'b1110011, 1'b1
  });

  MuxKeyWithDefault #(11, 7, 5) Id_Rs1AddrOut (Rs1AddrOut, OpCode, 5'b0, {
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
    7'b1110011, InstIn[19:15]
  });

  MuxKeyWithDefault #(11, 7, 1) Id_Rs2ReadEnable (Rs2ReadEnable, OpCode, 1'b0, {
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
    7'b1110011, 1'b0
  });

  MuxKeyWithDefault #(11, 7, 5) Id_Rs2AddrOut (Rs2AddrOut, OpCode, 5'b0, {
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
    7'b1110011, 5'b0
  });

  MuxKeyWithDefault #(11, 7, 1) Id_RdWriteEnable (RdWriteEnable, OpCode, 1'b0, {
    7'b0110111, 1'b1,
    7'b0010111, 1'b1,
    7'b1101111, 1'b1,
    7'b1100111, 1'b1,
    7'b1100011, 1'b0,
    7'b0000011, 1'b1,
    7'b0100011, 1'b0,
    7'b0010011, 1'b1,
    7'b0110011, 1'b1,
    7'b0001111, 1'b1,
    7'b1110011, 1'b1
  });

  MuxKeyWithDefault #(11, 7, 5) Id_RdAddrOut (RdAddrOut, OpCode, 5'b0, {
    7'b0110111, InstIn[11:7],
    7'b0010111, InstIn[11:7],
    7'b1101111, InstIn[11:7],
    7'b1100111, InstIn[11:7],
    7'b1100011, 5'b0,
    7'b0000011, InstIn[11:7],
    7'b0100011, 5'b0,
    7'b0010011, InstIn[11:7],
    7'b0110011, InstIn[11:7],
    7'b0001111, InstIn[11:7],
    7'b1110011, InstIn[11:7]
  });

  MuxKeyWithDefault #(11, 7, 64) Id_Imm (Imm, OpCode, 64'b0, {
    7'b0110111, {{44{Imm_U_type[19]}}, Imm_U_type},
    7'b0010111, {{44{Imm_U_type[19]}}, Imm_U_type},
    7'b1101111, {{44{Imm_J_type[19]}}, Imm_J_type},
    7'b1100111, {{52{Imm_I_type[11]}}, Imm_I_type},
    7'b1100011, {{52{Imm_B_type[11]}}, Imm_B_type},
    7'b0000011, {{52{Imm_I_type[11]}}, Imm_I_type},
    7'b0100011, {{52{Imm_S_type[11]}}, Imm_S_type},
    7'b0010011, {{52{Imm_I_type[11]}}, Imm_I_type},
    7'b0110011, 64'b0,
    7'b0001111, {{52{Imm_I_type[11]}}, Imm_I_type},
    7'b1110011, {{52{Imm_I_type[11]}}, Imm_I_type}
  });

endmodule