`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   15:50:24 11/24/2014
// Design Name:   System
// Module Name:   C:/Users/u0499404/Desktop/ECE3710/Titan/Processor/Processor_Titan/SystemControllerIntegration_TestBench.v
// Project Name:  Processor_Titan
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: System
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module SystemControllerIntegration_TestBench;

	// Inputs
	reg clk;
	reg reset;
	reg NESinputData;

	// Outputs
	wire latch;
	wire pulse;
	wire hSync;
	wire vSync;
	wire [7:0] rgb;
	wire [7:0] leds;

	// Instantiate the Unit Under Test (UUT)
	System uut (
		.clk(clk), 
		.reset(reset), 
		.NESinputData(NESinputData), 
		.latch(latch), 
		.pulse(pulse), 
		.hSync(hSync), 
		.vSync(vSync), 
		.rgb(rgb), 
		.leds(leds)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		reset = 1;
		NESinputData = 0;

		// Wait 100 ns for global reset to finish
		#100;
		reset = 0;
        
		// Add stimulus here
		//Make controller always turn right
		NESinputData = 1'b0;
	end
      
always #10 clk = ~clk;
endmodule

