// Verilog test fixture created from schematic U:\My Documents\Lab6\MusicSynthesizer.sch - Wed Apr 24 19:42:54 2013

`timescale 1ns / 1ps

module MusicSynthesizer_MusicSynthesizer_sch_tb();

// Inputs
   reg clk;
   reg clr;
   reg toggle_mode;
   reg [2:0] keys;

// Output
   wire sound;

// Bidirs

// Instantiate the UUT
   MusicSynthesizer UUT (
		.clk(clk), 
		.clr(clr), 
		.sound(sound), 
		.toggle_mode(toggle_mode), 
		.keys(keys)
   );
// Initialize Inputs
   
       initial begin
		clk = 0;
		clr = 0;
		toggle_mode = 0;
		keys = 0;
		
		toggle_mode = 1;
		#100;
   end
	 

	 
	
	always
	#1 clk=~clk;
endmodule
