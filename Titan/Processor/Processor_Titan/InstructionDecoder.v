`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    09:29:33 10/14/2014 
// Design Name: 
// Module Name:    InstructionDecoder 
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
/* INSTRUCTION DECODER
*	input: instruction,  from instructionROM
*	output: opCode, send to Logic Controller
*	output: functCode, send to Logic Controller
*	output: Rs, send to RegFile
*	output: Rt, send to RegFile
*	output: Rdest, send to RegFile
*	output: immediate, send to sign extender
*/
module InstructionDecoder#(parameter OPBITS = 4, FUNCTBITS = 4, REGBITS = 5, IMMBITS = 18, WIDTH = 32)
								  (input [WIDTH-1:0] instruction,
								  output [OPBITS-1:0] opCode,
								  output [FUNCTBITS-1:0] functCode, 
								  output [REGBITS-1:0] Rs, Rt, Rdest,
								  output [IMMBITS-1:0] immediate);
	
	// Breakout the instruction using assgin statements
	assign opCode = instruction[WIDTH-1:WIDTH-OPBITS]; //[31:28]
	assign Rdest = instruction[(WIDTH-OPBITS)-1:(WIDTH-OPBITS)-REGBITS];	//[27:23]
	assign Rs = instruction[(IMMBITS+REGBITS)-1:IMMBITS]; //[22:18]
	assign Rt = instruction[IMMBITS-1:IMMBITS-REGBITS]; //[17:13]
	assign immediate = instruction[IMMBITS-1:0]; //[17:0]
	assign functCode = instruction[FUNCTBITS-1:0]; //[3:0]

endmodule
