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
    work_m_00000000002411880466_3019199309_init();
    work_m_00000000002568958442_2000479223_init();
    work_m_00000000000303163790_2409396360_init();
    work_m_00000000001409208655_4268516984_init();
    work_m_00000000002427877511_2777006776_init();
    work_m_00000000004225600119_2497196478_init();
    work_m_00000000001127739469_3014389021_init();
    work_m_00000000004134447467_2073120511_init();


    xsi_register_tops("work_m_00000000001127739469_3014389021");
    xsi_register_tops("work_m_00000000004134447467_2073120511");


    return xsi_run_simulation(argc, argv);

}
