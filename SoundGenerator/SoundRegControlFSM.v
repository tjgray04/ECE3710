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
// Description: 
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
		ENABLED:
					begin
					if((CPUwriteEn == 1'b1) && (writeDataIN != 0))
						NS <= DISABLED;
					else
						NS <= ENABLED;
					end
		DISABLED:
					begin
					if(done == 1'b1)
						NS <= REENABLE;
					else if((CPUwriteEn == 1'b1) && (writeDataIN == 2'b11))
						NS <= TRANS;
					else
						NS <= DISABLED;
					end
		TRANS: NS <= DISABLED2;
		DISABLED2:
					begin
					if(done == 1'b1)
						NS <= REENABLE;
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
		ENABLED:
					begin
					writeEn <= CPUwriteEn;
					writeDataOUT <= writeDataIN;
					end
		DISABLED:
					begin
					writeEn <= 0;
					writeDataOUT <= writeDataIN;
					end
		TRANS:
					begin
					writeEn <= 1;
					writeDataOUT <= DEATH;
					end
		DISABLED2:
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
		REENABLE:
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
