module Programcounter(
  input         clock,
  input         reset,
  input  [31:0] io_in,
  output [31:0] io_pcout,
  output [31:0] io_pc4
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
`endif // RANDOMIZE_REG_INIT
  reg [31:0] reg_; // @[Programcounter.scala 11:22]
  assign io_pcout = reg_; // @[Programcounter.scala 13:14]
  assign io_pc4 = $signed(reg_) + 32'sh4; // @[Programcounter.scala 14:19]
  always @(posedge clock) begin
    if (reset) begin // @[Programcounter.scala 11:22]
      reg_ <= -32'sh4; // @[Programcounter.scala 11:22]
    end else begin
      reg_ <= io_in; // @[Programcounter.scala 12:9]
    end
  end
// Register and memory initialization
`ifdef RANDOMIZE_GARBAGE_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_INVALID_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_REG_INIT
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_MEM_INIT
`define RANDOMIZE
`endif
`ifndef RANDOM
`define RANDOM $random
`endif
`ifdef RANDOMIZE_MEM_INIT
  integer initvar;
`endif
`ifndef SYNTHESIS
`ifdef FIRRTL_BEFORE_INITIAL
`FIRRTL_BEFORE_INITIAL
`endif
initial begin
  `ifdef RANDOMIZE
    `ifdef INIT_RANDOM
      `INIT_RANDOM
    `endif
    `ifndef VERILATOR
      `ifdef RANDOMIZE_DELAY
        #`RANDOMIZE_DELAY begin end
      `else
        #0.002 begin end
      `endif
    `endif
`ifdef RANDOMIZE_REG_INIT
  _RAND_0 = {1{`RANDOM}};
  reg_ = _RAND_0[31:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
module InstructionFetch(
  input  [31:0] io_address,
  output [31:0] io_instruction,
  input         io_stall,
  output        io_coreInstrReq_valid,
  output [31:0] io_coreInstrReq_bits_addrRequest,
  output [3:0]  io_coreInstrReq_bits_activeByteLane,
  output        io_coreInstrReq_bits_isWrite,
  output        io_coreInstrResp_ready,
  input  [31:0] io_coreInstrResp_bits_dataResponse
);
  assign io_instruction = io_stall ? 32'h0 : io_coreInstrResp_bits_dataResponse; // @[InstructionFetch.scala 15:21 23:22 32:22]
  assign io_coreInstrReq_valid = io_stall ? 1'h0 : 1'h1; // @[InstructionFetch.scala 15:21 16:30 25:30]
  assign io_coreInstrReq_bits_addrRequest = io_stall ? 32'h0 : io_address; // @[InstructionFetch.scala 15:21 22:40 31:40]
  assign io_coreInstrReq_bits_activeByteLane = io_stall ? 4'h0 : 4'hf; // @[InstructionFetch.scala 15:21 18:43 27:43]
  assign io_coreInstrReq_bits_isWrite = 1'h0; // @[InstructionFetch.scala 15:21 19:36 28:36]
  assign io_coreInstrResp_ready = io_stall ? 1'h0 : 1'h1; // @[InstructionFetch.scala 15:21 16:30 25:30]
endmodule
module Alu(
  input  [31:0] io_op1,
  input  [31:0] io_op2,
  input  [4:0]  io_aluctrl,
  output [31:0] io_aluout
);
  wire [31:0] _io_aluout_T_1 = io_op1 + io_op2; // @[Alu.scala 44:37]
  wire [31:0] _io_aluout_T_3 = io_op1 - io_op2; // @[Alu.scala 46:37]
  wire [31:0] _io_aluout_T_4 = io_op1 & io_op2; // @[Alu.scala 48:37]
  wire [31:0] _io_aluout_T_5 = io_op1 | io_op2; // @[Alu.scala 50:37]
  wire [31:0] _io_aluout_T_6 = io_op1 ^ io_op2; // @[Alu.scala 52:37]
  wire  _T_16 = io_op1 < io_op2; // @[Alu.scala 54:29]
  wire [62:0] _GEN_13 = {{31'd0}, io_op1}; // @[Alu.scala 60:37]
  wire [62:0] _io_aluout_T_8 = _GEN_13 << io_op2[4:0]; // @[Alu.scala 60:37]
  wire  _T_24 = io_aluctrl == 5'h5; // @[Alu.scala 69:31]
  wire [31:0] shift = io_op1 >> io_op2[4:0]; // @[Alu.scala 70:43]
  wire [31:0] _GEN_2 = io_aluctrl == 5'h1f ? io_op1 : 32'h0; // @[Alu.scala 41:15 74:46 75:27]
  wire [31:0] _GEN_3 = io_aluctrl == 5'hd | _T_24 ? shift : _GEN_2; // @[Alu.scala 72:70 73:27]
  wire [31:0] _GEN_4 = io_aluctrl == 5'h5 | io_aluctrl == 5'h5 ? shift : _GEN_3; // @[Alu.scala 69:71 71:27]
  wire [31:0] _GEN_5 = io_aluctrl == 5'h3 | io_aluctrl == 5'h3 ? {{31'd0}, _T_16} : _GEN_4; // @[Alu.scala 61:71]
  wire [62:0] _GEN_6 = io_aluctrl == 5'h1 | io_aluctrl == 5'h1 ? _io_aluout_T_8 : {{31'd0}, _GEN_5}; // @[Alu.scala 59:70 60:26]
  wire [62:0] _GEN_7 = io_aluctrl == 5'h2 | io_aluctrl == 5'h2 ? {{62'd0}, _T_16} : _GEN_6; // @[Alu.scala 53:67]
  wire [62:0] _GEN_8 = io_aluctrl == 5'h4 | io_aluctrl == 5'h4 ? {{31'd0}, _io_aluout_T_6} : _GEN_7; // @[Alu.scala 51:66 52:27]
  wire [62:0] _GEN_9 = io_aluctrl == 5'h6 | io_aluctrl == 5'h6 ? {{31'd0}, _io_aluout_T_5} : _GEN_8; // @[Alu.scala 49:65 50:27]
  wire [62:0] _GEN_10 = io_aluctrl == 5'h7 | io_aluctrl == 5'h7 ? {{31'd0}, _io_aluout_T_4} : _GEN_9; // @[Alu.scala 47:67 48:27]
  wire [62:0] _GEN_11 = io_aluctrl == 5'h8 ? {{31'd0}, _io_aluout_T_3} : _GEN_10; // @[Alu.scala 45:39 46:27]
  wire [62:0] _GEN_12 = io_aluctrl == 5'h0 | io_aluctrl == 5'h0 ? {{31'd0}, _io_aluout_T_1} : _GEN_11; // @[Alu.scala 43:65 44:27]
  assign io_aluout = _GEN_12[31:0];
endmodule
module Alucontrol(
  input  [2:0] io_Aluop,
  input  [6:0] io_func7,
  input  [2:0] io_func3,
  output [4:0] io_aluctrl
);
  wire [10:0] _io_aluctrl_T = {1'h0,io_func7,io_func3}; // @[Cat.scala 33:92]
  wire [3:0] _io_aluctrl_T_1 = {1'h0,io_func3}; // @[Cat.scala 33:92]
  wire [4:0] _io_aluctrl_T_2 = {2'h2,io_func3}; // @[Cat.scala 33:92]
  wire [4:0] _GEN_1 = io_Aluop == 3'h2 ? _io_aluctrl_T_2 : 5'h0; // @[Alucontrol.scala 22:42 23:24]
  wire [4:0] _GEN_2 = io_Aluop == 3'h3 ? 5'h1f : _GEN_1; // @[Alucontrol.scala 20:42 21:24]
  wire [4:0] _GEN_3 = io_Aluop == 3'h5 | io_Aluop == 3'h4 ? 5'h0 : _GEN_2; // @[Alucontrol.scala 18:67 19:24]
  wire [4:0] _GEN_4 = io_Aluop == 3'h1 ? {{1'd0}, _io_aluctrl_T_1} : _GEN_3; // @[Alucontrol.scala 16:42 17:24]
  wire [10:0] _GEN_5 = io_Aluop == 3'h0 ? _io_aluctrl_T : {{6'd0}, _GEN_4}; // @[Alucontrol.scala 14:33 15:20]
  assign io_aluctrl = _GEN_5[4:0];
endmodule
module Branchcontrol(
  input  [31:0] io_RS1,
  input  [31:0] io_RS2,
  input  [2:0]  io_func3,
  output        io_branchctrl
);
  wire  _T_1 = $signed(io_RS1) == $signed(io_RS2); // @[Branchcontrol.scala 15:17]
  wire  _T_3 = $signed(io_RS1) != $signed(io_RS2); // @[Branchcontrol.scala 19:21]
  wire  _T_5 = $signed(io_RS1) < $signed(io_RS2); // @[Branchcontrol.scala 23:21]
  wire  _T_7 = $signed(io_RS1) >= $signed(io_RS2); // @[Branchcontrol.scala 27:21]
  wire  _T_11 = io_RS1 < io_RS2; // @[Branchcontrol.scala 31:28]
  wire  _T_15 = io_RS1 >= io_RS2; // @[Branchcontrol.scala 35:28]
  wire  _GEN_6 = io_func3 == 3'h7 & _T_15; // @[Branchcontrol.scala 34:39 39:23]
  wire  _GEN_7 = io_func3 == 3'h6 ? _T_11 : _GEN_6; // @[Branchcontrol.scala 30:39]
  wire  _GEN_8 = io_func3 == 3'h5 ? _T_7 : _GEN_7; // @[Branchcontrol.scala 26:39]
  wire  _GEN_9 = io_func3 == 3'h4 ? _T_5 : _GEN_8; // @[Branchcontrol.scala 22:39]
  wire  _GEN_10 = io_func3 == 3'h1 ? _T_3 : _GEN_9; // @[Branchcontrol.scala 18:39]
  assign io_branchctrl = io_func3 == 3'h0 ? _T_1 : _GEN_10; // @[Branchcontrol.scala 14:31]
endmodule
module BranchForwardingUnit(
  input  [4:0] io_RS1,
  input  [4:0] io_RS2
);
endmodule
module ControlDecoder(
  input  [6:0] io_opcode,
  output       io_MemWrite,
  output       io_MemRead,
  output       io_Branch,
  output       io_RegWrite,
  output       io_Mem2Reg,
  output [1:0] io_Ex_sel,
  output [2:0] io_Aluop,
  output [1:0] io_opA,
  output       io_opB
);
  wire [1:0] _GEN_2 = 7'h17 == io_opcode ? 2'h2 : 2'h0; // @[ControlDecoder.scala 32:22 135:23 26:15]
  wire [2:0] _GEN_3 = 7'h17 == io_opcode ? 3'h6 : 3'h7; // @[ControlDecoder.scala 136:22 28:14 32:22]
  wire  _GEN_5 = 7'h37 == io_opcode | 7'h17 == io_opcode; // @[ControlDecoder.scala 32:22 121:25]
  wire [1:0] _GEN_6 = 7'h37 == io_opcode ? 2'h2 : _GEN_2; // @[ControlDecoder.scala 32:22 123:23]
  wire [2:0] _GEN_7 = 7'h37 == io_opcode ? 3'h6 : _GEN_3; // @[ControlDecoder.scala 124:22 32:22]
  wire  _GEN_9 = 7'h67 == io_opcode | _GEN_5; // @[ControlDecoder.scala 32:22 109:25]
  wire [1:0] _GEN_10 = 7'h67 == io_opcode ? 2'h0 : _GEN_6; // @[ControlDecoder.scala 32:22 111:23]
  wire [2:0] _GEN_11 = 7'h67 == io_opcode ? 3'h3 : _GEN_7; // @[ControlDecoder.scala 112:22 32:22]
  wire [1:0] _GEN_12 = 7'h67 == io_opcode ? 2'h1 : _GEN_6; // @[ControlDecoder.scala 113:20 32:22]
  wire  _GEN_15 = 7'h6f == io_opcode | _GEN_9; // @[ControlDecoder.scala 32:22 97:25]
  wire [1:0] _GEN_16 = 7'h6f == io_opcode ? 2'h0 : _GEN_10; // @[ControlDecoder.scala 32:22 99:23]
  wire [2:0] _GEN_17 = 7'h6f == io_opcode ? 3'h3 : _GEN_11; // @[ControlDecoder.scala 100:22 32:22]
  wire [1:0] _GEN_18 = 7'h6f == io_opcode ? 2'h1 : _GEN_12; // @[ControlDecoder.scala 101:20 32:22]
  wire  _GEN_19 = 7'h6f == io_opcode ? 1'h0 : _GEN_9; // @[ControlDecoder.scala 102:20 32:22]
  wire  _GEN_23 = 7'h63 == io_opcode ? 1'h0 : _GEN_15; // @[ControlDecoder.scala 32:22 85:25]
  wire [1:0] _GEN_24 = 7'h63 == io_opcode ? 2'h0 : _GEN_16; // @[ControlDecoder.scala 32:22 87:23]
  wire [2:0] _GEN_25 = 7'h63 == io_opcode ? 3'h2 : _GEN_17; // @[ControlDecoder.scala 32:22 88:22]
  wire [1:0] _GEN_26 = 7'h63 == io_opcode ? 2'h0 : _GEN_18; // @[ControlDecoder.scala 32:22 89:20]
  wire  _GEN_27 = 7'h63 == io_opcode ? 1'h0 : _GEN_19; // @[ControlDecoder.scala 32:22 90:20]
  wire  _GEN_31 = 7'h3 == io_opcode ? 1'h0 : 7'h63 == io_opcode; // @[ControlDecoder.scala 32:22 72:23]
  wire  _GEN_32 = 7'h3 == io_opcode | _GEN_23; // @[ControlDecoder.scala 32:22 73:25]
  wire [1:0] _GEN_33 = 7'h3 == io_opcode ? 2'h0 : _GEN_24; // @[ControlDecoder.scala 32:22 75:23]
  wire [2:0] _GEN_34 = 7'h3 == io_opcode ? 3'h4 : _GEN_25; // @[ControlDecoder.scala 32:22 76:22]
  wire [1:0] _GEN_35 = 7'h3 == io_opcode ? 2'h0 : _GEN_26; // @[ControlDecoder.scala 32:22 77:20]
  wire  _GEN_36 = 7'h3 == io_opcode | _GEN_27; // @[ControlDecoder.scala 32:22 78:20]
  wire  _GEN_39 = 7'h23 == io_opcode ? 1'h0 : 7'h3 == io_opcode; // @[ControlDecoder.scala 32:22 59:24]
  wire  _GEN_40 = 7'h23 == io_opcode ? 1'h0 : _GEN_31; // @[ControlDecoder.scala 32:22 60:23]
  wire  _GEN_41 = 7'h23 == io_opcode ? 1'h0 : _GEN_32; // @[ControlDecoder.scala 32:22 61:25]
  wire [1:0] _GEN_42 = 7'h23 == io_opcode ? 2'h1 : _GEN_33; // @[ControlDecoder.scala 32:22 63:23]
  wire [2:0] _GEN_43 = 7'h23 == io_opcode ? 3'h5 : _GEN_34; // @[ControlDecoder.scala 32:22 64:22]
  wire [1:0] _GEN_44 = 7'h23 == io_opcode ? 2'h0 : _GEN_35; // @[ControlDecoder.scala 32:22 65:20]
  wire  _GEN_45 = 7'h23 == io_opcode | _GEN_36; // @[ControlDecoder.scala 32:22 66:20]
  wire  _GEN_47 = 7'h13 == io_opcode ? 1'h0 : 7'h23 == io_opcode; // @[ControlDecoder.scala 32:22 46:25]
  wire  _GEN_48 = 7'h13 == io_opcode ? 1'h0 : _GEN_39; // @[ControlDecoder.scala 32:22 47:24]
  wire  _GEN_49 = 7'h13 == io_opcode ? 1'h0 : _GEN_40; // @[ControlDecoder.scala 32:22 48:23]
  wire  _GEN_50 = 7'h13 == io_opcode | _GEN_41; // @[ControlDecoder.scala 32:22 49:25]
  wire [1:0] _GEN_51 = 7'h13 == io_opcode ? 2'h0 : _GEN_42; // @[ControlDecoder.scala 32:22 51:23]
  wire [2:0] _GEN_52 = 7'h13 == io_opcode ? 3'h1 : _GEN_43; // @[ControlDecoder.scala 32:22 52:22]
  wire [1:0] _GEN_53 = 7'h13 == io_opcode ? 2'h0 : _GEN_44; // @[ControlDecoder.scala 32:22 53:20]
  wire  _GEN_54 = 7'h13 == io_opcode | _GEN_45; // @[ControlDecoder.scala 32:22 54:20]
  assign io_MemWrite = 7'h33 == io_opcode ? 1'h0 : _GEN_47; // @[ControlDecoder.scala 32:22 34:25]
  assign io_MemRead = 7'h33 == io_opcode ? 1'h0 : _GEN_48; // @[ControlDecoder.scala 32:22 35:24]
  assign io_Branch = 7'h33 == io_opcode ? 1'h0 : _GEN_49; // @[ControlDecoder.scala 32:22 36:23]
  assign io_RegWrite = 7'h33 == io_opcode | _GEN_50; // @[ControlDecoder.scala 32:22 37:25]
  assign io_Mem2Reg = 7'h33 == io_opcode ? 1'h0 : _GEN_48; // @[ControlDecoder.scala 32:22 35:24]
  assign io_Ex_sel = 7'h33 == io_opcode ? 2'h0 : _GEN_51; // @[ControlDecoder.scala 32:22 39:23]
  assign io_Aluop = 7'h33 == io_opcode ? 3'h0 : _GEN_52; // @[ControlDecoder.scala 32:22 40:22]
  assign io_opA = 7'h33 == io_opcode ? 2'h0 : _GEN_53; // @[ControlDecoder.scala 32:22 41:20]
  assign io_opB = 7'h33 == io_opcode ? 1'h0 : _GEN_54; // @[ControlDecoder.scala 32:22 42:20]
endmodule
module EXMEM(
  input         clock,
  input         reset,
  input  [31:0] io_ALUres,
  input  [31:0] io_ReadData2,
  input  [4:0]  io_RD,
  input         io_MemRead,
  input         io_MemtoReg,
  input         io_MemWrite,
  input         io_RegWrite,
  input  [2:0]  io_func3,
  input  [31:0] io_Instr,
  input  [31:0] io_PC,
  output [31:0] io_ALUresMEM,
  output [31:0] io_ReadData2MEM,
  output [4:0]  io_RDD,
  output        io_MemReadS,
  output        io_MemtoRegS,
  output        io_MemWriteS,
  output        io_RegWriteS,
  output [2:0]  io_func3_EXMEM,
  output [31:0] io_Instr_EXMEM,
  output [31:0] io_PC_EXMEM
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
  reg [31:0] _RAND_1;
  reg [31:0] _RAND_2;
  reg [31:0] _RAND_3;
  reg [31:0] _RAND_4;
  reg [31:0] _RAND_5;
  reg [31:0] _RAND_6;
  reg [31:0] _RAND_7;
  reg [31:0] _RAND_8;
  reg [31:0] _RAND_9;
`endif // RANDOMIZE_REG_INIT
  reg [31:0] ALUres_reg; // @[EXMEM.scala 60:27]
  reg [31:0] ReadData2_reg; // @[EXMEM.scala 61:30]
  reg [4:0] RD_reg; // @[EXMEM.scala 63:23]
  reg  MemRead_reg; // @[EXMEM.scala 64:28]
  reg  MemtoReg_reg; // @[EXMEM.scala 65:29]
  reg  MemWrite_reg; // @[EXMEM.scala 66:29]
  reg  RegWrite_reg; // @[EXMEM.scala 67:29]
  reg [2:0] func3_REG; // @[EXMEM.scala 68:26]
  reg [31:0] Instr_reg; // @[EXMEM.scala 69:26]
  reg [31:0] PC_REG; // @[EXMEM.scala 71:24]
  assign io_ALUresMEM = ALUres_reg; // @[EXMEM.scala 74:16]
  assign io_ReadData2MEM = ReadData2_reg; // @[EXMEM.scala 76:19]
  assign io_RDD = RD_reg; // @[EXMEM.scala 78:10]
  assign io_MemReadS = MemRead_reg; // @[EXMEM.scala 79:15]
  assign io_MemtoRegS = MemtoReg_reg; // @[EXMEM.scala 80:16]
  assign io_MemWriteS = MemWrite_reg; // @[EXMEM.scala 81:16]
  assign io_RegWriteS = RegWrite_reg; // @[EXMEM.scala 82:16]
  assign io_func3_EXMEM = func3_REG; // @[EXMEM.scala 83:18]
  assign io_Instr_EXMEM = Instr_reg; // @[EXMEM.scala 84:18]
  assign io_PC_EXMEM = PC_REG; // @[EXMEM.scala 85:15]
  always @(posedge clock) begin
    if (reset) begin // @[EXMEM.scala 60:27]
      ALUres_reg <= 32'h0; // @[EXMEM.scala 60:27]
    end else begin
      ALUres_reg <= io_ALUres; // @[EXMEM.scala 60:27]
    end
    if (reset) begin // @[EXMEM.scala 61:30]
      ReadData2_reg <= 32'h0; // @[EXMEM.scala 61:30]
    end else begin
      ReadData2_reg <= io_ReadData2; // @[EXMEM.scala 61:30]
    end
    if (reset) begin // @[EXMEM.scala 63:23]
      RD_reg <= 5'h0; // @[EXMEM.scala 63:23]
    end else begin
      RD_reg <= io_RD; // @[EXMEM.scala 63:23]
    end
    if (reset) begin // @[EXMEM.scala 64:28]
      MemRead_reg <= 1'h0; // @[EXMEM.scala 64:28]
    end else begin
      MemRead_reg <= io_MemRead; // @[EXMEM.scala 64:28]
    end
    if (reset) begin // @[EXMEM.scala 65:29]
      MemtoReg_reg <= 1'h0; // @[EXMEM.scala 65:29]
    end else begin
      MemtoReg_reg <= io_MemtoReg; // @[EXMEM.scala 65:29]
    end
    if (reset) begin // @[EXMEM.scala 66:29]
      MemWrite_reg <= 1'h0; // @[EXMEM.scala 66:29]
    end else begin
      MemWrite_reg <= io_MemWrite; // @[EXMEM.scala 66:29]
    end
    if (reset) begin // @[EXMEM.scala 67:29]
      RegWrite_reg <= 1'h0; // @[EXMEM.scala 67:29]
    end else begin
      RegWrite_reg <= io_RegWrite; // @[EXMEM.scala 67:29]
    end
    if (reset) begin // @[EXMEM.scala 68:26]
      func3_REG <= 3'h0; // @[EXMEM.scala 68:26]
    end else begin
      func3_REG <= io_func3; // @[EXMEM.scala 68:26]
    end
    if (reset) begin // @[EXMEM.scala 69:26]
      Instr_reg <= 32'h0; // @[EXMEM.scala 69:26]
    end else begin
      Instr_reg <= io_Instr; // @[EXMEM.scala 69:26]
    end
    if (reset) begin // @[EXMEM.scala 71:24]
      PC_REG <= 32'h0; // @[EXMEM.scala 71:24]
    end else begin
      PC_REG <= io_PC; // @[EXMEM.scala 71:24]
    end
  end
// Register and memory initialization
`ifdef RANDOMIZE_GARBAGE_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_INVALID_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_REG_INIT
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_MEM_INIT
`define RANDOMIZE
`endif
`ifndef RANDOM
`define RANDOM $random
`endif
`ifdef RANDOMIZE_MEM_INIT
  integer initvar;
`endif
`ifndef SYNTHESIS
`ifdef FIRRTL_BEFORE_INITIAL
`FIRRTL_BEFORE_INITIAL
`endif
initial begin
  `ifdef RANDOMIZE
    `ifdef INIT_RANDOM
      `INIT_RANDOM
    `endif
    `ifndef VERILATOR
      `ifdef RANDOMIZE_DELAY
        #`RANDOMIZE_DELAY begin end
      `else
        #0.002 begin end
      `endif
    `endif
`ifdef RANDOMIZE_REG_INIT
  _RAND_0 = {1{`RANDOM}};
  ALUres_reg = _RAND_0[31:0];
  _RAND_1 = {1{`RANDOM}};
  ReadData2_reg = _RAND_1[31:0];
  _RAND_2 = {1{`RANDOM}};
  RD_reg = _RAND_2[4:0];
  _RAND_3 = {1{`RANDOM}};
  MemRead_reg = _RAND_3[0:0];
  _RAND_4 = {1{`RANDOM}};
  MemtoReg_reg = _RAND_4[0:0];
  _RAND_5 = {1{`RANDOM}};
  MemWrite_reg = _RAND_5[0:0];
  _RAND_6 = {1{`RANDOM}};
  RegWrite_reg = _RAND_6[0:0];
  _RAND_7 = {1{`RANDOM}};
  func3_REG = _RAND_7[2:0];
  _RAND_8 = {1{`RANDOM}};
  Instr_reg = _RAND_8[31:0];
  _RAND_9 = {1{`RANDOM}};
  PC_REG = _RAND_9[31:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
module Forward(
  input  [4:0] io_RS1,
  input  [4:0] io_RS2,
  input        io_MEMWB_RegWrite,
  input  [4:0] io_MEMWB_RD,
  output       io_RS1OUT,
  output       io_RS2OUT
);
  assign io_RS1OUT = io_MEMWB_RegWrite & io_MEMWB_RD == io_RS1; // @[Forward.scala 14:26]
  assign io_RS2OUT = io_MEMWB_RegWrite & io_MEMWB_RD == io_RS2; // @[Forward.scala 19:26]
endmodule
module ForwardingUnit(
  input  [4:0] io_IDEX_RS1,
  input  [4:0] io_IDEX_RS2,
  input  [4:0] io_EXMEM_RD,
  input  [4:0] io_MEMWB_RD,
  input        io_EXMEM_RegWrite,
  input        io_MEMWB_RegWrite,
  output [1:0] io_ForwardA,
  output [1:0] io_ForwardB
);
  wire  _T_1 = io_EXMEM_RegWrite & io_EXMEM_RD != 5'h0; // @[ForwardingUnit.scala 91:26]
  wire  _T_3 = io_EXMEM_RegWrite & io_EXMEM_RD != 5'h0 & io_EXMEM_RD == io_IDEX_RS1; // @[ForwardingUnit.scala 91:51]
  wire  _T_5 = io_MEMWB_RegWrite & io_MEMWB_RD != 5'h0; // @[ForwardingUnit.scala 93:32]
  wire  _T_6 = io_MEMWB_RD == io_IDEX_RS1; // @[ForwardingUnit.scala 94:27]
  wire  _T_7 = io_MEMWB_RegWrite & io_MEMWB_RD != 5'h0 & _T_6; // @[ForwardingUnit.scala 93:57]
  wire  _T_12 = ~_T_3; // @[ForwardingUnit.scala 95:14]
  wire  _T_13 = _T_7 & _T_12; // @[ForwardingUnit.scala 94:44]
  wire [1:0] _GEN_0 = _T_13 ? 2'h2 : 2'h0; // @[ForwardingUnit.scala 87:15 95:94 96:17]
  wire  _T_17 = _T_1 & io_EXMEM_RD == io_IDEX_RS2; // @[ForwardingUnit.scala 100:51]
  wire  _T_20 = io_MEMWB_RD == io_IDEX_RS2; // @[ForwardingUnit.scala 103:27]
  wire  _T_21 = _T_5 & _T_20; // @[ForwardingUnit.scala 102:57]
  wire  _T_26 = ~_T_17; // @[ForwardingUnit.scala 104:14]
  wire  _T_27 = _T_21 & _T_26; // @[ForwardingUnit.scala 103:44]
  wire [1:0] _GEN_2 = _T_27 ? 2'h2 : 2'h0; // @[ForwardingUnit.scala 104:94 105:17 88:15]
  assign io_ForwardA = io_EXMEM_RegWrite & io_EXMEM_RD != 5'h0 & io_EXMEM_RD == io_IDEX_RS1 ? 2'h1 : _GEN_0; // @[ForwardingUnit.scala 91:85 92:17]
  assign io_ForwardB = _T_1 & io_EXMEM_RD == io_IDEX_RS2 ? 2'h1 : _GEN_2; // @[ForwardingUnit.scala 100:85 101:17]
endmodule
module IDEX(
  input         clock,
  input         reset,
  input  [31:0] io_PC,
  input  [1:0]  io_OpA_s,
  input         io_OpB_s,
  input  [2:0]  io_func3,
  input         io_func7,
  input  [31:0] io_Read1,
  input  [31:0] io_Read2,
  input  [31:0] io_Immd,
  input  [4:0]  io_RD,
  input         io_MemRead,
  input         io_MemtoReg,
  input  [2:0]  io_ALUOp,
  input         io_MemWrite,
  input         io_RegWrite,
  input  [4:0]  io_RS1_S,
  input  [4:0]  io_RS2_S,
  input  [31:0] io_Instr,
  input  [31:0] io_operandA,
  input         io_operandAsel,
  output [31:0] io_PC_IDEX,
  output [1:0]  io_OpA_s_IDEX,
  output        io_OpB_s_IDEX,
  output [2:0]  io_func3_IDEX,
  output        io_func7_IDEX,
  output [31:0] io_Read1_IDEX,
  output [31:0] io_Read2_IDEX,
  output [31:0] io_Immd_IDEX,
  output [4:0]  io_RD_IDEX,
  output        io_MemRead_IDEX,
  output        io_MemtoReg_IDEX,
  output [2:0]  io_ALUOp_IDEX,
  output        io_MemWrite_IDEX,
  output        io_RegWrite_IDEX,
  output [4:0]  io_RS1_S_IDEX,
  output [4:0]  io_RS2_S_IDEX,
  output [31:0] io_Instr_IDEX,
  output [31:0] io_operandAout,
  output        io_operandAselout
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
  reg [31:0] _RAND_1;
  reg [31:0] _RAND_2;
  reg [31:0] _RAND_3;
  reg [31:0] _RAND_4;
  reg [31:0] _RAND_5;
  reg [31:0] _RAND_6;
  reg [31:0] _RAND_7;
  reg [31:0] _RAND_8;
  reg [31:0] _RAND_9;
  reg [31:0] _RAND_10;
  reg [31:0] _RAND_11;
  reg [31:0] _RAND_12;
  reg [31:0] _RAND_13;
  reg [31:0] _RAND_14;
  reg [31:0] _RAND_15;
  reg [31:0] _RAND_16;
  reg [31:0] _RAND_17;
  reg [31:0] _RAND_18;
`endif // RANDOMIZE_REG_INIT
  reg [31:0] PC_REG; // @[IDEX.scala 54:24]
  reg [1:0] OpA_s_REG; // @[IDEX.scala 56:26]
  reg  OpB_s_REG; // @[IDEX.scala 57:26]
  reg [2:0] func3_REG; // @[IDEX.scala 58:26]
  reg  func7_REG; // @[IDEX.scala 59:26]
  reg [31:0] Read1_REG; // @[IDEX.scala 61:26]
  reg [31:0] Read2_REG; // @[IDEX.scala 62:26]
  reg [31:0] Immd_REG; // @[IDEX.scala 63:25]
  reg [4:0] RD_REG; // @[IDEX.scala 64:23]
  reg  MemRead_REG; // @[IDEX.scala 66:28]
  reg  MemtoReg_REG; // @[IDEX.scala 67:29]
  reg [2:0] ALUOp_REG; // @[IDEX.scala 68:26]
  reg  MemWrite_REG; // @[IDEX.scala 69:29]
  reg  RegWrite_REG; // @[IDEX.scala 70:29]
  reg [4:0] RS1_S_REG; // @[IDEX.scala 71:26]
  reg [4:0] RS2_S_REG; // @[IDEX.scala 72:26]
  reg [31:0] Instr_reg; // @[IDEX.scala 73:26]
  reg [31:0] operandA_reg; // @[IDEX.scala 74:29]
  reg  operandAsel_reg; // @[IDEX.scala 75:32]
  assign io_PC_IDEX = PC_REG; // @[IDEX.scala 77:14]
  assign io_OpA_s_IDEX = OpA_s_REG; // @[IDEX.scala 79:17]
  assign io_OpB_s_IDEX = OpB_s_REG; // @[IDEX.scala 80:17]
  assign io_func3_IDEX = func3_REG; // @[IDEX.scala 81:17]
  assign io_func7_IDEX = func7_REG; // @[IDEX.scala 82:17]
  assign io_Read1_IDEX = Read1_REG; // @[IDEX.scala 84:17]
  assign io_Read2_IDEX = Read2_REG; // @[IDEX.scala 85:17]
  assign io_Immd_IDEX = Immd_REG; // @[IDEX.scala 86:16]
  assign io_RD_IDEX = RD_REG; // @[IDEX.scala 87:14]
  assign io_MemRead_IDEX = MemRead_REG; // @[IDEX.scala 89:19]
  assign io_MemtoReg_IDEX = MemtoReg_REG; // @[IDEX.scala 90:20]
  assign io_ALUOp_IDEX = ALUOp_REG; // @[IDEX.scala 91:17]
  assign io_MemWrite_IDEX = MemWrite_REG; // @[IDEX.scala 92:20]
  assign io_RegWrite_IDEX = RegWrite_REG; // @[IDEX.scala 93:20]
  assign io_RS1_S_IDEX = RS1_S_REG; // @[IDEX.scala 94:17]
  assign io_RS2_S_IDEX = RS2_S_REG; // @[IDEX.scala 95:17]
  assign io_Instr_IDEX = Instr_reg; // @[IDEX.scala 96:17]
  assign io_operandAout = operandA_reg; // @[IDEX.scala 97:18]
  assign io_operandAselout = operandAsel_reg; // @[IDEX.scala 98:21]
  always @(posedge clock) begin
    if (reset) begin // @[IDEX.scala 54:24]
      PC_REG <= 32'h0; // @[IDEX.scala 54:24]
    end else begin
      PC_REG <= io_PC; // @[IDEX.scala 54:24]
    end
    if (reset) begin // @[IDEX.scala 56:26]
      OpA_s_REG <= 2'h0; // @[IDEX.scala 56:26]
    end else begin
      OpA_s_REG <= io_OpA_s; // @[IDEX.scala 56:26]
    end
    if (reset) begin // @[IDEX.scala 57:26]
      OpB_s_REG <= 1'h0; // @[IDEX.scala 57:26]
    end else begin
      OpB_s_REG <= io_OpB_s; // @[IDEX.scala 57:26]
    end
    if (reset) begin // @[IDEX.scala 58:26]
      func3_REG <= 3'h0; // @[IDEX.scala 58:26]
    end else begin
      func3_REG <= io_func3; // @[IDEX.scala 58:26]
    end
    if (reset) begin // @[IDEX.scala 59:26]
      func7_REG <= 1'h0; // @[IDEX.scala 59:26]
    end else begin
      func7_REG <= io_func7; // @[IDEX.scala 59:26]
    end
    if (reset) begin // @[IDEX.scala 61:26]
      Read1_REG <= 32'h0; // @[IDEX.scala 61:26]
    end else begin
      Read1_REG <= io_Read1; // @[IDEX.scala 61:26]
    end
    if (reset) begin // @[IDEX.scala 62:26]
      Read2_REG <= 32'h0; // @[IDEX.scala 62:26]
    end else begin
      Read2_REG <= io_Read2; // @[IDEX.scala 62:26]
    end
    if (reset) begin // @[IDEX.scala 63:25]
      Immd_REG <= 32'h0; // @[IDEX.scala 63:25]
    end else begin
      Immd_REG <= io_Immd; // @[IDEX.scala 63:25]
    end
    if (reset) begin // @[IDEX.scala 64:23]
      RD_REG <= 5'h0; // @[IDEX.scala 64:23]
    end else begin
      RD_REG <= io_RD; // @[IDEX.scala 64:23]
    end
    if (reset) begin // @[IDEX.scala 66:28]
      MemRead_REG <= 1'h0; // @[IDEX.scala 66:28]
    end else begin
      MemRead_REG <= io_MemRead; // @[IDEX.scala 66:28]
    end
    if (reset) begin // @[IDEX.scala 67:29]
      MemtoReg_REG <= 1'h0; // @[IDEX.scala 67:29]
    end else begin
      MemtoReg_REG <= io_MemtoReg; // @[IDEX.scala 67:29]
    end
    if (reset) begin // @[IDEX.scala 68:26]
      ALUOp_REG <= 3'h0; // @[IDEX.scala 68:26]
    end else begin
      ALUOp_REG <= io_ALUOp; // @[IDEX.scala 68:26]
    end
    if (reset) begin // @[IDEX.scala 69:29]
      MemWrite_REG <= 1'h0; // @[IDEX.scala 69:29]
    end else begin
      MemWrite_REG <= io_MemWrite; // @[IDEX.scala 69:29]
    end
    if (reset) begin // @[IDEX.scala 70:29]
      RegWrite_REG <= 1'h0; // @[IDEX.scala 70:29]
    end else begin
      RegWrite_REG <= io_RegWrite; // @[IDEX.scala 70:29]
    end
    if (reset) begin // @[IDEX.scala 71:26]
      RS1_S_REG <= 5'h0; // @[IDEX.scala 71:26]
    end else begin
      RS1_S_REG <= io_RS1_S; // @[IDEX.scala 71:26]
    end
    if (reset) begin // @[IDEX.scala 72:26]
      RS2_S_REG <= 5'h0; // @[IDEX.scala 72:26]
    end else begin
      RS2_S_REG <= io_RS2_S; // @[IDEX.scala 72:26]
    end
    if (reset) begin // @[IDEX.scala 73:26]
      Instr_reg <= 32'h0; // @[IDEX.scala 73:26]
    end else begin
      Instr_reg <= io_Instr; // @[IDEX.scala 73:26]
    end
    if (reset) begin // @[IDEX.scala 74:29]
      operandA_reg <= 32'h0; // @[IDEX.scala 74:29]
    end else begin
      operandA_reg <= io_operandA; // @[IDEX.scala 74:29]
    end
    if (reset) begin // @[IDEX.scala 75:32]
      operandAsel_reg <= 1'h0; // @[IDEX.scala 75:32]
    end else begin
      operandAsel_reg <= io_operandAsel; // @[IDEX.scala 75:32]
    end
  end
// Register and memory initialization
`ifdef RANDOMIZE_GARBAGE_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_INVALID_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_REG_INIT
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_MEM_INIT
`define RANDOMIZE
`endif
`ifndef RANDOM
`define RANDOM $random
`endif
`ifdef RANDOMIZE_MEM_INIT
  integer initvar;
`endif
`ifndef SYNTHESIS
`ifdef FIRRTL_BEFORE_INITIAL
`FIRRTL_BEFORE_INITIAL
`endif
initial begin
  `ifdef RANDOMIZE
    `ifdef INIT_RANDOM
      `INIT_RANDOM
    `endif
    `ifndef VERILATOR
      `ifdef RANDOMIZE_DELAY
        #`RANDOMIZE_DELAY begin end
      `else
        #0.002 begin end
      `endif
    `endif
`ifdef RANDOMIZE_REG_INIT
  _RAND_0 = {1{`RANDOM}};
  PC_REG = _RAND_0[31:0];
  _RAND_1 = {1{`RANDOM}};
  OpA_s_REG = _RAND_1[1:0];
  _RAND_2 = {1{`RANDOM}};
  OpB_s_REG = _RAND_2[0:0];
  _RAND_3 = {1{`RANDOM}};
  func3_REG = _RAND_3[2:0];
  _RAND_4 = {1{`RANDOM}};
  func7_REG = _RAND_4[0:0];
  _RAND_5 = {1{`RANDOM}};
  Read1_REG = _RAND_5[31:0];
  _RAND_6 = {1{`RANDOM}};
  Read2_REG = _RAND_6[31:0];
  _RAND_7 = {1{`RANDOM}};
  Immd_REG = _RAND_7[31:0];
  _RAND_8 = {1{`RANDOM}};
  RD_REG = _RAND_8[4:0];
  _RAND_9 = {1{`RANDOM}};
  MemRead_REG = _RAND_9[0:0];
  _RAND_10 = {1{`RANDOM}};
  MemtoReg_REG = _RAND_10[0:0];
  _RAND_11 = {1{`RANDOM}};
  ALUOp_REG = _RAND_11[2:0];
  _RAND_12 = {1{`RANDOM}};
  MemWrite_REG = _RAND_12[0:0];
  _RAND_13 = {1{`RANDOM}};
  RegWrite_REG = _RAND_13[0:0];
  _RAND_14 = {1{`RANDOM}};
  RS1_S_REG = _RAND_14[4:0];
  _RAND_15 = {1{`RANDOM}};
  RS2_S_REG = _RAND_15[4:0];
  _RAND_16 = {1{`RANDOM}};
  Instr_reg = _RAND_16[31:0];
  _RAND_17 = {1{`RANDOM}};
  operandA_reg = _RAND_17[31:0];
  _RAND_18 = {1{`RANDOM}};
  operandAsel_reg = _RAND_18[0:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
module IFID(
  input         clock,
  input         reset,
  input  [31:0] io_Instr,
  input  [31:0] io_PCout,
  input         io_flush,
  output [31:0] io_Instr_IFID,
  output [31:0] io_PCout_IFID
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
  reg [31:0] _RAND_1;
`endif // RANDOMIZE_REG_INIT
  reg [31:0] Instr_reg; // @[IFID.scala 15:27]
  reg [31:0] PCout_reg; // @[IFID.scala 16:27]
  assign io_Instr_IFID = Instr_reg; // @[IFID.scala 29:18]
  assign io_PCout_IFID = PCout_reg; // @[IFID.scala 30:18]
  always @(posedge clock) begin
    if (reset) begin // @[IFID.scala 15:27]
      Instr_reg <= 32'h0; // @[IFID.scala 15:27]
    end else if (io_flush) begin // @[IFID.scala 19:19]
      Instr_reg <= 32'h0; // @[IFID.scala 20:16]
    end else begin
      Instr_reg <= io_Instr; // @[IFID.scala 24:16]
    end
    if (reset) begin // @[IFID.scala 16:27]
      PCout_reg <= 32'h0; // @[IFID.scala 16:27]
    end else if (io_flush) begin // @[IFID.scala 19:19]
      PCout_reg <= 32'h0; // @[IFID.scala 21:16]
    end else begin
      PCout_reg <= io_PCout; // @[IFID.scala 25:16]
    end
  end
// Register and memory initialization
`ifdef RANDOMIZE_GARBAGE_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_INVALID_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_REG_INIT
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_MEM_INIT
`define RANDOMIZE
`endif
`ifndef RANDOM
`define RANDOM $random
`endif
`ifdef RANDOMIZE_MEM_INIT
  integer initvar;
`endif
`ifndef SYNTHESIS
`ifdef FIRRTL_BEFORE_INITIAL
`FIRRTL_BEFORE_INITIAL
`endif
initial begin
  `ifdef RANDOMIZE
    `ifdef INIT_RANDOM
      `INIT_RANDOM
    `endif
    `ifndef VERILATOR
      `ifdef RANDOMIZE_DELAY
        #`RANDOMIZE_DELAY begin end
      `else
        #0.002 begin end
      `endif
    `endif
`ifdef RANDOMIZE_REG_INIT
  _RAND_0 = {1{`RANDOM}};
  Instr_reg = _RAND_0[31:0];
  _RAND_1 = {1{`RANDOM}};
  PCout_reg = _RAND_1[31:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
module ImmediateGen(
  input  [31:0] io_instruction,
  input  [31:0] io_pc,
  output [31:0] io_imm_out
);
  wire [6:0] opcode = io_instruction[6:0]; // @[ImmediateGeneration.scala 12:30]
  wire [19:0] _i_imm_T_2 = io_instruction[31] ? 20'hfffff : 20'h0; // @[Bitwise.scala 77:12]
  wire [31:0] i_imm = {_i_imm_T_2,io_instruction[31:20]}; // @[ImmediateGeneration.scala 15:73]
  wire [31:0] s_imm = {_i_imm_T_2,io_instruction[31:25],io_instruction[11:7]}; // @[ImmediateGeneration.scala 16:95]
  wire [18:0] _sb_imm_T_2 = io_instruction[31] ? 19'h7ffff : 19'h0; // @[Bitwise.scala 77:12]
  wire [31:0] _sb_imm_T_8 = {_sb_imm_T_2,io_instruction[31],io_instruction[7],io_instruction[30:25],io_instruction[11:8]
    ,1'h0}; // @[ImmediateGeneration.scala 22:30]
  wire [31:0] _sb_imm_T_9 = io_pc; // @[ImmediateGeneration.scala 22:45]
  wire [31:0] sb_imm = $signed(_sb_imm_T_8) + $signed(io_pc); // @[ImmediateGeneration.scala 22:37]
  wire [19:0] u_imm_hi = io_instruction[31:12]; // @[Cat.scala 33:92]
  wire [31:0] u_imm = {u_imm_hi,12'h0}; // @[ImmediateGeneration.scala 24:60]
  wire [31:0] auipc_imm = $signed(u_imm) + $signed(io_pc); // @[ImmediateGeneration.scala 26:26]
  wire [11:0] _uj_imm_T_2 = io_instruction[31] ? 12'hfff : 12'h0; // @[Bitwise.scala 77:12]
  wire [32:0] _uj_imm_T_8 = {_uj_imm_T_2,io_instruction[31],io_instruction[19:12],io_instruction[20],io_instruction[30:
    21],1'h0}; // @[ImmediateGeneration.scala 33:30]
  wire [32:0] _GEN_8 = {{1{_sb_imm_T_9[31]}},_sb_imm_T_9}; // @[ImmediateGeneration.scala 33:37]
  wire [32:0] uj_imm = $signed(_uj_imm_T_8) + $signed(_GEN_8); // @[ImmediateGeneration.scala 33:37]
  wire [32:0] _GEN_0 = 7'h6f == opcode ? $signed(uj_imm) : $signed(33'sh0); // @[ImmediateGeneration.scala 36:14 38:18 46:35]
  wire [32:0] _GEN_1 = 7'h17 == opcode ? $signed({{1{auipc_imm[31]}},auipc_imm}) : $signed(_GEN_0); // @[ImmediateGeneration.scala 38:18 45:35]
  wire [32:0] _GEN_2 = 7'h37 == opcode ? $signed({{1{u_imm[31]}},u_imm}) : $signed(_GEN_1); // @[ImmediateGeneration.scala 38:18 44:35]
  wire [32:0] _GEN_3 = 7'h63 == opcode ? $signed({{1{sb_imm[31]}},sb_imm}) : $signed(_GEN_2); // @[ImmediateGeneration.scala 38:18 43:35]
  wire [32:0] _GEN_4 = 7'h23 == opcode ? $signed({{1{s_imm[31]}},s_imm}) : $signed(_GEN_3); // @[ImmediateGeneration.scala 38:18 42:35]
  wire [32:0] _GEN_5 = 7'h67 == opcode ? $signed({{1{i_imm[31]}},i_imm}) : $signed(_GEN_4); // @[ImmediateGeneration.scala 38:18 41:35]
  wire [32:0] _GEN_6 = 7'h13 == opcode ? $signed({{1{i_imm[31]}},i_imm}) : $signed(_GEN_5); // @[ImmediateGeneration.scala 38:18 40:35]
  wire [32:0] _GEN_7 = 7'h3 == opcode ? $signed({{1{i_imm[31]}},i_imm}) : $signed(_GEN_6); // @[ImmediateGeneration.scala 38:18 39:35]
  assign io_imm_out = _GEN_7[31:0];
endmodule
module MEMWB(
  input         clock,
  input         reset,
  input  [31:0] io_ALUres,
  input  [4:0]  io_RD,
  input         io_MemtoReg,
  input         io_RegWrite,
  input  [31:0] io_Instr,
  input  [31:0] io_memaddress,
  input  [3:0]  io_mask,
  input  [31:0] io_MemWritedata,
  input  [31:0] io_PC,
  output [31:0] io_ALUres_MEMWB,
  output [4:0]  io_RDD_MEMWB,
  output        io_MemtoReg_MEMWB,
  output        io_RegWrite_MEMWB,
  output [31:0] io_Instr_MEMWB,
  output [31:0] io_memaddressD,
  output [3:0]  io_mask_out,
  output [31:0] io_MemWritedata_out,
  output [31:0] io_PC_MEMWB
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
  reg [31:0] _RAND_1;
  reg [31:0] _RAND_2;
  reg [31:0] _RAND_3;
  reg [31:0] _RAND_4;
  reg [31:0] _RAND_5;
  reg [31:0] _RAND_6;
  reg [31:0] _RAND_7;
  reg [31:0] _RAND_8;
`endif // RANDOMIZE_REG_INIT
  reg [31:0] ALUres_reg; // @[MEMWB.scala 40:27]
  reg [4:0] RD_reg; // @[MEMWB.scala 41:23]
  reg  MemtoReg_reg; // @[MEMWB.scala 42:29]
  reg  RegWrite_reg; // @[MEMWB.scala 43:29]
  reg [31:0] Instr_reg; // @[MEMWB.scala 45:26]
  reg [31:0] memaddress_reg; // @[MEMWB.scala 46:31]
  reg [3:0] mask_reg; // @[MEMWB.scala 48:26]
  reg [31:0] MemWritedata_reg; // @[MEMWB.scala 49:33]
  reg [31:0] PC_REG; // @[MEMWB.scala 50:24]
  assign io_ALUres_MEMWB = ALUres_reg; // @[MEMWB.scala 55:19]
  assign io_RDD_MEMWB = RD_reg; // @[MEMWB.scala 56:16]
  assign io_MemtoReg_MEMWB = MemtoReg_reg; // @[MEMWB.scala 57:21]
  assign io_RegWrite_MEMWB = RegWrite_reg; // @[MEMWB.scala 58:21]
  assign io_Instr_MEMWB = Instr_reg; // @[MEMWB.scala 60:18]
  assign io_memaddressD = memaddress_reg; // @[MEMWB.scala 61:18]
  assign io_mask_out = mask_reg; // @[MEMWB.scala 63:15]
  assign io_MemWritedata_out = MemWritedata_reg; // @[MEMWB.scala 64:23]
  assign io_PC_MEMWB = PC_REG; // @[MEMWB.scala 65:15]
  always @(posedge clock) begin
    if (reset) begin // @[MEMWB.scala 40:27]
      ALUres_reg <= 32'h0; // @[MEMWB.scala 40:27]
    end else begin
      ALUres_reg <= io_ALUres; // @[MEMWB.scala 40:27]
    end
    if (reset) begin // @[MEMWB.scala 41:23]
      RD_reg <= 5'h0; // @[MEMWB.scala 41:23]
    end else begin
      RD_reg <= io_RD; // @[MEMWB.scala 41:23]
    end
    if (reset) begin // @[MEMWB.scala 42:29]
      MemtoReg_reg <= 1'h0; // @[MEMWB.scala 42:29]
    end else begin
      MemtoReg_reg <= io_MemtoReg; // @[MEMWB.scala 42:29]
    end
    if (reset) begin // @[MEMWB.scala 43:29]
      RegWrite_reg <= 1'h0; // @[MEMWB.scala 43:29]
    end else begin
      RegWrite_reg <= io_RegWrite; // @[MEMWB.scala 43:29]
    end
    if (reset) begin // @[MEMWB.scala 45:26]
      Instr_reg <= 32'h0; // @[MEMWB.scala 45:26]
    end else begin
      Instr_reg <= io_Instr; // @[MEMWB.scala 45:26]
    end
    if (reset) begin // @[MEMWB.scala 46:31]
      memaddress_reg <= 32'h0; // @[MEMWB.scala 46:31]
    end else begin
      memaddress_reg <= io_memaddress; // @[MEMWB.scala 46:31]
    end
    if (reset) begin // @[MEMWB.scala 48:26]
      mask_reg <= 4'h0; // @[MEMWB.scala 48:26]
    end else begin
      mask_reg <= io_mask; // @[MEMWB.scala 48:26]
    end
    if (reset) begin // @[MEMWB.scala 49:33]
      MemWritedata_reg <= 32'h0; // @[MEMWB.scala 49:33]
    end else begin
      MemWritedata_reg <= io_MemWritedata; // @[MEMWB.scala 49:33]
    end
    if (reset) begin // @[MEMWB.scala 50:24]
      PC_REG <= 32'h0; // @[MEMWB.scala 50:24]
    end else begin
      PC_REG <= io_PC; // @[MEMWB.scala 50:24]
    end
  end
// Register and memory initialization
`ifdef RANDOMIZE_GARBAGE_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_INVALID_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_REG_INIT
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_MEM_INIT
`define RANDOMIZE
`endif
`ifndef RANDOM
`define RANDOM $random
`endif
`ifdef RANDOMIZE_MEM_INIT
  integer initvar;
`endif
`ifndef SYNTHESIS
`ifdef FIRRTL_BEFORE_INITIAL
`FIRRTL_BEFORE_INITIAL
`endif
initial begin
  `ifdef RANDOMIZE
    `ifdef INIT_RANDOM
      `INIT_RANDOM
    `endif
    `ifndef VERILATOR
      `ifdef RANDOMIZE_DELAY
        #`RANDOMIZE_DELAY begin end
      `else
        #0.002 begin end
      `endif
    `endif
`ifdef RANDOMIZE_REG_INIT
  _RAND_0 = {1{`RANDOM}};
  ALUres_reg = _RAND_0[31:0];
  _RAND_1 = {1{`RANDOM}};
  RD_reg = _RAND_1[4:0];
  _RAND_2 = {1{`RANDOM}};
  MemtoReg_reg = _RAND_2[0:0];
  _RAND_3 = {1{`RANDOM}};
  RegWrite_reg = _RAND_3[0:0];
  _RAND_4 = {1{`RANDOM}};
  Instr_reg = _RAND_4[31:0];
  _RAND_5 = {1{`RANDOM}};
  memaddress_reg = _RAND_5[31:0];
  _RAND_6 = {1{`RANDOM}};
  mask_reg = _RAND_6[3:0];
  _RAND_7 = {1{`RANDOM}};
  MemWritedata_reg = _RAND_7[31:0];
  _RAND_8 = {1{`RANDOM}};
  PC_REG = _RAND_8[31:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
module RegisterFile(
  input         clock,
  input         reset,
  input         io_RegWrite,
  input  [4:0]  io_rd,
  input  [31:0] io_instruction,
  input  [31:0] io_writeData,
  output [31:0] io_readData1,
  output [31:0] io_readData2
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
  reg [31:0] _RAND_1;
  reg [31:0] _RAND_2;
  reg [31:0] _RAND_3;
  reg [31:0] _RAND_4;
  reg [31:0] _RAND_5;
  reg [31:0] _RAND_6;
  reg [31:0] _RAND_7;
  reg [31:0] _RAND_8;
  reg [31:0] _RAND_9;
  reg [31:0] _RAND_10;
  reg [31:0] _RAND_11;
  reg [31:0] _RAND_12;
  reg [31:0] _RAND_13;
  reg [31:0] _RAND_14;
  reg [31:0] _RAND_15;
  reg [31:0] _RAND_16;
  reg [31:0] _RAND_17;
  reg [31:0] _RAND_18;
  reg [31:0] _RAND_19;
  reg [31:0] _RAND_20;
  reg [31:0] _RAND_21;
  reg [31:0] _RAND_22;
  reg [31:0] _RAND_23;
  reg [31:0] _RAND_24;
  reg [31:0] _RAND_25;
  reg [31:0] _RAND_26;
  reg [31:0] _RAND_27;
  reg [31:0] _RAND_28;
  reg [31:0] _RAND_29;
  reg [31:0] _RAND_30;
  reg [31:0] _RAND_31;
`endif // RANDOMIZE_REG_INIT
  reg [31:0] reg_0; // @[RegisterFile.scala 16:20]
  reg [31:0] reg_1; // @[RegisterFile.scala 16:20]
  reg [31:0] reg_2; // @[RegisterFile.scala 16:20]
  reg [31:0] reg_3; // @[RegisterFile.scala 16:20]
  reg [31:0] reg_4; // @[RegisterFile.scala 16:20]
  reg [31:0] reg_5; // @[RegisterFile.scala 16:20]
  reg [31:0] reg_6; // @[RegisterFile.scala 16:20]
  reg [31:0] reg_7; // @[RegisterFile.scala 16:20]
  reg [31:0] reg_8; // @[RegisterFile.scala 16:20]
  reg [31:0] reg_9; // @[RegisterFile.scala 16:20]
  reg [31:0] reg_10; // @[RegisterFile.scala 16:20]
  reg [31:0] reg_11; // @[RegisterFile.scala 16:20]
  reg [31:0] reg_12; // @[RegisterFile.scala 16:20]
  reg [31:0] reg_13; // @[RegisterFile.scala 16:20]
  reg [31:0] reg_14; // @[RegisterFile.scala 16:20]
  reg [31:0] reg_15; // @[RegisterFile.scala 16:20]
  reg [31:0] reg_16; // @[RegisterFile.scala 16:20]
  reg [31:0] reg_17; // @[RegisterFile.scala 16:20]
  reg [31:0] reg_18; // @[RegisterFile.scala 16:20]
  reg [31:0] reg_19; // @[RegisterFile.scala 16:20]
  reg [31:0] reg_20; // @[RegisterFile.scala 16:20]
  reg [31:0] reg_21; // @[RegisterFile.scala 16:20]
  reg [31:0] reg_22; // @[RegisterFile.scala 16:20]
  reg [31:0] reg_23; // @[RegisterFile.scala 16:20]
  reg [31:0] reg_24; // @[RegisterFile.scala 16:20]
  reg [31:0] reg_25; // @[RegisterFile.scala 16:20]
  reg [31:0] reg_26; // @[RegisterFile.scala 16:20]
  reg [31:0] reg_27; // @[RegisterFile.scala 16:20]
  reg [31:0] reg_28; // @[RegisterFile.scala 16:20]
  reg [31:0] reg_29; // @[RegisterFile.scala 16:20]
  reg [31:0] reg_30; // @[RegisterFile.scala 16:20]
  reg [31:0] reg_31; // @[RegisterFile.scala 16:20]
  wire [4:0] Rs1 = io_instruction[19:15]; // @[RegisterFile.scala 17:27]
  wire [4:0] Rs2 = io_instruction[24:20]; // @[RegisterFile.scala 18:27]
  wire [31:0] _GEN_1 = 5'h1 == Rs1 ? reg_1 : reg_0; // @[RegisterFile.scala 20:{22,22}]
  wire [31:0] _GEN_2 = 5'h2 == Rs1 ? reg_2 : _GEN_1; // @[RegisterFile.scala 20:{22,22}]
  wire [31:0] _GEN_3 = 5'h3 == Rs1 ? reg_3 : _GEN_2; // @[RegisterFile.scala 20:{22,22}]
  wire [31:0] _GEN_4 = 5'h4 == Rs1 ? reg_4 : _GEN_3; // @[RegisterFile.scala 20:{22,22}]
  wire [31:0] _GEN_5 = 5'h5 == Rs1 ? reg_5 : _GEN_4; // @[RegisterFile.scala 20:{22,22}]
  wire [31:0] _GEN_6 = 5'h6 == Rs1 ? reg_6 : _GEN_5; // @[RegisterFile.scala 20:{22,22}]
  wire [31:0] _GEN_7 = 5'h7 == Rs1 ? reg_7 : _GEN_6; // @[RegisterFile.scala 20:{22,22}]
  wire [31:0] _GEN_8 = 5'h8 == Rs1 ? reg_8 : _GEN_7; // @[RegisterFile.scala 20:{22,22}]
  wire [31:0] _GEN_9 = 5'h9 == Rs1 ? reg_9 : _GEN_8; // @[RegisterFile.scala 20:{22,22}]
  wire [31:0] _GEN_10 = 5'ha == Rs1 ? reg_10 : _GEN_9; // @[RegisterFile.scala 20:{22,22}]
  wire [31:0] _GEN_11 = 5'hb == Rs1 ? reg_11 : _GEN_10; // @[RegisterFile.scala 20:{22,22}]
  wire [31:0] _GEN_12 = 5'hc == Rs1 ? reg_12 : _GEN_11; // @[RegisterFile.scala 20:{22,22}]
  wire [31:0] _GEN_13 = 5'hd == Rs1 ? reg_13 : _GEN_12; // @[RegisterFile.scala 20:{22,22}]
  wire [31:0] _GEN_14 = 5'he == Rs1 ? reg_14 : _GEN_13; // @[RegisterFile.scala 20:{22,22}]
  wire [31:0] _GEN_15 = 5'hf == Rs1 ? reg_15 : _GEN_14; // @[RegisterFile.scala 20:{22,22}]
  wire [31:0] _GEN_16 = 5'h10 == Rs1 ? reg_16 : _GEN_15; // @[RegisterFile.scala 20:{22,22}]
  wire [31:0] _GEN_17 = 5'h11 == Rs1 ? reg_17 : _GEN_16; // @[RegisterFile.scala 20:{22,22}]
  wire [31:0] _GEN_18 = 5'h12 == Rs1 ? reg_18 : _GEN_17; // @[RegisterFile.scala 20:{22,22}]
  wire [31:0] _GEN_19 = 5'h13 == Rs1 ? reg_19 : _GEN_18; // @[RegisterFile.scala 20:{22,22}]
  wire [31:0] _GEN_20 = 5'h14 == Rs1 ? reg_20 : _GEN_19; // @[RegisterFile.scala 20:{22,22}]
  wire [31:0] _GEN_21 = 5'h15 == Rs1 ? reg_21 : _GEN_20; // @[RegisterFile.scala 20:{22,22}]
  wire [31:0] _GEN_22 = 5'h16 == Rs1 ? reg_22 : _GEN_21; // @[RegisterFile.scala 20:{22,22}]
  wire [31:0] _GEN_23 = 5'h17 == Rs1 ? reg_23 : _GEN_22; // @[RegisterFile.scala 20:{22,22}]
  wire [31:0] _GEN_24 = 5'h18 == Rs1 ? reg_24 : _GEN_23; // @[RegisterFile.scala 20:{22,22}]
  wire [31:0] _GEN_25 = 5'h19 == Rs1 ? reg_25 : _GEN_24; // @[RegisterFile.scala 20:{22,22}]
  wire [31:0] _GEN_26 = 5'h1a == Rs1 ? reg_26 : _GEN_25; // @[RegisterFile.scala 20:{22,22}]
  wire [31:0] _GEN_27 = 5'h1b == Rs1 ? reg_27 : _GEN_26; // @[RegisterFile.scala 20:{22,22}]
  wire [31:0] _GEN_28 = 5'h1c == Rs1 ? reg_28 : _GEN_27; // @[RegisterFile.scala 20:{22,22}]
  wire [31:0] _GEN_29 = 5'h1d == Rs1 ? reg_29 : _GEN_28; // @[RegisterFile.scala 20:{22,22}]
  wire [31:0] _GEN_30 = 5'h1e == Rs1 ? reg_30 : _GEN_29; // @[RegisterFile.scala 20:{22,22}]
  wire [31:0] _GEN_31 = 5'h1f == Rs1 ? reg_31 : _GEN_30; // @[RegisterFile.scala 20:{22,22}]
  wire [31:0] _GEN_33 = 5'h1 == Rs2 ? reg_1 : reg_0; // @[RegisterFile.scala 21:{22,22}]
  wire [31:0] _GEN_34 = 5'h2 == Rs2 ? reg_2 : _GEN_33; // @[RegisterFile.scala 21:{22,22}]
  wire [31:0] _GEN_35 = 5'h3 == Rs2 ? reg_3 : _GEN_34; // @[RegisterFile.scala 21:{22,22}]
  wire [31:0] _GEN_36 = 5'h4 == Rs2 ? reg_4 : _GEN_35; // @[RegisterFile.scala 21:{22,22}]
  wire [31:0] _GEN_37 = 5'h5 == Rs2 ? reg_5 : _GEN_36; // @[RegisterFile.scala 21:{22,22}]
  wire [31:0] _GEN_38 = 5'h6 == Rs2 ? reg_6 : _GEN_37; // @[RegisterFile.scala 21:{22,22}]
  wire [31:0] _GEN_39 = 5'h7 == Rs2 ? reg_7 : _GEN_38; // @[RegisterFile.scala 21:{22,22}]
  wire [31:0] _GEN_40 = 5'h8 == Rs2 ? reg_8 : _GEN_39; // @[RegisterFile.scala 21:{22,22}]
  wire [31:0] _GEN_41 = 5'h9 == Rs2 ? reg_9 : _GEN_40; // @[RegisterFile.scala 21:{22,22}]
  wire [31:0] _GEN_42 = 5'ha == Rs2 ? reg_10 : _GEN_41; // @[RegisterFile.scala 21:{22,22}]
  wire [31:0] _GEN_43 = 5'hb == Rs2 ? reg_11 : _GEN_42; // @[RegisterFile.scala 21:{22,22}]
  wire [31:0] _GEN_44 = 5'hc == Rs2 ? reg_12 : _GEN_43; // @[RegisterFile.scala 21:{22,22}]
  wire [31:0] _GEN_45 = 5'hd == Rs2 ? reg_13 : _GEN_44; // @[RegisterFile.scala 21:{22,22}]
  wire [31:0] _GEN_46 = 5'he == Rs2 ? reg_14 : _GEN_45; // @[RegisterFile.scala 21:{22,22}]
  wire [31:0] _GEN_47 = 5'hf == Rs2 ? reg_15 : _GEN_46; // @[RegisterFile.scala 21:{22,22}]
  wire [31:0] _GEN_48 = 5'h10 == Rs2 ? reg_16 : _GEN_47; // @[RegisterFile.scala 21:{22,22}]
  wire [31:0] _GEN_49 = 5'h11 == Rs2 ? reg_17 : _GEN_48; // @[RegisterFile.scala 21:{22,22}]
  wire [31:0] _GEN_50 = 5'h12 == Rs2 ? reg_18 : _GEN_49; // @[RegisterFile.scala 21:{22,22}]
  wire [31:0] _GEN_51 = 5'h13 == Rs2 ? reg_19 : _GEN_50; // @[RegisterFile.scala 21:{22,22}]
  wire [31:0] _GEN_52 = 5'h14 == Rs2 ? reg_20 : _GEN_51; // @[RegisterFile.scala 21:{22,22}]
  wire [31:0] _GEN_53 = 5'h15 == Rs2 ? reg_21 : _GEN_52; // @[RegisterFile.scala 21:{22,22}]
  wire [31:0] _GEN_54 = 5'h16 == Rs2 ? reg_22 : _GEN_53; // @[RegisterFile.scala 21:{22,22}]
  wire [31:0] _GEN_55 = 5'h17 == Rs2 ? reg_23 : _GEN_54; // @[RegisterFile.scala 21:{22,22}]
  wire [31:0] _GEN_56 = 5'h18 == Rs2 ? reg_24 : _GEN_55; // @[RegisterFile.scala 21:{22,22}]
  wire [31:0] _GEN_57 = 5'h19 == Rs2 ? reg_25 : _GEN_56; // @[RegisterFile.scala 21:{22,22}]
  wire [31:0] _GEN_58 = 5'h1a == Rs2 ? reg_26 : _GEN_57; // @[RegisterFile.scala 21:{22,22}]
  wire [31:0] _GEN_59 = 5'h1b == Rs2 ? reg_27 : _GEN_58; // @[RegisterFile.scala 21:{22,22}]
  wire [31:0] _GEN_60 = 5'h1c == Rs2 ? reg_28 : _GEN_59; // @[RegisterFile.scala 21:{22,22}]
  wire [31:0] _GEN_61 = 5'h1d == Rs2 ? reg_29 : _GEN_60; // @[RegisterFile.scala 21:{22,22}]
  wire [31:0] _GEN_62 = 5'h1e == Rs2 ? reg_30 : _GEN_61; // @[RegisterFile.scala 21:{22,22}]
  wire [31:0] _GEN_63 = 5'h1f == Rs2 ? reg_31 : _GEN_62; // @[RegisterFile.scala 21:{22,22}]
  assign io_readData1 = Rs1 != 5'h0 ? _GEN_31 : 32'h0; // @[RegisterFile.scala 20:22]
  assign io_readData2 = Rs2 != 5'h0 ? _GEN_63 : 32'h0; // @[RegisterFile.scala 21:22]
  always @(posedge clock) begin
    if (reset) begin // @[RegisterFile.scala 16:20]
      reg_0 <= 32'h0; // @[RegisterFile.scala 16:20]
    end else if (io_RegWrite & io_rd != 5'h0) begin // @[RegisterFile.scala 23:46]
      if (5'h0 == io_rd) begin // @[RegisterFile.scala 24:16]
        reg_0 <= io_writeData; // @[RegisterFile.scala 24:16]
      end
    end
    if (reset) begin // @[RegisterFile.scala 16:20]
      reg_1 <= 32'h0; // @[RegisterFile.scala 16:20]
    end else if (io_RegWrite & io_rd != 5'h0) begin // @[RegisterFile.scala 23:46]
      if (5'h1 == io_rd) begin // @[RegisterFile.scala 24:16]
        reg_1 <= io_writeData; // @[RegisterFile.scala 24:16]
      end
    end
    if (reset) begin // @[RegisterFile.scala 16:20]
      reg_2 <= 32'h0; // @[RegisterFile.scala 16:20]
    end else if (io_RegWrite & io_rd != 5'h0) begin // @[RegisterFile.scala 23:46]
      if (5'h2 == io_rd) begin // @[RegisterFile.scala 24:16]
        reg_2 <= io_writeData; // @[RegisterFile.scala 24:16]
      end
    end
    if (reset) begin // @[RegisterFile.scala 16:20]
      reg_3 <= 32'h0; // @[RegisterFile.scala 16:20]
    end else if (io_RegWrite & io_rd != 5'h0) begin // @[RegisterFile.scala 23:46]
      if (5'h3 == io_rd) begin // @[RegisterFile.scala 24:16]
        reg_3 <= io_writeData; // @[RegisterFile.scala 24:16]
      end
    end
    if (reset) begin // @[RegisterFile.scala 16:20]
      reg_4 <= 32'h0; // @[RegisterFile.scala 16:20]
    end else if (io_RegWrite & io_rd != 5'h0) begin // @[RegisterFile.scala 23:46]
      if (5'h4 == io_rd) begin // @[RegisterFile.scala 24:16]
        reg_4 <= io_writeData; // @[RegisterFile.scala 24:16]
      end
    end
    if (reset) begin // @[RegisterFile.scala 16:20]
      reg_5 <= 32'h0; // @[RegisterFile.scala 16:20]
    end else if (io_RegWrite & io_rd != 5'h0) begin // @[RegisterFile.scala 23:46]
      if (5'h5 == io_rd) begin // @[RegisterFile.scala 24:16]
        reg_5 <= io_writeData; // @[RegisterFile.scala 24:16]
      end
    end
    if (reset) begin // @[RegisterFile.scala 16:20]
      reg_6 <= 32'h0; // @[RegisterFile.scala 16:20]
    end else if (io_RegWrite & io_rd != 5'h0) begin // @[RegisterFile.scala 23:46]
      if (5'h6 == io_rd) begin // @[RegisterFile.scala 24:16]
        reg_6 <= io_writeData; // @[RegisterFile.scala 24:16]
      end
    end
    if (reset) begin // @[RegisterFile.scala 16:20]
      reg_7 <= 32'h0; // @[RegisterFile.scala 16:20]
    end else if (io_RegWrite & io_rd != 5'h0) begin // @[RegisterFile.scala 23:46]
      if (5'h7 == io_rd) begin // @[RegisterFile.scala 24:16]
        reg_7 <= io_writeData; // @[RegisterFile.scala 24:16]
      end
    end
    if (reset) begin // @[RegisterFile.scala 16:20]
      reg_8 <= 32'h0; // @[RegisterFile.scala 16:20]
    end else if (io_RegWrite & io_rd != 5'h0) begin // @[RegisterFile.scala 23:46]
      if (5'h8 == io_rd) begin // @[RegisterFile.scala 24:16]
        reg_8 <= io_writeData; // @[RegisterFile.scala 24:16]
      end
    end
    if (reset) begin // @[RegisterFile.scala 16:20]
      reg_9 <= 32'h0; // @[RegisterFile.scala 16:20]
    end else if (io_RegWrite & io_rd != 5'h0) begin // @[RegisterFile.scala 23:46]
      if (5'h9 == io_rd) begin // @[RegisterFile.scala 24:16]
        reg_9 <= io_writeData; // @[RegisterFile.scala 24:16]
      end
    end
    if (reset) begin // @[RegisterFile.scala 16:20]
      reg_10 <= 32'h0; // @[RegisterFile.scala 16:20]
    end else if (io_RegWrite & io_rd != 5'h0) begin // @[RegisterFile.scala 23:46]
      if (5'ha == io_rd) begin // @[RegisterFile.scala 24:16]
        reg_10 <= io_writeData; // @[RegisterFile.scala 24:16]
      end
    end
    if (reset) begin // @[RegisterFile.scala 16:20]
      reg_11 <= 32'h0; // @[RegisterFile.scala 16:20]
    end else if (io_RegWrite & io_rd != 5'h0) begin // @[RegisterFile.scala 23:46]
      if (5'hb == io_rd) begin // @[RegisterFile.scala 24:16]
        reg_11 <= io_writeData; // @[RegisterFile.scala 24:16]
      end
    end
    if (reset) begin // @[RegisterFile.scala 16:20]
      reg_12 <= 32'h0; // @[RegisterFile.scala 16:20]
    end else if (io_RegWrite & io_rd != 5'h0) begin // @[RegisterFile.scala 23:46]
      if (5'hc == io_rd) begin // @[RegisterFile.scala 24:16]
        reg_12 <= io_writeData; // @[RegisterFile.scala 24:16]
      end
    end
    if (reset) begin // @[RegisterFile.scala 16:20]
      reg_13 <= 32'h0; // @[RegisterFile.scala 16:20]
    end else if (io_RegWrite & io_rd != 5'h0) begin // @[RegisterFile.scala 23:46]
      if (5'hd == io_rd) begin // @[RegisterFile.scala 24:16]
        reg_13 <= io_writeData; // @[RegisterFile.scala 24:16]
      end
    end
    if (reset) begin // @[RegisterFile.scala 16:20]
      reg_14 <= 32'h0; // @[RegisterFile.scala 16:20]
    end else if (io_RegWrite & io_rd != 5'h0) begin // @[RegisterFile.scala 23:46]
      if (5'he == io_rd) begin // @[RegisterFile.scala 24:16]
        reg_14 <= io_writeData; // @[RegisterFile.scala 24:16]
      end
    end
    if (reset) begin // @[RegisterFile.scala 16:20]
      reg_15 <= 32'h0; // @[RegisterFile.scala 16:20]
    end else if (io_RegWrite & io_rd != 5'h0) begin // @[RegisterFile.scala 23:46]
      if (5'hf == io_rd) begin // @[RegisterFile.scala 24:16]
        reg_15 <= io_writeData; // @[RegisterFile.scala 24:16]
      end
    end
    if (reset) begin // @[RegisterFile.scala 16:20]
      reg_16 <= 32'h0; // @[RegisterFile.scala 16:20]
    end else if (io_RegWrite & io_rd != 5'h0) begin // @[RegisterFile.scala 23:46]
      if (5'h10 == io_rd) begin // @[RegisterFile.scala 24:16]
        reg_16 <= io_writeData; // @[RegisterFile.scala 24:16]
      end
    end
    if (reset) begin // @[RegisterFile.scala 16:20]
      reg_17 <= 32'h0; // @[RegisterFile.scala 16:20]
    end else if (io_RegWrite & io_rd != 5'h0) begin // @[RegisterFile.scala 23:46]
      if (5'h11 == io_rd) begin // @[RegisterFile.scala 24:16]
        reg_17 <= io_writeData; // @[RegisterFile.scala 24:16]
      end
    end
    if (reset) begin // @[RegisterFile.scala 16:20]
      reg_18 <= 32'h0; // @[RegisterFile.scala 16:20]
    end else if (io_RegWrite & io_rd != 5'h0) begin // @[RegisterFile.scala 23:46]
      if (5'h12 == io_rd) begin // @[RegisterFile.scala 24:16]
        reg_18 <= io_writeData; // @[RegisterFile.scala 24:16]
      end
    end
    if (reset) begin // @[RegisterFile.scala 16:20]
      reg_19 <= 32'h0; // @[RegisterFile.scala 16:20]
    end else if (io_RegWrite & io_rd != 5'h0) begin // @[RegisterFile.scala 23:46]
      if (5'h13 == io_rd) begin // @[RegisterFile.scala 24:16]
        reg_19 <= io_writeData; // @[RegisterFile.scala 24:16]
      end
    end
    if (reset) begin // @[RegisterFile.scala 16:20]
      reg_20 <= 32'h0; // @[RegisterFile.scala 16:20]
    end else if (io_RegWrite & io_rd != 5'h0) begin // @[RegisterFile.scala 23:46]
      if (5'h14 == io_rd) begin // @[RegisterFile.scala 24:16]
        reg_20 <= io_writeData; // @[RegisterFile.scala 24:16]
      end
    end
    if (reset) begin // @[RegisterFile.scala 16:20]
      reg_21 <= 32'h0; // @[RegisterFile.scala 16:20]
    end else if (io_RegWrite & io_rd != 5'h0) begin // @[RegisterFile.scala 23:46]
      if (5'h15 == io_rd) begin // @[RegisterFile.scala 24:16]
        reg_21 <= io_writeData; // @[RegisterFile.scala 24:16]
      end
    end
    if (reset) begin // @[RegisterFile.scala 16:20]
      reg_22 <= 32'h0; // @[RegisterFile.scala 16:20]
    end else if (io_RegWrite & io_rd != 5'h0) begin // @[RegisterFile.scala 23:46]
      if (5'h16 == io_rd) begin // @[RegisterFile.scala 24:16]
        reg_22 <= io_writeData; // @[RegisterFile.scala 24:16]
      end
    end
    if (reset) begin // @[RegisterFile.scala 16:20]
      reg_23 <= 32'h0; // @[RegisterFile.scala 16:20]
    end else if (io_RegWrite & io_rd != 5'h0) begin // @[RegisterFile.scala 23:46]
      if (5'h17 == io_rd) begin // @[RegisterFile.scala 24:16]
        reg_23 <= io_writeData; // @[RegisterFile.scala 24:16]
      end
    end
    if (reset) begin // @[RegisterFile.scala 16:20]
      reg_24 <= 32'h0; // @[RegisterFile.scala 16:20]
    end else if (io_RegWrite & io_rd != 5'h0) begin // @[RegisterFile.scala 23:46]
      if (5'h18 == io_rd) begin // @[RegisterFile.scala 24:16]
        reg_24 <= io_writeData; // @[RegisterFile.scala 24:16]
      end
    end
    if (reset) begin // @[RegisterFile.scala 16:20]
      reg_25 <= 32'h0; // @[RegisterFile.scala 16:20]
    end else if (io_RegWrite & io_rd != 5'h0) begin // @[RegisterFile.scala 23:46]
      if (5'h19 == io_rd) begin // @[RegisterFile.scala 24:16]
        reg_25 <= io_writeData; // @[RegisterFile.scala 24:16]
      end
    end
    if (reset) begin // @[RegisterFile.scala 16:20]
      reg_26 <= 32'h0; // @[RegisterFile.scala 16:20]
    end else if (io_RegWrite & io_rd != 5'h0) begin // @[RegisterFile.scala 23:46]
      if (5'h1a == io_rd) begin // @[RegisterFile.scala 24:16]
        reg_26 <= io_writeData; // @[RegisterFile.scala 24:16]
      end
    end
    if (reset) begin // @[RegisterFile.scala 16:20]
      reg_27 <= 32'h0; // @[RegisterFile.scala 16:20]
    end else if (io_RegWrite & io_rd != 5'h0) begin // @[RegisterFile.scala 23:46]
      if (5'h1b == io_rd) begin // @[RegisterFile.scala 24:16]
        reg_27 <= io_writeData; // @[RegisterFile.scala 24:16]
      end
    end
    if (reset) begin // @[RegisterFile.scala 16:20]
      reg_28 <= 32'h0; // @[RegisterFile.scala 16:20]
    end else if (io_RegWrite & io_rd != 5'h0) begin // @[RegisterFile.scala 23:46]
      if (5'h1c == io_rd) begin // @[RegisterFile.scala 24:16]
        reg_28 <= io_writeData; // @[RegisterFile.scala 24:16]
      end
    end
    if (reset) begin // @[RegisterFile.scala 16:20]
      reg_29 <= 32'h0; // @[RegisterFile.scala 16:20]
    end else if (io_RegWrite & io_rd != 5'h0) begin // @[RegisterFile.scala 23:46]
      if (5'h1d == io_rd) begin // @[RegisterFile.scala 24:16]
        reg_29 <= io_writeData; // @[RegisterFile.scala 24:16]
      end
    end
    if (reset) begin // @[RegisterFile.scala 16:20]
      reg_30 <= 32'h0; // @[RegisterFile.scala 16:20]
    end else if (io_RegWrite & io_rd != 5'h0) begin // @[RegisterFile.scala 23:46]
      if (5'h1e == io_rd) begin // @[RegisterFile.scala 24:16]
        reg_30 <= io_writeData; // @[RegisterFile.scala 24:16]
      end
    end
    if (reset) begin // @[RegisterFile.scala 16:20]
      reg_31 <= 32'h0; // @[RegisterFile.scala 16:20]
    end else if (io_RegWrite & io_rd != 5'h0) begin // @[RegisterFile.scala 23:46]
      if (5'h1f == io_rd) begin // @[RegisterFile.scala 24:16]
        reg_31 <= io_writeData; // @[RegisterFile.scala 24:16]
      end
    end
  end
// Register and memory initialization
`ifdef RANDOMIZE_GARBAGE_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_INVALID_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_REG_INIT
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_MEM_INIT
`define RANDOMIZE
`endif
`ifndef RANDOM
`define RANDOM $random
`endif
`ifdef RANDOMIZE_MEM_INIT
  integer initvar;
`endif
`ifndef SYNTHESIS
`ifdef FIRRTL_BEFORE_INITIAL
`FIRRTL_BEFORE_INITIAL
`endif
initial begin
  `ifdef RANDOMIZE
    `ifdef INIT_RANDOM
      `INIT_RANDOM
    `endif
    `ifndef VERILATOR
      `ifdef RANDOMIZE_DELAY
        #`RANDOMIZE_DELAY begin end
      `else
        #0.002 begin end
      `endif
    `endif
`ifdef RANDOMIZE_REG_INIT
  _RAND_0 = {1{`RANDOM}};
  reg_0 = _RAND_0[31:0];
  _RAND_1 = {1{`RANDOM}};
  reg_1 = _RAND_1[31:0];
  _RAND_2 = {1{`RANDOM}};
  reg_2 = _RAND_2[31:0];
  _RAND_3 = {1{`RANDOM}};
  reg_3 = _RAND_3[31:0];
  _RAND_4 = {1{`RANDOM}};
  reg_4 = _RAND_4[31:0];
  _RAND_5 = {1{`RANDOM}};
  reg_5 = _RAND_5[31:0];
  _RAND_6 = {1{`RANDOM}};
  reg_6 = _RAND_6[31:0];
  _RAND_7 = {1{`RANDOM}};
  reg_7 = _RAND_7[31:0];
  _RAND_8 = {1{`RANDOM}};
  reg_8 = _RAND_8[31:0];
  _RAND_9 = {1{`RANDOM}};
  reg_9 = _RAND_9[31:0];
  _RAND_10 = {1{`RANDOM}};
  reg_10 = _RAND_10[31:0];
  _RAND_11 = {1{`RANDOM}};
  reg_11 = _RAND_11[31:0];
  _RAND_12 = {1{`RANDOM}};
  reg_12 = _RAND_12[31:0];
  _RAND_13 = {1{`RANDOM}};
  reg_13 = _RAND_13[31:0];
  _RAND_14 = {1{`RANDOM}};
  reg_14 = _RAND_14[31:0];
  _RAND_15 = {1{`RANDOM}};
  reg_15 = _RAND_15[31:0];
  _RAND_16 = {1{`RANDOM}};
  reg_16 = _RAND_16[31:0];
  _RAND_17 = {1{`RANDOM}};
  reg_17 = _RAND_17[31:0];
  _RAND_18 = {1{`RANDOM}};
  reg_18 = _RAND_18[31:0];
  _RAND_19 = {1{`RANDOM}};
  reg_19 = _RAND_19[31:0];
  _RAND_20 = {1{`RANDOM}};
  reg_20 = _RAND_20[31:0];
  _RAND_21 = {1{`RANDOM}};
  reg_21 = _RAND_21[31:0];
  _RAND_22 = {1{`RANDOM}};
  reg_22 = _RAND_22[31:0];
  _RAND_23 = {1{`RANDOM}};
  reg_23 = _RAND_23[31:0];
  _RAND_24 = {1{`RANDOM}};
  reg_24 = _RAND_24[31:0];
  _RAND_25 = {1{`RANDOM}};
  reg_25 = _RAND_25[31:0];
  _RAND_26 = {1{`RANDOM}};
  reg_26 = _RAND_26[31:0];
  _RAND_27 = {1{`RANDOM}};
  reg_27 = _RAND_27[31:0];
  _RAND_28 = {1{`RANDOM}};
  reg_28 = _RAND_28[31:0];
  _RAND_29 = {1{`RANDOM}};
  reg_29 = _RAND_29[31:0];
  _RAND_30 = {1{`RANDOM}};
  reg_30 = _RAND_30[31:0];
  _RAND_31 = {1{`RANDOM}};
  reg_31 = _RAND_31[31:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
module MemoryFetch(
  input         clock,
  input         reset,
  input  [31:0] io_aluResultIn,
  input  [31:0] io_writeData,
  input         io_writeEnable,
  input         io_readEnable,
  output [31:0] io_readData,
  input  [2:0]  io_f3,
  output [3:0]  io_maskout,
  output        io_dccmReq_valid,
  output [31:0] io_dccmReq_bits_addrRequest,
  output [31:0] io_dccmReq_bits_dataRequest,
  output [3:0]  io_dccmReq_bits_activeByteLane,
  output        io_dccmReq_bits_isWrite,
  input         io_dccmRsp_valid,
  input  [31:0] io_dccmRsp_bits_dataResponse
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
  reg [31:0] _RAND_1;
  reg [31:0] _RAND_2;
`endif // RANDOMIZE_REG_INIT
  reg [1:0] offset; // @[MemoryFetch.scala 28:23]
  reg [2:0] funct3; // @[MemoryFetch.scala 29:23]
  wire [1:0] offsetSW = io_aluResultIn[1:0]; // @[MemoryFetch.scala 30:32]
  wire  _T_3 = offsetSW == 2'h0; // @[MemoryFetch.scala 49:19]
  wire  _T_4 = offsetSW == 2'h1; // @[MemoryFetch.scala 53:25]
  wire [7:0] _GEN_2 = offsetSW == 2'h2 ? io_writeData[15:8] : io_writeData[15:8]; // @[MemoryFetch.scala 61:33 62:16 70:16]
  wire [7:0] _GEN_3 = offsetSW == 2'h2 ? io_writeData[23:16] : io_writeData[23:16]; // @[MemoryFetch.scala 61:33 63:16 71:16]
  wire [7:0] _GEN_4 = offsetSW == 2'h2 ? io_writeData[7:0] : io_writeData[31:24]; // @[MemoryFetch.scala 61:33 64:16 72:16]
  wire [7:0] _GEN_5 = offsetSW == 2'h2 ? io_writeData[31:24] : io_writeData[7:0]; // @[MemoryFetch.scala 61:33 65:16 73:16]
  wire [3:0] _GEN_6 = offsetSW == 2'h2 ? 4'h4 : 4'h8; // @[MemoryFetch.scala 61:33 66:38 74:38]
  wire [7:0] _GEN_7 = offsetSW == 2'h1 ? io_writeData[15:8] : _GEN_2; // @[MemoryFetch.scala 53:33 54:16]
  wire [7:0] _GEN_8 = offsetSW == 2'h1 ? io_writeData[7:0] : _GEN_3; // @[MemoryFetch.scala 53:33 55:16]
  wire [7:0] _GEN_9 = offsetSW == 2'h1 ? io_writeData[23:16] : _GEN_4; // @[MemoryFetch.scala 53:33 56:16]
  wire [7:0] _GEN_10 = offsetSW == 2'h1 ? io_writeData[31:24] : _GEN_5; // @[MemoryFetch.scala 53:33 57:16]
  wire [3:0] _GEN_11 = offsetSW == 2'h1 ? 4'h2 : _GEN_6; // @[MemoryFetch.scala 53:33 58:38]
  wire [3:0] _GEN_12 = offsetSW == 2'h0 ? 4'h1 : _GEN_11; // @[MemoryFetch.scala 49:27 50:38]
  wire [7:0] _GEN_13 = offsetSW == 2'h0 ? io_writeData[7:0] : _GEN_7; // @[MemoryFetch.scala 42:12 49:27]
  wire [7:0] _GEN_14 = offsetSW == 2'h0 ? io_writeData[15:8] : _GEN_8; // @[MemoryFetch.scala 43:12 49:27]
  wire [7:0] _GEN_15 = offsetSW == 2'h0 ? io_writeData[23:16] : _GEN_9; // @[MemoryFetch.scala 44:12 49:27]
  wire [7:0] _GEN_16 = offsetSW == 2'h0 ? io_writeData[31:24] : _GEN_10; // @[MemoryFetch.scala 45:12 49:27]
  wire [3:0] _GEN_17 = _T_4 ? 4'h6 : 4'hc; // @[MemoryFetch.scala 87:33 89:38 98:38]
  wire [7:0] _GEN_18 = _T_4 ? io_writeData[23:16] : io_writeData[23:16]; // @[MemoryFetch.scala 103:16 87:33 92:16]
  wire [7:0] _GEN_19 = _T_4 ? io_writeData[7:0] : io_writeData[31:24]; // @[MemoryFetch.scala 104:16 87:33 93:16]
  wire [7:0] _GEN_20 = _T_4 ? io_writeData[15:8] : io_writeData[7:0]; // @[MemoryFetch.scala 101:16 87:33 94:16]
  wire [7:0] _GEN_21 = _T_4 ? io_writeData[31:24] : io_writeData[15:8]; // @[MemoryFetch.scala 102:16 87:33 95:16]
  wire [3:0] _GEN_22 = _T_3 ? 4'h3 : _GEN_17; // @[MemoryFetch.scala 82:27 84:38]
  wire [7:0] _GEN_23 = _T_3 ? io_writeData[7:0] : _GEN_18; // @[MemoryFetch.scala 42:12 82:27]
  wire [7:0] _GEN_24 = _T_3 ? io_writeData[15:8] : _GEN_19; // @[MemoryFetch.scala 43:12 82:27]
  wire [7:0] _GEN_25 = _T_3 ? io_writeData[23:16] : _GEN_20; // @[MemoryFetch.scala 44:12 82:27]
  wire [7:0] _GEN_26 = _T_3 ? io_writeData[31:24] : _GEN_21; // @[MemoryFetch.scala 45:12 82:27]
  wire [3:0] _io_maskout_T = io_writeEnable ? 4'hf : 4'h0; // @[MemoryFetch.scala 111:22]
  wire [3:0] _GEN_27 = io_writeEnable & io_f3 == 3'h1 ? _GEN_22 : 4'hf; // @[MemoryFetch.scala 109:36 80:52]
  wire [3:0] _GEN_29 = io_writeEnable & io_f3 == 3'h1 ? _GEN_22 : _io_maskout_T; // @[MemoryFetch.scala 111:16 80:52]
  wire [7:0] _GEN_30 = io_writeEnable & io_f3 == 3'h1 ? _GEN_23 : io_writeData[7:0]; // @[MemoryFetch.scala 42:12 80:52]
  wire [7:0] _GEN_31 = io_writeEnable & io_f3 == 3'h1 ? _GEN_24 : io_writeData[15:8]; // @[MemoryFetch.scala 43:12 80:52]
  wire [7:0] _GEN_32 = io_writeEnable & io_f3 == 3'h1 ? _GEN_25 : io_writeData[23:16]; // @[MemoryFetch.scala 44:12 80:52]
  wire [7:0] _GEN_33 = io_writeEnable & io_f3 == 3'h1 ? _GEN_26 : io_writeData[31:24]; // @[MemoryFetch.scala 45:12 80:52]
  wire [7:0] wdata_0 = io_writeEnable & io_f3 == 3'h0 ? _GEN_13 : _GEN_30; // @[MemoryFetch.scala 48:45]
  wire [7:0] wdata_1 = io_writeEnable & io_f3 == 3'h0 ? _GEN_14 : _GEN_31; // @[MemoryFetch.scala 48:45]
  wire [7:0] wdata_2 = io_writeEnable & io_f3 == 3'h0 ? _GEN_15 : _GEN_32; // @[MemoryFetch.scala 48:45]
  wire [7:0] wdata_3 = io_writeEnable & io_f3 == 3'h0 ? _GEN_16 : _GEN_33; // @[MemoryFetch.scala 48:45]
  reg  readEnable_reg; // @[MemoryFetch.scala 113:31]
  wire [15:0] io_dccmReq_bits_dataRequest_lo = {wdata_1,wdata_0}; // @[MemoryFetch.scala 116:40]
  wire [15:0] io_dccmReq_bits_dataRequest_hi = {wdata_3,wdata_2}; // @[MemoryFetch.scala 116:40]
  wire [31:0] rdata = io_dccmReq_valid ? io_dccmRsp_bits_dataResponse : 32'h0; // @[MemoryFetch.scala 121:15]
  wire  _T_13 = offset == 2'h0; // @[MemoryFetch.scala 134:21]
  wire [23:0] _io_readData_T_2 = rdata[7] ? 24'hffffff : 24'h0; // @[Bitwise.scala 77:12]
  wire [31:0] _io_readData_T_4 = {_io_readData_T_2,rdata[7:0]}; // @[Cat.scala 33:92]
  wire  _T_14 = offset == 2'h1; // @[MemoryFetch.scala 137:28]
  wire [23:0] _io_readData_T_7 = rdata[15] ? 24'hffffff : 24'h0; // @[Bitwise.scala 77:12]
  wire [31:0] _io_readData_T_9 = {_io_readData_T_7,rdata[15:8]}; // @[Cat.scala 33:92]
  wire  _T_15 = offset == 2'h2; // @[MemoryFetch.scala 140:28]
  wire [23:0] _io_readData_T_12 = rdata[23] ? 24'hffffff : 24'h0; // @[Bitwise.scala 77:12]
  wire [31:0] _io_readData_T_14 = {_io_readData_T_12,rdata[23:16]}; // @[Cat.scala 33:92]
  wire [23:0] _io_readData_T_17 = rdata[31] ? 24'hffffff : 24'h0; // @[Bitwise.scala 77:12]
  wire [31:0] _io_readData_T_19 = {_io_readData_T_17,rdata[31:24]}; // @[Cat.scala 33:92]
  wire [31:0] _GEN_42 = offset == 2'h2 ? _io_readData_T_14 : _io_readData_T_19; // @[MemoryFetch.scala 140:41 142:23]
  wire [31:0] _GEN_43 = offset == 2'h1 ? _io_readData_T_9 : _GEN_42; // @[MemoryFetch.scala 137:41 139:23]
  wire [31:0] _GEN_44 = offset == 2'h0 ? _io_readData_T_4 : _GEN_43; // @[MemoryFetch.scala 134:34 136:23]
  wire [31:0] _io_readData_T_22 = {24'h0,rdata[7:0]}; // @[Cat.scala 33:92]
  wire [31:0] _io_readData_T_25 = {24'h0,rdata[15:8]}; // @[Cat.scala 33:92]
  wire [31:0] _io_readData_T_28 = {24'h0,rdata[23:16]}; // @[Cat.scala 33:92]
  wire [31:0] _io_readData_T_31 = {24'h0,rdata[31:24]}; // @[Cat.scala 33:92]
  wire [31:0] _GEN_46 = _T_15 ? _io_readData_T_28 : _io_readData_T_31; // @[MemoryFetch.scala 158:40 160:23]
  wire [31:0] _GEN_47 = _T_14 ? _io_readData_T_25 : _GEN_46; // @[MemoryFetch.scala 155:40 157:23]
  wire [31:0] _GEN_48 = _T_13 ? _io_readData_T_22 : _GEN_47; // @[MemoryFetch.scala 152:34 154:23]
  wire [31:0] _io_readData_T_34 = {16'h0,rdata[15:0]}; // @[Cat.scala 33:92]
  wire [31:0] _io_readData_T_37 = {16'h0,rdata[23:8]}; // @[Cat.scala 33:92]
  wire [31:0] _io_readData_T_40 = {16'h0,rdata[31:16]}; // @[Cat.scala 33:92]
  wire [31:0] _GEN_50 = _T_14 ? _io_readData_T_37 : _io_readData_T_40; // @[MemoryFetch.scala 173:41 175:23]
  wire [31:0] _GEN_51 = _T_13 ? _io_readData_T_34 : _GEN_50; // @[MemoryFetch.scala 170:34 172:23]
  wire [15:0] _io_readData_T_43 = rdata[15] ? 16'hffff : 16'h0; // @[Bitwise.scala 77:12]
  wire [31:0] _io_readData_T_45 = {_io_readData_T_43,rdata[15:0]}; // @[Cat.scala 33:92]
  wire [15:0] _io_readData_T_48 = rdata[23] ? 16'hffff : 16'h0; // @[Bitwise.scala 77:12]
  wire [31:0] _io_readData_T_50 = {_io_readData_T_48,rdata[23:8]}; // @[Cat.scala 33:92]
  wire [15:0] _io_readData_T_53 = rdata[31] ? 16'hffff : 16'h0; // @[Bitwise.scala 77:12]
  wire [31:0] _io_readData_T_55 = {_io_readData_T_53,rdata[31:16]}; // @[Cat.scala 33:92]
  wire [31:0] _GEN_53 = _T_14 ? _io_readData_T_50 : _io_readData_T_55; // @[MemoryFetch.scala 188:41 190:23]
  wire [31:0] _GEN_54 = _T_13 ? _io_readData_T_45 : _GEN_53; // @[MemoryFetch.scala 185:34 187:23]
  wire [31:0] _GEN_56 = funct3 == 3'h5 ? _GEN_51 : _GEN_54; // @[MemoryFetch.scala 168:38]
  wire [31:0] _GEN_57 = funct3 == 3'h4 ? _GEN_48 : _GEN_56; // @[MemoryFetch.scala 150:38]
  wire [31:0] _GEN_58 = funct3 == 3'h0 ? _GEN_44 : _GEN_57; // @[MemoryFetch.scala 132:38]
  assign io_readData = funct3 == 3'h2 ? rdata : _GEN_58; // @[MemoryFetch.scala 128:31 130:19]
  assign io_maskout = io_writeEnable & io_f3 == 3'h0 ? _GEN_12 : _GEN_29; // @[MemoryFetch.scala 48:45]
  assign io_dccmReq_valid = io_writeEnable | io_readEnable | readEnable_reg; // @[MemoryFetch.scala 119:58]
  assign io_dccmReq_bits_addrRequest = io_aluResultIn; // @[MemoryFetch.scala 117:31]
  assign io_dccmReq_bits_dataRequest = {io_dccmReq_bits_dataRequest_hi,io_dccmReq_bits_dataRequest_lo}; // @[MemoryFetch.scala 116:40]
  assign io_dccmReq_bits_activeByteLane = io_writeEnable & io_f3 == 3'h0 ? _GEN_12 : _GEN_27; // @[MemoryFetch.scala 48:45]
  assign io_dccmReq_bits_isWrite = io_writeEnable; // @[MemoryFetch.scala 118:27]
  always @(posedge clock) begin
    if (reset) begin // @[MemoryFetch.scala 28:23]
      offset <= 2'h0; // @[MemoryFetch.scala 28:23]
    end else if (~io_dccmRsp_valid) begin // @[MemoryFetch.scala 34:26]
      offset <= offsetSW; // @[MemoryFetch.scala 36:12]
    end
    if (reset) begin // @[MemoryFetch.scala 29:23]
      funct3 <= 3'h0; // @[MemoryFetch.scala 29:23]
    end else if (~io_dccmRsp_valid) begin // @[MemoryFetch.scala 34:26]
      funct3 <= io_f3; // @[MemoryFetch.scala 35:12]
    end
    if (reset) begin // @[MemoryFetch.scala 113:31]
      readEnable_reg <= 1'h0; // @[MemoryFetch.scala 113:31]
    end else begin
      readEnable_reg <= io_readEnable; // @[MemoryFetch.scala 113:31]
    end
  end
// Register and memory initialization
`ifdef RANDOMIZE_GARBAGE_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_INVALID_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_REG_INIT
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_MEM_INIT
`define RANDOMIZE
`endif
`ifndef RANDOM
`define RANDOM $random
`endif
`ifdef RANDOMIZE_MEM_INIT
  integer initvar;
`endif
`ifndef SYNTHESIS
`ifdef FIRRTL_BEFORE_INITIAL
`FIRRTL_BEFORE_INITIAL
`endif
initial begin
  `ifdef RANDOMIZE
    `ifdef INIT_RANDOM
      `INIT_RANDOM
    `endif
    `ifndef VERILATOR
      `ifdef RANDOMIZE_DELAY
        #`RANDOMIZE_DELAY begin end
      `else
        #0.002 begin end
      `endif
    `endif
`ifdef RANDOMIZE_REG_INIT
  _RAND_0 = {1{`RANDOM}};
  offset = _RAND_0[1:0];
  _RAND_1 = {1{`RANDOM}};
  funct3 = _RAND_1[2:0];
  _RAND_2 = {1{`RANDOM}};
  readEnable_reg = _RAND_2[0:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
module Core(
  input         clock,
  input         reset,
  output        io_dmemReq_valid,
  output [31:0] io_dmemReq_bits_addrRequest,
  output [31:0] io_dmemReq_bits_dataRequest,
  output [3:0]  io_dmemReq_bits_activeByteLane,
  output        io_dmemReq_bits_isWrite,
  input         io_dmemRsp_valid,
  input  [31:0] io_dmemRsp_bits_dataResponse,
  output        io_imemReq_valid,
  output [31:0] io_imemReq_bits_addrRequest,
  output [3:0]  io_imemReq_bits_activeByteLane,
  output        io_imemReq_bits_isWrite,
  output        io_imemRsp_ready,
  input  [31:0] io_imemRsp_bits_dataResponse,
  output        io_rvfi_bool,
  output [3:0]  io_rvfi_uint4,
  output [31:0] io_rvfi_uint32_0,
  output [31:0] io_rvfi_uint32_4,
  output [31:0] io_rvfi_uint32_6,
  output [31:0] io_rvfi_uint32_8
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
`endif // RANDOMIZE_REG_INIT
  wire  pc_module_clock; // @[Core.scala 27:27]
  wire  pc_module_reset; // @[Core.scala 27:27]
  wire [31:0] pc_module_io_in; // @[Core.scala 27:27]
  wire [31:0] pc_module_io_pcout; // @[Core.scala 27:27]
  wire [31:0] pc_module_io_pc4; // @[Core.scala 27:27]
  wire [31:0] InstructionFetch_io_address; // @[Core.scala 28:27]
  wire [31:0] InstructionFetch_io_instruction; // @[Core.scala 28:27]
  wire  InstructionFetch_io_stall; // @[Core.scala 28:27]
  wire  InstructionFetch_io_coreInstrReq_valid; // @[Core.scala 28:27]
  wire [31:0] InstructionFetch_io_coreInstrReq_bits_addrRequest; // @[Core.scala 28:27]
  wire [3:0] InstructionFetch_io_coreInstrReq_bits_activeByteLane; // @[Core.scala 28:27]
  wire  InstructionFetch_io_coreInstrReq_bits_isWrite; // @[Core.scala 28:27]
  wire  InstructionFetch_io_coreInstrResp_ready; // @[Core.scala 28:27]
  wire [31:0] InstructionFetch_io_coreInstrResp_bits_dataResponse; // @[Core.scala 28:27]
  wire [31:0] alu_module_io_op1; // @[Core.scala 29:28]
  wire [31:0] alu_module_io_op2; // @[Core.scala 29:28]
  wire [4:0] alu_module_io_aluctrl; // @[Core.scala 29:28]
  wire [31:0] alu_module_io_aluout; // @[Core.scala 29:28]
  wire [2:0] alucontrol_module_io_Aluop; // @[Core.scala 30:35]
  wire [6:0] alucontrol_module_io_func7; // @[Core.scala 30:35]
  wire [2:0] alucontrol_module_io_func3; // @[Core.scala 30:35]
  wire [4:0] alucontrol_module_io_aluctrl; // @[Core.scala 30:35]
  wire [31:0] Branchcontrol_module_io_RS1; // @[Core.scala 31:38]
  wire [31:0] Branchcontrol_module_io_RS2; // @[Core.scala 31:38]
  wire [2:0] Branchcontrol_module_io_func3; // @[Core.scala 31:38]
  wire  Branchcontrol_module_io_branchctrl; // @[Core.scala 31:38]
  wire [4:0] BranchForward_module_io_RS1; // @[Core.scala 32:38]
  wire [4:0] BranchForward_module_io_RS2; // @[Core.scala 32:38]
  wire [6:0] ControlDecoder_module_io_opcode; // @[Core.scala 33:39]
  wire  ControlDecoder_module_io_MemWrite; // @[Core.scala 33:39]
  wire  ControlDecoder_module_io_MemRead; // @[Core.scala 33:39]
  wire  ControlDecoder_module_io_Branch; // @[Core.scala 33:39]
  wire  ControlDecoder_module_io_RegWrite; // @[Core.scala 33:39]
  wire  ControlDecoder_module_io_Mem2Reg; // @[Core.scala 33:39]
  wire [1:0] ControlDecoder_module_io_Ex_sel; // @[Core.scala 33:39]
  wire [2:0] ControlDecoder_module_io_Aluop; // @[Core.scala 33:39]
  wire [1:0] ControlDecoder_module_io_opA; // @[Core.scala 33:39]
  wire  ControlDecoder_module_io_opB; // @[Core.scala 33:39]
  wire  exmem_module_clock; // @[Core.scala 34:30]
  wire  exmem_module_reset; // @[Core.scala 34:30]
  wire [31:0] exmem_module_io_ALUres; // @[Core.scala 34:30]
  wire [31:0] exmem_module_io_ReadData2; // @[Core.scala 34:30]
  wire [4:0] exmem_module_io_RD; // @[Core.scala 34:30]
  wire  exmem_module_io_MemRead; // @[Core.scala 34:30]
  wire  exmem_module_io_MemtoReg; // @[Core.scala 34:30]
  wire  exmem_module_io_MemWrite; // @[Core.scala 34:30]
  wire  exmem_module_io_RegWrite; // @[Core.scala 34:30]
  wire [2:0] exmem_module_io_func3; // @[Core.scala 34:30]
  wire [31:0] exmem_module_io_Instr; // @[Core.scala 34:30]
  wire [31:0] exmem_module_io_PC; // @[Core.scala 34:30]
  wire [31:0] exmem_module_io_ALUresMEM; // @[Core.scala 34:30]
  wire [31:0] exmem_module_io_ReadData2MEM; // @[Core.scala 34:30]
  wire [4:0] exmem_module_io_RDD; // @[Core.scala 34:30]
  wire  exmem_module_io_MemReadS; // @[Core.scala 34:30]
  wire  exmem_module_io_MemtoRegS; // @[Core.scala 34:30]
  wire  exmem_module_io_MemWriteS; // @[Core.scala 34:30]
  wire  exmem_module_io_RegWriteS; // @[Core.scala 34:30]
  wire [2:0] exmem_module_io_func3_EXMEM; // @[Core.scala 34:30]
  wire [31:0] exmem_module_io_Instr_EXMEM; // @[Core.scala 34:30]
  wire [31:0] exmem_module_io_PC_EXMEM; // @[Core.scala 34:30]
  wire [4:0] Forward_module_io_RS1; // @[Core.scala 35:32]
  wire [4:0] Forward_module_io_RS2; // @[Core.scala 35:32]
  wire  Forward_module_io_MEMWB_RegWrite; // @[Core.scala 35:32]
  wire [4:0] Forward_module_io_MEMWB_RD; // @[Core.scala 35:32]
  wire  Forward_module_io_RS1OUT; // @[Core.scala 35:32]
  wire  Forward_module_io_RS2OUT; // @[Core.scala 35:32]
  wire [4:0] ForwardingUnit_module_io_IDEX_RS1; // @[Core.scala 36:39]
  wire [4:0] ForwardingUnit_module_io_IDEX_RS2; // @[Core.scala 36:39]
  wire [4:0] ForwardingUnit_module_io_EXMEM_RD; // @[Core.scala 36:39]
  wire [4:0] ForwardingUnit_module_io_MEMWB_RD; // @[Core.scala 36:39]
  wire  ForwardingUnit_module_io_EXMEM_RegWrite; // @[Core.scala 36:39]
  wire  ForwardingUnit_module_io_MEMWB_RegWrite; // @[Core.scala 36:39]
  wire [1:0] ForwardingUnit_module_io_ForwardA; // @[Core.scala 36:39]
  wire [1:0] ForwardingUnit_module_io_ForwardB; // @[Core.scala 36:39]
  wire  idex_module_clock; // @[Core.scala 38:29]
  wire  idex_module_reset; // @[Core.scala 38:29]
  wire [31:0] idex_module_io_PC; // @[Core.scala 38:29]
  wire [1:0] idex_module_io_OpA_s; // @[Core.scala 38:29]
  wire  idex_module_io_OpB_s; // @[Core.scala 38:29]
  wire [2:0] idex_module_io_func3; // @[Core.scala 38:29]
  wire  idex_module_io_func7; // @[Core.scala 38:29]
  wire [31:0] idex_module_io_Read1; // @[Core.scala 38:29]
  wire [31:0] idex_module_io_Read2; // @[Core.scala 38:29]
  wire [31:0] idex_module_io_Immd; // @[Core.scala 38:29]
  wire [4:0] idex_module_io_RD; // @[Core.scala 38:29]
  wire  idex_module_io_MemRead; // @[Core.scala 38:29]
  wire  idex_module_io_MemtoReg; // @[Core.scala 38:29]
  wire [2:0] idex_module_io_ALUOp; // @[Core.scala 38:29]
  wire  idex_module_io_MemWrite; // @[Core.scala 38:29]
  wire  idex_module_io_RegWrite; // @[Core.scala 38:29]
  wire [4:0] idex_module_io_RS1_S; // @[Core.scala 38:29]
  wire [4:0] idex_module_io_RS2_S; // @[Core.scala 38:29]
  wire [31:0] idex_module_io_Instr; // @[Core.scala 38:29]
  wire [31:0] idex_module_io_operandA; // @[Core.scala 38:29]
  wire  idex_module_io_operandAsel; // @[Core.scala 38:29]
  wire [31:0] idex_module_io_PC_IDEX; // @[Core.scala 38:29]
  wire [1:0] idex_module_io_OpA_s_IDEX; // @[Core.scala 38:29]
  wire  idex_module_io_OpB_s_IDEX; // @[Core.scala 38:29]
  wire [2:0] idex_module_io_func3_IDEX; // @[Core.scala 38:29]
  wire  idex_module_io_func7_IDEX; // @[Core.scala 38:29]
  wire [31:0] idex_module_io_Read1_IDEX; // @[Core.scala 38:29]
  wire [31:0] idex_module_io_Read2_IDEX; // @[Core.scala 38:29]
  wire [31:0] idex_module_io_Immd_IDEX; // @[Core.scala 38:29]
  wire [4:0] idex_module_io_RD_IDEX; // @[Core.scala 38:29]
  wire  idex_module_io_MemRead_IDEX; // @[Core.scala 38:29]
  wire  idex_module_io_MemtoReg_IDEX; // @[Core.scala 38:29]
  wire [2:0] idex_module_io_ALUOp_IDEX; // @[Core.scala 38:29]
  wire  idex_module_io_MemWrite_IDEX; // @[Core.scala 38:29]
  wire  idex_module_io_RegWrite_IDEX; // @[Core.scala 38:29]
  wire [4:0] idex_module_io_RS1_S_IDEX; // @[Core.scala 38:29]
  wire [4:0] idex_module_io_RS2_S_IDEX; // @[Core.scala 38:29]
  wire [31:0] idex_module_io_Instr_IDEX; // @[Core.scala 38:29]
  wire [31:0] idex_module_io_operandAout; // @[Core.scala 38:29]
  wire  idex_module_io_operandAselout; // @[Core.scala 38:29]
  wire  ifid_module_clock; // @[Core.scala 39:29]
  wire  ifid_module_reset; // @[Core.scala 39:29]
  wire [31:0] ifid_module_io_Instr; // @[Core.scala 39:29]
  wire [31:0] ifid_module_io_PCout; // @[Core.scala 39:29]
  wire  ifid_module_io_flush; // @[Core.scala 39:29]
  wire [31:0] ifid_module_io_Instr_IFID; // @[Core.scala 39:29]
  wire [31:0] ifid_module_io_PCout_IFID; // @[Core.scala 39:29]
  wire [31:0] immgen_module_io_instruction; // @[Core.scala 40:31]
  wire [31:0] immgen_module_io_pc; // @[Core.scala 40:31]
  wire [31:0] immgen_module_io_imm_out; // @[Core.scala 40:31]
  wire  memwb_module_clock; // @[Core.scala 42:30]
  wire  memwb_module_reset; // @[Core.scala 42:30]
  wire [31:0] memwb_module_io_ALUres; // @[Core.scala 42:30]
  wire [4:0] memwb_module_io_RD; // @[Core.scala 42:30]
  wire  memwb_module_io_MemtoReg; // @[Core.scala 42:30]
  wire  memwb_module_io_RegWrite; // @[Core.scala 42:30]
  wire [31:0] memwb_module_io_Instr; // @[Core.scala 42:30]
  wire [31:0] memwb_module_io_memaddress; // @[Core.scala 42:30]
  wire [3:0] memwb_module_io_mask; // @[Core.scala 42:30]
  wire [31:0] memwb_module_io_MemWritedata; // @[Core.scala 42:30]
  wire [31:0] memwb_module_io_PC; // @[Core.scala 42:30]
  wire [31:0] memwb_module_io_ALUres_MEMWB; // @[Core.scala 42:30]
  wire [4:0] memwb_module_io_RDD_MEMWB; // @[Core.scala 42:30]
  wire  memwb_module_io_MemtoReg_MEMWB; // @[Core.scala 42:30]
  wire  memwb_module_io_RegWrite_MEMWB; // @[Core.scala 42:30]
  wire [31:0] memwb_module_io_Instr_MEMWB; // @[Core.scala 42:30]
  wire [31:0] memwb_module_io_memaddressD; // @[Core.scala 42:30]
  wire [3:0] memwb_module_io_mask_out; // @[Core.scala 42:30]
  wire [31:0] memwb_module_io_MemWritedata_out; // @[Core.scala 42:30]
  wire [31:0] memwb_module_io_PC_MEMWB; // @[Core.scala 42:30]
  wire  regfile_module_clock; // @[Core.scala 43:32]
  wire  regfile_module_reset; // @[Core.scala 43:32]
  wire  regfile_module_io_RegWrite; // @[Core.scala 43:32]
  wire [4:0] regfile_module_io_rd; // @[Core.scala 43:32]
  wire [31:0] regfile_module_io_instruction; // @[Core.scala 43:32]
  wire [31:0] regfile_module_io_writeData; // @[Core.scala 43:32]
  wire [31:0] regfile_module_io_readData1; // @[Core.scala 43:32]
  wire [31:0] regfile_module_io_readData2; // @[Core.scala 43:32]
  wire  MEM_clock; // @[Core.scala 44:21]
  wire  MEM_reset; // @[Core.scala 44:21]
  wire [31:0] MEM_io_aluResultIn; // @[Core.scala 44:21]
  wire [31:0] MEM_io_writeData; // @[Core.scala 44:21]
  wire  MEM_io_writeEnable; // @[Core.scala 44:21]
  wire  MEM_io_readEnable; // @[Core.scala 44:21]
  wire [31:0] MEM_io_readData; // @[Core.scala 44:21]
  wire [2:0] MEM_io_f3; // @[Core.scala 44:21]
  wire [3:0] MEM_io_maskout; // @[Core.scala 44:21]
  wire  MEM_io_dccmReq_valid; // @[Core.scala 44:21]
  wire [31:0] MEM_io_dccmReq_bits_addrRequest; // @[Core.scala 44:21]
  wire [31:0] MEM_io_dccmReq_bits_dataRequest; // @[Core.scala 44:21]
  wire [3:0] MEM_io_dccmReq_bits_activeByteLane; // @[Core.scala 44:21]
  wire  MEM_io_dccmReq_bits_isWrite; // @[Core.scala 44:21]
  wire  MEM_io_dccmRsp_valid; // @[Core.scala 44:21]
  wire [31:0] MEM_io_dccmRsp_bits_dataResponse; // @[Core.scala 44:21]
  wire  _T_4 = ifid_module_io_Instr_IFID[6:0] == 7'h6f | ifid_module_io_Instr_IFID[6:0] == 7'h67; // @[Core.scala 51:61]
  wire [31:0] _pc_module_io_in_T_2 = $signed(immgen_module_io_imm_out) - 32'sh4; // @[Core.scala 54:54]
  wire  _T_9 = ifid_module_io_Instr_IFID[6:0] == 7'h63; // @[Core.scala 55:49]
  wire  _T_11 = ifid_module_io_Instr_IFID[6:0] == 7'h3; // @[Core.scala 55:103]
  wire [31:0] _pc_module_io_in_T_5 = $signed(pc_module_io_pc4) - 32'sh8; // @[Core.scala 56:46]
  wire [31:0] _GEN_0 = ifid_module_io_Instr_IFID[6:0] == 7'h63 | ifid_module_io_Instr_IFID[6:0] == 7'h3 ? $signed(
    _pc_module_io_in_T_5) : $signed(pc_module_io_pc4); // @[Core.scala 55:121 56:25 60:25]
  wire [31:0] _GEN_1 = Branchcontrol_module_io_branchctrl & ControlDecoder_module_io_Branch ? $signed(
    _pc_module_io_in_T_2) : $signed(_GEN_0); // @[Core.scala 53:105 54:25]
  wire  _T_23 = _T_4 | _T_9 | idex_module_io_Instr_IDEX[6:0] == 7'h63; // @[Core.scala 62:167]
  wire  _T_37 = _T_23 | _T_11; // @[Core.scala 64:228]
  wire  _T_39 = idex_module_io_Instr_IDEX[6:0] == 7'h3; // @[Core.scala 64:318]
  wire  _T_40 = _T_23 | _T_11 | idex_module_io_Instr_IDEX[6:0] == 7'h3; // @[Core.scala 64:282]
  wire  _T_63 = memwb_module_io_RDD_MEMWB == ifid_module_io_Instr_IFID[19:15]; // @[Core.scala 106:37]
  wire  _T_64 = memwb_module_io_RegWrite_MEMWB & _T_63; // @[Core.scala 105:54]
  wire  _T_66 = idex_module_io_RD_IDEX != ifid_module_io_Instr_IFID[19:15]; // @[Core.scala 107:34]
  wire  _T_67 = _T_64 & _T_66; // @[Core.scala 106:74]
  wire  _T_69 = exmem_module_io_RDD != ifid_module_io_Instr_IFID[19:15]; // @[Core.scala 108:31]
  wire  _T_70 = _T_67 & _T_69; // @[Core.scala 107:71]
  wire [31:0] _GEN_6 = _T_70 ? memwb_module_io_ALUres_MEMWB : 32'h0; // @[Core.scala 109:7 110:33 99:32]
  wire [31:0] _GEN_11 = BranchForward_module_io_RS1 == 5'ha ? $signed(regfile_module_io_readData1) : $signed(
    regfile_module_io_readData1); // @[Core.scala 162:59 164:37 166:37]
  wire [31:0] _GEN_13 = BranchForward_module_io_RS1 == 5'h9 ? $signed(regfile_module_io_readData1) : $signed(_GEN_11); // @[Core.scala 159:59 161:37]
  wire [31:0] _GEN_15 = BranchForward_module_io_RS1 == 5'h8 ? $signed(regfile_module_io_readData1) : $signed(_GEN_13); // @[Core.scala 156:59 158:36]
  wire [31:0] _GEN_17 = BranchForward_module_io_RS1 == 5'h7 ? $signed(regfile_module_io_readData1) : $signed(_GEN_15); // @[Core.scala 153:59 155:37]
  wire [31:0] _GEN_19 = BranchForward_module_io_RS1 == 5'h6 ? $signed(regfile_module_io_readData1) : $signed(_GEN_17); // @[Core.scala 150:59 152:37]
  wire [31:0] _GEN_20 = BranchForward_module_io_RS1 == 5'h5 ? $signed(regfile_module_io_writeData) : $signed(_GEN_19); // @[Core.scala 147:59 148:34]
  wire [31:0] _GEN_22 = BranchForward_module_io_RS1 == 5'h4 ? $signed(MEM_io_readData) : $signed(_GEN_20); // @[Core.scala 144:59 145:35]
  wire [31:0] _GEN_24 = BranchForward_module_io_RS1 == 5'h3 ? $signed(regfile_module_io_writeData) : $signed(_GEN_22); // @[Core.scala 141:59 142:35]
  wire [31:0] _GEN_26 = BranchForward_module_io_RS1 == 5'h2 ? $signed(exmem_module_io_ALUresMEM) : $signed(_GEN_24); // @[Core.scala 138:59 139:35]
  wire [31:0] _GEN_28 = BranchForward_module_io_RS1 == 5'h1 ? $signed(alu_module_io_aluout) : $signed(_GEN_26); // @[Core.scala 135:59 136:35]
  wire [31:0] _GEN_32 = BranchForward_module_io_RS2 == 5'h5 ? $signed(regfile_module_io_writeData) : $signed(
    regfile_module_io_readData2); // @[Core.scala 179:58 180:38 182:38]
  wire [31:0] _GEN_33 = BranchForward_module_io_RS2 == 5'h4 ? $signed(MEM_io_readData) : $signed(_GEN_32); // @[Core.scala 177:58 178:37]
  wire [31:0] _GEN_34 = BranchForward_module_io_RS2 == 5'h3 ? $signed(regfile_module_io_writeData) : $signed(_GEN_33); // @[Core.scala 175:58 176:38]
  wire [31:0] _GEN_35 = BranchForward_module_io_RS2 == 5'h2 ? $signed(exmem_module_io_ALUresMEM) : $signed(_GEN_34); // @[Core.scala 173:58 174:38]
  wire [31:0] _GEN_36 = BranchForward_module_io_RS2 == 5'h1 ? $signed(alu_module_io_aluout) : $signed(_GEN_35); // @[Core.scala 171:58 172:38]
  wire  _T_94 = idex_module_io_Instr_IDEX[6:0] == 7'h37; // @[Core.scala 295:90]
  wire [31:0] _GEN_49 = ForwardingUnit_module_io_ForwardA == 2'h2 ? regfile_module_io_writeData :
    idex_module_io_Read1_IDEX; // @[Core.scala 314:71 315:33 317:33]
  wire [31:0] _GEN_50 = ForwardingUnit_module_io_ForwardA == 2'h1 ? exmem_module_io_ALUresMEM : _GEN_49; // @[Core.scala 312:71 313:34]
  wire [31:0] _GEN_51 = ForwardingUnit_module_io_ForwardA == 2'h0 ? idex_module_io_Read1_IDEX : _GEN_50; // @[Core.scala 310:65 311:34]
  wire [31:0] _GEN_52 = idex_module_io_OpA_s_IDEX == 2'h2 ? idex_module_io_PC_IDEX : _GEN_51; // @[Core.scala 307:56 308:33]
  wire [31:0] _GEN_53 = _T_94 ? 32'h0 : _GEN_52; // @[Core.scala 304:63 305:29]
  wire [31:0] _GEN_54 = idex_module_io_Instr_IDEX[19:15] == 5'h0 ? 32'h0 : _GEN_53; // @[Core.scala 301:57 302:27]
  wire [31:0] _GEN_55 = idex_module_io_operandAselout ? idex_module_io_operandAout : _GEN_54; // @[Core.scala 298:52 299:26]
  wire [31:0] _GEN_57 = ControlDecoder_module_io_Ex_sel == 2'h2 ? immgen_module_io_imm_out : 32'h0; // @[Core.scala 332:60 333:29 335:27]
  wire [31:0] _GEN_58 = ControlDecoder_module_io_Ex_sel == 2'h1 ? immgen_module_io_imm_out : _GEN_57; // @[Core.scala 330:60 331:29]
  wire  _T_109 = ForwardingUnit_module_io_ForwardB == 2'h0; // @[Core.scala 342:47]
  wire  _T_110 = ForwardingUnit_module_io_ForwardB == 2'h1; // @[Core.scala 344:54]
  wire [31:0] _GEN_60 = ForwardingUnit_module_io_ForwardB == 2'h2 ? regfile_module_io_writeData :
    idex_module_io_Read2_IDEX; // @[Core.scala 348:65 349:35 351:35]
  wire [31:0] _GEN_61 = _T_110 ? exmem_module_io_ALUresMEM : _GEN_60; // @[Core.scala 346:67 347:35]
  wire [31:0] _GEN_62 = ForwardingUnit_module_io_ForwardB == 2'h1 & exmem_module_io_MemtoRegS ? MEM_io_readData :
    _GEN_61; // @[Core.scala 344:96 345:35]
  wire [31:0] _GEN_63 = ForwardingUnit_module_io_ForwardB == 2'h0 ? idex_module_io_Read2_IDEX : _GEN_62; // @[Core.scala 342:59 343:35]
  wire [31:0] _GEN_66 = _T_109 ? idex_module_io_Read2_IDEX : _GEN_61; // @[Core.scala 354:59 355:27]
  reg [31:0] ALUresMEM_reg; // @[Core.scala 396:32]
  wire  _T_119 = memwb_module_io_Instr_MEMWB[6:0] == 7'h3; // @[Core.scala 405:50]
  wire [31:0] _GEN_69 = memwb_module_io_Instr_MEMWB[6:0] == 7'h3 ? ALUresMEM_reg : 32'h0; // @[Core.scala 405:68 406:26 408:26]
  wire  _regfile_module_io_writeData_T = ~memwb_module_io_MemtoReg_MEMWB; // @[Core.scala 435:39]
  wire  _regfile_module_io_writeData_T_1 = memwb_module_io_MemtoReg_MEMWB; // @[Core.scala 436:39]
  wire [31:0] _regfile_module_io_writeData_T_2 = _regfile_module_io_writeData_T_1 ? MEM_io_readData : 32'h0; // @[Mux.scala 101:16]
  wire [31:0] _regfile_module_io_writeData_T_3 = _regfile_module_io_writeData_T ? memwb_module_io_ALUres_MEMWB :
    _regfile_module_io_writeData_T_2; // @[Mux.scala 101:16]
  Programcounter pc_module ( // @[Core.scala 27:27]
    .clock(pc_module_clock),
    .reset(pc_module_reset),
    .io_in(pc_module_io_in),
    .io_pcout(pc_module_io_pcout),
    .io_pc4(pc_module_io_pc4)
  );
  InstructionFetch InstructionFetch ( // @[Core.scala 28:27]
    .io_address(InstructionFetch_io_address),
    .io_instruction(InstructionFetch_io_instruction),
    .io_stall(InstructionFetch_io_stall),
    .io_coreInstrReq_valid(InstructionFetch_io_coreInstrReq_valid),
    .io_coreInstrReq_bits_addrRequest(InstructionFetch_io_coreInstrReq_bits_addrRequest),
    .io_coreInstrReq_bits_activeByteLane(InstructionFetch_io_coreInstrReq_bits_activeByteLane),
    .io_coreInstrReq_bits_isWrite(InstructionFetch_io_coreInstrReq_bits_isWrite),
    .io_coreInstrResp_ready(InstructionFetch_io_coreInstrResp_ready),
    .io_coreInstrResp_bits_dataResponse(InstructionFetch_io_coreInstrResp_bits_dataResponse)
  );
  Alu alu_module ( // @[Core.scala 29:28]
    .io_op1(alu_module_io_op1),
    .io_op2(alu_module_io_op2),
    .io_aluctrl(alu_module_io_aluctrl),
    .io_aluout(alu_module_io_aluout)
  );
  Alucontrol alucontrol_module ( // @[Core.scala 30:35]
    .io_Aluop(alucontrol_module_io_Aluop),
    .io_func7(alucontrol_module_io_func7),
    .io_func3(alucontrol_module_io_func3),
    .io_aluctrl(alucontrol_module_io_aluctrl)
  );
  Branchcontrol Branchcontrol_module ( // @[Core.scala 31:38]
    .io_RS1(Branchcontrol_module_io_RS1),
    .io_RS2(Branchcontrol_module_io_RS2),
    .io_func3(Branchcontrol_module_io_func3),
    .io_branchctrl(Branchcontrol_module_io_branchctrl)
  );
  BranchForwardingUnit BranchForward_module ( // @[Core.scala 32:38]
    .io_RS1(BranchForward_module_io_RS1),
    .io_RS2(BranchForward_module_io_RS2)
  );
  ControlDecoder ControlDecoder_module ( // @[Core.scala 33:39]
    .io_opcode(ControlDecoder_module_io_opcode),
    .io_MemWrite(ControlDecoder_module_io_MemWrite),
    .io_MemRead(ControlDecoder_module_io_MemRead),
    .io_Branch(ControlDecoder_module_io_Branch),
    .io_RegWrite(ControlDecoder_module_io_RegWrite),
    .io_Mem2Reg(ControlDecoder_module_io_Mem2Reg),
    .io_Ex_sel(ControlDecoder_module_io_Ex_sel),
    .io_Aluop(ControlDecoder_module_io_Aluop),
    .io_opA(ControlDecoder_module_io_opA),
    .io_opB(ControlDecoder_module_io_opB)
  );
  EXMEM exmem_module ( // @[Core.scala 34:30]
    .clock(exmem_module_clock),
    .reset(exmem_module_reset),
    .io_ALUres(exmem_module_io_ALUres),
    .io_ReadData2(exmem_module_io_ReadData2),
    .io_RD(exmem_module_io_RD),
    .io_MemRead(exmem_module_io_MemRead),
    .io_MemtoReg(exmem_module_io_MemtoReg),
    .io_MemWrite(exmem_module_io_MemWrite),
    .io_RegWrite(exmem_module_io_RegWrite),
    .io_func3(exmem_module_io_func3),
    .io_Instr(exmem_module_io_Instr),
    .io_PC(exmem_module_io_PC),
    .io_ALUresMEM(exmem_module_io_ALUresMEM),
    .io_ReadData2MEM(exmem_module_io_ReadData2MEM),
    .io_RDD(exmem_module_io_RDD),
    .io_MemReadS(exmem_module_io_MemReadS),
    .io_MemtoRegS(exmem_module_io_MemtoRegS),
    .io_MemWriteS(exmem_module_io_MemWriteS),
    .io_RegWriteS(exmem_module_io_RegWriteS),
    .io_func3_EXMEM(exmem_module_io_func3_EXMEM),
    .io_Instr_EXMEM(exmem_module_io_Instr_EXMEM),
    .io_PC_EXMEM(exmem_module_io_PC_EXMEM)
  );
  Forward Forward_module ( // @[Core.scala 35:32]
    .io_RS1(Forward_module_io_RS1),
    .io_RS2(Forward_module_io_RS2),
    .io_MEMWB_RegWrite(Forward_module_io_MEMWB_RegWrite),
    .io_MEMWB_RD(Forward_module_io_MEMWB_RD),
    .io_RS1OUT(Forward_module_io_RS1OUT),
    .io_RS2OUT(Forward_module_io_RS2OUT)
  );
  ForwardingUnit ForwardingUnit_module ( // @[Core.scala 36:39]
    .io_IDEX_RS1(ForwardingUnit_module_io_IDEX_RS1),
    .io_IDEX_RS2(ForwardingUnit_module_io_IDEX_RS2),
    .io_EXMEM_RD(ForwardingUnit_module_io_EXMEM_RD),
    .io_MEMWB_RD(ForwardingUnit_module_io_MEMWB_RD),
    .io_EXMEM_RegWrite(ForwardingUnit_module_io_EXMEM_RegWrite),
    .io_MEMWB_RegWrite(ForwardingUnit_module_io_MEMWB_RegWrite),
    .io_ForwardA(ForwardingUnit_module_io_ForwardA),
    .io_ForwardB(ForwardingUnit_module_io_ForwardB)
  );
  IDEX idex_module ( // @[Core.scala 38:29]
    .clock(idex_module_clock),
    .reset(idex_module_reset),
    .io_PC(idex_module_io_PC),
    .io_OpA_s(idex_module_io_OpA_s),
    .io_OpB_s(idex_module_io_OpB_s),
    .io_func3(idex_module_io_func3),
    .io_func7(idex_module_io_func7),
    .io_Read1(idex_module_io_Read1),
    .io_Read2(idex_module_io_Read2),
    .io_Immd(idex_module_io_Immd),
    .io_RD(idex_module_io_RD),
    .io_MemRead(idex_module_io_MemRead),
    .io_MemtoReg(idex_module_io_MemtoReg),
    .io_ALUOp(idex_module_io_ALUOp),
    .io_MemWrite(idex_module_io_MemWrite),
    .io_RegWrite(idex_module_io_RegWrite),
    .io_RS1_S(idex_module_io_RS1_S),
    .io_RS2_S(idex_module_io_RS2_S),
    .io_Instr(idex_module_io_Instr),
    .io_operandA(idex_module_io_operandA),
    .io_operandAsel(idex_module_io_operandAsel),
    .io_PC_IDEX(idex_module_io_PC_IDEX),
    .io_OpA_s_IDEX(idex_module_io_OpA_s_IDEX),
    .io_OpB_s_IDEX(idex_module_io_OpB_s_IDEX),
    .io_func3_IDEX(idex_module_io_func3_IDEX),
    .io_func7_IDEX(idex_module_io_func7_IDEX),
    .io_Read1_IDEX(idex_module_io_Read1_IDEX),
    .io_Read2_IDEX(idex_module_io_Read2_IDEX),
    .io_Immd_IDEX(idex_module_io_Immd_IDEX),
    .io_RD_IDEX(idex_module_io_RD_IDEX),
    .io_MemRead_IDEX(idex_module_io_MemRead_IDEX),
    .io_MemtoReg_IDEX(idex_module_io_MemtoReg_IDEX),
    .io_ALUOp_IDEX(idex_module_io_ALUOp_IDEX),
    .io_MemWrite_IDEX(idex_module_io_MemWrite_IDEX),
    .io_RegWrite_IDEX(idex_module_io_RegWrite_IDEX),
    .io_RS1_S_IDEX(idex_module_io_RS1_S_IDEX),
    .io_RS2_S_IDEX(idex_module_io_RS2_S_IDEX),
    .io_Instr_IDEX(idex_module_io_Instr_IDEX),
    .io_operandAout(idex_module_io_operandAout),
    .io_operandAselout(idex_module_io_operandAselout)
  );
  IFID ifid_module ( // @[Core.scala 39:29]
    .clock(ifid_module_clock),
    .reset(ifid_module_reset),
    .io_Instr(ifid_module_io_Instr),
    .io_PCout(ifid_module_io_PCout),
    .io_flush(ifid_module_io_flush),
    .io_Instr_IFID(ifid_module_io_Instr_IFID),
    .io_PCout_IFID(ifid_module_io_PCout_IFID)
  );
  ImmediateGen immgen_module ( // @[Core.scala 40:31]
    .io_instruction(immgen_module_io_instruction),
    .io_pc(immgen_module_io_pc),
    .io_imm_out(immgen_module_io_imm_out)
  );
  MEMWB memwb_module ( // @[Core.scala 42:30]
    .clock(memwb_module_clock),
    .reset(memwb_module_reset),
    .io_ALUres(memwb_module_io_ALUres),
    .io_RD(memwb_module_io_RD),
    .io_MemtoReg(memwb_module_io_MemtoReg),
    .io_RegWrite(memwb_module_io_RegWrite),
    .io_Instr(memwb_module_io_Instr),
    .io_memaddress(memwb_module_io_memaddress),
    .io_mask(memwb_module_io_mask),
    .io_MemWritedata(memwb_module_io_MemWritedata),
    .io_PC(memwb_module_io_PC),
    .io_ALUres_MEMWB(memwb_module_io_ALUres_MEMWB),
    .io_RDD_MEMWB(memwb_module_io_RDD_MEMWB),
    .io_MemtoReg_MEMWB(memwb_module_io_MemtoReg_MEMWB),
    .io_RegWrite_MEMWB(memwb_module_io_RegWrite_MEMWB),
    .io_Instr_MEMWB(memwb_module_io_Instr_MEMWB),
    .io_memaddressD(memwb_module_io_memaddressD),
    .io_mask_out(memwb_module_io_mask_out),
    .io_MemWritedata_out(memwb_module_io_MemWritedata_out),
    .io_PC_MEMWB(memwb_module_io_PC_MEMWB)
  );
  RegisterFile regfile_module ( // @[Core.scala 43:32]
    .clock(regfile_module_clock),
    .reset(regfile_module_reset),
    .io_RegWrite(regfile_module_io_RegWrite),
    .io_rd(regfile_module_io_rd),
    .io_instruction(regfile_module_io_instruction),
    .io_writeData(regfile_module_io_writeData),
    .io_readData1(regfile_module_io_readData1),
    .io_readData2(regfile_module_io_readData2)
  );
  MemoryFetch MEM ( // @[Core.scala 44:21]
    .clock(MEM_clock),
    .reset(MEM_reset),
    .io_aluResultIn(MEM_io_aluResultIn),
    .io_writeData(MEM_io_writeData),
    .io_writeEnable(MEM_io_writeEnable),
    .io_readEnable(MEM_io_readEnable),
    .io_readData(MEM_io_readData),
    .io_f3(MEM_io_f3),
    .io_maskout(MEM_io_maskout),
    .io_dccmReq_valid(MEM_io_dccmReq_valid),
    .io_dccmReq_bits_addrRequest(MEM_io_dccmReq_bits_addrRequest),
    .io_dccmReq_bits_dataRequest(MEM_io_dccmReq_bits_dataRequest),
    .io_dccmReq_bits_activeByteLane(MEM_io_dccmReq_bits_activeByteLane),
    .io_dccmReq_bits_isWrite(MEM_io_dccmReq_bits_isWrite),
    .io_dccmRsp_valid(MEM_io_dccmRsp_valid),
    .io_dccmRsp_bits_dataResponse(MEM_io_dccmRsp_bits_dataResponse)
  );
  assign io_dmemReq_valid = MEM_io_dccmReq_valid; // @[Core.scala 401:16]
  assign io_dmemReq_bits_addrRequest = MEM_io_dccmReq_bits_addrRequest; // @[Core.scala 401:16]
  assign io_dmemReq_bits_dataRequest = MEM_io_dccmReq_bits_dataRequest; // @[Core.scala 401:16]
  assign io_dmemReq_bits_activeByteLane = MEM_io_dccmReq_bits_activeByteLane; // @[Core.scala 401:16]
  assign io_dmemReq_bits_isWrite = MEM_io_dccmReq_bits_isWrite; // @[Core.scala 401:16]
  assign io_imemReq_valid = InstructionFetch_io_coreInstrReq_valid; // @[Core.scala 47:16]
  assign io_imemReq_bits_addrRequest = InstructionFetch_io_coreInstrReq_bits_addrRequest; // @[Core.scala 47:16]
  assign io_imemReq_bits_activeByteLane = InstructionFetch_io_coreInstrReq_bits_activeByteLane; // @[Core.scala 47:16]
  assign io_imemReq_bits_isWrite = InstructionFetch_io_coreInstrReq_bits_isWrite; // @[Core.scala 47:16]
  assign io_imemRsp_ready = InstructionFetch_io_coreInstrResp_ready; // @[Core.scala 48:29]
  assign io_rvfi_bool = memwb_module_io_Instr_MEMWB != 32'h0 & ~clock; // @[Core.scala 452:65]
  assign io_rvfi_uint4 = memwb_module_io_mask_out; // @[Core.scala 454:25]
  assign io_rvfi_uint32_0 = memwb_module_io_Instr_MEMWB; // @[Core.scala 473:39]
  assign io_rvfi_uint32_4 = memwb_module_io_PC_MEMWB; // @[Core.scala 473:39]
  assign io_rvfi_uint32_6 = memwb_module_io_memaddressD; // @[Core.scala 473:39]
  assign io_rvfi_uint32_8 = memwb_module_io_MemWritedata_out; // @[Core.scala 473:39]
  assign pc_module_clock = clock;
  assign pc_module_reset = reset;
  assign pc_module_io_in = ifid_module_io_Instr_IFID[6:0] == 7'h6f | ifid_module_io_Instr_IFID[6:0] == 7'h67 ? $signed(
    immgen_module_io_imm_out) : $signed(_GEN_1); // @[Core.scala 51:115 52:24]
  assign InstructionFetch_io_address = {{8'd0}, pc_module_io_pcout[25:2]}; // @[Core.scala 73:23]
  assign InstructionFetch_io_stall = _T_4 | _T_9 | idex_module_io_Instr_IDEX[6:0] == 7'h63 | _T_40; // @[Core.scala 62:223 63:24]
  assign InstructionFetch_io_coreInstrResp_bits_dataResponse = io_imemRsp_bits_dataResponse; // @[Core.scala 48:29]
  assign alu_module_io_op1 = idex_module_io_Instr_IDEX[6:0] == 7'h17 | idex_module_io_Instr_IDEX[6:0] == 7'h37 ? 32'h0
     : _GEN_55; // @[Core.scala 295:107 296:23]
  assign alu_module_io_op2 = idex_module_io_OpB_s_IDEX ? idex_module_io_Immd_IDEX : _GEN_66; // @[Core.scala 340:44 341:27]
  assign alu_module_io_aluctrl = alucontrol_module_io_aluctrl; // @[Core.scala 368:27]
  assign alucontrol_module_io_Aluop = idex_module_io_ALUOp_IDEX; // @[Core.scala 270:32]
  assign alucontrol_module_io_func7 = {{6'd0}, idex_module_io_func7_IDEX}; // @[Core.scala 271:32]
  assign alucontrol_module_io_func3 = idex_module_io_func3_IDEX; // @[Core.scala 272:32]
  assign Branchcontrol_module_io_RS1 = BranchForward_module_io_RS1 == 5'h0 ? $signed(regfile_module_io_readData1) :
    $signed(_GEN_28); // @[Core.scala 132:53 133:35]
  assign Branchcontrol_module_io_RS2 = BranchForward_module_io_RS2 == 5'h0 ? $signed(regfile_module_io_readData2) :
    $signed(_GEN_36); // @[Core.scala 169:52 170:38]
  assign Branchcontrol_module_io_func3 = ifid_module_io_Instr_IFID[14:12]; // @[Core.scala 130:63]
  assign BranchForward_module_io_RS1 = ifid_module_io_Instr_IFID[19:15]; // @[Core.scala 124:61]
  assign BranchForward_module_io_RS2 = ifid_module_io_Instr_IFID[24:20]; // @[Core.scala 125:61]
  assign ControlDecoder_module_io_opcode = ifid_module_io_Instr_IFID[6:0]; // @[Core.scala 88:65]
  assign exmem_module_clock = clock;
  assign exmem_module_reset = reset;
  assign exmem_module_io_ALUres = alu_module_io_aluout; // @[Core.scala 379:28]
  assign exmem_module_io_ReadData2 = idex_module_io_OpB_s_IDEX ? _GEN_63 : _GEN_66; // @[Core.scala 340:44]
  assign exmem_module_io_RD = idex_module_io_RD_IDEX; // @[Core.scala 380:24]
  assign exmem_module_io_MemRead = idex_module_io_MemRead_IDEX; // @[Core.scala 373:29]
  assign exmem_module_io_MemtoReg = idex_module_io_MemtoReg_IDEX; // @[Core.scala 377:30]
  assign exmem_module_io_MemWrite = idex_module_io_MemWrite_IDEX; // @[Core.scala 372:30]
  assign exmem_module_io_RegWrite = idex_module_io_RegWrite_IDEX; // @[Core.scala 376:30]
  assign exmem_module_io_func3 = idex_module_io_func3_IDEX; // @[Core.scala 375:27]
  assign exmem_module_io_Instr = idex_module_io_Instr_IDEX; // @[Core.scala 374:27]
  assign exmem_module_io_PC = idex_module_io_PC_IDEX; // @[Core.scala 382:24]
  assign Forward_module_io_RS1 = ifid_module_io_Instr_IFID[19:15]; // @[Core.scala 274:55]
  assign Forward_module_io_RS2 = ifid_module_io_Instr_IFID[24:20]; // @[Core.scala 275:55]
  assign Forward_module_io_MEMWB_RegWrite = memwb_module_io_RegWrite_MEMWB; // @[Core.scala 276:38]
  assign Forward_module_io_MEMWB_RD = memwb_module_io_RDD_MEMWB; // @[Core.scala 277:32]
  assign ForwardingUnit_module_io_IDEX_RS1 = idex_module_io_RS1_S_IDEX; // @[Core.scala 387:39]
  assign ForwardingUnit_module_io_IDEX_RS2 = idex_module_io_RS2_S_IDEX; // @[Core.scala 388:39]
  assign ForwardingUnit_module_io_EXMEM_RD = exmem_module_io_RDD; // @[Core.scala 386:39]
  assign ForwardingUnit_module_io_MEMWB_RD = memwb_module_io_RDD_MEMWB; // @[Core.scala 390:39]
  assign ForwardingUnit_module_io_EXMEM_RegWrite = exmem_module_io_RegWriteS; // @[Core.scala 392:45]
  assign ForwardingUnit_module_io_MEMWB_RegWrite = memwb_module_io_RegWrite_MEMWB; // @[Core.scala 391:45]
  assign idex_module_clock = clock;
  assign idex_module_reset = reset;
  assign idex_module_io_PC = ifid_module_io_PCout_IFID; // @[Core.scala 249:23]
  assign idex_module_io_OpA_s = ControlDecoder_module_io_opA; // @[Core.scala 257:26]
  assign idex_module_io_OpB_s = ControlDecoder_module_io_opB; // @[Core.scala 258:26]
  assign idex_module_io_func3 = ifid_module_io_Instr_IFID[14:12]; // @[Core.scala 260:54]
  assign idex_module_io_func7 = ifid_module_io_Instr_IFID[30]; // @[Core.scala 261:54]
  assign idex_module_io_Read1 = Forward_module_io_RS1OUT ? regfile_module_io_writeData : regfile_module_io_readData1; // @[Core.scala 279:44 280:30 282:30]
  assign idex_module_io_Read2 = Forward_module_io_RS2OUT ? regfile_module_io_writeData : regfile_module_io_readData2; // @[Core.scala 285:46 286:30 288:30]
  assign idex_module_io_Immd = ControlDecoder_module_io_Ex_sel == 2'h0 ? immgen_module_io_imm_out : _GEN_58; // @[Core.scala 328:54 329:29]
  assign idex_module_io_RD = ifid_module_io_Instr_IFID[11:7]; // @[Core.scala 266:51]
  assign idex_module_io_MemRead = ControlDecoder_module_io_MemRead; // @[Core.scala 253:28]
  assign idex_module_io_MemtoReg = ControlDecoder_module_io_Mem2Reg; // @[Core.scala 255:29]
  assign idex_module_io_ALUOp = ControlDecoder_module_io_Aluop; // @[Core.scala 256:26]
  assign idex_module_io_MemWrite = ControlDecoder_module_io_MemWrite; // @[Core.scala 251:28]
  assign idex_module_io_RegWrite = ControlDecoder_module_io_RegWrite; // @[Core.scala 254:29]
  assign idex_module_io_RS1_S = ifid_module_io_Instr_IFID[19:15]; // @[Core.scala 264:54]
  assign idex_module_io_RS2_S = ifid_module_io_Instr_IFID[24:20]; // @[Core.scala 265:54]
  assign idex_module_io_Instr = ifid_module_io_Instr_IFID; // @[Core.scala 267:26]
  assign idex_module_io_operandA = ifid_module_io_Instr_IFID[19:15] != 5'h0 ? _GEN_6 : 32'h0; // @[Core.scala 104:52 114:31]
  assign idex_module_io_operandAsel = ifid_module_io_Instr_IFID[19:15] != 5'h0 & _T_70; // @[Core.scala 104:52 115:34]
  assign ifid_module_clock = clock;
  assign ifid_module_reset = reset;
  assign ifid_module_io_Instr = InstructionFetch_io_instruction; // @[Core.scala 80:26]
  assign ifid_module_io_PCout = pc_module_io_pcout; // @[Core.scala 78:48]
  assign ifid_module_io_flush = _T_37 | _T_39; // @[Core.scala 81:273]
  assign immgen_module_io_instruction = ifid_module_io_Instr_IFID; // @[Core.scala 91:34]
  assign immgen_module_io_pc = ifid_module_io_PCout_IFID; // @[Core.scala 90:25]
  assign memwb_module_clock = clock;
  assign memwb_module_reset = reset;
  assign memwb_module_io_ALUres = exmem_module_io_ALUresMEM; // @[Core.scala 429:28]
  assign memwb_module_io_RD = exmem_module_io_RDD; // @[Core.scala 430:24]
  assign memwb_module_io_MemtoReg = exmem_module_io_MemtoRegS; // @[Core.scala 420:30]
  assign memwb_module_io_RegWrite = exmem_module_io_RegWriteS; // @[Core.scala 419:30]
  assign memwb_module_io_Instr = exmem_module_io_Instr_EXMEM; // @[Core.scala 431:27]
  assign memwb_module_io_memaddress = exmem_module_io_ALUresMEM; // @[Core.scala 432:32]
  assign memwb_module_io_mask = MEM_io_maskout; // @[Core.scala 440:26]
  assign memwb_module_io_MemWritedata = exmem_module_io_ReadData2MEM; // @[Core.scala 442:34]
  assign memwb_module_io_PC = exmem_module_io_PC_EXMEM; // @[Core.scala 443:24]
  assign regfile_module_clock = clock;
  assign regfile_module_reset = reset;
  assign regfile_module_io_RegWrite = _T_119 | memwb_module_io_RegWrite_MEMWB; // @[Core.scala 438:32 445:63 448:34]
  assign regfile_module_io_rd = memwb_module_io_RDD_MEMWB; // @[Core.scala 439:26 445:63 446:28]
  assign regfile_module_io_instruction = ifid_module_io_Instr_IFID; // @[Core.scala 96:35]
  assign regfile_module_io_writeData = _T_119 ? MEM_io_readData : _regfile_module_io_writeData_T_3; // @[Core.scala 434:33 445:63 447:35]
  assign MEM_clock = clock;
  assign MEM_reset = reset;
  assign MEM_io_aluResultIn = exmem_module_io_MemReadS | exmem_module_io_MemWriteS ? exmem_module_io_ALUresMEM : _GEN_69
    ; // @[Core.scala 403:65 404:26]
  assign MEM_io_writeData = exmem_module_io_ReadData2MEM; // @[Core.scala 410:22]
  assign MEM_io_writeEnable = exmem_module_io_MemWriteS; // @[Core.scala 412:24]
  assign MEM_io_readEnable = exmem_module_io_MemReadS; // @[Core.scala 411:23]
  assign MEM_io_f3 = exmem_module_io_func3_EXMEM; // @[Core.scala 413:15]
  assign MEM_io_dccmRsp_valid = io_dmemRsp_valid; // @[Core.scala 402:20]
  assign MEM_io_dccmRsp_bits_dataResponse = io_dmemRsp_bits_dataResponse; // @[Core.scala 402:20]
  always @(posedge clock) begin
    if (reset) begin // @[Core.scala 396:32]
      ALUresMEM_reg <= 32'h0; // @[Core.scala 396:32]
    end else begin
      ALUresMEM_reg <= exmem_module_io_ALUresMEM; // @[Core.scala 396:32]
    end
  end
// Register and memory initialization
`ifdef RANDOMIZE_GARBAGE_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_INVALID_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_REG_INIT
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_MEM_INIT
`define RANDOMIZE
`endif
`ifndef RANDOM
`define RANDOM $random
`endif
`ifdef RANDOMIZE_MEM_INIT
  integer initvar;
`endif
`ifndef SYNTHESIS
`ifdef FIRRTL_BEFORE_INITIAL
`FIRRTL_BEFORE_INITIAL
`endif
initial begin
  `ifdef RANDOMIZE
    `ifdef INIT_RANDOM
      `INIT_RANDOM
    `endif
    `ifndef VERILATOR
      `ifdef RANDOMIZE_DELAY
        #`RANDOMIZE_DELAY begin end
      `else
        #0.002 begin end
      `endif
    `endif
`ifdef RANDOMIZE_REG_INIT
  _RAND_0 = {1{`RANDOM}};
  ALUresMEM_reg = _RAND_0[31:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
module SRamTop(
  input         clock,
  input         reset,
  input         io_req_valid,
  input  [31:0] io_req_bits_addrRequest,
  input  [31:0] io_req_bits_dataRequest,
  input  [3:0]  io_req_bits_activeByteLane,
  input         io_req_bits_isWrite,
  output        io_rsp_valid,
  output [31:0] io_rsp_bits_dataResponse
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
`endif // RANDOMIZE_REG_INIT
  wire  sram_clk; // @[SRamTop.scala 27:22]
  wire  sram_reset; // @[SRamTop.scala 27:22]
  wire  sram_we; // @[SRamTop.scala 27:22]
  wire [27:0] sram_addr; // @[SRamTop.scala 27:22]
  wire [31:0] sram_data_i; // @[SRamTop.scala 27:22]
  wire [3:0] sram_wmask; // @[SRamTop.scala 27:22]
  wire [31:0] sram_data_o; // @[SRamTop.scala 27:22]
  reg [1:0] state_reg; // @[SRamTop.scala 14:38]
  wire  _state_reg_T_3 = state_reg == 2'h0 | state_reg == 2'h2; // @[SRamTop.scala 16:27]
  wire  _state_reg_T_5 = state_reg == 2'h1 & io_req_valid; // @[SRamTop.scala 17:27]
  wire  _T_2 = io_req_valid & io_req_bits_isWrite; // @[SRamTop.scala 50:33]
  wire [3:0] _GEN_1 = io_req_valid & io_req_bits_isWrite ? io_req_bits_activeByteLane : 4'h0; // @[SRamTop.scala 36:19 50:57 53:27]
  wire [31:0] _GEN_2 = io_req_valid & io_req_bits_isWrite ? io_req_bits_addrRequest : 32'h0; // @[SRamTop.scala 37:18 50:57 54:26]
  wire [31:0] _GEN_3 = io_req_valid & io_req_bits_isWrite ? io_req_bits_dataRequest : 32'h0; // @[SRamTop.scala 38:20 50:57 55:28]
  wire [31:0] _GEN_6 = io_req_valid & ~io_req_bits_isWrite ? io_req_bits_addrRequest : _GEN_2; // @[SRamTop.scala 45:52 48:26]
  sram_top #(.IFILE("dmem.hex")) sram ( // @[SRamTop.scala 27:22]
    .clk(sram_clk),
    .reset(sram_reset),
    .we(sram_we),
    .addr(sram_addr),
    .data_i(sram_data_i),
    .wmask(sram_wmask),
    .data_o(sram_data_o)
  );
  assign io_rsp_valid = state_reg == 2'h2; // @[SRamTop.scala 21:31]
  assign io_rsp_bits_dataResponse = sram_data_o; // @[SRamTop.scala 60:30]
  assign sram_clk = clock; // @[SRamTop.scala 29:30]
  assign sram_reset = reset; // @[SRamTop.scala 31:18]
  assign sram_we = io_req_valid & ~io_req_bits_isWrite ? 1'h0 : _T_2; // @[SRamTop.scala 45:52 47:24]
  assign sram_addr = _GEN_6[27:0];
  assign sram_data_i = io_req_valid & ~io_req_bits_isWrite ? 32'h0 : _GEN_3; // @[SRamTop.scala 38:20 45:52]
  assign sram_wmask = io_req_valid & ~io_req_bits_isWrite ? 4'h0 : _GEN_1; // @[SRamTop.scala 36:19 45:52]
  always @(posedge clock) begin
    if (reset) begin // @[SRamTop.scala 14:38]
      state_reg <= 2'h0; // @[SRamTop.scala 14:38]
    end else if (_state_reg_T_3) begin // @[Mux.scala 101:16]
      state_reg <= 2'h1;
    end else if (_state_reg_T_5) begin // @[Mux.scala 101:16]
      state_reg <= 2'h2;
    end
  end
// Register and memory initialization
`ifdef RANDOMIZE_GARBAGE_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_INVALID_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_REG_INIT
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_MEM_INIT
`define RANDOMIZE
`endif
`ifndef RANDOM
`define RANDOM $random
`endif
`ifdef RANDOMIZE_MEM_INIT
  integer initvar;
`endif
`ifndef SYNTHESIS
`ifdef FIRRTL_BEFORE_INITIAL
`FIRRTL_BEFORE_INITIAL
`endif
initial begin
  `ifdef RANDOMIZE
    `ifdef INIT_RANDOM
      `INIT_RANDOM
    `endif
    `ifndef VERILATOR
      `ifdef RANDOMIZE_DELAY
        #`RANDOMIZE_DELAY begin end
      `else
        #0.002 begin end
      `endif
    `endif
`ifdef RANDOMIZE_REG_INIT
  _RAND_0 = {1{`RANDOM}};
  state_reg = _RAND_0[1:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
module SRamTop_1(
  input         clock,
  input         reset,
  input         io_req_valid,
  input  [31:0] io_req_bits_addrRequest,
  input  [3:0]  io_req_bits_activeByteLane,
  input         io_req_bits_isWrite,
  input         io_rsp_ready,
  output [31:0] io_rsp_bits_dataResponse
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
`endif // RANDOMIZE_REG_INIT
  wire  sram_clk; // @[SRamTop.scala 27:22]
  wire  sram_reset; // @[SRamTop.scala 27:22]
  wire  sram_we; // @[SRamTop.scala 27:22]
  wire [27:0] sram_addr; // @[SRamTop.scala 27:22]
  wire [31:0] sram_data_i; // @[SRamTop.scala 27:22]
  wire [3:0] sram_wmask; // @[SRamTop.scala 27:22]
  wire [31:0] sram_data_o; // @[SRamTop.scala 27:22]
  reg [1:0] state_reg; // @[SRamTop.scala 14:38]
  wire  _state_reg_T_3 = state_reg == 2'h0 | state_reg == 2'h2 & io_rsp_ready; // @[SRamTop.scala 16:27]
  wire  _state_reg_T_5 = state_reg == 2'h1 & io_req_valid; // @[SRamTop.scala 17:27]
  wire  _T_2 = io_req_valid & io_req_bits_isWrite; // @[SRamTop.scala 50:33]
  wire [3:0] _GEN_1 = io_req_valid & io_req_bits_isWrite ? io_req_bits_activeByteLane : 4'h0; // @[SRamTop.scala 36:19 50:57 53:27]
  wire [31:0] _GEN_2 = io_req_valid & io_req_bits_isWrite ? io_req_bits_addrRequest : 32'h0; // @[SRamTop.scala 37:18 50:57 54:26]
  wire [31:0] _GEN_6 = io_req_valid & ~io_req_bits_isWrite ? io_req_bits_addrRequest : _GEN_2; // @[SRamTop.scala 45:52 48:26]
  sram_top #(.IFILE("program.hex")) sram ( // @[SRamTop.scala 27:22]
    .clk(sram_clk),
    .reset(sram_reset),
    .we(sram_we),
    .addr(sram_addr),
    .data_i(sram_data_i),
    .wmask(sram_wmask),
    .data_o(sram_data_o)
  );
  assign io_rsp_bits_dataResponse = sram_data_o; // @[SRamTop.scala 60:30]
  assign sram_clk = clock; // @[SRamTop.scala 29:30]
  assign sram_reset = reset; // @[SRamTop.scala 31:18]
  assign sram_we = io_req_valid & ~io_req_bits_isWrite ? 1'h0 : _T_2; // @[SRamTop.scala 45:52 47:24]
  assign sram_addr = _GEN_6[27:0];
  assign sram_data_i = 32'h0; // @[SRamTop.scala 38:20 45:52]
  assign sram_wmask = io_req_valid & ~io_req_bits_isWrite ? 4'h0 : _GEN_1; // @[SRamTop.scala 36:19 45:52]
  always @(posedge clock) begin
    if (reset) begin // @[SRamTop.scala 14:38]
      state_reg <= 2'h0; // @[SRamTop.scala 14:38]
    end else if (_state_reg_T_3) begin // @[Mux.scala 101:16]
      state_reg <= 2'h1;
    end else if (_state_reg_T_5) begin // @[Mux.scala 101:16]
      state_reg <= 2'h2;
    end
  end
// Register and memory initialization
`ifdef RANDOMIZE_GARBAGE_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_INVALID_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_REG_INIT
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_MEM_INIT
`define RANDOMIZE
`endif
`ifndef RANDOM
`define RANDOM $random
`endif
`ifdef RANDOMIZE_MEM_INIT
  integer initvar;
`endif
`ifndef SYNTHESIS
`ifdef FIRRTL_BEFORE_INITIAL
`FIRRTL_BEFORE_INITIAL
`endif
initial begin
  `ifdef RANDOMIZE
    `ifdef INIT_RANDOM
      `INIT_RANDOM
    `endif
    `ifndef VERILATOR
      `ifdef RANDOMIZE_DELAY
        #`RANDOMIZE_DELAY begin end
      `else
        #0.002 begin end
      `endif
    `endif
`ifdef RANDOMIZE_REG_INIT
  _RAND_0 = {1{`RANDOM}};
  state_reg = _RAND_0[1:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
module Tracer(
  input         rvfi_i_bool,
  input  [3:0]  rvfi_i_uint4,
  input  [31:0] rvfi_i_uint32_0,
  input  [31:0] rvfi_i_uint32_4,
  input  [31:0] rvfi_i_uint32_6,
  input  [31:0] rvfi_i_uint32_8,
  output        rvfi_o_valid_0,
  output [31:0] rvfi_o_insn_0,
  output [31:0] rvfi_o_pc_rdata_0,
  output [31:0] rvfi_o_mem_addr_0,
  output [3:0]  rvfi_o_mem_wmask_0,
  output [31:0] rvfi_o_mem_wdata_0
);
  assign rvfi_o_valid_0 = rvfi_i_bool; // @[Tracer.scala 55:19]
  assign rvfi_o_insn_0 = rvfi_i_uint32_0; // @[Tracer.scala 78:18]
  assign rvfi_o_pc_rdata_0 = rvfi_i_uint32_4; // @[Tracer.scala 78:18]
  assign rvfi_o_mem_addr_0 = rvfi_i_uint32_6; // @[Tracer.scala 78:18]
  assign rvfi_o_mem_wmask_0 = rvfi_i_uint4; // @[Tracer.scala 57:23]
  assign rvfi_o_mem_wdata_0 = rvfi_i_uint32_8; // @[Tracer.scala 78:18]
endmodule
module Top(
  input         clock,
  input         reset,
  output        io_rvfi_valid_0,
  output [31:0] io_rvfi_insn_0,
  output [1:0]  io_rvfi_mode_0,
  output [4:0]  io_rvfi_rs1_addr_0,
  output [4:0]  io_rvfi_rs2_addr_0,
  output [31:0] io_rvfi_rs1_rdata_0,
  output [31:0] io_rvfi_rs2_rdata_0,
  output [4:0]  io_rvfi_rd_addr_0,
  output [31:0] io_rvfi_rd_wdata_0,
  output [31:0] io_rvfi_pc_rdata_0,
  output [31:0] io_rvfi_pc_wdata_0,
  output [31:0] io_rvfi_mem_addr_0,
  output [3:0]  io_rvfi_mem_wmask_0,
  output [31:0] io_rvfi_mem_rdata_0,
  output [31:0] io_rvfi_mem_wdata_0
);
  wire  Core_clock; // @[Top.scala 16:26]
  wire  Core_reset; // @[Top.scala 16:26]
  wire  Core_io_dmemReq_valid; // @[Top.scala 16:26]
  wire [31:0] Core_io_dmemReq_bits_addrRequest; // @[Top.scala 16:26]
  wire [31:0] Core_io_dmemReq_bits_dataRequest; // @[Top.scala 16:26]
  wire [3:0] Core_io_dmemReq_bits_activeByteLane; // @[Top.scala 16:26]
  wire  Core_io_dmemReq_bits_isWrite; // @[Top.scala 16:26]
  wire  Core_io_dmemRsp_valid; // @[Top.scala 16:26]
  wire [31:0] Core_io_dmemRsp_bits_dataResponse; // @[Top.scala 16:26]
  wire  Core_io_imemReq_valid; // @[Top.scala 16:26]
  wire [31:0] Core_io_imemReq_bits_addrRequest; // @[Top.scala 16:26]
  wire [3:0] Core_io_imemReq_bits_activeByteLane; // @[Top.scala 16:26]
  wire  Core_io_imemReq_bits_isWrite; // @[Top.scala 16:26]
  wire  Core_io_imemRsp_ready; // @[Top.scala 16:26]
  wire [31:0] Core_io_imemRsp_bits_dataResponse; // @[Top.scala 16:26]
  wire  Core_io_rvfi_bool; // @[Top.scala 16:26]
  wire [3:0] Core_io_rvfi_uint4; // @[Top.scala 16:26]
  wire [31:0] Core_io_rvfi_uint32_0; // @[Top.scala 16:26]
  wire [31:0] Core_io_rvfi_uint32_4; // @[Top.scala 16:26]
  wire [31:0] Core_io_rvfi_uint32_6; // @[Top.scala 16:26]
  wire [31:0] Core_io_rvfi_uint32_8; // @[Top.scala 16:26]
  wire  dmem_clock; // @[Top.scala 17:20]
  wire  dmem_reset; // @[Top.scala 17:20]
  wire  dmem_io_req_valid; // @[Top.scala 17:20]
  wire [31:0] dmem_io_req_bits_addrRequest; // @[Top.scala 17:20]
  wire [31:0] dmem_io_req_bits_dataRequest; // @[Top.scala 17:20]
  wire [3:0] dmem_io_req_bits_activeByteLane; // @[Top.scala 17:20]
  wire  dmem_io_req_bits_isWrite; // @[Top.scala 17:20]
  wire  dmem_io_rsp_valid; // @[Top.scala 17:20]
  wire [31:0] dmem_io_rsp_bits_dataResponse; // @[Top.scala 17:20]
  wire  imem_clock; // @[Top.scala 18:20]
  wire  imem_reset; // @[Top.scala 18:20]
  wire  imem_io_req_valid; // @[Top.scala 18:20]
  wire [31:0] imem_io_req_bits_addrRequest; // @[Top.scala 18:20]
  wire [3:0] imem_io_req_bits_activeByteLane; // @[Top.scala 18:20]
  wire  imem_io_req_bits_isWrite; // @[Top.scala 18:20]
  wire  imem_io_rsp_ready; // @[Top.scala 18:20]
  wire [31:0] imem_io_rsp_bits_dataResponse; // @[Top.scala 18:20]
  wire  tracer_rvfi_i_bool; // @[Top.scala 29:24]
  wire [3:0] tracer_rvfi_i_uint4; // @[Top.scala 29:24]
  wire [31:0] tracer_rvfi_i_uint32_0; // @[Top.scala 29:24]
  wire [31:0] tracer_rvfi_i_uint32_4; // @[Top.scala 29:24]
  wire [31:0] tracer_rvfi_i_uint32_6; // @[Top.scala 29:24]
  wire [31:0] tracer_rvfi_i_uint32_8; // @[Top.scala 29:24]
  wire  tracer_rvfi_o_valid_0; // @[Top.scala 29:24]
  wire [31:0] tracer_rvfi_o_insn_0; // @[Top.scala 29:24]
  wire [31:0] tracer_rvfi_o_pc_rdata_0; // @[Top.scala 29:24]
  wire [31:0] tracer_rvfi_o_mem_addr_0; // @[Top.scala 29:24]
  wire [3:0] tracer_rvfi_o_mem_wmask_0; // @[Top.scala 29:24]
  wire [31:0] tracer_rvfi_o_mem_wdata_0; // @[Top.scala 29:24]
  Core Core ( // @[Top.scala 16:26]
    .clock(Core_clock),
    .reset(Core_reset),
    .io_dmemReq_valid(Core_io_dmemReq_valid),
    .io_dmemReq_bits_addrRequest(Core_io_dmemReq_bits_addrRequest),
    .io_dmemReq_bits_dataRequest(Core_io_dmemReq_bits_dataRequest),
    .io_dmemReq_bits_activeByteLane(Core_io_dmemReq_bits_activeByteLane),
    .io_dmemReq_bits_isWrite(Core_io_dmemReq_bits_isWrite),
    .io_dmemRsp_valid(Core_io_dmemRsp_valid),
    .io_dmemRsp_bits_dataResponse(Core_io_dmemRsp_bits_dataResponse),
    .io_imemReq_valid(Core_io_imemReq_valid),
    .io_imemReq_bits_addrRequest(Core_io_imemReq_bits_addrRequest),
    .io_imemReq_bits_activeByteLane(Core_io_imemReq_bits_activeByteLane),
    .io_imemReq_bits_isWrite(Core_io_imemReq_bits_isWrite),
    .io_imemRsp_ready(Core_io_imemRsp_ready),
    .io_imemRsp_bits_dataResponse(Core_io_imemRsp_bits_dataResponse),
    .io_rvfi_bool(Core_io_rvfi_bool),
    .io_rvfi_uint4(Core_io_rvfi_uint4),
    .io_rvfi_uint32_0(Core_io_rvfi_uint32_0),
    .io_rvfi_uint32_4(Core_io_rvfi_uint32_4),
    .io_rvfi_uint32_6(Core_io_rvfi_uint32_6),
    .io_rvfi_uint32_8(Core_io_rvfi_uint32_8)
  );
  SRamTop dmem ( // @[Top.scala 17:20]
    .clock(dmem_clock),
    .reset(dmem_reset),
    .io_req_valid(dmem_io_req_valid),
    .io_req_bits_addrRequest(dmem_io_req_bits_addrRequest),
    .io_req_bits_dataRequest(dmem_io_req_bits_dataRequest),
    .io_req_bits_activeByteLane(dmem_io_req_bits_activeByteLane),
    .io_req_bits_isWrite(dmem_io_req_bits_isWrite),
    .io_rsp_valid(dmem_io_rsp_valid),
    .io_rsp_bits_dataResponse(dmem_io_rsp_bits_dataResponse)
  );
  SRamTop_1 imem ( // @[Top.scala 18:20]
    .clock(imem_clock),
    .reset(imem_reset),
    .io_req_valid(imem_io_req_valid),
    .io_req_bits_addrRequest(imem_io_req_bits_addrRequest),
    .io_req_bits_activeByteLane(imem_io_req_bits_activeByteLane),
    .io_req_bits_isWrite(imem_io_req_bits_isWrite),
    .io_rsp_ready(imem_io_rsp_ready),
    .io_rsp_bits_dataResponse(imem_io_rsp_bits_dataResponse)
  );
  Tracer tracer ( // @[Top.scala 29:24]
    .rvfi_i_bool(tracer_rvfi_i_bool),
    .rvfi_i_uint4(tracer_rvfi_i_uint4),
    .rvfi_i_uint32_0(tracer_rvfi_i_uint32_0),
    .rvfi_i_uint32_4(tracer_rvfi_i_uint32_4),
    .rvfi_i_uint32_6(tracer_rvfi_i_uint32_6),
    .rvfi_i_uint32_8(tracer_rvfi_i_uint32_8),
    .rvfi_o_valid_0(tracer_rvfi_o_valid_0),
    .rvfi_o_insn_0(tracer_rvfi_o_insn_0),
    .rvfi_o_pc_rdata_0(tracer_rvfi_o_pc_rdata_0),
    .rvfi_o_mem_addr_0(tracer_rvfi_o_mem_addr_0),
    .rvfi_o_mem_wmask_0(tracer_rvfi_o_mem_wmask_0),
    .rvfi_o_mem_wdata_0(tracer_rvfi_o_mem_wdata_0)
  );
  assign io_rvfi_valid_0 = tracer_rvfi_o_valid_0; // @[Top.scala 31:13]
  assign io_rvfi_insn_0 = tracer_rvfi_o_insn_0; // @[Top.scala 31:13]
  assign io_rvfi_mode_0 = 2'h3; // @[Top.scala 31:13]
  assign io_rvfi_rs1_addr_0 = 5'h0; // @[Top.scala 31:13]
  assign io_rvfi_rs2_addr_0 = 5'h0; // @[Top.scala 31:13]
  assign io_rvfi_rs1_rdata_0 = 32'h0; // @[Top.scala 31:13]
  assign io_rvfi_rs2_rdata_0 = 32'h0; // @[Top.scala 31:13]
  assign io_rvfi_rd_addr_0 = 5'h0; // @[Top.scala 31:13]
  assign io_rvfi_rd_wdata_0 = 32'h0; // @[Top.scala 31:13]
  assign io_rvfi_pc_rdata_0 = tracer_rvfi_o_pc_rdata_0; // @[Top.scala 31:13]
  assign io_rvfi_pc_wdata_0 = 32'h0; // @[Top.scala 31:13]
  assign io_rvfi_mem_addr_0 = tracer_rvfi_o_mem_addr_0; // @[Top.scala 31:13]
  assign io_rvfi_mem_wmask_0 = tracer_rvfi_o_mem_wmask_0; // @[Top.scala 31:13]
  assign io_rvfi_mem_rdata_0 = 32'h0; // @[Top.scala 31:13]
  assign io_rvfi_mem_wdata_0 = tracer_rvfi_o_mem_wdata_0; // @[Top.scala 31:13]
  assign Core_clock = clock;
  assign Core_reset = reset;
  assign Core_io_dmemRsp_valid = dmem_io_rsp_valid; // @[Top.scala 25:19]
  assign Core_io_dmemRsp_bits_dataResponse = dmem_io_rsp_bits_dataResponse; // @[Top.scala 25:19]
  assign Core_io_imemRsp_bits_dataResponse = imem_io_rsp_bits_dataResponse; // @[Top.scala 21:19]
  assign dmem_clock = clock;
  assign dmem_reset = reset;
  assign dmem_io_req_valid = Core_io_dmemReq_valid; // @[Top.scala 26:15]
  assign dmem_io_req_bits_addrRequest = Core_io_dmemReq_bits_addrRequest; // @[Top.scala 26:15]
  assign dmem_io_req_bits_dataRequest = Core_io_dmemReq_bits_dataRequest; // @[Top.scala 26:15]
  assign dmem_io_req_bits_activeByteLane = Core_io_dmemReq_bits_activeByteLane; // @[Top.scala 26:15]
  assign dmem_io_req_bits_isWrite = Core_io_dmemReq_bits_isWrite; // @[Top.scala 26:15]
  assign imem_clock = clock;
  assign imem_reset = reset;
  assign imem_io_req_valid = Core_io_imemReq_valid; // @[Top.scala 22:15]
  assign imem_io_req_bits_addrRequest = Core_io_imemReq_bits_addrRequest; // @[Top.scala 22:15]
  assign imem_io_req_bits_activeByteLane = Core_io_imemReq_bits_activeByteLane; // @[Top.scala 22:15]
  assign imem_io_req_bits_isWrite = Core_io_imemReq_bits_isWrite; // @[Top.scala 22:15]
  assign imem_io_rsp_ready = Core_io_imemRsp_ready; // @[Top.scala 21:19]
  assign tracer_rvfi_i_bool = Core_io_rvfi_bool; // @[Top.scala 30:19]
  assign tracer_rvfi_i_uint4 = Core_io_rvfi_uint4; // @[Top.scala 30:19]
  assign tracer_rvfi_i_uint32_0 = Core_io_rvfi_uint32_0; // @[Top.scala 30:19]
  assign tracer_rvfi_i_uint32_4 = Core_io_rvfi_uint32_4; // @[Top.scala 30:19]
  assign tracer_rvfi_i_uint32_6 = Core_io_rvfi_uint32_6; // @[Top.scala 30:19]
  assign tracer_rvfi_i_uint32_8 = Core_io_rvfi_uint32_8; // @[Top.scala 30:19]
endmodule
