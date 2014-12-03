`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    10:56:15 10/14/2014 
// Design Name: 
// Module Name:    ProgramCounter 
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
/* PROGRAM COUNTER
*	input: clk, from global clk
*	input: reset, from global reset
*  input: branch, from Logic Controller
*	input: jump, from Logic Controller
*	input: jumpRA, from Logic Controller
*	input: PSRcond, from ProgramStatusRegister logic
*	input: instruction, from instructionROM
*	input: immediate, from sign extender in Execution Stage
*  input: RaData, from regfile in Execution Stage
*	output: returnAdr, return address
*	output: PC, Program Counter address
*/
module ProgramCounter#(parameter REGBITS = 5, WIDTH = 32)
							 (input clk, reset, branch, jump, jumpRA, PSRcond, PCEn,
							 input  [27:0] instruction,
							 input  [WIDTH-1:0] immediate, RsData,
							 output [WIDTH-1:0] returnAddr,
							 output reg [WIDTH-1:0] PC);

	wire [WIDTH-1:0] BranchImm, PC2, JumpImm, PC3, PC4, PC_Next;

	always@(posedge reset, posedge clk)
	begin
		if(reset)
			PC <= 0;
		else
			PC <= PC_Next;
	end
	
	// PC +1 adder
	assign returnAddr = PC + 1;
	// Branch adder
	assign BranchImm = returnAddr + $signed(immediate);
	// Jump based on immediate value {[returnAddr[31:28],instruction[27:0]}
	assign JumpImm = {returnAddr[WIDTH-1:(WIDTH-REGBITS)+1], instruction};
	// branch and PSR[] both need to be asserted for a branch to happen
	assign branchTrue = branch & PSRcond;
	// branch mux
	Mux branchMux(.d0(returnAddr), .d1(BranchImm), .select(branchTrue), .out(PC2));
	// jump mux
	Mux jumpMux(.d0(PC2), .d1(JumpImm), .select(jump), .out(PC3));
	// jumpRA mux
	Mux jumpRAMux(.d0(PC3), .d1(RsData), .select(jumpRA), .out(PC4));
	// If we enabled, advanced to the next state, else, keep the current state
	assign PC_Next = PCEn ? PC4 : PC;
	
endmodule
