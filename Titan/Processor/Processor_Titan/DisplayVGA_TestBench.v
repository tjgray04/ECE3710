`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   16:52:07 11/04/2014
// Design Name:   DisplayVGA
// Module Name:   C:/Users/u0499404/ECE3710/Processor_Titan/DisplayVGA_TestBench.v
// Project Name:  Processor_Titan
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: DisplayVGA
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module DisplayVGA_TestBench;

	// Inputs
	reg clk;
	reg reset;
	reg cpuWriteEn;
	reg [6:0] writeData;
	reg [7:0] hGlyphCPU;
	reg [6:0] vGlyphCPU;

	// Outputs
	wire hSync;
	wire vSync;
	wire [6:0] outputCPU;
	wire [7:0] rgb;

	// Instantiate the Unit Under Test (UUT)
	DisplayVGA uut (
		.clk(clk), 
		.reset(reset), 
		.cpuWriteEn(cpuWriteEn), 
		.writeData(writeData), 
		.hGlyphCPU(hGlyphCPU), 
		.vGlyphCPU(vGlyphCPU), 
		.hSync(hSync), 
		.vSync(vSync), 
		.outputCPU(outputCPU), 
		.rgb(rgb)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		reset = 1;
		cpuWriteEn = 0;
		writeData = 0;
		hGlyphCPU = 0;
		vGlyphCPU = 0;

		// Wait 100 ns for global reset to finish
		#10 reset = 0;
        
		// Add stimulus here
		//Test to see if the VGA outputs the glyph from memory
		//should just be outputting values
		
		//Test to see if the CPU can read from memory
		#1151 hGlyphCPU = 8'h1;
		#10 hGlyphCPU = 8'h2;
		#10 hGlyphCPU = 8'h3;
		#10 hGlyphCPU = 8'h4;
		#10 hGlyphCPU = 8'h5;
		#10 hGlyphCPU = 8'h6;
		#10 hGlyphCPU = 8'h7;
		#10 hGlyphCPU = 8'h8;
		#10 hGlyphCPU = 8'h9;
		#10 hGlyphCPU = 8'ha;
		#10 hGlyphCPU = 8'hb;
		#10 hGlyphCPU = 8'hc;
		#10 hGlyphCPU = 8'hd;
		#10 hGlyphCPU = 8'he;
		vGlyphCPU = 7'b1;
		
		//Test to see if the CPU can write to memory
		#10 hGlyphCPU = 8'h1;
		cpuWriteEn = 1; 
		writeData = 7'hf;
		#10 hGlyphCPU = 8'h2;
		writeData = 7'he;
		#10 hGlyphCPU = 8'h3;
		writeData = 7'hd;
		#10 hGlyphCPU = 8'h4;
		writeData = 7'hc;
		#10 hGlyphCPU = 8'h5;
		writeData = 7'hb;
		#10 hGlyphCPU = 8'h6;
		writeData = 7'ha;
		#10 hGlyphCPU = 8'h7;
		writeData = 7'h9;
		#10 hGlyphCPU = 8'h8;
		writeData = 7'h8;
		#10 hGlyphCPU = 8'h9;
		writeData = 7'h7;
		#10 hGlyphCPU = 8'ha;
		writeData = 7'h6;
		#10 hGlyphCPU = 8'hb;
		writeData = 7'h5;
		#10 hGlyphCPU = 8'hc;
		writeData = 7'h4;
		#10 hGlyphCPU = 8'hd;
		writeData = 7'h3;
		#10 hGlyphCPU = 8'he;
		writeData = 7'h2;
		//Check that what was written to memory is correctly read 
		
		
	end
	
	always #1 clk = ~clk;
		
endmodule

