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
static const char *ng0 = "C:/Users/u0655172/Desktop/ECE3710/Titan/Processor/Processor_Titan/TestGlyphMover.v";
static unsigned int ng1[] = {3U, 0U};
static unsigned int ng2[] = {0U, 0U};
static unsigned int ng3[] = {1U, 0U};
static unsigned int ng4[] = {2U, 0U};
static unsigned int ng5[] = {4U, 0U};
static unsigned int ng6[] = {2439U, 0U};
static int ng7[] = {0, 0};
static int ng8[] = {80, 0};
static int ng9[] = {80, 0, 0, 0};
static unsigned int ng10[] = {32U, 0U};
static int ng11[] = {1, 0};
static unsigned int ng12[] = {3333333U, 0U};



static int sp_trunc_14_to_13(char *t1, char *t2)
{
    char t3[8];
    int t0;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;

LAB0:    t0 = 1;
    xsi_set_current_line(250, ng0);
    t4 = (t1 + 5712);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memset(t3, 0, 8);
    t7 = (t3 + 4);
    t8 = (t6 + 4);
    t9 = *((unsigned int *)t6);
    t10 = (t9 >> 0);
    *((unsigned int *)t3) = t10;
    t11 = *((unsigned int *)t8);
    t12 = (t11 >> 0);
    *((unsigned int *)t7) = t12;
    t13 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t13 & 8191U);
    t14 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t14 & 8191U);
    t15 = (t1 + 5872);
    xsi_vlogvar_assign_value(t15, t3, 0, 0, 13);
    t0 = 0;

LAB1:    return t0;
}

static int sp_trunc_32_to_13(char *t1, char *t2)
{
    char t3[8];
    int t0;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;

LAB0:    t0 = 1;
    xsi_set_current_line(254, ng0);
    t4 = (t1 + 6032);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memset(t3, 0, 8);
    t7 = (t3 + 4);
    t8 = (t6 + 4);
    t9 = *((unsigned int *)t6);
    t10 = (t9 >> 0);
    *((unsigned int *)t3) = t10;
    t11 = *((unsigned int *)t8);
    t12 = (t11 >> 0);
    *((unsigned int *)t7) = t12;
    t13 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t13 & 8191U);
    t14 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t14 & 8191U);
    t15 = (t1 + 6192);
    xsi_vlogvar_assign_value(t15, t3, 0, 0, 13);
    t0 = 0;

LAB1:    return t0;
}

static void Always_52_0(char *t0)
{
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
    char *t11;
    char *t12;

LAB0:    t1 = (t0 + 7112U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(52, ng0);
    t2 = (t0 + 8176);
    *((int *)t2) = 1;
    t3 = (t0 + 7144);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(53, ng0);

LAB5:    xsi_set_current_line(54, ng0);
    t4 = (t0 + 2752U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(59, ng0);

LAB10:    xsi_set_current_line(60, ng0);
    t2 = (t0 + 4592);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 4432);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 3, 0LL);

LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(55, ng0);

LAB9:    xsi_set_current_line(56, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 4432);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 3, 0LL);
    goto LAB8;

}

static void Always_65_1(char *t0)
{
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
    char *t11;
    char *t12;
    int t13;
    char *t14;
    char *t15;

LAB0:    t1 = (t0 + 7360U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(65, ng0);
    t2 = (t0 + 8192);
    *((int *)t2) = 1;
    t3 = (t0 + 7392);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(66, ng0);

LAB5:    xsi_set_current_line(67, ng0);
    t4 = (t0 + 2752U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(72, ng0);

LAB10:    xsi_set_current_line(73, ng0);
    t2 = (t0 + 4432);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);

LAB11:    t5 = ((char*)((ng1)));
    t13 = xsi_vlog_unsigned_case_compare(t4, 3, t5, 3);
    if (t13 == 1)
        goto LAB12;

LAB13:    t2 = ((char*)((ng2)));
    t13 = xsi_vlog_unsigned_case_compare(t4, 3, t2, 3);
    if (t13 == 1)
        goto LAB14;

LAB15:    t2 = ((char*)((ng3)));
    t13 = xsi_vlog_unsigned_case_compare(t4, 3, t2, 3);
    if (t13 == 1)
        goto LAB16;

LAB17:    t2 = ((char*)((ng4)));
    t13 = xsi_vlog_unsigned_case_compare(t4, 3, t2, 3);
    if (t13 == 1)
        goto LAB18;

LAB19:    t2 = ((char*)((ng5)));
    t13 = xsi_vlog_unsigned_case_compare(t4, 3, t2, 3);
    if (t13 == 1)
        goto LAB20;

LAB21:
LAB22:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(68, ng0);

LAB9:    xsi_set_current_line(69, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 4592);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 3, 0LL);
    goto LAB8;

LAB12:    xsi_set_current_line(74, ng0);
    t11 = ((char*)((ng2)));
    t12 = (t0 + 4592);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 3, 0LL);
    goto LAB22;

