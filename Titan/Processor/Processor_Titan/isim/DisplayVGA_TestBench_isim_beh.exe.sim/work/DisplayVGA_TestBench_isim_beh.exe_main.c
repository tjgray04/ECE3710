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
    work_m_00000000002568958442_2000479223_init();
    work_m_00000000001359290602_2409396360_init();
    work_m_00000000000625554577_4268516984_init();
    work_m_00000000001032739765_2777006776_init();
    work_m_00000000002679762258_0801417739_init();
    work_m_00000000004134447467_2073120511_init();


    xsi_register_tops("work_m_00000000002679762258_0801417739");
    xsi_register_tops("work_m_00000000004134447467_2073120511");


    return xsi_run_simulation(argc, argv);

}
