`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    11:27:04 11/13/2014 
// Design Name: 
// Module Name:    System 
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
module System#(parameter WIDTH = 32)(
		input clk, reset,
		output hSync, vSync,
		output [7:0] rgb
    );

//Wires
	//Processor wires
	wire [WIDTH-1:0] memControllerData, memAddr, memWriteData;
	//Memory Controller wires
	wire [WIDTH-1:0] memData_IN, stackData_IN;
	wire [7:0] IOdata_IN, IOdata_OUT;
	wire [6:0] vgaData_IN, vgaData_OUT;
	wire [WIDTH-1:0] addressOUT, CPUdata_OUT, memData_OUT, stackData_OUT;
	
//Processor
Titan titan(.clk(clk), .reset(reset), .memControllerData(memControllerData),.memAddr(memAddr),
				.memWriteData(memWriteData), .writeEn(writeEn), .enRAM(enRAM));
				
//Memory Controller
// Need to switch dots and parenthesis terms???
MemoryController memController(.clk(clk), .writeEn(writeEn), .addressIN(memAddr),
										.CPUdata_IN(memWriteData), .memData_IN(memData_IN),
										.stackData_IN(stackData_IN), .IOdata_IN(IOdata_IN),
										.vgaData_IN,(vgaData_IN), .memData_wrEn(memData_wrEn),
										.stackData_wrEn(stackData_wrEn), .vgaData_wrEn(vgaData_wrEn),
										.IOdata_wrEn(IOdata_wrEn), .addressOUT(addressOUT),
										.CPUdata_OUT(CPUdata_OUT), .memData_OUT(memData_OUT),
										.stackData_OUT(stackData_OUT), .IOdata_OUT(IOdata_OUT),
										.vgaData_OUT(vgaData_OUT));

//General Memory
DataRAM dataRAM(.clk(clk), .enRAM(enRAM), .memWrite(memData_wrEn), .input_data(memData_OUT),
					.address(addressOUT), .memData(memData_IN));

//IO Memory				
IOMemory ioMem(.clk(clk), .en(enRAM), .memWrite(IOdata_wrEn), .input_data(IOdata_OUT),
					.address(addressOUT), .IO_Data(IOdata_IN));
					
//Stack Memory					
StackMemory stackMem(.clk(clk), .en(enRAM), .memWrite(stackData_wrEn), .input_data(stackData_OUT),
							.address(addressOUT), .stackData(stackData_IN));

//VGA Display							
DisplayVGA dispVGA(.clk(clk), .reset(reset), .cpuWriteEn(vgaData_wrEn), .writeData(vgaData_OUT),
						.addrCPU(addressOUT), .hSync(hSync), .vSync(vSync), .outputCPU(vgaData_IN),
						.rgb(rgb));

endmodule
