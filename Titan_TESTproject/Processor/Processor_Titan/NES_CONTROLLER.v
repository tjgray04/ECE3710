`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    14:36:43 10/28/2014 
// Design Name: 
// Module Name:    NES_CONTROLLER 
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
module NES_CONTROLLER(
		input clock, reset, data, //Input a clock , reset and data. The data line will be the output line containing the data from the controller.
		output reg latch, pulse, 
		output reg [7:0] controller_data
    );

	//Initialize the controller data
	initial
	begin
		controller_data = 8'b00000000;
	end
	
	//Instantiate a register to conatin the count that will be send out all the control signals.
	reg [21:0] count; //was 31
	
	/*This always block will take care the the synchronous portion of NES controller,
	 *every 1/60 seconds a latch pulse will be sent, 18us later the pulse signal will 
	 *toggle with every 6us. the negative edge of the pulse will be used to latch the data.
	 *
	 */
	always@(count)
	begin
			if (count < 1200)
			begin
				latch <= 1'b1;
				pulse <= 1'b1;
			end
			
			else if ((count >= 1200) && (count < 1800))
			begin
			latch <= 1'b0;	
			pulse <= 1'b0;
			end
			
			else if ((count >= 1800) && (count < 2400))
			begin
			latch <= 1'b0;
         pulse <= 1'b1;
			end
			
			else if ((count >= 2400) && (count < 3000))
			begin	
			latch <= 1'b0;
			pulse <= 1'b0;
			end
			
			else if ((count >= 3000) && (count < 3600))
			begin
			latch <= 1'b0;
			pulse <= 1'b1;
			end
			
			else if ((count >= 3600) && (count < 4200))
			begin
			latch <= 1'b0;
			pulse <= 1'b0;
			end
			
			else if ((count >= 4200) && (count < 4800))
			begin
			latch <= 1'b0;
			pulse <= 1'b1;
			end
			
			else if ((count >= 4800) && (count < 5400))
			begin

			latch <= 1'b0;
			pulse <= 1'b0;
			end
			
			else if ((count >= 5400) && (count < 6000))
			begin
			latch <= 1'b0;
			pulse <= 1'b1;
			end
			
			else if ((count >= 6000) && (count < 6600))
			begin
			latch <= 1'b0;
			pulse <= 1'b0;	
			end
			
			else if ((count >= 6600) && (count < 7200))
			begin
			latch <= 1'b0;
			pulse <= 1'b1;			
			end
			
			else if ((count >= 7200) && (count < 7800))
			begin
			latch <= 1'b0;
			pulse <= 1'b0;
			end
			
			else if ((count >= 7800) && (count < 8400))
			begin
			latch <= 1'b0;		
			pulse <= 1'b1;	
			end
			
			else if ((count >= 8400) && (count < 9000))
			begin
			latch <= 1'b0;
			pulse <= 1'b0;
			end
			
			else if ((count >= 9000) && (count < 9600))
			begin
			latch <= 1'b0;
			pulse <= 1'b1;
			end
			
			else if ((count >= 9600) && (count < 10200))
			begin
			latch <= 1'b0;
			pulse <= 1'b0;
			end
			
			else
			begin
				latch <= 1'b0;
				pulse <= 1'b1;
			end
	end // end of always block


/*This always block will capture the data sent from the controller on the negative edge of the pulse, the controller by nature
 *is active low so the data will be inverted and stored into an output register
 *
 */
always@(negedge pulse)
begin
		//Capture A
   if ((count >= 1200) && (count < 1800))
		controller_data[7] = ~data;
		//Capture B
	else if((count >= 2400) && (count < 3000))
		controller_data[6] = ~data;
		//Caputre Select
	else if((count >= 3600) && (count < 4200))
		controller_data[5] = ~data;	
	//Caputre Start
	else if((count >= 4800) && (count <5400))
		controller_data[4] = ~data;
	//Caputre Up			
	else if((count >= 6000) && (count < 6600))
		controller_data[3] = ~data;
	//Caputre Down
	else if((count >= 7200) && (count < 7800))
		controller_data[2] = ~data;	
	//Caputre Left
	else if((count >= 8400) && (count < 9000))
		controller_data[1] = ~data;	
	//Caputre Right
	else if((count >= 9600) &&(count < 10200))
		controller_data[0] = ~data;
end



/*This always block will take care of the counter that will be used to control.
 *
 */
always@(posedge clock)
begin
	//If a reset occurs reset the counter.
	if(reset)
		count <= 32'b0;
	//Else if the counter has reached the maximum value, reset the counter
	else if(count == 32'd1666667)
		count<= 32'b0;
	//Else increase the counter.
	else
		count <= count + 1;
end

endmodule
