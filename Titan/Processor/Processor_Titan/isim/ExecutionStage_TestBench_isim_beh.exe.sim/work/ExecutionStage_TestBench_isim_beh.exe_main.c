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
    work_m_00000000002891810440_0254784918_init();
    work_m_00000000003195882263_0886308060_init();
    work_m_00000000000331293137_1989334135_init();
    work_m_00000000002027097658_1277932046_init();
    work_m_00000000000274598688_1873147415_init();
    work_m_00000000002002461833_2738423093_init();
    work_m_00000000004134447467_2073120511_init();


    xsi_register_tops("work_m_00000000002002461833_2738423093");
    xsi_register_tops("work_m_00000000004134447467_2073120511");


    return xsi_run_simulation(argc, argv);

}
