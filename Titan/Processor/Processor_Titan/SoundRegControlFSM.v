`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    17:37:06 12/04/2014 
// Design Name: 
// Module Name:    SoundRegControlFSM 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: This finite state machine controls what gets written to the sound register
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module SoundRegControlFSM(
		input clk, reset, done, CPUwriteEn,
		input [1:0] writeDataIN,
		output reg writeEn,
		output reg [1:0] writeDataOUT
    );

//Define parameter
parameter DEATH = 2'b11;

//Define state parameters
parameter ENABLED = 3'b000;
parameter DISABLED = 3'b0001;
parameter TRANS = 3'b010;
parameter DISABLED2 = 3'b011;
parameter REENABLE = 3'b100;

//Define state registers
reg [2:0] PS,NS;

//Update Present State
always@(posedge clk)
begin
	if(reset)
		PS <= ENABLED;
	else
		PS <= NS;
end

//Next state
always@(*)
begin
	case(PS)
		ENABLED:		//In this state the processor can write to the sound register
					begin
					if((CPUwriteEn == 1'b1) && (writeDataIN != 0))		//If a sound effect is written, then the processor can only overwrite the sound register with another death sound effect request
						NS <= DISABLED;
					else
						NS <= ENABLED;
					end
		DISABLED:		//Writes by the processor that aren't death sound effect requests are ignored
					begin
					if(done == 1'b1)
						NS <= REENABLE;		//If the sound effect finished playing, reenable processor writing
					else if((CPUwriteEn == 1'b1) && (writeDataIN == 2'b11))
						NS <= TRANS;
					else
						NS <= DISABLED;
					end
		TRANS: NS <= DISABLED2;		//An intermediate state used to write a death sound effect request to the sound register
		DISABLED2:					//The death sound effect cannot be interrupted until it has finished except by another death sound effect request
					begin
					if(done == 1'b1)
						NS <= REENABLE;		//When the death sound effect has finished, writing from the processor is reenabled
					else
						NS <= DISABLED2;
					end
		REENABLE: NS <= ENABLED;
		default: NS <= ENABLED;
	endcase
end

//Outputs
always@(*)
begin
	case(PS)
		ENABLED:	//The module acts transparent and the processor can write to the sound register
					begin
					writeEn <= CPUwriteEn;
					writeDataOUT <= writeDataIN;
					end
		DISABLED:	//There is no writing to the sound register
					begin
					writeEn <= 0;
					writeDataOUT <= writeDataIN;
					end
		TRANS:		//A death sound effect request is written to the sound register
					begin
					writeEn <= 1;
					writeDataOUT <= DEATH;
					end
		DISABLED2:	//No writes are allowed except for a death sound effect request
					begin
					if((CPUwriteEn == 1'b1) && (writeDataIN == 2'b11))
					 begin
					 	writeEn <= 1;
						writeDataOUT <= DEATH;
					 end
					else
					 begin
						writeEn <= 0;
						writeDataOUT <= writeDataIN;
					 end
					end
		REENABLE:	//Writing becomes reeabled after a sound effect has finished playing
					begin
					writeEn <= 1'b1;
					writeDataOUT <= 0;
					end
		default:
					begin
					writeEn <= CPUwriteEn;
					writeDataOUT <= writeDataIN;
					end
	endcase
end

endmodule
