gui_open_window Wave
gui_sg_create DCM_100M_group
gui_list_add_group -id Wave.1 {DCM_100M_group}
gui_sg_addsignal -group DCM_100M_group {DCM_100M_tb.test_phase}
gui_set_radix -radix {ascii} -signals {DCM_100M_tb.test_phase}
gui_sg_addsignal -group DCM_100M_group {{Input_clocks}} -divider
gui_sg_addsignal -group DCM_100M_group {DCM_100M_tb.CLK_IN1}
gui_sg_addsignal -group DCM_100M_group {{Output_clocks}} -divider
gui_sg_addsignal -group DCM_100M_group {DCM_100M_tb.dut.clk}
gui_list_expand -id Wave.1 DCM_100M_tb.dut.clk
gui_sg_addsignal -group DCM_100M_group {{Status_control}} -divider
gui_sg_addsignal -group DCM_100M_group {DCM_100M_tb.RESET}
gui_sg_addsignal -group DCM_100M_group {DCM_100M_tb.LOCKED}
gui_sg_addsignal -group DCM_100M_group {{Counters}} -divider
gui_sg_addsignal -group DCM_100M_group {DCM_100M_tb.COUNT}
gui_sg_addsignal -group DCM_100M_group {DCM_100M_tb.dut.counter}
gui_list_expand -id Wave.1 DCM_100M_tb.dut.counter
gui_zoom -window Wave.1 -full
