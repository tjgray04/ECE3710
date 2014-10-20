`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   09:24:59 10/20/2014
// Design Name:   DataRAM
// Module Name:   C:/Users/Steve Brown/Desktop/ECE3710/Titan/Processor/Processor_Titan/DataRAM_TestBench.v
// Project Name:  Processor_Titan
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: DataRAM
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module DataRAM_TestBench;

	// Inputs
	reg clk;
	reg enRAM;
	reg memWrite;
	reg [31:0] input_data;
	reg [31:0] address;

	// Outputs
	wire [31:0] memData;

	// Instantiate the Unit Under Test (UUT)
	DataRAM uut (
		.clk(clk), 
		.enRAM(enRAM), 
		.memWrite(memWrite), 
		.input_data(input_data), 
		.address(address), 
		.memData(memData)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		enRAM = 0;
		memWrite = 0;
		input_data = 0;
		address = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
      
endmodule

