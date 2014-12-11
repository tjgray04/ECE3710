`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   19:50:58 12/10/2014
// Design Name:   System
// Module Name:   C:/Users/Steve Brown/Desktop/ECE3710/Titan/Processor/Processor_Titan/SystemControllerIntegration_TestBench2.v
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

module SystemControllerIntegration_TestBench2;

	// Inputs
	reg clk;
	reg reset;
	reg NESinputData1;
	reg NESinputData2;
	reg NESinputData3;
	reg NESinputData4;

	// Outputs
	wire latch1;
	wire latch2;
	wire latch3;
	wire latch4;
	wire pulse1;
	wire pulse2;
	wire pulse3;
	wire pulse4;
	wire hSync;
	wire vSync;
	wire [7:0] rgb;
	wire [7:0] leds;
	wire soundMelody;
	wire soundBass;

	// Instantiate the Unit Under Test (UUT)
	System uut (
		.clk(clk), 
		.reset(reset), 
		.NESinputData1(NESinputData1), 
		.NESinputData2(NESinputData2), 
		.NESinputData3(NESinputData3), 
		.NESinputData4(NESinputData4), 
		.latch1(latch1), 
		.latch2(latch2), 
		.latch3(latch3), 
		.latch4(latch4), 
		.pulse1(pulse1), 
		.pulse2(pulse2), 
		.pulse3(pulse3), 
		.pulse4(pulse4), 
		.hSync(hSync), 
		.vSync(vSync), 
		.rgb(rgb), 
		.leds(leds), 
		.soundMelody(soundMelody), 
		.soundBass(soundBass)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		reset = 1;
		NESinputData1 = 0;
		NESinputData2 = 0;
		NESinputData3 = 0;
		NESinputData4 = 0;

		// Wait 100 ns for global reset to finish
		#100;
      reset = 0;
		 
		// Add stimulus here

	end
	
	always #10 clk = ~clk;
      
endmodule

