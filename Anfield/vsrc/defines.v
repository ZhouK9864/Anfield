//Bus
`define AddrBus 63:0
`define DataBus 63:0
`define InstBus 63:0
`define AluBus 31:0
`define HalfDataBus 31:0
`define HoldFlagBus 2:0

//
`define AddrRegWidth 64
`define InstRegWidth 64
`define DataWidth 64
`define RegFileAddrWidth 5
`define RegFileAddr 4:0

//Init
`define RegZero 64'h0
`define AddrRegInit 64'h0
`define InstRegInit 64'h0
`define RegAddrInit 5'b0
`define DataRegInit 64'h0

//Pc module
`define PcInit 64'h80000000

//RegFile
`define RegNum 32

//Modechoose
`define DebugMode 1

