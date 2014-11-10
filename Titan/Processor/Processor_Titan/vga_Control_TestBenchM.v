`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   15:14:02 11/08/2014
// Design Name:   vgaControl
// Module Name:   C:/Users/u0655172/Downloads/ECE3710-master (1)/ECE3710-master/Titan/Processor/Processor_Titan/vga_Control_TestBenchM.v
// Project Name:  Processor_Titan
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: vgaControl
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module vga_Control_TestBenchM;

	// Inputs
	reg clk100M;
	reg reset;

	// Outputs
	wire hSync;
	wire vSync;
	wire bright;
	wire [9:0] hPixel;
	wire [8:0] vPixel;

	// Instantiate the Unit Under Test (UUT)
	vgaControl uut (
		.clk100M(clk100M), 
		.reset(reset), 
		.hSync(hSync), 
		.vSync(vSync), 
		.bright(bright), 
		.hPixel(hPixel), 
		.vPixel(vPixel)
	);

	initial begin
		// Initialize Inputs
		clk100M = 0;
		reset = 1;

		// Wait 30 ns for global reset to finish
		#30 reset = 0;
        
		// Add stimulus here

	end
	
	always #1 clk100M = ~clk100M;
      
endmodule