LAB14:    xsi_set_current_line(75, ng0);
    t3 = ((char*)((ng3)));
    t5 = (t0 + 4592);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 3, 0LL);
    goto LAB22;

LAB16:    xsi_set_current_line(77, ng0);

LAB23:    xsi_set_current_line(78, ng0);
    t3 = (t0 + 5392);
    t5 = (t3 + 56U);
    t11 = *((char **)t5);
    t12 = (t11 + 4);
    t6 = *((unsigned int *)t12);
    t7 = (~(t6));
    t8 = *((unsigned int *)t11);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB24;

LAB25:    xsi_set_current_line(81, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 4592);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);

LAB26:    goto LAB22;

LAB18:    xsi_set_current_line(83, ng0);
    t3 = ((char*)((ng5)));
    t5 = (t0 + 4592);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 3, 0LL);
    goto LAB22;

LAB20:    xsi_set_current_line(84, ng0);

LAB27:    xsi_set_current_line(85, ng0);
    t3 = (t0 + 5232);
    t5 = (t3 + 56U);
    t11 = *((char **)t5);
    t12 = (t11 + 4);
    t6 = *((unsigned int *)t12);
    t7 = (~(t6));
    t8 = *((unsigned int *)t11);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB28;

LAB29:    xsi_set_current_line(88, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 4592);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);

LAB30:    goto LAB22;

LAB24:    xsi_set_current_line(79, ng0);
    t14 = ((char*)((ng4)));
    t15 = (t0 + 4592);
    xsi_vlogvar_wait_assign_value(t15, t14, 0, 0, 3, 0LL);
    goto LAB26;

LAB28:    xsi_set_current_line(86, ng0);
    t14 = ((char*)((ng2)));
    t15 = (t0 + 4592);
    xsi_vlogvar_wait_assign_value(t15, t14, 0, 0, 3, 0LL);
    goto LAB30;

}

static void Always_95_2(char *t0)
{
    char t14[8];
    char t31[8];
    char t36[16];
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
    char *t11;
    char *t12;
    int t13;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t32;
    char *t33;
    char *t34;
    char *t35;

LAB0:    t1 = (t0 + 7608U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(95, ng0);
    t2 = (t0 + 8208);
    *((int *)t2) = 1;
    t3 = (t0 + 7640);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(96, ng0);

LAB5:    xsi_set_current_line(97, ng0);
    t4 = (t0 + 2752U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(108, ng0);

LAB10:    xsi_set_current_line(109, ng0);
    t2 = (t0 + 4432);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);

LAB11:    t5 = ((char*)((ng1)));
    t13 = xsi_vlog_unsigned_case_compare(t4, 3, t5, 3);
    if (t13 == 1)
        goto LAB12;

LAB13:    t2 = ((char*)((ng2)));
    t13 = xsi_vlog_unsigned_case_compare(t4, 3, t2, 3);
    if (t13 == 1)
        goto LAB14;

LAB15:    t2 = ((char*)((ng3)));
    t13 = xsi_vlog_unsigned_case_compare(t4, 3, t2, 3);
    if (t13 == 1)
        goto LAB16;

LAB17:    t2 = ((char*)((ng4)));
    t13 = xsi_vlog_unsigned_case_compare(t4, 3, t2, 3);
    if (t13 == 1)
        goto LAB18;

LAB19:    t2 = ((char*)((ng5)));
    t13 = xsi_vlog_unsigned_case_compare(t4, 3, t2, 3);
    if (t13 == 1)
        goto LAB20;

LAB21:
LAB23:
LAB22:    xsi_set_current_line(204, ng0);

LAB53:    xsi_set_current_line(205, ng0);
    t2 = (t0 + 4752);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t11 = (t0 + 4752);
    xsi_vlogvar_wait_assign_value(t11, t5, 0, 0, 13, 0LL);
    xsi_set_current_line(206, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3952);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(207, ng0);
    t2 = (t0 + 4752);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    memcpy(t14, t5, 8);
    t11 = (t0 + 4272);
    xsi_vlogvar_wait_assign_value(t11, t14, 0, 0, 14, 0LL);
    xsi_set_current_line(208, ng0);
    t2 = (t0 + 5072);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t11 = (t0 + 4112);
    xsi_vlogvar_wait_assign_value(t11, t5, 0, 0, 7, 0LL);
    xsi_set_current_line(209, ng0);
    t2 = (t0 + 5072);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t11 = (t0 + 5072);
    xsi_vlogvar_wait_assign_value(t11, t5, 0, 0, 7, 0LL);
    xsi_set_current_line(210, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 5392);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(211, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 5552);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);

LAB24:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(98, ng0);

LAB9:    xsi_set_current_line(99, ng0);
    t11 = ((char*)((ng6)));
    t12 = (t0 + 4752);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 13, 0LL);
    xsi_set_current_line(100, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 3952);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(101, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 4272);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 14, 0LL);
    xsi_set_current_line(102, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 4112);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 7, 0LL);
    xsi_set_current_line(103, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 5072);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 7, 0LL);
    xsi_set_current_line(104, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 5392);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(105, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 5552);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB8;

