`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   14:47:54 10/28/2014
// Design Name:   NES_CONTROLLER
// Module Name:   C:/Users/u0791587/Documents/ECE3710/Project/NES_CONTROLLER/NES_CONTROLLER_TEST_BENCH.v
// Project Name:  NES_CONTROLLER
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: NES_CONTROLLER
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module NES_CONTROLLER_TEST_BENCH;

	// Inputs
	reg clock;
	reg data;
	reg reset;

	// Outputs
	wire latch;
	wire pulse;

	wire [7:0] controller_data;

	// Instantiate the Unit Under Test (UUT)
	NES_CONTROLLER uut (
		.clock(clock), 
		.data(data), 
		.reset(reset),
		.latch(latch), 
		.pulse(pulse), 
		.controller_data(controller_data)
	);

	initial begin
		// Initialize Inputs
		clock = 0;
		data = 1;
		reset = 1;

		// Wait 1 us for global reset to finish
		#1000;
		
		reset = 0;
        
		// Add stimulus here
		#16666667;
		data = 0;
		#18000
		data = 1'b1;
		#8000
		data = 1'b0;
		#10000
		data = 1'b1;
		#1000 
		data = 1'b0;
	end
      
		always #5 clock = ~clock;
endmodule

