/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

#include "xsi.h"

struct XSI_INFO xsi_info;



int main(int argc, char **argv)
{
    xsi_init_design(argc, argv);
    xsi_register_info(&xsi_info);

    xsi_register_min_prec_unit(-12);
    work_m_00000000000331293137_1989334135_init();
    work_m_00000000000884611219_1957175458_init();
    work_m_00000000003410004601_1011995634_init();
    work_m_00000000001061140655_1273460063_init();
    work_m_00000000002619627620_0254784918_init();
    work_m_00000000000331293137_3183367990_init();
    work_m_00000000000405339350_0886308060_init();
    work_m_00000000000266688026_1277932046_init();
    work_m_00000000002354817728_2412880366_init();
    work_m_00000000000119216174_1873147415_init();
    work_m_00000000003770283007_4003945793_init();
    work_m_00000000001329299489_2699662195_init();
    work_m_00000000000087620151_0224520526_init();
    work_m_00000000002619795149_3326707911_init();
    work_m_00000000000065128438_0255197037_init();
    work_m_00000000000959569272_3082083525_init();
    work_m_00000000000295931634_3848234884_init();
    work_m_00000000003386722771_0192370499_init();
    work_m_00000000002835520253_2000479223_init();
    work_m_00000000000303163790_2409396360_init();
    work_m_00000000001409208655_4268516984_init();
    work_m_00000000002427877511_2777006776_init();
    unisims_ver_m_00000000001946988858_2297623829_init();
    unisims_ver_m_00000000002399568039_2282143210_init();
    unisims_ver_m_00000000000740258969_3897995058_init();
    unisims_ver_m_00000000000740258969_1625843133_init();
    unisims_ver_m_00000000003131622635_0225263307_init();
    unisims_ver_m_00000000002922998384_2845851632_init();
    unisims_ver_m_00000000003266096158_2593380106_init();
    work_m_00000000001262381101_0984201359_init();
    work_m_00000000003718217989_2843366915_init();
    work_m_00000000001873929154_0622990137_init();
    work_m_00000000004134447467_2073120511_init();


    xsi_register_tops("work_m_00000000001873929154_0622990137");
    xsi_register_tops("work_m_00000000004134447467_2073120511");


    return xsi_run_simulation(argc, argv);

}
