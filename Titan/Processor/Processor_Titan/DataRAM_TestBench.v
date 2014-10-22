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

		// Wait 10 ns for global reset to finish
		#10;
        
		// Add stimulus here
		// enable RAM
		enRAM = 1;
		#10;
		// write something to consecutive addresses, starting at address 0
		memWrite = 1;
		input_data = 32'h0000;
		#10;
		input_data = 32'h0001;
		address = 32'h0001;
		#10;
		input_data = 32'h0002;
		address = 32'h0002;
		#10;
		input_data = 32'h0003;
		address = 32'h0003;
		#10;
		input_data = 32'h0004;
		address = 32'h0004;
		#10;
		input_data = 32'h0005;
		address = 32'h0005;
		#10;
		// Try a higher address
		input_data = 32'hffffffff;
		address = 32'h00ff;
		#10;
		// read from consecutive addresses, starting at highest address, then working back down 
		memWrite = 0;
		address = 32'h00ff;
		#10;
		address = 32'h0005;
		#10;
		address = 32'h0004;
		#10;
		address = 32'h0003;
		#10;
		address = 32'h0002;
		#10;
		address = 32'h0001;
		#10;
		address = 32'h0000;
		#10;
	end
   
	always #1 clk = ~clk;
endmodule

