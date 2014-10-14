`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   17:30:08 10/02/2014
// Design Name:   ALU
// Module Name:   U:/My Documents/Processor_Titan/ALU_TestBench.v
// Project Name:  Processor_Titan
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: ALU
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module ALU_TestBench;

	// Inputs
	reg [31:0] arg1;
	reg [31:0] arg2;
	reg [2:0] aluop;

	// Outputs
	wire [31:0] result;
	wire [4:0] PSRwrite;

	// Instantiate the Unit Under Test (UUT)
	ALU uut (
		.arg1(arg1), 
		.arg2(arg2), 
		.aluop(aluop), 
		.result(result), 
		.PSRwrite(PSRwrite)
	);

	initial begin
		// Initialize Inputs
		arg1 = 0;
		arg2 = 0;
		aluop = 0;

		// Wait 100 ns for global reset to finish
		#10;
        
		// Add stimulus here
		arg1 = 32'hffffffff;
		arg2 = 32'hffffffff;
		aluop = 3'b000;
		#10;
		arg1 = 32'h7fffffff;
		arg2 = 32'h7fffffff;
		#10;
		aluop = 3'b001;
		#10;
		aluop = 3'b111;
		#10
		arg1 = 32'd5;
		arg2 = 32'd5;
		#10;
		arg1 = 32'd6;
		arg2 = 32'd5;
		#10;
		arg1 = 32'hfffffff8;
		arg2 = 32'h00000007;
		#10
		arg2 = 32'hfffffff8;
		arg1 = 32'h00000007;

	end
      
endmodule

