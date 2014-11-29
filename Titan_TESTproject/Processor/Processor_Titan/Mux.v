`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    17:10:16 10/01/2014 
// Design Name: 
// Module Name:    Mux 
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
module Mux#(parameter WIDTH = 32)(
		input[WIDTH-1:0] d0, d1,
		input select,
		output[WIDTH-1:0] out
    );

	assign out = select ? d1 : d0;

endmodule
