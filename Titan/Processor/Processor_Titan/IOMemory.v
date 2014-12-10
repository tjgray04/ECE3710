`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:43:07 11/11/2014 
// Design Name: 
// Module Name:    IOMemory 
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
module IOMemory#(parameter WIDTH = 8, RAM_ADDR_BITS = 14)
	(input clk, reset, en, memWrite,
	 input [WIDTH-1:0] input_data,
	 input [RAM_ADDR_BITS-1:0] address,
	 input NESinputData1,NESinputData2,NESinputData3,NESinputData4,
	 output reg [31:0] IO_Data,
	 output latch1,latch2,latch3,latch4, pulse1,pulse2,pulse3,pulse4,
	 output reg [WIDTH-1:0] leds,
	 output soundMelody,soundBass
	 );

//   (* RAM_STYLE="{AUTO | BLOCK |  BLOCK_POWER1 | BLOCK_POWER2}" *)
//   reg [WIDTH-1:0] IO_RAM [(2**RAM_ADDR_BITS)-1:0];
//
//	// Reads will be done asynchronously
//	assign IO_Data = IO_RAM[address];
//	
//   always @(posedge clk)
//      if (en) begin
//         if (memWrite) 
//            IO_RAM[address] <= input_data;
//      end

initial
begin
	leds = 0;
end

//Define Registers and Wires
wire [7:0] NESdata1,NESdata2,NESdata3,NESdata4;
reg [1:0] soundGenWriteData;
reg soundGenWriteEn;

//Instantiate NES Controller
NES_CONTROLLER nes1(.clock(clk), .reset(reset), .data(NESinputData1), .latch(latch1), .pulse(pulse1), 
						.controller_data(NESdata1));
NES_CONTROLLER nes2(.clock(clk), .reset(reset), .data(NESinputData2), .latch(latch2), .pulse(pulse2), 
						.controller_data(NESdata2));
NES_CONTROLLER nes3(.clock(clk), .reset(reset), .data(NESinputData3), .latch(latch3), .pulse(pulse3), 
						.controller_data(NESdata3));
NES_CONTROLLER nes4(.clock(clk), .reset(reset), .data(NESinputData4), .latch(latch4), .pulse(pulse4), 
						.controller_data(NESdata4));

//Instantiate Sound Generator
SoundGenerator sg(.clk(clk), .clr(reset), .CPUwriteEn(soundGenWriteEn), .writeDataCPU(soundGenWriteData),
					.soundMelody(soundMelody),.soundBass(soundBass));

//IO Write
always @(posedge clk)
begin
		soundGenWriteData <= 0;
		soundGenWriteEn <= 0;
      if (en) 
		begin
         if (memWrite)
			begin
				case(address[RAM_ADDR_BITS-1:0])
					//Trying to write to NES space
					2'b11:
						begin
						//NOTHING HAPPENS
							leds <= 0;
						end
					//Trying to write to LED space
					2'b01:
						begin
							leds <= input_data;
						end
					//Trying to write to Sound Generator Space
					2'b10:
						begin
							leds <= leds;
							soundGenWriteData <= input_data[1:0];		//Currently 2'b01 for laser and 2'b11 for death sound
							soundGenWriteEn <= memWrite;
						end
					default:
						begin
							leds <= leds;
						end
            endcase
			end
      end
end

//IO Read
always@(*)
begin
	case(address[RAM_ADDR_BITS-1])
		//Trying to read from NES space
		1'b1:
			begin
				IO_Data = {NESdata4,NESdata3,NESdata2,NESdata1};
			end
		//Trying to read from LED space
		1'b0:
			begin
				IO_Data = 0;
			end
	endcase
end
endmodule
