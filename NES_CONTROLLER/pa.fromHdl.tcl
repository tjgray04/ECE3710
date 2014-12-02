
# PlanAhead Launch Script for Pre-Synthesis Floorplanning, created by Project Navigator

create_project -name NES_CONTROLLER -dir "C:/Users/u0791587/Documents/ECE3710/Project/NES_CONTROLLER/planAhead_run_2" -part xc6slx16csg324-3
set_param project.pinAheadLayout yes
set srcset [get_property srcset [current_run -impl]]
set_property target_constrs_file "NES_CONTROLLER.ucf" [current_fileset -constrset]
set hdlfile [add_files [list {NES_CONTROLLER.v}]]
set_property file_type Verilog $hdlfile
set_property library work $hdlfile
set_property top NES_CONTROLLER $srcset
add_files [list {NES_CONTROLLER.ucf}] -fileset [get_property constrset [current_run]]
open_rtl_design -part xc6slx16csg324-3