LAB12:    xsi_set_current_line(111, ng0);

LAB25:    xsi_set_current_line(112, ng0);
    t11 = ((char*)((ng6)));
    t12 = (t0 + 4752);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 13, 0LL);
    xsi_set_current_line(113, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 3952);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(114, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 4272);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 14, 0LL);
    xsi_set_current_line(115, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 4112);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 7, 0LL);
    xsi_set_current_line(116, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 5072);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 7, 0LL);
    xsi_set_current_line(117, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 5392);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(118, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 5552);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB24;

LAB14:    xsi_set_current_line(121, ng0);

LAB26:    xsi_set_current_line(122, ng0);
    t3 = (t0 + 4752);
    t5 = (t3 + 56U);
    t11 = *((char **)t5);
    t12 = (t0 + 4752);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 13, 0LL);
    xsi_set_current_line(123, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 3952);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(124, ng0);
    t2 = (t0 + 4752);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    memcpy(t14, t5, 8);
    t11 = (t0 + 4272);
    xsi_vlogvar_wait_assign_value(t11, t14, 0, 0, 14, 0LL);
    xsi_set_current_line(125, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 4112);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 7, 0LL);
    xsi_set_current_line(126, ng0);
    t2 = (t0 + 3552U);
    t3 = *((char **)t2);
    t2 = (t0 + 5072);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 7, 0LL);
    xsi_set_current_line(127, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 5392);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(128, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 5552);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB24;

LAB16:    xsi_set_current_line(131, ng0);

LAB27:    xsi_set_current_line(132, ng0);
    t3 = (t0 + 2912U);
    t5 = *((char **)t3);
    t3 = (t5 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB28;

LAB29:    xsi_set_current_line(142, ng0);
    t2 = (t0 + 3072U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB32;

LAB33:    xsi_set_current_line(152, ng0);
    t2 = (t0 + 3232U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB36;

LAB37:    xsi_set_current_line(162, ng0);
    t2 = (t0 + 3392U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB43;

LAB44:    xsi_set_current_line(173, ng0);

LAB50:    xsi_set_current_line(174, ng0);
    t2 = (t0 + 4752);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t11 = (t0 + 4752);
    xsi_vlogvar_wait_assign_value(t11, t5, 0, 0, 13, 0LL);
    xsi_set_current_line(175, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3952);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(176, ng0);
    t2 = (t0 + 4752);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    memcpy(t14, t5, 8);
    t11 = (t0 + 4272);
    xsi_vlogvar_wait_assign_value(t11, t14, 0, 0, 14, 0LL);
    xsi_set_current_line(177, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 4112);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 7, 0LL);
    xsi_set_current_line(178, ng0);
    t2 = (t0 + 5072);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t11 = (t0 + 5072);
    xsi_vlogvar_wait_assign_value(t11, t5, 0, 0, 7, 0LL);
    xsi_set_current_line(179, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 5392);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(180, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 5552);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);

LAB45:
LAB38:
LAB34:
LAB30:    goto LAB24;

LAB18:    xsi_set_current_line(184, ng0);

LAB51:    xsi_set_current_line(185, ng0);
    t3 = (t0 + 4752);
    t5 = (t3 + 56U);
    t11 = *((char **)t5);
    t12 = (t0 + 4752);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 13, 0LL);
    xsi_set_current_line(186, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3952);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(187, ng0);
    t2 = (t0 + 4752);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    memcpy(t14, t5, 8);
    t11 = (t0 + 4272);
    xsi_vlogvar_wait_assign_value(t11, t14, 0, 0, 14, 0LL);
    xsi_set_current_line(188, ng0);
    t2 = ((char*)((ng10)));
    t3 = (t0 + 4112);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 7, 0LL);
    xsi_set_current_line(189, ng0);
    t2 = (t0 + 5072);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t11 = (t0 + 5072);
    xsi_vlogvar_wait_assign_value(t11, t5, 0, 0, 7, 0LL);
    xsi_set_current_line(190, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 5392);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(191, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 5552);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB24;

