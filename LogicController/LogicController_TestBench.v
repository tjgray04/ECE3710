`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   15:34:10 10/23/2014
// Design Name:   LogicController
// Module Name:   U:/ECE 3710/LogicController/LogicController_TestBench.v
// Project Name:  LogicController
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: LogicController
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module LogicController_TestBench;

	// Inputs
	reg clk;
	reg reset;
	reg [3:0] opcode;
	reg [3:0] functionCode;

	// Outputs
	wire branch;
	wire jump;
	wire jumpRA;
	wire CFWrite;
	wire LZNWrite;
	wire wbPSR;
	wire RtSrcReg;
	wire wbSrc;
	wire memSrc;
	wire shiftSrc;
	wire aluSrcb;
	wire regWriteEn;
	wire raWrite;
	wire shiftType;
	wire memWrite;
	wire pcEn;
	wire [2:0] aluop;

	// Instantiate the Unit Under Test (UUT)
	LogicController uut (
		.clk(clk),
		.reset(reset),
		.opcode(opcode), 
		.functionCode(functionCode), 
		.branch(branch), 
		.jump(jump), 
		.jumpRA(jumpRA), 
		.CFWrite(CFWrite), 
		.LZNWrite(LZNWrite), 
		.wbPSR(wbPSR), 
		.RtSrcReg(RtSrcReg), 
		.wbSrc(wbSrc), 
		.memSrc(memSrc), 
		.shiftSrc(shiftSrc), 
		.aluSrcb(aluSrcb), 
		.regWriteEn(regWriteEn), 
		.raWrite(raWrite), 
		.shiftType(shiftType), 
		.memWrite(memWrite), 
		.pcEn(pcEn), 
		.aluop(aluop)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		reset = 1;
		opcode = 0;
		functionCode = 0;

		// Wait 100 ns for global reset to finish
		#10;
		reset = 0;
        
		// Add stimulus here
		#3;
		//jump
		opcode = 4'b1101;
		functionCode = 4'b0000;
		#2;
		//load
		opcode = 4'b0111;
		functionCode = 4'b0000;
		#4;
		//store
		opcode = 4'b1010;
		functionCode = 4'b0000;
		
	end
      
	always #1 clk = ~clk;
	
endmodule

