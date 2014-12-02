
# PlanAhead Launch Script for Pre-Synthesis Floorplanning, created by Project Navigator

create_project -name SoundGenerator -dir "C:/Users/u0655172/Desktop/ECE3710/SoundGenerator/planAhead_run_2" -part xc6slx16csg324-3
set_param project.pinAheadLayout yes
set srcset [get_property srcset [current_run -impl]]
set_property target_constrs_file "MusicSynthesizer.ucf" [current_fileset -constrset]
set hdlfile [add_files [list {sound_generator.v}]]
set_property file_type Verilog $hdlfile
set_property library work $hdlfile
set hdlfile [add_files [list {song_library.v}]]
set_property file_type Verilog $hdlfile
set_property library work $hdlfile
set hdlfile [add_files [list {Pulse_generator.v}]]
set_property file_type Verilog $hdlfile
set_property library work $hdlfile
set hdlfile [add_files [list {Duration_FSM.v}]]
set_property file_type Verilog $hdlfile
set_property library work $hdlfile
set hdlfile [add_files [list {SoundGenerator.v}]]
set_property file_type Verilog $hdlfile
set_property library work $hdlfile
set_property top SoundGenerator $srcset
add_files [list {MusicSynthesizer.ucf}] -fileset [get_property constrset [current_run]]
open_rtl_design -part xc6slx16csg324-3
