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
static const char *ng0 = "C:/Users/u0499404/Desktop/ECE3710/Titan/Processor/Processor_Titan/CharacterDisplayRAM.v";
static const char *ng1 = "mTestRAM.dat";
static int ng2[] = {0, 0};
static int ng3[] = {4800, 0};
static int ng4[] = {1, 0};
static int ng5[] = {80, 0};



static void Initial_39_0(char *t0)
{
    char t5[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;

LAB0:    xsi_set_current_line(40, ng0);
    t1 = (t0 + 2360);
    t2 = ((char*)((ng2)));
    t3 = ((char*)((ng3)));
    t4 = ((char*)((ng4)));
    memset(t5, 0, 8);
    xsi_vlog_signed_minus(t5, 32, t3, 32, t4, 32);
    xsi_vlogfile_readmemb(ng1, 0, t1, 1, *((unsigned int *)t2), 1, *((unsigned int *)t5));

LAB1:    return;
}

static void Cont_50_1(char *t0)
{
    char t6[8];
    char t7[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    unsigned int t15;
    unsigned int t16;
    char *t17;
    unsigned int t18;
    unsigned int t19;
    char *t20;

LAB0:    t1 = (t0 + 3528U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(50, ng0);
    t2 = (t0 + 1480U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng5)));
    t4 = (t0 + 1640U);
    t5 = *((char **)t4);
    memset(t6, 0, 8);
    xsi_vlog_unsigned_multiply(t6, 32, t2, 32, t5, 6);
    memset(t7, 0, 8);
    xsi_vlog_unsigned_add(t7, 32, t3, 7, t6, 32);
    t4 = (t0 + 4192);
    t8 = (t4 + 56U);
    t9 = *((char **)t8);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    memset(t11, 0, 8);
    t12 = 8191U;
    t13 = t12;
    t14 = (t7 + 4);
    t15 = *((unsigned int *)t7);
    t12 = (t12 & t15);
    t16 = *((unsigned int *)t14);
    t13 = (t13 & t16);
    t17 = (t11 + 4);
    t18 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t18 | t12);
    t19 = *((unsigned int *)t17);
    *((unsigned int *)t17) = (t19 | t13);
    xsi_driver_vfirst_trans(t4, 0, 12);
    t20 = (t0 + 4096);
    *((int *)t20) = 1;

LAB1:    return;
}

static void Cont_52_2(char *t0)
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
    unsigned int t18;
    unsigned int t19;
    char *t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    unsigned int t24;
    unsigned int t25;
    char *t26;

LAB0:    t1 = (t0 + 3776U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(52, ng0);
    t2 = (t0 + 2360);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t6 = (t0 + 2360);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 2360);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = (t0 + 1960U);
    t13 = *((char **)t12);
    xsi_vlog_generic_get_array_select_value(t5, 7, t4, t8, t11, 2, 1, t13, 13, 2);
    t12 = (t0 + 4256);
    t14 = (t12 + 56U);
    t15 = *((char **)t14);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    memset(t17, 0, 8);
    t18 = 127U;
    t19 = t18;
    t20 = (t5 + 4);
    t21 = *((unsigned int *)t5);
    t18 = (t18 & t21);
    t22 = *((unsigned int *)t20);
    t19 = (t19 & t22);
    t23 = (t17 + 4);
    t24 = *((unsigned int *)t17);
    *((unsigned int *)t17) = (t24 | t18);
    t25 = *((unsigned int *)t23);
    *((unsigned int *)t23) = (t25 | t19);
    xsi_driver_vfirst_trans(t12, 0, 6);
    t26 = (t0 + 4112);
    *((int *)t26) = 1;

LAB1:    return;
}


extern void work_m_00000000003155595396_2409396360_init()
{
	static char *pe[] = {(void *)Initial_39_0,(void *)Cont_50_1,(void *)Cont_52_2};
	xsi_register_didat("work_m_00000000003155595396_2409396360", "isim/CharacterDisplayRAM_TestBench_isim_beh.exe.sim/work/m_00000000003155595396_2409396360.didat");
	xsi_register_executes(pe);
}
