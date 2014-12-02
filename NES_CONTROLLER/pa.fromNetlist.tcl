
# PlanAhead Launch Script for Post-Synthesis pin planning, created by Project Navigator

create_project -name NES_CONTROLLER -dir "C:/Users/u0791587/Documents/ECE3710/Project/NES_CONTROLLER/planAhead_run_2" -part xc6slx16csg324-3
set_property design_mode GateLvl [get_property srcset [current_run -impl]]
set_property edif_top_file "C:/Users/u0791587/Documents/ECE3710/Project/NES_CONTROLLER/NES_CONTROLLER.ngc" [ get_property srcset [ current_run ] ]
add_files -norecurse { {C:/Users/u0791587/Documents/ECE3710/Project/NES_CONTROLLER} }
set_param project.pinAheadLayout  yes
set_property target_constrs_file "NES_CONTROLLER.ucf" [current_fileset -constrset]
add_files [list {NES_CONTROLLER.ucf}] -fileset [get_property constrset [current_run]]
link_design
