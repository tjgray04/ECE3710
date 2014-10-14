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
    work_m_00000000003164023517_1273460063_init();
    work_m_00000000002891810440_0254784918_init();
    work_m_00000000003195882263_0886308060_init();
    work_m_00000000000331293137_1989334135_init();
    work_m_00000000002027097658_1277932046_init();
    work_m_00000000002354817728_2412880366_init();
    work_m_00000000001624653582_1873147415_init();
    work_m_00000000001529873856_3498096924_init();
    work_m_00000000004134447467_2073120511_init();


    xsi_register_tops("work_m_00000000001529873856_3498096924");
    xsi_register_tops("work_m_00000000004134447467_2073120511");


    return xsi_run_simulation(argc, argv);

}
