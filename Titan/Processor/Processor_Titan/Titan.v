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
module Titan#(parameter WIDTH = 32)(input clk, reset, enROM//from Logic Controller
						
    );

	wire [WIDTH-1:0] instruction, immediate, RaData, PC, returnAddr, RaWriteData;
	wire [2:0] aluop;

	/* INSTANTIATE the Program Counter
	*	input: clk from global clk
	*	input: reset from global reset
	*  input: branch from Logic Controller
	*	input: jump from Logic Controller
	*	input: jumpRA from Logic Controller
	*	input: PSRcond from ProgramStatusRegister logic
	*	input: instruction from instructionROM
	*	input: immediate from sign extender in Execution Stage
	*  input: RaData from regfile in Execution Stage
	*	output: Program Counter address
	*/
	ProgramCounter PC(.clk(clk), .reset(reset), .branch(branch), .jump(jump), .jumpRA(jumpRA), 
							.PSRcond(PSRcond), .instruction(instruction), .immediate(immediate), .RaData(RaData),
							.returnAdr(returnAdr), .PC(PC));
							
	/* Instantiate the Execution Stage
	*	input: clk from global clk
	*	input: reset from global reset
	*	input: aluSrcb from Logic Controller
	*	input: memSrc from Logic Controller
	*	input: regWriteEn from Logic Controller
	*	input: RaWriteEn from Logic Controller
	*	input: instruction from InstructionROM
	*	input: returnAddr is the return address from the Program Counter
	*	input:
	*	output:
	*	output:
	*	output:
	*	output:
	*/
	ExecutionStage ExStage(.clk(clk), .reset(reset), .aluSrcb(aluSrcb), .memSrc(memSrc),
		.regWriteEn(regWriteEn), .RaWriteEn(RaWriteEn), .instruction(instruction),
		.returnAddr(returnAddr), .RaWriteData(RaWriteData), .aluop(aluop), .shifttype(shifttype));
	
	/* Instantiate Logic Controller	
	*	input:
	*	input:
	*	input:
	*	input:
	*	input:
	*	input:
	*	input:
	*	input:
	*	output:
	*	output:
	*	output:
	*	output:
	*	output:
	*	output:
	*/
	
	/* Instantiate PSR Controller
	*	input: PSRsel from instruction[22:18] coming from instructionROM
	*	input: PSRwrite from ALU in the Execution Stage
	*	output: PSRcond, 1-bit, returns 1 (true) if condition (i.e. EQ, NE, GE, etc.) was true based on PSRwrite
	*/
	ProgramStatusRegister PSR(.PSRsel(instruction[22:18]), .PSRwrite(PSRwrite), .PSRcond(PSRcond));
	
	/* Instantiate Memory Blocks - InstructionROM
	*  input: enable from Logic Controller
	*  input: PCadr from Program Counter
	*  output: instruction from memory
	*/
	InstructionROM instROM(.clk(clk), .enable(enROM), .PCadr(PC), .instruction(instruction));
	
endmodule
