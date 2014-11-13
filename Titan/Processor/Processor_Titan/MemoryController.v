`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    14:26:52 11/11/2014 
// Design Name: 
// Module Name:    MemoryController 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module MemoryController#(parameter WIDTH = 32)
	(input clk, writeEn,
	input [WIDTH-1:0] addressIN, CPUdata_IN,
	input [WIDTH-1:0] memData_IN, stackData_IN,
	input [7:0] IOdata_IN,
	input	[6:0] vgaData_IN,
	output reg memData_wrEn, stackData_wrEn, vgaData_wrEn, IOdata_wrEn,
	output reg [WIDTH-1:0] CPUdata_OUT, memData_OUT, stackData_OUT,
	output [WIDTH-1:0] addressOUT,
	output reg [7:0] IOdata_OUT,
	output reg [6:0] vgaData_OUT
    );

	wire [WIDTH-1:0] IO_Data, vgaData, stackData, memData;
	
	assign addressOUT = addressIN[13:0];
	
	always@(*)
		begin
			memData_wrEn = 0;
			stackData_wrEn = 0;
			vgaData_wrEn = 0;
			IOdata_wrEn = 0;
			case(addressIN[15:14])
				// dataRAM
				00:	begin
							// only enable writing to dataRAM if the logic controller enables a write
							memData_wrEn = writeEn;
							// Set the output of the Mem Controller to be the data output of the dataRAM
							CPUdata_OUT = memData_IN;
							// send the data from the CPU as write data to dataRAM that will be written IFF memData_wrEn = 1.
							memData_OUT = CPUdata_IN;
						end
				// Stack Memory
				01:	begin
							// only enable writing to dataRAM if the logic controller enables a write
							stackData_wrEn = writeEn;
							// Set the output of the Mem Controller to be the data output of the dataRAM
							CPUdata_OUT = stackData_IN;
							// send the data from the CPU as write data to dataRAM that will be written IFF memData_wrEn = 1.
							stackData_OUT = CPUdata_IN;
						end				
				// VGA memory
				10:	begin
							// only enable writing to dataRAM if the logic controller enables a write
							vgaData_wrEn = writeEn;
							// Set the output of the Mem Controller to be the data output of the dataRAM
							CPUdata_OUT = vgaData_IN;
							// send the data from the CPU as write data to dataRAM that will be written IFF memData_wrEn = 1.
							vgaData_OUT = CPUdata_IN;
						end
				// IO memory
				11:	begin
							// only enable writing to dataRAM if the logic controller enables a write
							IOdata_wrEn = writeEn;
							// Set the output of the Mem Controller to be the data output of the dataRAM
							CPUdata_OUT = IOdata_IN;
							// send the data from the CPU as write data to dataRAM that will be written IFF memData_wrEn = 1.
							IOdata_OUT = CPUdata_IN;
						end
				// Set the default case
				default:	begin
								memData_wrEn = 0;
								stackData_wrEn = 0;
								vgaData_wrEn = 0;
								IOdata_wrEn = 0;
								CPUdata_OUT = 0;
								memData_OUT = 0;
								stackData_OUT = 0;
								IOdata_OUT = 0;
								vgaData_OUT = 0;
							end
			endcase
		end
	
	


endmodule