LAB20:    xsi_set_current_line(194, ng0);

LAB52:    xsi_set_current_line(195, ng0);
    t3 = (t0 + 4752);
    t5 = (t3 + 56U);
    t11 = *((char **)t5);
    t12 = (t0 + 4752);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 13, 0LL);
    xsi_set_current_line(196, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3952);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(197, ng0);
    t2 = (t0 + 4752);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    memcpy(t14, t5, 8);
    t11 = (t0 + 4272);
    xsi_vlogvar_wait_assign_value(t11, t14, 0, 0, 14, 0LL);
    xsi_set_current_line(198, ng0);
    t2 = (t0 + 5072);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t11 = (t0 + 4112);
    xsi_vlogvar_wait_assign_value(t11, t5, 0, 0, 7, 0LL);
    xsi_set_current_line(199, ng0);
    t2 = (t0 + 5072);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t11 = (t0 + 5072);
    xsi_vlogvar_wait_assign_value(t11, t5, 0, 0, 7, 0LL);
    xsi_set_current_line(200, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 5392);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(201, ng0);
    t2 = ((char*)((ng11)));
    t3 = (t0 + 5552);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB24;

LAB28:    xsi_set_current_line(133, ng0);

LAB31:    xsi_set_current_line(134, ng0);
    t11 = (t0 + 4752);
    t12 = (t11 + 56U);
    t15 = *((char **)t12);
    t16 = ((char*)((ng3)));
    memset(t14, 0, 8);
    xsi_vlog_unsigned_add(t14, 13, t15, 13, t16, 13);
    t17 = (t0 + 4752);
    xsi_vlogvar_wait_assign_value(t17, t14, 0, 0, 13, 0LL);
    xsi_set_current_line(135, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3952);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(136, ng0);
    t2 = (t0 + 4752);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    memcpy(t14, t5, 8);
    t11 = (t0 + 4272);
    xsi_vlogvar_wait_assign_value(t11, t14, 0, 0, 14, 0LL);
    xsi_set_current_line(137, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 4112);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 7, 0LL);
    xsi_set_current_line(138, ng0);
    t2 = (t0 + 5072);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t11 = (t0 + 5072);
    xsi_vlogvar_wait_assign_value(t11, t5, 0, 0, 7, 0LL);
    xsi_set_current_line(139, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 5392);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(140, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 5552);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB30;

LAB32:    xsi_set_current_line(143, ng0);

LAB35:    xsi_set_current_line(144, ng0);
    t5 = (t0 + 4752);
    t11 = (t5 + 56U);
    t12 = *((char **)t11);
    t15 = ((char*)((ng3)));
    memset(t14, 0, 8);
    xsi_vlog_unsigned_minus(t14, 13, t12, 13, t15, 13);
    t16 = (t0 + 4752);
    xsi_vlogvar_wait_assign_value(t16, t14, 0, 0, 13, 0LL);
    xsi_set_current_line(145, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3952);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(146, ng0);
    t2 = (t0 + 4752);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    memcpy(t14, t5, 8);
    t11 = (t0 + 4272);
    xsi_vlogvar_wait_assign_value(t11, t14, 0, 0, 14, 0LL);
    xsi_set_current_line(147, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 4112);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 7, 0LL);
    xsi_set_current_line(148, ng0);
    t2 = (t0 + 5072);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t11 = (t0 + 5072);
    xsi_vlogvar_wait_assign_value(t11, t5, 0, 0, 7, 0LL);
    xsi_set_current_line(149, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 5392);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(150, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 5552);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB34;

