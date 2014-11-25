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
    work_m_00000000003593893377_1957175458_init();
    work_m_00000000003410004601_1011995634_init();
    work_m_00000000001061140655_1273460063_init();
    work_m_00000000003220841453_0254784918_init();
    work_m_00000000000331293137_3183367990_init();
    work_m_00000000000405339350_0886308060_init();
    work_m_00000000000266688026_1277932046_init();
    work_m_00000000002354817728_2412880366_init();
    work_m_00000000002723905768_1873147415_init();
    work_m_00000000003770283007_4003945793_init();
    work_m_00000000001329299489_2699662195_init();
    work_m_00000000000087620151_0224520526_init();
    work_m_00000000001683569339_3326707911_init();
    work_m_00000000000065128438_0255197037_init();
    work_m_00000000002453190951_3082083525_init();
    work_m_00000000000295931634_3848234884_init();
    work_m_00000000003386722771_0192370499_init();
    work_m_00000000002568958442_2000479223_init();
    work_m_00000000000907418521_2409396360_init();
    work_m_00000000001409208655_4268516984_init();
    work_m_00000000002427877511_2777006776_init();
    work_m_00000000000530980779_2843366915_init();
    work_m_00000000001873929154_0622990137_init();
    work_m_00000000004134447467_2073120511_init();


    xsi_register_tops("work_m_00000000001873929154_0622990137");
    xsi_register_tops("work_m_00000000004134447467_2073120511");


    return xsi_run_simulation(argc, argv);

}
