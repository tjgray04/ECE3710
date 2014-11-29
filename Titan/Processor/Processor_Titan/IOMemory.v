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
	 input NESinputData,
	 output reg [WIDTH-1:0] IO_Data,
	 output latch, pulse,
	 output reg [WIDTH-1:0] leds)
	 ;

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

//Define Registers
wire [7:0] NESdata;

//Instantiate NES Controller
NES_CONTROLLER nes(.clock(clk), .reset(reset), .data(NESinputData), .latch(latch), .pulse(pulse), 
						.controller_data(NESdata));

//Instantiate Sound Generator

//IO Write
always @(posedge clk)
begin
      if (en) 
		begin
         if (memWrite)
			begin
				case(address[RAM_ADDR_BITS-1])
					//Trying to write to NES space
					1'b1:
						begin
						//NOTHING HAPPENS
						
						leds <= 0;
						end
					//Trying to write to LED space
					1'b0:
						begin
						leds <= input_data;
						
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
			IO_Data = NESdata;
			end
		//Trying to read from LED space
		1'b0:
			begin
			IO_Data = 0;
			end
	endcase
end
endmodule
