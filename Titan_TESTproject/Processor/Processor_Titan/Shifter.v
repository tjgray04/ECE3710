`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:46:23 10/06/2014 
// Design Name: 
// Module Name:    Shifter 
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
/* SHIFTER
*	input: arg, data to be shifted, Rs from RegFile
*	input: shiftamount, amount to shift data by, from ShifterMUX
*	input: shifttype, logic (0) or arithmetic (1) from Logic Controller
*	output: result, shifted data
*/
module Shifter#(parameter WIDTH = 32)
					(input [WIDTH-1:0] arg, shiftamount,
					 input shifttype,
					 output reg [WIDTH-1:0] result);

	//Two's complement shift amount magnitude calculator
	wire [WIDTH-1:0] shiftmag;
	assign shiftmag = (~shiftamount) + 1;

	//Shifter behaviour
	always@(*)
	begin
		// Perform a logical shift when shifttype is a zero
		if(shifttype == 0)	//lsh and lshi
		begin
			// if the shift amount is greater than or equal to zero as a signed number, shift to the right
			if($signed(shiftamount) >= 0)
				result = arg << shiftamount;
			// else, the shift amount would be less than zero, causing a shift to the left	
			else
				result = arg >> shiftmag;	
		end
		// Perform an arithmetic shift when shifttype is a one
		else if(shifttype)
		begin
			// if the shift amount is greater than or equal to zero as a signed number, shift to the right
			if($signed(shiftamount) >= 0)	//ash and ashi
				result = (arg <<< shiftamount);
			// else, the shift amount would be less than zero, causing a shift to the left	
			else
			begin
				result = $signed(arg) >>> shiftmag;
			end
		end
	end
	

endmodule
