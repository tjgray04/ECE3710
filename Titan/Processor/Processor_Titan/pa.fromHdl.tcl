
# PlanAhead Launch Script for Pre-Synthesis Floorplanning, created by Project Navigator

create_project -name Processor_Titan -dir "C:/Users/u0499404/ECE3710/Processor_Titan/planAhead_run_4" -part xc6slx16csg324-3
set_param project.pinAheadLayout yes
set srcset [get_property srcset [current_run -impl]]
set_property target_constrs_file "DisplayVGA.ucf" [current_fileset -constrset]
set hdlfile [add_files [list {vgaControl.v}]]
set_property file_type Verilog $hdlfile
set_property library work $hdlfile
set hdlfile [add_files [list {CharacterROM.v}]]
set_property file_type Verilog $hdlfile
set_property library work $hdlfile
set hdlfile [add_files [list {CharacterDisplayRAM.v}]]
set_property file_type Verilog $hdlfile
set_property library work $hdlfile
set hdlfile [add_files [list {DisplayVGA.v}]]
set_property file_type Verilog $hdlfile
set_property library work $hdlfile
set_property top DisplayVGA $srcset
add_files [list {DisplayVGA.ucf}] -fileset [get_property constrset [current_run]]
open_rtl_design -part xc6slx16csg324-3
