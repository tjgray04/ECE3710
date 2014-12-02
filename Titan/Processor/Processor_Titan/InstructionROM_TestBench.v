`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   10:13:24 10/15/2014
// Design Name:   InstructionROM
// Module Name:   C:/Users/u0499404/ECE3710/Processor_Titan/InstructionROM_TestBench.v
// Project Name:  Processor_Titan
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: InstructionROM
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module InstructionROM_TestBench;

	// Inputs
	reg clk;
	reg enable;
	reg [31:0] PCadr;

	// Outputs
	wire [31:0] instruction;

	// Instantiate the Unit Under Test (UUT)
	InstructionROM uut (
		.clk(clk), 
		.enable(enable), 
		.PCadr(PCadr), 
		.instruction(instruction)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		enable = 0;
		PCadr = 32'hffff_ffff;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

		enable = 1;
		#40
		PCadr = 32'h0;
		#40
		PCadr = 32'h1;
		#40
		PCadr = 32'h2;
		#40
		PCadr = 32'h3;
		#40
		PCadr = 32'h4;
		#40
		PCadr = 32'h5;
//				#40;
//		PCadr = 32'hffff_fffd;
//				#40;
//		PCadr = 32'hffff_fffc;
//				#40;
//		PCadr = 32'hffff_fffb;
//				#40;
//		PCadr = 32'hffff_fffa;
		
	end
	always #1 clk = ~clk;
	
endmodule

