`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    10:54:45 10/14/2014 
// Design Name: 
// Module Name:    Titan 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
/* TOP MODULE FOR THE TITAN PROCESSOR
*	input: clk from Nexys3 - global clock
*	input: reset from Nexys3 - global reset
*	input:
*/
module Titan#(parameter ALUOPBITS = 3, OPBITS = 4, FUNCTBITS = 4, REGBITS = 5, IMMBITS = 18, WIDTH = 32)
	(	input clk, reset,
		input [WIDTH-1:0] memControllerData,
		output [WIDTH-1:0] memAddr, memWriteData,
		output writeEn, enRAM
	);

	wire [WIDTH-1:0] instruction, immediateExt, RaData, returnAddr, PCadr,PSRcondExt;
	wire [ALUOPBITS-1:0] aluop;
	wire [OPBITS-1:0] opCode;
	wire [FUNCTBITS-1:0] functCode;
	wire [REGBITS-1:0] Rs, Rt, Rdest, PSRwrite; 
	wire [REGBITS-1:0] PSRsel;
	wire [IMMBITS-1:0] immediate;
	
	/* INSTANTIATE the Program Counter
	*	input: clk, from global clk
	*	input: reset, from global reset
	*  input: branch, from Logic Controller
	*	input: jump, from Logic Controller
	*	input: jumpRA, from Logic Controller
	*	input: PSRcond, from ProgramStatusRegister logic
	*	input: instruction, from instructionROM
	*	input: immediateExt, from sign extender in Execution Stage
	*  input: RaData, from regfile in Execution Stage
	* 	output: returnAddr, return address - send to Execution Stage to RegFile
	*	output: PC, Program Counter address
	*/
	ProgramCounter PC(.clk(clk), .reset(reset), .branch(branch), .jump(jump), .jumpRA(jumpRA), 
							.PSRcond(PSRcond), .instruction(instruction[27:0]), .immediate(immediateExt), .RaData(RaData),
							.returnAddr(returnAddr), .PC(PCadr), .PCEn(PCEn));
	
	/* Instantiate Memory Blocks - InstructionROM
	*  input: enable from Logic Controller
	*  input: PCadr from Program Counter
	*  output: instruction from memory
	*/
	InstructionROM instROM(/*.clk(clk), .enable(enROM),*/ .PCadr(PCadr[11:0]), .instruction(instruction));
	
	/* Instantiate an Instruction Decoder
	*	input: instruction, instructionROM
	*	output: opCode, operation code from instruction - to Logic Controller
	*	output: functCode, function code from instruction - to Logic Controller
	*	output: Rs, source register A from instruction
	*	output: Rt, source register B from instruction
	*	output: Rdest, destination register from instrucction
	*	output: immediate, immediate value from instruction
	*/
	InstructionDecoder InstDec(.RtSrcReg(RtSrcReg),.instruction(instruction), .opCode(opCode), .functCode(functCode), 
										.Rs(Rs), .Rt(Rt), .Rdest(Rdest), .immediate(immediate));
										
	/* Instantiate the Execution Stage
	*	input: clk, from global clk
	*	input: reset, from global reset
	*	input: aluSrcb, from Logic Controller
	*	input: memSrc, from Logic Controller
	*	input: regWriteEn, from Logic Controller
	*	input: RaWriteEn, from Logic Controller
	*	input: instruction, from InstructionROM
	*	input: returnAddr, is the return address from the Program Counter
	*	input: RaWriteData, from Logic Controllers
	*	input: PSRcondExt, from PSR module
	*	input: aluop, is the ALU operation determined by the Logic Controller
	*	input: shiftType, from Logic Controller
	*	output: immediateExt, extended immediate value to be used in Program Counter
	* 	output: PSRwrite, PSR register to go into PSR module
	*/
	ExecutionStage ExStage(.clk(clk), .reset(reset), .aluSrcb(aluSrcb), .shiftSrc(shiftSrc), .memSrc(memSrc),
		.regWriteEn(regWriteEn), .RaWriteEn(RaWriteEn), /*.opCode(opCode), .functCode(functCode),*/ .RtSrcReg(RtSrcReg), .wbPSR(wbPSR), 
		.Rs(Rs), .Rt(Rt), .Rdest(Rdest), .immediate(immediate), .returnAddr(returnAddr), .wbSrc(wbSrc), 
		.PSRcondExt(PSRcondExt), .aluop(aluop), .shiftType(shiftType), .immediateExt(immediateExt), .RaData(RaData), .PSRwrite(PSRwrite),
		.memControllerData(memControllerData), .memAddr(memAddr), .memWriteData(memWriteData));
	
	/* Instantiate Logic Controller	
	*	input: opCode, from Instruction Decoder
	*	input: functCode, from Instruction Decoder
	*	input: Rs, from Instruction Decoder
	*	output: aluSrcb, constrol signal to input mux for Source B of ALU - Execution Stage
	*	output: shiftsrc, control signal to input mux for shifter - Execution Stage
	*	output: shiftType, control signal to shifter to determine shift type - logical or arithmetic
	*	output: memSrc, control signal to mux after ALU
	*	output: enROM, enable Instruction ROM
	*	output: enRAM, enable Data RAM
	*	output: writeReg, enable write back to register in RegFile
	*	output: memWrite, control signal to memory to write
	*	output: wbSrc, control signal to MUX after dataRAM to decide which data to write back to RegFile
	*	output: wbPSR, MUX in path to writeData for RegFile to determine if writing back PSR or not
	*	output: regWriteEn, write back signal to RegFile to enable writing to a register
	*	output: RaWrite, control siganl to MUX to determine writing back return address RA 
	*	output: branch, control signal to branch AND gate signifying a branch will take place
	*	output: jump, control signal to jump MUX signifying a jump will take place
	*	output: jumpRA, control signal to jumpRA MUX signifying a jumpRA will take place
	*	output: PSRsel, control signal to PSR MUX to determine output bit based on desired condition
	*/
	LogicController LogicCtrl(.clk(clk), .reset(reset), .opCode(opCode), .functionCode(functCode), .branch(branch),
					.jump(jump), .jumpRA(jumpRA), .CFWrite(CFWrite), .LZNWrite(LZNWrite), .wbPSR(wbPSR), .RtSrcReg(RtSrcReg), 
					.wbSrc(wbSrc), .memSrc(memSrc), .shiftSrc(shiftSrc), .aluSrcb(aluSrcb), .regWriteEn(regWriteEn),
					.raWrite(RaWriteEn), .shiftType(shiftType), .memWrite(writeEn), .pcEn(PCEn), /*.enROM(enROM),*/ .enRAM(enRAM), .aluop(aluop));
	
	/* Instantiate PSR Controller
	*	input: clk, from global clk
	*	input: CFwrite, signal to enable writing to C and F in PSR register
	*	input: LSNwrite, signal to enable writing to L, Z and N in PSR register
	*	input: PSRsel from instruction[22:18] coming from instructionROM
	*	input: PSRwrite from ALU in the Execution Stage
	*	output: PSRcond, 1-bit, returns 1 (true) if condition (i.e. EQ, NE, GE, etc.) was true based on PSRwrite
	*/
	ProgramStatusRegister PSR(.clk(clk), .reset(reset), .CFwrite(CFWrite), .LZNwrite(LZNWrite), .PSRsel(Rs), .PSRwrite(PSRwrite), .PSRcond(PSRcond), .PSRcondExt(PSRcondExt));
	
	endmodule
