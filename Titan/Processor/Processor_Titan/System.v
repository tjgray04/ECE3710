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
		input NESinputData1,NESinputData2,NESinputData3,NESinputData4,
		output latch1,latch2,latch3,latch4, pulse1,pulse2,pulse3,pulse4,
		output hSync, vSync,
		output [7:0] rgb,
		output [7:0] leds,
		output soundMelody, soundBass
    );

//Wires
	//Processor wires
	wire [WIDTH-1:0] memControllerData, memAddr, memWriteData;
	//Memory Controller wires
	wire [WIDTH-1:0] memData_IN; //, stackData_IN;
	wire [7:0] IOdata_OUT;
	wire [WIDTH-1:0] IOdata_IN;
	wire [6:0] vgaData_IN, vgaData_OUT;
	wire [WIDTH-1:0] memData_OUT; //, stackData_OUT;
	wire [13:0] addressOUT;
	
	assign systemReset = reset || !locked;
	
//Processor
Titan titan(.clk(clk_50M), .reset(systemReset), .memControllerData(memControllerData),.memAddr(memAddr),
				.memWriteData(memWriteData), .writeEn(writeEn), .enRAM(enRAM));
				
//Memory Controller
MemoryController memController(.writeEn(writeEn), .addressIN(memAddr),
										.CPUdata_IN(memWriteData), .memData_IN(memData_IN),
										.IOdata_IN(IOdata_IN), //.stackData_IN(stackData_IN),
										.vgaData_IN(vgaData_IN), .memData_wrEn(memData_wrEn),
										.vgaData_wrEn(vgaData_wrEn), //.stackData_wrEn(stackData_wrEn),
										.IOdata_wrEn(IOdata_wrEn), .addressOUT(addressOUT),
										.CPUdata_OUT(memControllerData), .memData_OUT(memData_OUT),
										.IOdata_OUT(IOdata_OUT), //.stackData_OUT(stackData_OUT),
										.vgaData_OUT(vgaData_OUT));
			
//General Memory
DataRAM dataRAM(.clk(clk_50M), .enRAM(enRAM), .memWrite(memData_wrEn), .input_data(memData_OUT),
					.address(addressOUT), .memData(memData_IN));

//IO Memory				
IOMemory ioMem(.clk(clk_50M), .en(enRAM), .memWrite(IOdata_wrEn), .input_data(IOdata_OUT),
					.address(addressOUT), .IO_Data(IOdata_IN), .reset(systemReset), .NESinputData1(NESinputData1),.NESinputData2(NESinputData2),.NESinputData3(NESinputData3),.NESinputData4(NESinputData4),
					.latch1(latch1),.latch2(latch2),.latch3(latch3),.latch4(latch4), .pulse1(pulse1),.pulse2(pulse2),.pulse3(pulse3),.pulse4(pulse4), .leds(leds),.soundMelody(soundMelody), .soundBass(soundBass));

//VGA Display							
DisplayVGA dispVGA(.clk(clk_50M), .reset(systemReset), .cpuWriteEn(vgaData_wrEn), .writeData(vgaData_OUT),
						.addrCPU(addressOUT), .hSync(hSync), .vSync(vSync), .outputCPU(vgaData_IN),
						.rgb(rgb));

//DCM Clocks
DCM_50M dcm_50M(
	 // Clock in ports
    .CLK_IN1(clk),      	// 100MHz xtal clock from FPGA
    // Clock out ports
	 .CLK_OUT1(clk_50M),	// 50MHz clock output
    // Status and control signals
    .RESET(reset),			// system reset signal
    .LOCKED(locked));      		// 0 = DCM is attempting to lock onto CLKIN frequency. DCM clock outputs
									// are not valid.
									// 1 = DCM is locked onto CLKIN frequency. DCM clock outputs are valid

endmodule
