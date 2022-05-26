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
  input [4:0] ShamtIn,
  output reg [`DataBus] RdWriteDataOut,
  output [`RegFileAddr] RdAddrOut,
  output RdWriteEnableOut,
  //Jump
  // output HoldFlagToCtrl,            
  output JumpFlagToCtrl,                // 是否跳转标志
  output [`AddrBus] JumpAddrToCtrl,     // 跳转目的地址
  //Load or Store
  output [`DataBus] ImmOut,
  output [6:0] OpCodeOut,
  output [2:0] Funct3Out,
  output [`DataBus] Rs1ReadDataOut,
  output [`DataBus] Rs2ReadDataOut
);

  assign RdAddrOut = RdAddrIn;
  assign RdWriteEnableOut = RdWriteEnableIn;
  //阻止非load or store指令传入数据至mem模块
  MuxKeyWithDefault #(2, 7, 64) Imm_mux (ImmOut, OpCodeIn, 64'b0, {
    7'b0000011, ImmIn,
    7'b0100011, ImmIn
  });

  MuxKeyWithDefault #(2, 7, 7) OpCode_mux (OpCodeOut, OpCodeIn, 7'b0, {
    7'b0000011, OpCodeIn,
    7'b0100011, OpCodeIn
  });

  MuxKeyWithDefault #(2, 7, 3) Funct3_mux (Funct3Out, OpCodeIn, 3'b0, {
    7'b0000011, Funct3In,
    7'b0100011, Funct3In
  });

  MuxKeyWithDefault #(2, 7, 64) Rs1ReadData_mux (Rs1ReadDataOut, OpCodeIn, 64'b0, {
    7'b0000011, Rs1ReadDataIn,
    7'b0100011, Rs1ReadDataIn
  });

  MuxKeyWithDefault #(2, 7, 64) Rs2ReadData_mux (Rs2ReadDataOut, OpCodeIn, 64'b0, {
    7'b0000011, Rs2ReadDataIn,
    7'b0100011, Rs2ReadDataIn
  });

  wire [`DataBus] Funct3_RV32_I_TypeOut;
  wire [`DataBus] Shift_RV32_Right;
  wire [`DataBus] Shift_RV32_Left;

  wire [`DataBus] Funct7_RV32_R_TypeOut;
    //Funct7为7'b0000000
    wire [`DataBus] Funct3_RV32_R_Type_ZeroOut;
    //Funct7为7'b0100000
    wire [`DataBus] Funct3_RV32_R_Type_OneOut;

  wire [`DataBus] Funct3_RV64_I_TypeOut;
  wire [`DataBus] Shift_RV64_Right;
  wire [`DataBus] Shift_RV64_Left;

  wire [`DataBus] Funct7_RV64_R_TypeOut;
    //Funct7为7'b0000000
    wire [`DataBus] Funct3_RV64_R_Type_ZeroOut;
    //Funct7为7'b0100000
    wire [`DataBus] Funct3_RV64_R_Type_OneOut;

  //DPI-C
  parameter RaiseException_Ebreak = 2'b01;
  parameter RaiseException_Ecall = 2'b10;
  wire [1:0] RaiseException;

  //ALU
    //Addi
    wire [`DataBus] ImmAddRs1ReadData = ImmIn + Rs1ReadDataIn;
    //Add
    wire [`DataBus] Rs1ReadDataAddRs2ReadData = Rs1ReadDataIn + Rs2ReadDataIn;
    //Sub
    wire [`DataBus] Rs1ReadDataSubRs2ReadData = Rs1ReadDataIn - Rs2ReadDataIn;
    //And
    wire [`DataBus] Rs1ReadDataAndRs2ReadData = Rs1ReadDataIn & Rs2ReadDataIn;
    //Andi
    wire [`DataBus] Rs1ReadDataAndImm = Rs1ReadDataIn & ImmIn;
    //Or
    wire [`DataBus] Rs1ReadDataOrRs2ReadData = Rs1ReadDataIn | Rs2ReadDataIn;
    //Ori
    wire [`DataBus] Rs1ReadDataOrImm = Rs1ReadDataIn | ImmIn;
    //Xor
    wire [`DataBus] Rs1ReadDataXorRs2ReadData = Rs1ReadDataIn ^ Rs2ReadDataIn;
    //Sll
    wire [`DataBus] Rs1ReadDataSllRs2ReadData = Rs1ReadDataIn << Rs2ReadDataIn[5:0];
    //Slli
    wire [`DataBus] Rs1ReadDataSllImm = Rs1ReadDataIn << ShamtIn;
    //Sra
    wire [`DataBus] Rs1ReadDataSraRs2ReadData = Rs1ReadDataIn <<< Rs2ReadDataIn[5:0];
    //Srai
    wire [`DataBus] Rs1ReadDataSraImm = Rs1ReadDataIn >>> ShamtIn;
    //Srl
    wire [`DataBus] Rs1ReadDataSrlRs2ReadData = Rs1ReadDataIn >> Rs2ReadDataIn[5:0];
    //Srli
    wire [`DataBus] Rs1ReadDataSrlImm = Rs1ReadDataIn >> ShamtIn;
    //Sllw
    wire [`HalfDataBus] Rs1ReadDataSllwRs2ReadData = Rs1ReadDataIn[31:0] << Rs2ReadDataIn[4:0];
    //Sraw
    wire [`HalfDataBus] Rs1ReadDataSrawRs2ReadData = Rs1ReadDataIn[31:0] >>> Rs2ReadDataIn[4:0];
    //Srlw
    wire [`HalfDataBus] Rs1ReadDataSrlwRs2ReadData = Rs1ReadDataIn[31:0] >> Rs2ReadDataIn[4:0];

  //RV32I
    //I类型执行模块
    MuxKeyWithDefault #(7, 3, 64) Funct3_RV32_I_Type (Funct3_RV32_I_TypeOut, Funct3In, 64'b0, {
      //Addi
      3'b000, ImmAddRs1ReadData,
      //Andi
      3'b111, Rs1ReadDataAndImm,
      //Ori
      3'b110, Rs1ReadDataOrImm,
      //Slti
      3'b010, (((Rs1ReadDataIn[63] == 1'b1) && (ImmIn[63] == 1'b0)) ? 64'b1 :
              ((Rs1ReadDataIn[63] == 1'b0) && (ImmIn[63] == 1'b1)) ? 64'b0 :
              (Rs1ReadDataAddRs2ReadData[63] == Rs1ReadDataIn[63]) ? 64'b1 : 64'b0),
      //Sltiu
      3'b011, ((Rs1ReadDataSubRs2ReadData[63] == 1'b1) ? 64'b1 : 64'b0),
      //Slli
      3'b001, Shift_RV32_Left,
      //Srli or srai
      3'b101, Shift_RV32_Right
    });
      //这里由于译码特殊性，先对Funct3译码再对Funct7译码。 
      MuxKeyWithDefault #(2, 7, 64) Shift_RV32_Right_mux (Shift_RV32_Right, Funct7In, 64'b0, {
        7'b0000000, Rs1ReadDataSrlImm,
        7'b0100000, Rs1ReadDataSraImm
      }); 
      MuxKeyWithDefault #(1, 7, 64) Shift_RV32_Left_mux (Shift_RV32_Left, Funct7In, 64'b0, {
        7'b0000000, Rs1ReadDataSllImm
      }); 
    
    //R类型执行模块
    MuxKeyWithDefault #(2, 7, 64) Funct7_RV32_R_Type (Funct7_RV32_R_TypeOut, Funct7In, 64'b0, {
      //Add or Xor or Or or And or Slt or Sltu or Sll or Srl
      7'b0000000, Funct3_RV32_R_Type_ZeroOut,
      //Sub or Sra
      7'b0100000, Funct3_RV32_R_Type_OneOut
    }); 
      //Funct7为7'b0000000
      MuxKeyWithDefault #(8, 3, 64) Funct3_RV32_R_Type_Zero (Funct3_RV32_R_Type_ZeroOut, Funct3In, 64'b0, {
        //Add
        3'b000, Rs1ReadDataAddRs2ReadData,
        //Xor
        3'b100, Rs1ReadDataXorRs2ReadData,
        //Or
        3'b110, Rs1ReadDataOrRs2ReadData,
        //And
        3'b111, Rs1ReadDataAndRs2ReadData,
        //Slt
        3'b010, (((Rs1ReadDataIn[63] == 1'b1) && (Rs2ReadDataIn[63] == 1'b0)) ? 64'b1 :
                ((Rs1ReadDataIn[63] == 1'b0) && (Rs2ReadDataIn[63] == 1'b1)) ? 64'b0 :
                (Rs1ReadDataAddRs2ReadData[63] == Rs1ReadDataIn[63]) ? 64'b1 : 64'b0),
        //Sltu
        3'b011, ((Rs1ReadDataSubRs2ReadData[63] == 1'b1) ? 64'b1 : 64'b0),
        //Sll
        3'b001, Rs1ReadDataSllRs2ReadData,
        //Srl
        3'b101, Rs1ReadDataSrlRs2ReadData
      });
      //Funct7为7'b0100000
      MuxKeyWithDefault #(2, 3, 64) Funct3_RV32_R_Type_One (Funct3_RV32_R_Type_OneOut, Funct3In, 64'b0, {
        //Sub
        3'b000, Rs1ReadDataSubRs2ReadData,
        //Sra
        3'b101, Rs1ReadDataSraRs2ReadData
      });

  //RV64I
    //I类型执行模块
    MuxKeyWithDefault #(3, 3, 64) Funct3_RV64_I_Type (Funct3_RV64_I_TypeOut, Funct3In, 64'b0, {
      //Addiw
      3'b000, {{32{ImmAddRs1ReadData[31]}}, ImmAddRs1ReadData[31:0]},
      //Slliw
      3'b001, {{32{Shift_RV64_Left[31]}}, Shift_RV64_Left[31:0]},
      //Srliw or Sraiw
      3'b101, {{32{Shift_RV64_Right[31]}}, Shift_RV64_Right[31:0]}
    });
      //这里由于译码特殊性，先对Funct3译码再对Funct7译码。 
      MuxKeyWithDefault #(2, 7, 64) Shift_RV64_Right_mux (Shift_RV64_Right, Funct7In, 64'b0, {
        //Srliw
        7'b0000000, Rs1ReadDataSrlImm,
        //Sraiw
        7'b0100000, Rs1ReadDataSraImm
      }); 
      MuxKeyWithDefault #(1, 7, 64) Shift_RV64_Left_mux (Shift_RV64_Left, Funct7In, 64'b0, {
        7'b0000000, Rs1ReadDataSllImm
      }); 

    //R类型执行模块 
    MuxKeyWithDefault #(2, 7, 64) Funct7_RV64_R_Type (Funct7_RV64_R_TypeOut, Funct7In, 64'b0, {
      //Addw or Sllw or Srlw
      7'b0000000, Funct3_RV64_R_Type_ZeroOut,
      //Subw or Sraw
      7'b0100000, Funct3_RV64_R_Type_OneOut
    });
      MuxKeyWithDefault #(3, 3, 64) Funct3_RV64_R_Type_Zero (Funct3_RV64_R_Type_ZeroOut, Funct3In, 64'b0, {
        //Addw
        3'b000, {{32{Rs1ReadDataAddRs2ReadData[31]}}, Rs1ReadDataAddRs2ReadData[31:0]},
        //Sllw
        3'b001, {{32{Rs1ReadDataSllwRs2ReadData[31]}}, Rs1ReadDataSllwRs2ReadData},
        //Srlw
        3'b101, {{32{Rs1ReadDataSrlwRs2ReadData[31]}}, Rs1ReadDataSrlwRs2ReadData}
      });
      MuxKeyWithDefault #(2, 3, 64) Funct3_RV64_R_Type_One (Funct3_RV64_R_Type_OneOut, Funct3In, 64'b0, {
        //Subw
        3'b000, {{32{Rs1ReadDataSubRs2ReadData[31]}}, Rs1ReadDataSubRs2ReadData[31:0]},
        //Sraw
        3'b101, {{32{Rs1ReadDataSrawRs2ReadData[31]}}, Rs1ReadDataSrawRs2ReadData}
      });

  //Output
  MuxKeyWithDefault #(8, 7, 64) OpOcde_RdWriteDataOut (RdWriteDataOut, OpCodeIn, 64'b0, {
    //RV32I
    7'b0010011, Funct3_RV32_I_TypeOut,
    7'b0110011, Funct7_RV32_R_TypeOut,
    7'b0010111, (InstAddrIn + (ImmIn << 12)),  //Auipc
    7'b1101111, (InstAddrIn + 4),              //Jar
    7'b1100111, (InstAddrIn + 4),              //Jalr
    7'b0110111, (ImmIn << 12),                 //Lui
    //RV64I
    7'b0011011, Funct3_RV64_I_TypeOut,
    7'b0111011, Funct7_RV64_R_TypeOut
  });

  //DPI-C
  //Ebreak or Ecall
  MuxKeyWithDefault #(2, 12, 2) Funct_Environment (RaiseException, ImmIn[11:0], 2'b0, {
    //Ebreak
    12'b000000000001, RaiseException_Ebreak,
    //Ecall
    12'b000000000000, RaiseException_Ecall
  });

  import "DPI-C" function void SystemBreak (input int Ebreak);

  always @( * ) begin
    if(OpCodeIn == 7'b1110011 && RaiseException == RaiseException_Ebreak) 
      SystemBreak(1);
    else
      SystemBreak(0);
  end           
  //Ebrack or Ecall
  wire BranchFlag;
  //Jump
  MuxKeyWithDefault #(3, 7, 1) JumpFlag_mux (JumpFlagToCtrl, OpCodeIn, 1'b0, {
    //Jar
    7'b1101111, 1'b1,
    //Jalr
    7'b1100111, 1'b1,
    //Beq、Bge、Bgeu、Blt、Bltu、Bne
    7'b1100011, BranchFlag
  });

  MuxKeyWithDefault #(6, 3, 1) BranchFlag_mux (BranchFlag, Funct3In, 1'b0, {
    //Beq
    3'b000, ((Rs1ReadDataIn == Rs2ReadDataIn) ? 1'b1 : 1'b0),
    //Bge
    3'b101, (((Rs1ReadDataIn[63] == 1'b1) && (Rs2ReadDataIn[63] == 1'b0)) ? 1'b0 :
            ((Rs1ReadDataIn[63] == 1'b0) && (Rs2ReadDataIn[63] == 1'b1)) ? 1'b1 :
            (Rs1ReadDataAddRs2ReadData[63] == Rs1ReadDataIn[63]) ? 1'b1 : 1'b0),
    //Bgeu
    3'b111, ((Rs1ReadDataSubRs2ReadData[63] == 1'b1) ? 1'b0 : 1'b1),
    //Blt
    3'b100, (((Rs1ReadDataIn[63] == 1'b1) && (Rs2ReadDataIn[63] == 1'b0)) ? 1'b1 :
            ((Rs1ReadDataIn[63] == 1'b0) && (Rs2ReadDataIn[63] == 1'b1)) ? 1'b0 :
            (Rs1ReadDataAddRs2ReadData[63] == Rs1ReadDataIn[63]) ? 1'b1 : 1'b0),
    //Bltu
    3'b110, ((Rs1ReadDataSubRs2ReadData[63] == 1'b1) ? 1'b1 : 1'b0),
    //Bne
    3'b001, ((Rs1ReadDataIn != Rs2ReadDataIn) ? 1'b1 : 1'b0)
  });
  //have not use
  // MuxKeyWithDefault #(1, 7, 1) HoldFlag_mux (HoldFlagToCtrl, OpCodeIn, 1'b0, {
  //   //Jar
  //   7'b1101111, 1'b1
  // });
  
  MuxKeyWithDefault #(3, 7, 64) JumpAddr (JumpAddrToCtrl, OpCodeIn, 64'b0, {
    //Jar
    7'b1101111, (InstAddrIn + ImmIn),
    //Jalr
    7'b1100111, ((Rs1ReadDataIn + ImmIn) & ~1),
    //Beq、Bge、Bgeu、Blt、Bltu、Bne
    7'b1100011, (InstAddrIn + ImmIn)
  });

endmodule