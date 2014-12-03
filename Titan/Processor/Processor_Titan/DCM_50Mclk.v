`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:50:53 12/02/2014 
// Design Name: 
// Module Name:    DCM_50Mclk 
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
module DCM_50Mclk(
	input clk, reset,
	output clk_100M, clk_50M, locked
    );

 DCM_50M dcm_50M(
	 // Clock in ports
    .CLK_IN1(clk),      	// 100MHz xtal clock from FPGA
    // Clock out ports
	 .CLK_OUT1(clk_100M),
    .CLK_OUT2(clk_50M),    // 50MHz clock output
    // Status and control signals
    .RESET(reset),			// system reset signal
    .LOCKED());      // 0 = DCM is attempting to lock onto CLKIN frequency. DCM clock outputs
									// are not valid.
									// 1 = DCM is locked onto CLKIN frequency. DCM clock outputs are valid

endmodule

