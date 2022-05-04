`include "./vsrc/defines.v"
module RegFile (
  input Clk,
  input Rst,
  input [`DataBus] RdWriteData,
  input [`RegFileAddr] RdWriteAddr,
  input RdWriteEnable,
  input [`RegFileAddr] Rs1AddrIn,
  input Rs1ReadEnable,
  input [`RegFileAddr] Rs2AddrIn,
  input Rs2ReadEnable,
  output reg [`DataBus] Rs1ReadData,
  output reg [`DataBus] Rs2ReadData
);

  reg [`DataBus] rf [0 : `RegNum - 1];

  //0号寄存器始终为0
  always @( * ) begin
    rf[0] = `RegZero;
  end

  //rd同步写
  always @(posedge Clk or negedge Rst) begin
    if(!Rst) begin
      for (integer i = 1; i < `RegNum; i = i + 1) begin
        rf[i] <= `RegZero;
      end
    end else if (RdWriteEnable) rf[RdWriteAddr] <= RdWriteData;
  end

  //rs1异步读
  always @( * ) begin
    if(Rs1ReadEnable) Rs1ReadData = rf[Rs1AddrIn];
    else Rs1ReadData = `RegZero;
  end

  //rs2异步读
  always @( * ) begin
    if(Rs2ReadEnable) Rs2ReadData = rf[Rs2AddrIn];
    else Rs2ReadData = `RegZero;
  end

endmodule