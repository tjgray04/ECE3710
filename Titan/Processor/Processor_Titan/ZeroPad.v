`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    12:46:06 10/20/2014 
// Design Name: 
// Module Name:    ZeroPad 
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
module ZeroPad#(parameter WIDTH = 32)
	(input data_in, output [WIDTH-1:0] data_out);
	
	assign data_out = {31'b0,data_in};

endmodule