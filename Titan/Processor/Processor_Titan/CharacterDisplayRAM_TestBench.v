`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   17:53:23 10/30/2014
// Design Name:   CharacterDisplayRAM
// Module Name:   C:/Users/u0499404/ECE3710/Processor_Titan/CharacterDisplayRAM_TestBench.v
// Project Name:  Processor_Titan
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: CharacterDisplayRAM
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module CharacterDisplayRAM_TestBench;

	// Inputs
	reg clk;
	reg reset;
	reg cpuEn;
	reg vgaEn;
	reg cpuWriteEn;
	reg [5:0] writeData;
	reg [7:0] hPixelCPU;
	reg [7:0] hPixelVGA;
	reg [6:0] vPixelCPU;
	reg [6:0] vPixelVGA;

	// Outputs
	wire [5:0] outputCPU;
	wire [5:0] outputVGA;

	// Instantiate the Unit Under Test (UUT)
	CharacterDisplayRAM uut (
		.clk(clk), 
		.reset(reset), 
		.cpuEn(cpuEn), 
		.vgaEn(vgaEn), 
		.cpuWriteEn(cpuWriteEn), 
		.writeData(writeData), 
		.hPixelCPU(hPixelCPU), 
		.hPixelVGA(hPixelVGA), 
		.vPixelCPU(vPixelCPU), 
		.vPixelVGA(vPixelVGA), 
		.outputCPU(outputCPU), 
		.outputVGA(outputVGA)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		reset = 1;
		cpuEn = 0;
		vgaEn = 0;
		cpuWriteEn = 0;
		writeData = 0;
		hPixelCPU = 0;
		hPixelVGA = 0;
		vPixelCPU = 0;
		vPixelVGA = 0;

		// Wait 100 ns for global reset to finish
		#10 reset = 0;
        
		// Add stimulus here
		//test to see if outputVGA is what is contained in the .dat file
		vgaEn = 1;
		#20;
		//test to see if outputCPU is what is contained in the .dat file
		cpuEn = 1;
		#20 vgaEn = 0;
		hPixelCPU = 8'h02; vPixelCPU = 7'h00;
		#10 hPixelCPU = 8'h01; vPixelCPU = 7'h00;
		#10 hPixelCPU = 8'h02; vPixelCPU = 7'h00;
		// test to see if we can write data into charDispRAM
		cpuWriteEn = 1;
		writeData = 6'h0f;
		#10 hPixelCPU = 8'h01; vPixelCPU = 7'h00;
		writeData = 6'hff;
		#10 hPixelCPU = 8'h03; vPixelCPU = 7'h00;
		writeData = 6'hf0;
		//Verify the written data
		#10 cpuWriteEn = 0;
		hPixelCPU = 8'h02; vPixelCPU = 7'h00;
		#10 hPixelCPU = 8'h01; vPixelCPU = 7'h00;
		#10 hPixelCPU = 8'h03; vPixelCPU = 7'h00;
	end
   
	always@(posedge clk)
	begin
		if(vgaEn)
		begin
			#1;
			hPixelVGA = hPixelVGA + 1;
//			vPixelVGA = vPixelVGA + 1;
		end
	end
	
	always #1 clk = ~clk;
	
endmodule

