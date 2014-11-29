`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   19:53:23 10/20/2014
// Design Name:   RegFile
// Module Name:   C:/Users/u0499404/ECE3710/Processor_Titan/RegFile_TestBench2.v
// Project Name:  Processor_Titan
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: RegFile
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module RegFile_TestBench2;

	// Inputs
	reg clk;
	reg reset;
	reg regWriteEn;
	reg RaWriteEn;
	reg [4:0] Rs;
	reg [4:0] Rt;
	reg [4:0] Rdest;
	reg [31:0] writeData;

	// Outputs
	wire [31:0] RsData;
	wire [31:0] RtData;
	wire [31:0] RaData;

	// Instantiate the Unit Under Test (UUT)
	RegFile uut (
		.clk(clk), 
		.reset(reset), 
		.regWriteEn(regWriteEn), 
		.RaWriteEn(RaWriteEn), 
		.Rs(Rs), 
		.Rt(Rt), 
		.Rdest(Rdest), 
		.writeData(writeData), 
		.RsData(RsData), 
		.RtData(RtData), 
		.RaData(RaData)
	);

	initial begin
		// Initialize Inputs
		// Initialize Inputs
		clk = 0;
		reset = 1;
		regWriteEn = 0;
		RaWriteEn = 0;
		Rs = 0;
		Rt = 0;
		Rdest = 0;
		writeData = 0;

		// Wait 100 ns for global reset to finish
		#10;
        
		// Add stimulus here
		reset = 0;
		//Write some data into a register
		regWriteEn = 1'b1;
		RaWriteEn = 1'b1;
		Rdest = 5'b00010;
		writeData = 32'd41;
		#20;
		//See data at other end
		regWriteEn = 1'b0;
		RaWriteEn = 1'b0;
		Rs = 5'b00010;
		

	end
	
	always begin
	#1;
	clk = ~clk;
	end
      
endmodule