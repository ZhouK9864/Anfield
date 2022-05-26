`include "./vsrc/defines.v"
module Ctrl (
  //input HoldFlagFromEx,
  input JumpFlagFromEx,
  input [`AddrBus] JumpAddrFromEx,
  //
  output [`AddrBus] JumpAddrToPc,
  output JumpFlagToPc,
  output HoldFlagOut
);

  assign JumpAddrToPc = JumpAddrFromEx;
  assign JumpFlagToPc = JumpFlagFromEx;
  
  //HoldFlag can be externed to 3 bit
  MuxKeyWithDefault #(2, 1, 1) HoldFlag_mux (HoldFlagOut, JumpFlagFromEx, 1'b0, {
    //Jar
    1'b1, 1'b1,
    1'b0, 1'b0
  });

endmodule