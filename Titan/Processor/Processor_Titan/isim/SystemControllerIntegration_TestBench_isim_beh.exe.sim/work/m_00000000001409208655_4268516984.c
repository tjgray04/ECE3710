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
static const char *ng0 = "C:/Users/Steve Brown/Desktop/ECE3710/Titan/Processor/Processor_Titan/CharacterROM.v";
static const char *ng1 = "GlyphLibrary.dat";
static int ng2[] = {0, 0};
static int ng3[] = {2, 0};
static int ng4[] = {1, 0};



static void Initial_34_0(char *t0)
{
    char t6[8];
    char t7[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;

LAB0:    xsi_set_current_line(35, ng0);
    t1 = (t0 + 2472);
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

static void Cont_45_1(char *t0)
{
    char t5[8];
    char t12[8];
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
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    unsigned int t24;
    unsigned int t25;
    char *t26;
    unsigned int t27;
    unsigned int t28;
    char *t29;

LAB0:    t1 = (t0 + 3640U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(45, ng0);
    t2 = (t0 + 2472);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t6 = (t0 + 2472);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 2472);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t13 = (t0 + 1592U);
    t14 = *((char **)t13);
    t13 = (t0 + 1752U);
    t15 = *((char **)t13);
    t13 = (t0 + 1912U);
    t16 = *((char **)t13);
    xsi_vlogtype_concat(t12, 13, 13, 3U, t16, 7, t15, 3, t14, 3);
    xsi_vlog_generic_get_array_select_value(t5, 8, t4, t8, t11, 2, 1, t12, 13, 2);
    t13 = (t0 + 4040);
    t17 = (t13 + 56U);
    t18 = *((char **)t17);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    memset(t20, 0, 8);
    t21 = 255U;
    t22 = t21;
    t23 = (t5 + 4);
    t24 = *((unsigned int *)t5);
    t21 = (t21 & t24);
    t25 = *((unsigned int *)t23);
    t22 = (t22 & t25);
    t26 = (t20 + 4);
    t27 = *((unsigned int *)t20);
    *((unsigned int *)t20) = (t27 | t21);
    t28 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t28 | t22);
    xsi_driver_vfirst_trans(t13, 0, 7);
    t29 = (t0 + 3960);
    *((int *)t29) = 1;

LAB1:    return;
}


extern void work_m_00000000001409208655_4268516984_init()
{
	static char *pe[] = {(void *)Initial_34_0,(void *)Cont_45_1};
	xsi_register_didat("work_m_00000000001409208655_4268516984", "isim/SystemControllerIntegration_TestBench_isim_beh.exe.sim/work/m_00000000001409208655_4268516984.didat");
	xsi_register_executes(pe);
}
