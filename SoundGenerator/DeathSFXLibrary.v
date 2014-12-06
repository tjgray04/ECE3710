`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:01:58 12/04/2014 
// Design Name: 
// Module Name:    DeathSFXLibrary 
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
module DeathSFXLibrary#(parameter TICKBITS = 20)(
		input clk,clr,nextNote,
		output reg [2:0]duration,
		output reg [TICKBITS-1:0]ticks,
		output reg SFXended
    );

//Parameters
parameter fetch=0;
parameter quarter=1;
parameter eigth=2;
parameter third=3;
parameter sixteenth=4;
parameter sixth = 5;

//Note parameters
parameter 	C = 191110,		//One octave starting at middle C.
				D = 170265,
				E = 151685,
				F = 143172,
				G = 127551,
				A = 113636,
				B = 101239,
				REST = 0;

//Counts through song bank
reg [5:0]count = 1;
parameter totalNoteCount = 7;
always@(posedge clk)
  begin
    if(clr)
	 begin
	   count<=1;
		SFXended<=0;
	 end
	 else if(count == totalNoteCount+1)		//Reset the count if the end of the song has been reached.
	 begin
	   count<=1;
		SFXended<=1;
	 end
	 else if(nextNote)							//Only fetch the next note if the last one is done playing.
	 begin
	   count<=count+1;
		SFXended<=0;
	 end
	 else
	 begin
	   count<=count;
		SFXended<=0;
	 end
  end

//Song bank
/* The number of ticks needed to play a given note can be calculated by:
 * 		ticks = (100*10^6)/(2*freq)
 * where freq is the frequency of the desired note to be played. The ticks act as a counter that counts
 * to half of the time given by 1\freq. The output is then oscillated giving a sqare wave tone approximation.
 */
always@(*)
  begin
	 case(count)
	   1: begin duration=sixteenth; ticks=B; end
		2: begin duration=sixteenth; ticks=A; end
		3: begin duration=sixteenth; ticks=G; end
		4: begin duration=sixteenth; ticks=F; end
		5: begin duration=sixteenth; ticks=E; end
		6: begin duration=sixteenth; ticks=D; end
		7: begin duration=sixteenth; ticks=C; end
		default begin duration=fetch; ticks=0; end
	 endcase
  end
  
endmodule
