`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    17:54:32 12/04/2014 
// Design Name: 
// Module Name:    ticksMux 
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
module ticksMux#(parameter WIDTH = 20)(
		input select,
		input [WIDTH-1:0] arg1, arg2,
		output [WIDTH-1:0] result
    );

assign result = select ? arg2: arg1;

endmodule