LAB36:    xsi_set_current_line(153, ng0);

LAB39:    xsi_set_current_line(154, ng0);
    t5 = (t0 + 4752);
    t11 = (t5 + 56U);
    t12 = *((char **)t11);
    t15 = ((char*)((ng8)));
    memset(t14, 0, 8);
    xsi_vlog_unsigned_add(t14, 32, t12, 13, t15, 32);
    t16 = (t0 + 7416);
    t17 = (t0 + 1528);
    t18 = xsi_create_subprogram_invocation(t16, 0, t0, t17, 0, 0);
    t19 = (t0 + 5712);
    xsi_vlogvar_assign_value(t19, t14, 0, 0, 14);

LAB40:    t20 = (t0 + 7512);
    t21 = *((char **)t20);
    t22 = (t21 + 80U);
    t23 = *((char **)t22);
    t24 = (t23 + 272U);
    t25 = *((char **)t24);
    t26 = (t25 + 0U);
    t27 = *((char **)t26);
    t13 = ((int  (*)(char *, char *))t27)(t0, t21);
    if (t13 != 0)
        goto LAB42;

LAB41:    t21 = (t0 + 7512);
    t28 = *((char **)t21);
    t21 = (t0 + 5872);
    t29 = (t21 + 56U);
    t30 = *((char **)t29);
    memcpy(t31, t30, 8);
    t32 = (t0 + 1528);
    t33 = (t0 + 7416);
    t34 = 0;
    xsi_delete_subprogram_invocation(t32, t28, t0, t33, t34);
    t35 = (t0 + 4752);
    xsi_vlogvar_wait_assign_value(t35, t31, 0, 0, 13, 0LL);
    xsi_set_current_line(155, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3952);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(156, ng0);
    t2 = (t0 + 4752);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    memcpy(t14, t5, 8);
    t11 = (t0 + 4272);
    xsi_vlogvar_wait_assign_value(t11, t14, 0, 0, 14, 0LL);
    xsi_set_current_line(157, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 4112);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 7, 0LL);
    xsi_set_current_line(158, ng0);
    t2 = (t0 + 5072);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t11 = (t0 + 5072);
    xsi_vlogvar_wait_assign_value(t11, t5, 0, 0, 7, 0LL);
    xsi_set_current_line(159, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 5392);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(160, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 5552);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB38;

LAB42:    t20 = (t0 + 7608U);
    *((char **)t20) = &&LAB40;
    goto LAB1;

LAB43:    xsi_set_current_line(163, ng0);

LAB46:    xsi_set_current_line(164, ng0);
    t5 = (t0 + 4752);
    t11 = (t5 + 56U);
    t12 = *((char **)t11);
    t15 = ((char*)((ng9)));
    xsi_vlog_unsigned_minus(t36, 33, t12, 13, t15, 32);
    t16 = (t0 + 7416);
    t17 = (t0 + 1960);
    t18 = xsi_create_subprogram_invocation(t16, 0, t0, t17, 0, 0);
    t19 = (t0 + 6032);
    xsi_vlogvar_assign_value(t19, t36, 0, 0, 33);

LAB47:    t20 = (t0 + 7512);
    t21 = *((char **)t20);
    t22 = (t21 + 80U);
    t23 = *((char **)t22);
    t24 = (t23 + 272U);
    t25 = *((char **)t24);
    t26 = (t25 + 0U);
    t27 = *((char **)t26);
    t13 = ((int  (*)(char *, char *))t27)(t0, t21);
    if (t13 != 0)
        goto LAB49;

