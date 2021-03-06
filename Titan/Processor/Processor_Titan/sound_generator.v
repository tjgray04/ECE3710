`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: Matthew Humphries
// 
// Create Date:    15:26:02 04/24/2013 
// Design Name: 
// Module Name:    sound_generator 
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
	module sound_generator#(parameter TICKBITS = 20)(
		input clk,clr,
		input [TICKBITS-1:0]ticks,
		output reg sound
    );


//Define a register to hold a count
reg [TICKBITS-1:0]count = 0;

always@(posedge clk)
  begin
    if(clr)			//Don't play a sound on reset
      begin
        sound<=0;
	     count<=0;
      end
    else if(count==(ticks>>1))			//The number of ticks determines the frequency. The ticks are dived by two since the clock was
	   begin							//originally 100 MHz, but switched to 50 MHz
		  sound<=~sound;				//When the count reaches the tick number, alternate the output. This creates a simple tone of the desired frequency.
		  count<=0;
		end
	 else
	   begin
		  count<=count+1'b1;			//Continue the count
		  sound<=sound;
		end
	end
  

endmodule
