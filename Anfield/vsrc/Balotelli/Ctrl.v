`include "./vsrc/defines.v"
module Ctrl (
  input HoldFlagFromEx,
  input [`AddrBus] JumpAddrFromEx,
  input JumpFlagFromEx,
  //
  output [`AddrBus] JumpAddrToPc,
  output [`HoldFlagBus] HoldFlagOut
);

  assign JumpAddrToPc = JumpAddrFromEx;
   
  //HoldFlag can be externed to 3 bit
  assign HoldFlagOut = JumpFlagFromEx ? 3'b001  //流水线清洗
                      : HoldFlagFromEx ? 3'b010    //流水线暂停
                      : 3'b000;

  // MuxKeyWithDefault #(2, 1, 3) HoldFlag_mux (HoldFlagOut, JumpFlagFromEx, 3'b0, {
  //   //Jar
  //   3'b1, 1'b1,
  //   1'b0, 1'b0
  // });

endmodule