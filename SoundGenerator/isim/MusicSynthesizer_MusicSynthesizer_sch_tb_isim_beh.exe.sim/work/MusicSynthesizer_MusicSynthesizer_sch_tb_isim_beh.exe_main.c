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
    work_m_00000000002744959448_3200154841_init();
    work_m_00000000001183767618_2544418878_init();
    work_m_00000000003952210785_3526623869_init();
    work_m_00000000000890759423_3435472415_init();
    work_m_00000000003076989952_2079158199_init();
    work_m_00000000001877795847_0067902056_init();
    work_m_00000000002291390032_2971184282_init();
    work_m_00000000004134447467_2073120511_init();


    xsi_register_tops("work_m_00000000002291390032_2971184282");
    xsi_register_tops("work_m_00000000004134447467_2073120511");


    return xsi_run_simulation(argc, argv);

}
