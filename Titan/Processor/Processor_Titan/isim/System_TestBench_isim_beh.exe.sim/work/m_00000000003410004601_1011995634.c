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

/* This file is designed for use with ISim build 0x7708f090 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "C:/Users/u0499404/Desktop/ECE3710/Titan/Processor/Processor_Titan/InstructionROM.v";
static const char *ng1 = "ControllerTest.dat";
static int ng2[] = {0, 0};
static int ng3[] = {2, 0};
static int ng4[] = {1, 0};



static void Initial_35_0(char *t0)
{
    char t6[8];
    char t7[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;

LAB0:    xsi_set_current_line(36, ng0);

LAB2:    xsi_set_current_line(41, ng0);
    t1 = (t0 + 1880);
    t2 = ((char*)((ng2)));
    t3 = ((char*)((ng3)));
    t4 = (t0 + 608);
    t5 = *((char **)t4);
    memset(t6, 0, 8);
    xsi_vlog_signed_power(t6, 32, t3, 32, t5, 32, 1);
    t4 = ((char*)((ng4)));
    memset(t7, 0, 8);
    xsi_vlog_signed_minus(t7, 32, t6, 32, t4, 32);
    xsi_vlogfile_readmemb(ng1, 0, t1, 1, *((unsigned int *)t2), 1, *((unsigned int *)t7));

LAB1:    return;
}

static void Cont_48_1(char *t0)
{
    char t5[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;

LAB0:    t1 = (t0 + 3048U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(48, ng0);
    t2 = (t0 + 1880);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t6 = (t0 + 1880);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 1880);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = (t0 + 1320U);
    t13 = *((char **)t12);
    xsi_vlog_generic_get_array_select_value(t5, 32, t4, t8, t11, 2, 1, t13, 32, 2);
    t12 = (t0 + 3448);
    t14 = (t12 + 56U);
    t15 = *((char **)t14);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    memcpy(t17, t5, 8);
    xsi_driver_vfirst_trans(t12, 0, 31);
    t18 = (t0 + 3368);
    *((int *)t18) = 1;

LAB1:    return;
}


extern void work_m_00000000003410004601_1011995634_init()
{
	static char *pe[] = {(void *)Initial_35_0,(void *)Cont_48_1};
	xsi_register_didat("work_m_00000000003410004601_1011995634", "isim/System_TestBench_isim_beh.exe.sim/work/m_00000000003410004601_1011995634.didat");
	xsi_register_executes(pe);
}
