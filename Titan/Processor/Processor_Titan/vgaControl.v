`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    12:48:55 09/23/2014 
// Design Name: 
// Module Name:    vgaControl 
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
module vgaControl(input clk100M, reset, // system clock and reset
						output reg hSync, vSync,  // sync signals to the VGA interface
						output reg bright, 		 // asserted when the pizel is bright
						output reg [10:0] hPixel, 
						output reg [9:0]  vPixel //horizontal and vertical pixel index
						);	
																		// keeps track of position on screen
	reg clk25M; // this is the 25Mhz clock for the VGA												
	reg [1:0] count; // everytime count == 1, clk25M will equal 1 for one clock cycle.
	reg [11:0] hCount, vCount; // horizontal and vertical count 
	
	always@(posedge clk25M)
		begin
			// initialize values
			hSync  <= 1;
			vSync  <= 1;
			bright <= 0;
			hCount <= hCount + 1; // hCount keeps track of the clock ticks
			
			if(reset)
				begin
					hSync  <= 0; //hSync and vSync are active low signals, enable them
					vSync  <= 0;
					hCount <= 0; // reset the horizontal count
					vCount <= 0; // reset vertical line count
					hPixel <= 0;
					vPixel <= 0;
				end
			else
				begin
					//HSYNC
					// keep hSync low for the necessary pulse width
					if(hCount < 12'd96)
						begin
							hSync  <= 0;
						end
					// wait for the pulse width (96 clk ticks) + back porch (48 clk ticks) = 144 clock ticks
					else if(hCount >= 12'd143 && hCount < 12'd784)
						begin
							//enable the bright for the VGA screen
							bright <= 1;
							//increment your horizontal pixel count
							hPixel <= hPixel + 1;
						end
					// if hCount is 800 clock ticks
					else if(hCount >= 12'd799)
						begin
							hCount <= 0;
							hSync  <= 0;
							//as long as vSync is high, increment the verticall pixel count at this point
							if(vSync == 1'b1)
								vPixel <= vPixel + 1;
							//increment vCount
							vCount <= vCount + 1;
						end
					
					//VSYNC
					// keep vSync low for the necessary pulse width
					if(vCount < 12'd2)
						begin
							vSync  <= 0;
						end
					// if vCount is 521 lines
					else if(vCount >= 12'd520)
						begin
							vCount <= 0;
							vPixel <= 0;
							vSync <= 0;
						end
				end
		end // end always block
		
	
	//25Mhz pulse generator	
	always @(posedge clk100M) //clk100M connects to pin V10
	begin	
		if (reset) // reset is of the highest priority
			begin
				count <= 0;
				clk25M  <= 0;
			end
		else if (count == 2'b11) // always check if the counter has reached defined time (4 clk ticks)
			begin
				count <= 0; // if the counter is at defined time, set it back to zero
				clk25M  <= 1;
			end
		else 
			begin
				count <= count + 1; //always add one to the counter.
				clk25M <= 1'b0; // clk25M is 0 while counting
			end
	end // end of always block

endmodule
