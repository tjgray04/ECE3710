`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    13:57:16 12/01/2014 
// Design Name: 
// Module Name:    TestGlyphMover 
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
module TestGlyphMover(
		input clk, reset,
		input bR, bL, bU, bD,
		input [6:0] VGAdataIN,
		output reg VGAwriteEn,
		output reg [6:0] writeData,
		output reg [13:0] addr
    );


//Define state parameters
parameter FETCH = 3'b000;
parameter DRAWOVER = 3'b001;
parameter DRAWNEW = 3'b010;
parameter RESET = 3'b011;
parameter WAIT = 3'b100;

//Define state registers
reg [2:0] PS,NS;

//Define registers
reg [12:0] glyphPos;
reg [26:0] waitCount;
reg [6:0] index;
reg moveEn;
reg moved;
reg countEn;



//Update State
always@(posedge clk)
begin
	if(reset)
	 begin
		PS <= RESET;
	 end
	else
	 begin
		PS <= NS;
	 end
end

//Next state block
always@(*)
begin
	if(reset)
	 begin
		NS <= RESET;
	 end
	else
	 begin
		case(PS)
			RESET: NS <= FETCH;
			FETCH: NS <= DRAWOVER;
			DRAWOVER: 
						begin
						if(moved)
							NS <= DRAWNEW;
						 else
							NS <= FETCH;
						end
			DRAWNEW: NS <= WAIT;
			WAIT: begin
					if(moveEn)
						NS <= FETCH;
					else
						NS <= WAIT;
					end
		endcase
	 end
end

//Make the block move
always@(PS)
begin
	if(reset)
	 begin
		glyphPos <= 13'd2439;
		VGAwriteEn <= 0;
		addr <= 0;
		writeData <= 0;
		index <= 0;
		moved <= 0;
		countEn <= 0;
	 end
	else
	begin
	case(PS)
		RESET:
					begin
					glyphPos <= 13'd2439;
					VGAwriteEn <= 0;
					addr <= 0;
					writeData <= 0;
					index <= 0;
					moved <= 0;
					countEn <= 0;
					end
		FETCH:
					begin
					glyphPos <= glyphPos;
					VGAwriteEn <= 0;
					addr <= glyphPos;
					writeData <= 0;
					index <= VGAdataIN;
					moved <= 0;
					countEn <= 0;
					end
		DRAWOVER:
					begin
					if(bR)
					 begin
						glyphPos <= glyphPos + 1'b1;
						VGAwriteEn <= 1'b1;
						addr <= glyphPos;
						writeData <= 0;
						index <= index;
						moved <= 1'b1;
						countEn <= 0;
					 end
					else if(bL)
					 begin
						glyphPos <= glyphPos - 1'b1;
						VGAwriteEn <= 1'b1;
						addr <= glyphPos;
						writeData <= 0;
						index <= index;
						moved <= 1'b1;
						countEn <= 0;
					 end
					else if(bU)
					 begin
						glyphPos <= trunc_14_to_13(glyphPos + 80);
						VGAwriteEn <= 1'b1;
						addr <= glyphPos;
						writeData <= 0;
						index <= index;
						moved <= 1'b1;
						countEn <= 0;
					 end
					else if(bD)
					 begin
						glyphPos <= trunc_32_to_13(glyphPos - 80);
						VGAwriteEn <= 1'b1;
						addr <= glyphPos;
						writeData <= 0;
						index <= index;
						moved <= 1'b1;
						countEn <= 0;
					 end
					else
					 begin
						glyphPos <= glyphPos;
						VGAwriteEn <= 1'b0;
						addr <= glyphPos;
						writeData <= 0;
						index <= index;
						moved <= 1'b0;
						countEn <= 0;
					 end
					end
		DRAWNEW:
					begin
					glyphPos <= glyphPos;
					VGAwriteEn <= 1'b1;
					addr <= glyphPos;
					writeData <= 6'd32;
					index <= index;
					moved <= 1'b0;
					countEn <= 0;
					end
		WAIT:
					begin
					glyphPos <= glyphPos;
					VGAwriteEn <= 1'b0;
					addr <= glyphPos;
					writeData <= index;
					index <= index;
					moved <= 1'b0;
					countEn <= 1;
					end
		default:
					begin
					glyphPos <= glyphPos;
					VGAwriteEn <= 1'b0;
					addr <= glyphPos;
					writeData <= index;
					index <= index;
					moved <= 1'b0;
					countEn <= 0;
					end
	endcase
	end
end

//Wait loop
always@(posedge clk)
begin
	if(reset)
	 begin
		moveEn <= 0;
		waitCount <= 0;
	 end
	else
	 begin
		if(waitCount == 27'd100000000)
		 begin
			moveEn <= 1'b1;
			waitCount <= 0;
		 end
		else
		 begin
		 if(countEn)
		  begin
			 moveEn <= 0;
			 waitCount <= waitCount + 1'b1;
		  end
		 else
		  begin
			 moveEn <= 0;
			 waitCount <= waitCount;
		  end
		 end
	 end
end

//Test function to get rid of warning
	function [12:0] trunc_14_to_13(input [13:0] val);
		trunc_14_to_13 = val[12:0];
	endfunction
	
	function [12:0] trunc_32_to_13(input [32:0] val);
		trunc_32_to_13 = val[12:0];
	endfunction

endmodule
