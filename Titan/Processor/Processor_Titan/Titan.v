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
// TOP MODULE FOR THE TITAN PROCESSOR
module Titan#(parameter WIDTH = 32)(input clk, reset 
    );

	wire [WIDTH-1:0] instruction, immediate, RaData, PC, returnAddr, RaWriteData;
	wire [2:0] aluop;

	// Instantiate the Program Counter
	ProgramCounter PC(.clk(clk), .reset(reset), .branch(branch), .jump(jump), .jumpRA(jumpRA), 
							.PSRcond(PSRcond), .instruction(instruction), .immediate(immediate), .RaData(RaData),
							.PC(PC));
							
	// Instantiate the Execution Stage
	ExecutionStage ExStage(.clk(clk), .reset(reset), .aluSrcb(aluSrcb), .memSrc(memSrc),
		.regWriteEn(regWriteEn), .RaWriteEn(RaWriteEn), .instruction(instruction),
		.returnAddr(returnAddr), .RaWriteData(RaWriteData), .aluop(aluop), .shifttype(shifttype));
	
	// Instantiate Logic Controller	
	
	// Instantiate PSR Controller
	
	// Instantiate Memory Blocks
	
endmodule