LAB48:    t21 = (t0 + 7512);
    t28 = *((char **)t21);
    t21 = (t0 + 6192);
    t29 = (t21 + 56U);
    t30 = *((char **)t29);
    memcpy(t14, t30, 8);
    t32 = (t0 + 1960);
    t33 = (t0 + 7416);
    t34 = 0;
    xsi_delete_subprogram_invocation(t32, t28, t0, t33, t34);
    t35 = (t0 + 4752);
    xsi_vlogvar_wait_assign_value(t35, t14, 0, 0, 13, 0LL);
    xsi_set_current_line(165, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3952);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(166, ng0);
    t2 = (t0 + 4752);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    memcpy(t14, t5, 8);
    t11 = (t0 + 4272);
    xsi_vlogvar_wait_assign_value(t11, t14, 0, 0, 14, 0LL);
    xsi_set_current_line(167, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 4112);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 7, 0LL);
    xsi_set_current_line(168, ng0);
    t2 = (t0 + 5072);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t11 = (t0 + 5072);
    xsi_vlogvar_wait_assign_value(t11, t5, 0, 0, 7, 0LL);
    xsi_set_current_line(169, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 5392);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(170, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 5552);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB45;

LAB49:    t20 = (t0 + 7608U);
    *((char **)t20) = &&LAB47;
    goto LAB1;

}

static void Always_218_3(char *t0)
{
    char t13[8];
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
    char *t11;
    char *t12;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    char *t29;

LAB0:    t1 = (t0 + 7856U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(218, ng0);
    t2 = (t0 + 8224);
    *((int *)t2) = 1;
    t3 = (t0 + 7888);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(219, ng0);

LAB5:    xsi_set_current_line(220, ng0);
    t4 = (t0 + 2752U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(226, ng0);

LAB10:    xsi_set_current_line(227, ng0);
    t2 = (t0 + 4912);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng12)));
    memset(t13, 0, 8);
    t11 = (t4 + 4);
    t12 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = *((unsigned int *)t5);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t11);
    t10 = *((unsigned int *)t12);
    t14 = (t9 ^ t10);
    t15 = (t8 | t14);
    t16 = *((unsigned int *)t11);
    t17 = *((unsigned int *)t12);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB14;

LAB11:    if (t18 != 0)
        goto LAB13;

LAB12:    *((unsigned int *)t13) = 1;

LAB14:    t22 = (t13 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t13);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB15;

LAB16:    xsi_set_current_line(233, ng0);

LAB19:    xsi_set_current_line(234, ng0);
    t2 = (t0 + 5552);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 4);
    t6 = *((unsigned int *)t5);
    t7 = (~(t6));
    t8 = *((unsigned int *)t4);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB20;

LAB21:    xsi_set_current_line(240, ng0);

LAB24:    xsi_set_current_line(241, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 5232);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(242, ng0);
    t2 = (t0 + 4912);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 4912);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 27, 0LL);

LAB22:
LAB17:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(221, ng0);

LAB9:    xsi_set_current_line(222, ng0);
    t11 = ((char*)((ng7)));
    t12 = (t0 + 5232);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 1, 0LL);
    xsi_set_current_line(223, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 4912);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 27, 0LL);
    goto LAB8;

LAB13:    t21 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB14;

LAB15:    xsi_set_current_line(228, ng0);

LAB18:    xsi_set_current_line(229, ng0);
    t28 = ((char*)((ng3)));
    t29 = (t0 + 5232);
    xsi_vlogvar_wait_assign_value(t29, t28, 0, 0, 1, 0LL);
    xsi_set_current_line(230, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 4912);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 27, 0LL);
    goto LAB17;

LAB20:    xsi_set_current_line(235, ng0);

LAB23:    xsi_set_current_line(236, ng0);
    t11 = ((char*)((ng7)));
    t12 = (t0 + 5232);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 1, 0LL);
    xsi_set_current_line(237, ng0);
    t2 = (t0 + 4912);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t13, 0, 8);
    xsi_vlog_unsigned_add(t13, 27, t4, 27, t5, 27);
    t11 = (t0 + 4912);
    xsi_vlogvar_wait_assign_value(t11, t13, 0, 0, 27, 0LL);
    goto LAB22;

}


extern void work_m_00000000002411880466_3019199309_init()
{
	static char *pe[] = {(void *)Always_52_0,(void *)Always_65_1,(void *)Always_95_2,(void *)Always_218_3};
	static char *se[] = {(void *)sp_trunc_14_to_13,(void *)sp_trunc_32_to_13};
	xsi_register_didat("work_m_00000000002411880466_3019199309", "isim/TestGlyphMoverInterface_TestBench_isim_beh.exe.sim/work/m_00000000002411880466_3019199309.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}
