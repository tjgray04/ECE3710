`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    09:20:42 10/15/2014 
// Design Name: 
// Module Name:    ProgramStatusRegister 
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
/* input: PSRsel comes from instruction[22:18]
*	input: PSRwrite is the PSR register outputted from the ALU
*	output: PSRcond is the 1-bit output based on PSRsel controlling the multiplexor
*/
module ProgramStatusRegister#(parameter REGBITS = 5, WIDTH = 32)
							(input [REGBITS-1:0] PSRsel, PSRwrite,
							output reg PSRcond);
							
   always @(*)
      case (PSRsel)
			// PSRwrite[4:0] = {C,L,F,Z,N}
         5'b0_0000: PSRcond = PSRwrite[1]; 	//EQ, equal, Z=1
         5'b0_0001: PSRcond = ~PSRwrite[1]; 	// NE, not equal, Z=0
         5'b0_1101: PSRcond = PSRwrite[0] | PSRwrite[1]; // GE, greater than or equal, N=1 or Z=1
         5'b0_0010: PSRcond = PSRwrite[4]; 	// CS, carry set, C=1
         5'b0_0011: PSRcond = ~PSRwrite[4]; 	// CC, carry clear, C=0
         5'b0_0100: PSRcond = PSRwrite[3]; 	// HI, higher than, L=1
         5'b0_0101: PSRcond = ~PSRwrite[3]; 	// LS, lower than or same as, L=0
         5'b0_1010: PSRcond = (~PSRwrite[3]) & (~PSRwrite[1]); // LO, lower than, L=0 and Z=0
			5'b0_1011: PSRcond = PSRwrite[3] | PSRwrite[1]; // HS, higher than or Same as, L=1 or Z=1
         5'b0_0110: PSRcond = PSRwrite[0]; 	// GT, greater than, N=1
         5'b0_0111: PSRcond = ~PSRwrite[0]; 	// LE, less than or equal, N=0
         5'b0_1000: PSRcond = PSRwrite[2]; 	// FS, flag set, F=1
         5'b0_1001: PSRcond = ~PSRwrite[2]; 	// FC, flag clear, F=0
         5'b0_1100: PSRcond = (~PSRwrite[0]) & (~PSRwrite[1]); // LT, less than, N=0 and Z=0
         5'b0_1110: PSRcond = 0; // UC, unconditional, N/A
         5'b0_1111: PSRcond = 0; // Never jump, N/A
			default:	  PSRcond = 0; // default case?
      endcase
		
endmodule
