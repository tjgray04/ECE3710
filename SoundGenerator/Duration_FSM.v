`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: Matthew Humphries
// 
// Create Date:    15:39:33 04/24/2013 
// Design Name: 
// Module Name:    Duration_FSM 
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
module Duration_FSM(
		input clk,clr,enable,
		input [2:0]duration,
		output reg nextNote
    );

//Define state parameters
parameter fetch=0;
parameter quarter=1;
parameter eigth=2;
parameter third=3;
parameter sixteenth=4;
parameter sixth = 5;

//Define registers
reg [2:0]PS,NS;		//State registers
reg ended;				//Register to hold value to indicate if the duration has ended
reg [6:0]count = 1;	//Register to hold count

//Present State
always@(posedge clk)
  begin
    if(clr)
	   PS<=fetch;
	 else
	   PS<=NS;
  end

//Next state
always@(*)
  begin
    case(PS)
      fetch: NS=duration;
		quarter: NS=(ended)?fetch:quarter;			//If the note is done playing go fetch another note. Otherwise stay in the same state.
		eigth: NS=(ended)?fetch:eigth;
		third: NS=(ended)?fetch:third;
		sixteenth: NS=(ended)?fetch:sixteenth;
		sixth: NS=(ended)?fetch:sixth;
		default NS=fetch;
	 endcase
  end

//Counter
always@(posedge clk)
  begin
    case(PS)
		fetch: 
		  begin
		    ended<=0;
		    count<=0; 
		  end
		quarter:
		  begin
		    if(count==100)		//If count has been reached, indicate that the end has been reached.
		      begin
			     ended<=1;
				  count<=0;
			   end
		    else if(enable)		//If the pulse arrives, then continue count
			   begin
			     ended<=0;
			  	  count<=count+1;
		      end
		    else						//Otherwise retain count
		      begin
			     ended<=0;
				  count<=count;
			   end
		  end
		eigth:
		  begin
		    if(count==50)
		      begin
			     ended<=1;
				  count<=0;
			   end
		    else if(enable)
			   begin
			     ended<=0;
				  count<=count+1;
		      end
		    else
		      begin
			     ended<=0;
				  count<=count;
			   end
		  end
		third:
		  begin
		    if(count==33)
		      begin
			     ended<=1;
				  count<=0;
			   end
		    else if(enable)
			   begin
			     ended<=0;
				  count<=count+1;
		      end
		    else
		      begin
			     ended<=0;
				  count<=count;
			   end
		  end
		sixteenth:
		  begin
		    if(count==25)
		      begin
			     ended<=1;
				  count<=0;
			   end
		    else if(enable)
			   begin
			     ended<=0;
				  count<=count+1;
		      end
		    else
		      begin
			     ended<=0;
				  count<=count;
			   end
		  end
		sixth:
		  begin
		    if(count==17)
		      begin
			     ended<=1;
				  count<=0;
			   end
		    else if(enable)
			   begin
			     ended<=0;
				  count<=count+1;
		      end
		    else
		      begin
			     ended<=0;
				  count<=count;
			   end
		  end
		default
		  begin
		    ended<=0;
			 count<=count;
		  end
    endcase
  end
  
//Output
always@(*)
  begin
    case(PS)
	   fetch: nextNote=0;
		quarter: nextNote=ended;		//If the note has finished playing, say that it's ok to fetch the next note.
		eigth: nextNote=ended;
		third: nextNote=ended;
		sixteenth: nextNote=ended;
		sixth: nextNote=ended;
		default nextNote=0;
	 endcase
  end
  
endmodule
