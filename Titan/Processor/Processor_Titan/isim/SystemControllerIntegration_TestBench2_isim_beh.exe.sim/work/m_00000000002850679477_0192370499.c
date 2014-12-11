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
static const char *ng0 = "C:/Users/Steve Brown/Desktop/ECE3710/Titan/Processor/Processor_Titan/IOMemory.v";
static int ng1[] = {0, 0};
static unsigned int ng2[] = {3U, 0U};
static unsigned int ng3[] = {1U, 0U};
static unsigned int ng4[] = {2U, 0U};
static unsigned int ng5[] = {0U, 0U};



static void Initial_44_0(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(45, ng0);

LAB2:    xsi_set_current_line(46, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 5560);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 8);

LAB1:    return;
}

static void Always_69_1(char *t0)
{
    char t16[8];
    char t30[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    char *t17;
    char *t18;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    char *t26;
    int t27;
    char *t28;
    char *t29;

LAB0:    t1 = (t0 + 7048U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(69, ng0);
    t2 = (t0 + 7616);
    *((int *)t2) = 1;
    t3 = (t0 + 7080);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(70, ng0);

LAB5:    xsi_set_current_line(71, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t0 + 5720);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 2, 0LL);
    xsi_set_current_line(72, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 5880);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(73, ng0);
    t2 = (t0 + 1640U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(74, ng0);

LAB9:    xsi_set_current_line(75, ng0);
    t4 = (t0 + 1800U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t11 = *((unsigned int *)t4);
    t12 = (~(t11));
    t13 = *((unsigned int *)t5);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB10;

LAB11:
LAB12:    goto LAB8;

LAB10:    xsi_set_current_line(76, ng0);

LAB13:    xsi_set_current_line(77, ng0);
    t17 = (t0 + 2120U);
    t18 = *((char **)t17);
    memset(t16, 0, 8);
    t17 = (t16 + 4);
    t19 = (t18 + 4);
    t20 = *((unsigned int *)t18);
    t21 = (t20 >> 0);
    *((unsigned int *)t16) = t21;
    t22 = *((unsigned int *)t19);
    t23 = (t22 >> 0);
    *((unsigned int *)t17) = t23;
    t24 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t24 & 16383U);
    t25 = *((unsigned int *)t17);
    *((unsigned int *)t17) = (t25 & 16383U);

LAB14:    t26 = ((char*)((ng2)));
    t27 = xsi_vlog_unsigned_case_compare(t16, 14, t26, 14);
    if (t27 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng3)));
    t27 = xsi_vlog_unsigned_case_compare(t16, 14, t2, 14);
    if (t27 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng4)));
    t27 = xsi_vlog_unsigned_case_compare(t16, 14, t2, 14);
    if (t27 == 1)
        goto LAB19;

LAB20:
LAB22:
LAB21:    xsi_set_current_line(97, ng0);

LAB27:    xsi_set_current_line(98, ng0);
    t2 = (t0 + 5560);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 5560);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 8, 0LL);

LAB23:    goto LAB12;

LAB15:    xsi_set_current_line(80, ng0);

LAB24:    xsi_set_current_line(82, ng0);
    t28 = ((char*)((ng1)));
    t29 = (t0 + 5560);
    xsi_vlogvar_wait_assign_value(t29, t28, 0, 0, 8, 0LL);
    goto LAB23;

LAB17:    xsi_set_current_line(86, ng0);

LAB25:    xsi_set_current_line(87, ng0);
    t3 = (t0 + 1960U);
    t4 = *((char **)t3);
    t3 = (t0 + 5560);
    xsi_vlogvar_wait_assign_value(t3, t4, 0, 0, 8, 0LL);
    goto LAB23;

LAB19:    xsi_set_current_line(91, ng0);

LAB26:    xsi_set_current_line(92, ng0);
    t3 = (t0 + 5560);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t17 = (t0 + 5560);
    xsi_vlogvar_wait_assign_value(t17, t5, 0, 0, 8, 0LL);
    xsi_set_current_line(93, ng0);
    t2 = (t0 + 1960U);
    t3 = *((char **)t2);
    memset(t30, 0, 8);
    t2 = (t30 + 4);
    t4 = (t3 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (t6 >> 0);
    *((unsigned int *)t30) = t7;
    t8 = *((unsigned int *)t4);
    t9 = (t8 >> 0);
    *((unsigned int *)t2) = t9;
    t10 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t10 & 3U);
    t11 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t11 & 3U);
    t5 = (t0 + 5720);
    xsi_vlogvar_wait_assign_value(t5, t30, 0, 0, 2, 0LL);
    xsi_set_current_line(94, ng0);
    t2 = (t0 + 1800U);
    t3 = *((char **)t2);
    t2 = (t0 + 5880);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 1, 0LL);
    goto LAB23;

}

static void Always_106_2(char *t0)
{
    char t6[8];
    char t16[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    int t15;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;

LAB0:    t1 = (t0 + 7296U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(106, ng0);
    t2 = (t0 + 7632);
    *((int *)t2) = 1;
    t3 = (t0 + 7328);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(107, ng0);

LAB5:    xsi_set_current_line(108, ng0);
    t4 = (t0 + 2120U);
    t5 = *((char **)t4);
    memset(t6, 0, 8);
    t4 = (t6 + 4);
    t7 = (t5 + 4);
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 13);
    t10 = (t9 & 1);
    *((unsigned int *)t6) = t10;
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 13);
    t13 = (t12 & 1);
    *((unsigned int *)t4) = t13;

LAB6:    t14 = ((char*)((ng3)));
    t15 = xsi_vlog_unsigned_case_compare(t6, 1, t14, 1);
    if (t15 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng5)));
    t15 = xsi_vlog_unsigned_case_compare(t6, 1, t2, 1);
    if (t15 == 1)
        goto LAB9;

LAB10:
LAB11:    goto LAB2;

LAB7:    xsi_set_current_line(111, ng0);

LAB12:    xsi_set_current_line(112, ng0);
    t17 = (t0 + 4520U);
    t18 = *((char **)t17);
    t17 = (t0 + 4680U);
    t19 = *((char **)t17);
    t17 = (t0 + 4840U);
    t20 = *((char **)t17);
    t17 = (t0 + 5000U);
    t21 = *((char **)t17);
    xsi_vlogtype_concat(t16, 32, 32, 4U, t21, 8, t20, 8, t19, 8, t18, 8);
    t17 = (t0 + 5400);
    xsi_vlogvar_assign_value(t17, t16, 0, 0, 32);
    goto LAB11;

LAB9:    xsi_set_current_line(116, ng0);

LAB13:    xsi_set_current_line(117, ng0);
    t3 = ((char*)((ng1)));
    t4 = (t0 + 5400);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 32);
    goto LAB11;

}


extern void work_m_00000000002850679477_0192370499_init()
{
	static char *pe[] = {(void *)Initial_44_0,(void *)Always_69_1,(void *)Always_106_2};
	xsi_register_didat("work_m_00000000002850679477_0192370499", "isim/SystemControllerIntegration_TestBench2_isim_beh.exe.sim/work/m_00000000002850679477_0192370499.didat");
	xsi_register_executes(pe);
}
