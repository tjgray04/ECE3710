`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    17:02:09 10/21/2014 
// Design Name: 
// Module Name:    LogicController 
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
module LogicController#(parameter OPBITS =4, FUNCTBITS = 4)
		( input clk,
		  input [OPBITS-1:0] opcode,
		  input [FUNCTBITS-1:0] functionCode,
		  output reg branch, jump, jumpRA, CFWrite, LZNWrite, wbPSR, RtSrcReg, wbSrc, memSrc, shiftSrc, aluSrcb ,regWriteEn,
		  output reg raWrite, shiftType, memWrite, aluop, pcEn
		);
		
		//Declare State variables.
		parameter	EX  = 1'b0;
		parameter   MEM = 1'b1;
		
		//Declare Op Code states for I-Type instructions.
		parameter ADDI  = 0101,
					 SUBI  = 1001,
					 MULTI = 1110,
					 CMPI  = 1011,
					 ANDI  = 0001,
					 ORI   = 0010,
					 XORI  = 0011,
					 BCOND = 1100;
		//Declare Op Code States for J-Type instructions.
		parameter J     = 0100,
					 JAL   = 1111,
					 JRA   = 0111;
					 
		//Declare Function Code states for R type instructions.
		parameter RTYPE   = 0000,
					 RTYPE2  = 1000,
					 MEMTYPE = 0100;
					 
		//Declare Function Code States for RTYPE instructions.
		parameter ADD  = 0101,
					 ADDU = 0110,
					 SUB  = 1001,
					 MULT = 1110,
					 CMP  = 1011,
					 AND  = 0001,
					 OR   = 0010,
					 XOR  = 0011,
					 NOT  = 0100;

		//DeclareFunction Code States for RTYPE2 instructions.
		parameter LSH  = 0100,
					 LSHI = 0000, //000s, s is taken care of in the shifter.
					 ASH  = 0110,
					 ASHI = 0011; //001s, s is taken care of in the shifter.
					 
		//Declare Op Code States for MEMTYPE instructions.
		parameter LOAD  = 0000,
				    STR   = 0100,
					 SCOND = 1101;
					


endmodule
