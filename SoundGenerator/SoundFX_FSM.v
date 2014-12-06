`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    18:08:59 12/04/2014 
// Design Name: 
// Module Name:    SoundFX_FSM 
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
module SoundFX_FSM(input clk,clr,enable, SFXended,
		input [2:0] durationLaser, durationDeath,
		input [1:0] soundRegBits,
		output reg nextNoteLaser, nextNoteDeath, done
    );

//Define state parameters
parameter fetch=0;
parameter quarter=1;
parameter eigth=2;
parameter third=3;
parameter sixteenth=4;
parameter sixth = 5;
parameter WAIT = 6;
parameter DONE = 7;

//Define registers
reg [2:0]PS,NS;		//State registers
reg ended;				//Register to hold value to indicate if the duration has ended
reg [6:0]count = 1;	//Register to hold count

//Present State
always@(posedge clk)
  begin
    if(clr)
	   PS<=WAIT;
	 else
	   PS<=NS;
  end

//Next state
always@(*)
  begin
    case(PS)
		WAIT:
				begin
				if(soundRegBits != 0)
					NS = fetch;
				else
					NS = WAIT;
				end
      fetch: 
				begin
				if(SFXended)
					NS = DONE;
				else if(soundRegBits == 2'b11)
					NS=durationDeath;
				else
					NS=durationLaser;
				end
		quarter: 
				begin
				if(SFXended)
					NS = DONE;
				else
					NS=(ended)?fetch:quarter;			//If the note is done playing go fetch another note. Otherwise stay in the same state.
				end
		eigth:
				begin
				if(SFXended)
					NS = DONE;
				else
					NS=(ended)?fetch:eigth;
				end
		third:
				begin
				if(SFXended)
					NS = DONE;
				else
					NS=(ended)?fetch:third;
				end
		sixteenth:
				begin
				if(SFXended)
					NS = DONE;
				else
					NS=(ended)?fetch:sixteenth;
				end
		sixth:
				begin
				if(SFXended)
					NS = DONE;
				else
					NS=(ended)?fetch:sixth;
				end
		DONE: NS = WAIT;
		default NS=WAIT;
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
			 count<=0;
		  end
    endcase
  end
  
//Output
always@(*)
  begin
  nextNoteLaser = 0;
  nextNoteDeath = 0;
  done = 0;
    case(PS)
		WAIT: ;
	   fetch: ;
		quarter:		//If the note has finished playing, say that it's ok to fetch the next note.
					begin
					if(soundRegBits == 2'b11)
						nextNoteDeath = ended;
					else
						nextNoteLaser = ended;
					end
		eigth:
					begin
					if(soundRegBits == 2'b11)
						nextNoteDeath = ended;
					else
						nextNoteLaser = ended;
					end
		third:
					begin
					if(soundRegBits == 2'b11)
						nextNoteDeath = ended;
					else
						nextNoteLaser = ended;
					end
		sixteenth:
					begin
					if(soundRegBits == 2'b11)
						nextNoteDeath = ended;
					else
						nextNoteLaser = ended;
					end
		sixth:
					begin
					if(soundRegBits == 2'b11)
						nextNoteDeath = ended;
					else
						nextNoteLaser = ended;
					end
		DONE: done = 1'b1;
		default ;
	 endcase
  end
  
endmodule
