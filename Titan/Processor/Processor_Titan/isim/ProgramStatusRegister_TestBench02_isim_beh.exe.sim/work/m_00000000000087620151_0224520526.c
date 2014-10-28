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
static const char *ng0 = "C:/Users/u0499404/ECE3710/Processor_Titan/ProgramStatusRegister.v";
static unsigned int ng1[] = {0U, 0U};
static int ng2[] = {4, 0};
static int ng3[] = {2, 0};
static int ng4[] = {3, 0};
static int ng5[] = {1, 0};
static int ng6[] = {0, 0};
static unsigned int ng7[] = {1U, 0U};
static unsigned int ng8[] = {13U, 0U};
static unsigned int ng9[] = {2U, 0U};
static unsigned int ng10[] = {3U, 0U};
static unsigned int ng11[] = {4U, 0U};
static unsigned int ng12[] = {5U, 0U};
static unsigned int ng13[] = {10U, 0U};
static unsigned int ng14[] = {11U, 0U};
static unsigned int ng15[] = {6U, 0U};
static unsigned int ng16[] = {7U, 0U};
static unsigned int ng17[] = {8U, 0U};
static unsigned int ng18[] = {9U, 0U};
static unsigned int ng19[] = {12U, 0U};
static unsigned int ng20[] = {14U, 0U};
static unsigned int ng21[] = {15U, 0U};



static void Always_37_0(char *t0)
{
    char t13[8];
    char t20[8];
    char t28[8];
    char t29[8];
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
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    unsigned int t26;
    int t27;
    int t30;
    int t31;
    char *t32;
    int t33;
    int t34;
    int t35;
    int t36;
    int t37;

LAB0:    t1 = (t0 + 3760U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(37, ng0);
    t2 = (t0 + 4328);
    *((int *)t2) = 1;
    t3 = (t0 + 3792);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(38, ng0);

LAB5:    xsi_set_current_line(39, ng0);
    t4 = (t0 + 1480U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(42, ng0);

LAB9:    xsi_set_current_line(44, ng0);
    t2 = (t0 + 1640U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(49, ng0);
    t2 = (t0 + 1800U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB18;

LAB19:    xsi_set_current_line(55, ng0);
    t2 = (t0 + 2840);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2840);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 5, 0LL);

LAB20:
LAB12:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(40, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 2840);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 5, 0LL);
    goto LAB8;

LAB10:    xsi_set_current_line(45, ng0);

LAB13:    xsi_set_current_line(46, ng0);
    t4 = (t0 + 2120U);
    t5 = *((char **)t4);
    memset(t13, 0, 8);
    t4 = (t13 + 4);
    t11 = (t5 + 4);
    t14 = *((unsigned int *)t5);
    t15 = (t14 >> 4);
    t16 = (t15 & 1);
    *((unsigned int *)t13) = t16;
    t17 = *((unsigned int *)t11);
    t18 = (t17 >> 4);
    t19 = (t18 & 1);
    *((unsigned int *)t4) = t19;
    t12 = (t0 + 2840);
    t21 = (t0 + 2840);
    t22 = (t21 + 72U);
    t23 = *((char **)t22);
    t24 = ((char*)((ng2)));
    xsi_vlog_generic_convert_bit_index(t20, t23, 2, t24, 32, 1);
    t25 = (t20 + 4);
    t26 = *((unsigned int *)t25);
    t27 = (!(t26));
    if (t27 == 1)
        goto LAB14;

LAB15:    xsi_set_current_line(47, ng0);
    t2 = (t0 + 2120U);
    t3 = *((char **)t2);
    memset(t13, 0, 8);
    t2 = (t13 + 4);
    t4 = (t3 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (t6 >> 2);
    t8 = (t7 & 1);
    *((unsigned int *)t13) = t8;
    t9 = *((unsigned int *)t4);
    t10 = (t9 >> 2);
    t14 = (t10 & 1);
    *((unsigned int *)t2) = t14;
    t5 = (t0 + 2840);
    t11 = (t0 + 2840);
    t12 = (t11 + 72U);
    t21 = *((char **)t12);
    t22 = ((char*)((ng3)));
    xsi_vlog_generic_convert_bit_index(t20, t21, 2, t22, 32, 1);
    t23 = (t20 + 4);
    t15 = *((unsigned int *)t23);
    t27 = (!(t15));
    if (t27 == 1)
        goto LAB16;

LAB17:    goto LAB12;

LAB14:    xsi_vlogvar_wait_assign_value(t12, t13, 0, *((unsigned int *)t20), 1, 0LL);
    goto LAB15;

LAB16:    xsi_vlogvar_wait_assign_value(t5, t13, 0, *((unsigned int *)t20), 1, 0LL);
    goto LAB17;

LAB18:    xsi_set_current_line(50, ng0);

LAB21:    xsi_set_current_line(51, ng0);
    t4 = (t0 + 2120U);
    t5 = *((char **)t4);
    memset(t13, 0, 8);
    t4 = (t13 + 4);
    t11 = (t5 + 4);
    t14 = *((unsigned int *)t5);
    t15 = (t14 >> 3);
    t16 = (t15 & 1);
    *((unsigned int *)t13) = t16;
    t17 = *((unsigned int *)t11);
    t18 = (t17 >> 3);
    t19 = (t18 & 1);
    *((unsigned int *)t4) = t19;
    t12 = (t0 + 2840);
    t21 = (t0 + 2840);
    t22 = (t21 + 72U);
    t23 = *((char **)t22);
    t24 = ((char*)((ng4)));
    xsi_vlog_generic_convert_bit_index(t20, t23, 2, t24, 32, 1);
    t25 = (t20 + 4);
    t26 = *((unsigned int *)t25);
    t27 = (!(t26));
    if (t27 == 1)
        goto LAB22;

LAB23:    xsi_set_current_line(52, ng0);
    t2 = (t0 + 2120U);
    t3 = *((char **)t2);
    memset(t13, 0, 8);
    t2 = (t13 + 4);
    t4 = (t3 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (t6 >> 0);
    *((unsigned int *)t13) = t7;
    t8 = *((unsigned int *)t4);
    t9 = (t8 >> 0);
    *((unsigned int *)t2) = t9;
    t10 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t10 & 3U);
    t14 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t14 & 3U);
    t5 = (t0 + 2840);
    t11 = (t0 + 2840);
    t12 = (t11 + 72U);
    t21 = *((char **)t12);
    t22 = ((char*)((ng5)));
    t23 = ((char*)((ng6)));
    xsi_vlog_convert_partindices(t20, t28, t29, ((int*)(t21)), 2, t22, 32, 1, t23, 32, 1);
    t24 = (t20 + 4);
    t15 = *((unsigned int *)t24);
    t27 = (!(t15));
    t25 = (t28 + 4);
    t16 = *((unsigned int *)t25);
    t30 = (!(t16));
    t31 = (t27 && t30);
    t32 = (t29 + 4);
    t17 = *((unsigned int *)t32);
    t33 = (!(t17));
    t34 = (t31 && t33);
    if (t34 == 1)
        goto LAB24;

LAB25:    goto LAB20;

LAB22:    xsi_vlogvar_wait_assign_value(t12, t13, 0, *((unsigned int *)t20), 1, 0LL);
    goto LAB23;

LAB24:    t18 = *((unsigned int *)t29);
    t35 = (t18 + 0);
    t19 = *((unsigned int *)t20);
    t26 = *((unsigned int *)t28);
    t36 = (t19 - t26);
    t37 = (t36 + 1);
    xsi_vlogvar_wait_assign_value(t5, t13, t35, *((unsigned int *)t28), t37, 0LL);
    goto LAB25;

}

static void Always_63_1(char *t0)
{
    char t10[8];
    char t20[8];
    char t36[8];
    char t58[8];
    char t67[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    char *t7;
    char *t8;
    char *t9;
    char *t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    char *t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    char *t35;
    char *t37;
    char *t38;
    char *t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    char *t43;
    char *t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    char *t57;
    char *t59;
    char *t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    char *t71;
    char *t72;
    char *t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    char *t81;
    char *t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    char *t97;

LAB0:    t1 = (t0 + 4008U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(63, ng0);
    t2 = (t0 + 4344);
    *((int *)t2) = 1;
    t3 = (t0 + 4040);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(64, ng0);

LAB5:    xsi_set_current_line(65, ng0);
    t4 = (t0 + 1960U);
    t5 = *((char **)t4);

LAB6:    t4 = ((char*)((ng1)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 5, t4, 5);
    if (t6 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng7)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 5, t2, 5);
    if (t6 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng8)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 5, t2, 5);
    if (t6 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng9)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 5, t2, 5);
    if (t6 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng10)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 5, t2, 5);
    if (t6 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng11)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 5, t2, 5);
    if (t6 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng12)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 5, t2, 5);
    if (t6 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng13)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 5, t2, 5);
    if (t6 == 1)
        goto LAB21;

LAB22:    t2 = ((char*)((ng14)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 5, t2, 5);
    if (t6 == 1)
        goto LAB23;

LAB24:    t2 = ((char*)((ng15)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 5, t2, 5);
    if (t6 == 1)
        goto LAB25;

LAB26:    t2 = ((char*)((ng16)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 5, t2, 5);
    if (t6 == 1)
        goto LAB27;

LAB28:    t2 = ((char*)((ng17)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 5, t2, 5);
    if (t6 == 1)
        goto LAB29;

LAB30:    t2 = ((char*)((ng18)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 5, t2, 5);
    if (t6 == 1)
        goto LAB31;

LAB32:    t2 = ((char*)((ng19)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 5, t2, 5);
    if (t6 == 1)
        goto LAB33;

LAB34:    t2 = ((char*)((ng20)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 5, t2, 5);
    if (t6 == 1)
        goto LAB35;

LAB36:    t2 = ((char*)((ng21)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 5, t2, 5);
    if (t6 == 1)
        goto LAB37;

LAB38:
LAB40:
LAB39:    xsi_set_current_line(83, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 2680);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);

LAB41:    goto LAB2;

LAB7:    xsi_set_current_line(67, ng0);
    t7 = (t0 + 2840);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t10, 0, 8);
    t11 = (t10 + 4);
    t12 = (t9 + 4);
    t13 = *((unsigned int *)t9);
    t14 = (t13 >> 1);
    t15 = (t14 & 1);
    *((unsigned int *)t10) = t15;
    t16 = *((unsigned int *)t12);
    t17 = (t16 >> 1);
    t18 = (t17 & 1);
    *((unsigned int *)t11) = t18;
    t19 = (t0 + 2680);
    xsi_vlogvar_assign_value(t19, t10, 0, 0, 1);
    goto LAB41;

LAB9:    xsi_set_current_line(68, ng0);
    t3 = (t0 + 2840);
    t4 = (t3 + 56U);
    t7 = *((char **)t4);
    memset(t20, 0, 8);
    t8 = (t20 + 4);
    t9 = (t7 + 4);
    t13 = *((unsigned int *)t7);
    t14 = (t13 >> 1);
    t15 = (t14 & 1);
    *((unsigned int *)t20) = t15;
    t16 = *((unsigned int *)t9);
    t17 = (t16 >> 1);
    t18 = (t17 & 1);
    *((unsigned int *)t8) = t18;
    memset(t10, 0, 8);
    t11 = (t20 + 4);
    t21 = *((unsigned int *)t11);
    t22 = (~(t21));
    t23 = *((unsigned int *)t20);
    t24 = (t23 & t22);
    t25 = (t24 & 1U);
    if (t25 != 0)
        goto LAB45;

LAB43:    if (*((unsigned int *)t11) == 0)
        goto LAB42;

LAB44:    t12 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t12) = 1;

LAB45:    t19 = (t10 + 4);
    t26 = (t20 + 4);
    t27 = *((unsigned int *)t20);
    t28 = (~(t27));
    *((unsigned int *)t10) = t28;
    *((unsigned int *)t19) = 0;
    if (*((unsigned int *)t26) != 0)
        goto LAB47;

LAB46:    t33 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t33 & 1U);
    t34 = *((unsigned int *)t19);
    *((unsigned int *)t19) = (t34 & 1U);
    t35 = (t0 + 2680);
    xsi_vlogvar_assign_value(t35, t10, 0, 0, 1);
    goto LAB41;

LAB11:    xsi_set_current_line(69, ng0);
    t3 = (t0 + 2840);
    t4 = (t3 + 56U);
    t7 = *((char **)t4);
    memset(t10, 0, 8);
    t8 = (t10 + 4);
    t9 = (t7 + 4);
    t13 = *((unsigned int *)t7);
    t14 = (t13 >> 0);
    t15 = (t14 & 1);
    *((unsigned int *)t10) = t15;
    t16 = *((unsigned int *)t9);
    t17 = (t16 >> 0);
    t18 = (t17 & 1);
    *((unsigned int *)t8) = t18;
    t11 = (t0 + 2840);
    t12 = (t11 + 56U);
    t19 = *((char **)t12);
    memset(t20, 0, 8);
    t26 = (t20 + 4);
    t35 = (t19 + 4);
    t21 = *((unsigned int *)t19);
    t22 = (t21 >> 1);
    t23 = (t22 & 1);
    *((unsigned int *)t20) = t23;
    t24 = *((unsigned int *)t35);
    t25 = (t24 >> 1);
    t27 = (t25 & 1);
    *((unsigned int *)t26) = t27;
    t28 = *((unsigned int *)t10);
    t29 = *((unsigned int *)t20);
    t30 = (t28 | t29);
    *((unsigned int *)t36) = t30;
    t37 = (t10 + 4);
    t38 = (t20 + 4);
    t39 = (t36 + 4);
    t31 = *((unsigned int *)t37);
    t32 = *((unsigned int *)t38);
    t33 = (t31 | t32);
    *((unsigned int *)t39) = t33;
    t34 = *((unsigned int *)t39);
    t40 = (t34 != 0);
    if (t40 == 1)
        goto LAB48;

LAB49:
LAB50:    t57 = (t0 + 2680);
    xsi_vlogvar_assign_value(t57, t36, 0, 0, 1);
    goto LAB41;

LAB13:    xsi_set_current_line(70, ng0);
    t3 = (t0 + 2840);
    t4 = (t3 + 56U);
    t7 = *((char **)t4);
    memset(t10, 0, 8);
    t8 = (t10 + 4);
    t9 = (t7 + 4);
    t13 = *((unsigned int *)t7);
    t14 = (t13 >> 4);
    t15 = (t14 & 1);
    *((unsigned int *)t10) = t15;
    t16 = *((unsigned int *)t9);
    t17 = (t16 >> 4);
    t18 = (t17 & 1);
    *((unsigned int *)t8) = t18;
    t11 = (t0 + 2680);
    xsi_vlogvar_assign_value(t11, t10, 0, 0, 1);
    goto LAB41;

LAB15:    xsi_set_current_line(71, ng0);
    t3 = (t0 + 2840);
    t4 = (t3 + 56U);
    t7 = *((char **)t4);
    memset(t20, 0, 8);
    t8 = (t20 + 4);
    t9 = (t7 + 4);
    t13 = *((unsigned int *)t7);
    t14 = (t13 >> 4);
    t15 = (t14 & 1);
    *((unsigned int *)t20) = t15;
    t16 = *((unsigned int *)t9);
    t17 = (t16 >> 4);
    t18 = (t17 & 1);
    *((unsigned int *)t8) = t18;
    memset(t10, 0, 8);
    t11 = (t20 + 4);
    t21 = *((unsigned int *)t11);
    t22 = (~(t21));
    t23 = *((unsigned int *)t20);
    t24 = (t23 & t22);
    t25 = (t24 & 1U);
    if (t25 != 0)
        goto LAB54;

LAB52:    if (*((unsigned int *)t11) == 0)
        goto LAB51;

LAB53:    t12 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t12) = 1;

LAB54:    t19 = (t10 + 4);
    t26 = (t20 + 4);
    t27 = *((unsigned int *)t20);
    t28 = (~(t27));
    *((unsigned int *)t10) = t28;
    *((unsigned int *)t19) = 0;
    if (*((unsigned int *)t26) != 0)
        goto LAB56;

LAB55:    t33 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t33 & 1U);
    t34 = *((unsigned int *)t19);
    *((unsigned int *)t19) = (t34 & 1U);
    t35 = (t0 + 2680);
    xsi_vlogvar_assign_value(t35, t10, 0, 0, 1);
    goto LAB41;

LAB17:    xsi_set_current_line(72, ng0);
    t3 = (t0 + 2840);
    t4 = (t3 + 56U);
    t7 = *((char **)t4);
    memset(t10, 0, 8);
    t8 = (t10 + 4);
    t9 = (t7 + 4);
    t13 = *((unsigned int *)t7);
    t14 = (t13 >> 3);
    t15 = (t14 & 1);
    *((unsigned int *)t10) = t15;
    t16 = *((unsigned int *)t9);
    t17 = (t16 >> 3);
    t18 = (t17 & 1);
    *((unsigned int *)t8) = t18;
    t11 = (t0 + 2680);
    xsi_vlogvar_assign_value(t11, t10, 0, 0, 1);
    goto LAB41;

LAB19:    xsi_set_current_line(73, ng0);
    t3 = (t0 + 2840);
    t4 = (t3 + 56U);
    t7 = *((char **)t4);
    memset(t20, 0, 8);
    t8 = (t20 + 4);
    t9 = (t7 + 4);
    t13 = *((unsigned int *)t7);
    t14 = (t13 >> 3);
    t15 = (t14 & 1);
    *((unsigned int *)t20) = t15;
    t16 = *((unsigned int *)t9);
    t17 = (t16 >> 3);
    t18 = (t17 & 1);
    *((unsigned int *)t8) = t18;
    memset(t10, 0, 8);
    t11 = (t20 + 4);
    t21 = *((unsigned int *)t11);
    t22 = (~(t21));
    t23 = *((unsigned int *)t20);
    t24 = (t23 & t22);
    t25 = (t24 & 1U);
    if (t25 != 0)
        goto LAB60;

LAB58:    if (*((unsigned int *)t11) == 0)
        goto LAB57;

LAB59:    t12 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t12) = 1;

LAB60:    t19 = (t10 + 4);
    t26 = (t20 + 4);
    t27 = *((unsigned int *)t20);
    t28 = (~(t27));
    *((unsigned int *)t10) = t28;
    *((unsigned int *)t19) = 0;
    if (*((unsigned int *)t26) != 0)
        goto LAB62;

LAB61:    t33 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t33 & 1U);
    t34 = *((unsigned int *)t19);
    *((unsigned int *)t19) = (t34 & 1U);
    t35 = (t0 + 2680);
    xsi_vlogvar_assign_value(t35, t10, 0, 0, 1);
    goto LAB41;

LAB21:    xsi_set_current_line(74, ng0);
    t3 = (t0 + 2840);
    t4 = (t3 + 56U);
    t7 = *((char **)t4);
    memset(t20, 0, 8);
    t8 = (t20 + 4);
    t9 = (t7 + 4);
    t13 = *((unsigned int *)t7);
    t14 = (t13 >> 3);
    t15 = (t14 & 1);
    *((unsigned int *)t20) = t15;
    t16 = *((unsigned int *)t9);
    t17 = (t16 >> 3);
    t18 = (t17 & 1);
    *((unsigned int *)t8) = t18;
    memset(t10, 0, 8);
    t11 = (t20 + 4);
    t21 = *((unsigned int *)t11);
    t22 = (~(t21));
    t23 = *((unsigned int *)t20);
    t24 = (t23 & t22);
    t25 = (t24 & 1U);
    if (t25 != 0)
        goto LAB66;

LAB64:    if (*((unsigned int *)t11) == 0)
        goto LAB63;

LAB65:    t12 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t12) = 1;

LAB66:    t19 = (t10 + 4);
    t26 = (t20 + 4);
    t27 = *((unsigned int *)t20);
    t28 = (~(t27));
    *((unsigned int *)t10) = t28;
    *((unsigned int *)t19) = 0;
    if (*((unsigned int *)t26) != 0)
        goto LAB68;

LAB67:    t33 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t33 & 1U);
    t34 = *((unsigned int *)t19);
    *((unsigned int *)t19) = (t34 & 1U);
    t35 = (t0 + 2840);
    t37 = (t35 + 56U);
    t38 = *((char **)t37);
    memset(t58, 0, 8);
    t39 = (t58 + 4);
    t43 = (t38 + 4);
    t40 = *((unsigned int *)t38);
    t41 = (t40 >> 1);
    t42 = (t41 & 1);
    *((unsigned int *)t58) = t42;
    t45 = *((unsigned int *)t43);
    t46 = (t45 >> 1);
    t47 = (t46 & 1);
    *((unsigned int *)t39) = t47;
    memset(t36, 0, 8);
    t44 = (t58 + 4);
    t49 = *((unsigned int *)t44);
    t50 = (~(t49));
    t51 = *((unsigned int *)t58);
    t53 = (t51 & t50);
    t54 = (t53 & 1U);
    if (t54 != 0)
        goto LAB72;

LAB70:    if (*((unsigned int *)t44) == 0)
        goto LAB69;

LAB71:    t57 = (t36 + 4);
    *((unsigned int *)t36) = 1;
    *((unsigned int *)t57) = 1;

LAB72:    t59 = (t36 + 4);
    t60 = (t58 + 4);
    t55 = *((unsigned int *)t58);
    t56 = (~(t55));
    *((unsigned int *)t36) = t56;
    *((unsigned int *)t59) = 0;
    if (*((unsigned int *)t60) != 0)
        goto LAB74;

LAB73:    t65 = *((unsigned int *)t36);
    *((unsigned int *)t36) = (t65 & 1U);
    t66 = *((unsigned int *)t59);
    *((unsigned int *)t59) = (t66 & 1U);
    t68 = *((unsigned int *)t10);
    t69 = *((unsigned int *)t36);
    t70 = (t68 & t69);
    *((unsigned int *)t67) = t70;
    t71 = (t10 + 4);
    t72 = (t36 + 4);
    t73 = (t67 + 4);
    t74 = *((unsigned int *)t71);
    t75 = *((unsigned int *)t72);
    t76 = (t74 | t75);
    *((unsigned int *)t73) = t76;
    t77 = *((unsigned int *)t73);
    t78 = (t77 != 0);
    if (t78 == 1)
        goto LAB75;

LAB76:
LAB77:    t97 = (t0 + 2680);
    xsi_vlogvar_assign_value(t97, t67, 0, 0, 1);
    goto LAB41;

LAB23:    xsi_set_current_line(75, ng0);
    t3 = (t0 + 2840);
    t4 = (t3 + 56U);
    t7 = *((char **)t4);
    memset(t10, 0, 8);
    t8 = (t10 + 4);
    t9 = (t7 + 4);
    t13 = *((unsigned int *)t7);
    t14 = (t13 >> 3);
    t15 = (t14 & 1);
    *((unsigned int *)t10) = t15;
    t16 = *((unsigned int *)t9);
    t17 = (t16 >> 3);
    t18 = (t17 & 1);
    *((unsigned int *)t8) = t18;
    t11 = (t0 + 2840);
    t12 = (t11 + 56U);
    t19 = *((char **)t12);
    memset(t20, 0, 8);
    t26 = (t20 + 4);
    t35 = (t19 + 4);
    t21 = *((unsigned int *)t19);
    t22 = (t21 >> 1);
    t23 = (t22 & 1);
    *((unsigned int *)t20) = t23;
    t24 = *((unsigned int *)t35);
    t25 = (t24 >> 1);
    t27 = (t25 & 1);
    *((unsigned int *)t26) = t27;
    t28 = *((unsigned int *)t10);
    t29 = *((unsigned int *)t20);
    t30 = (t28 | t29);
    *((unsigned int *)t36) = t30;
    t37 = (t10 + 4);
    t38 = (t20 + 4);
    t39 = (t36 + 4);
    t31 = *((unsigned int *)t37);
    t32 = *((unsigned int *)t38);
    t33 = (t31 | t32);
    *((unsigned int *)t39) = t33;
    t34 = *((unsigned int *)t39);
    t40 = (t34 != 0);
    if (t40 == 1)
        goto LAB78;

LAB79:
LAB80:    t57 = (t0 + 2680);
    xsi_vlogvar_assign_value(t57, t36, 0, 0, 1);
    goto LAB41;

LAB25:    xsi_set_current_line(76, ng0);
    t3 = (t0 + 2840);
    t4 = (t3 + 56U);
    t7 = *((char **)t4);
    memset(t10, 0, 8);
    t8 = (t10 + 4);
    t9 = (t7 + 4);
    t13 = *((unsigned int *)t7);
    t14 = (t13 >> 0);
    t15 = (t14 & 1);
    *((unsigned int *)t10) = t15;
    t16 = *((unsigned int *)t9);
    t17 = (t16 >> 0);
    t18 = (t17 & 1);
    *((unsigned int *)t8) = t18;
    t11 = (t0 + 2680);
    xsi_vlogvar_assign_value(t11, t10, 0, 0, 1);
    goto LAB41;

LAB27:    xsi_set_current_line(77, ng0);
    t3 = (t0 + 2840);
    t4 = (t3 + 56U);
    t7 = *((char **)t4);
    memset(t20, 0, 8);
    t8 = (t20 + 4);
    t9 = (t7 + 4);
    t13 = *((unsigned int *)t7);
    t14 = (t13 >> 0);
    t15 = (t14 & 1);
    *((unsigned int *)t20) = t15;
    t16 = *((unsigned int *)t9);
    t17 = (t16 >> 0);
    t18 = (t17 & 1);
    *((unsigned int *)t8) = t18;
    memset(t10, 0, 8);
    t11 = (t20 + 4);
    t21 = *((unsigned int *)t11);
    t22 = (~(t21));
    t23 = *((unsigned int *)t20);
    t24 = (t23 & t22);
    t25 = (t24 & 1U);
    if (t25 != 0)
        goto LAB84;

LAB82:    if (*((unsigned int *)t11) == 0)
        goto LAB81;

LAB83:    t12 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t12) = 1;

LAB84:    t19 = (t10 + 4);
    t26 = (t20 + 4);
    t27 = *((unsigned int *)t20);
    t28 = (~(t27));
    *((unsigned int *)t10) = t28;
    *((unsigned int *)t19) = 0;
    if (*((unsigned int *)t26) != 0)
        goto LAB86;

LAB85:    t33 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t33 & 1U);
    t34 = *((unsigned int *)t19);
    *((unsigned int *)t19) = (t34 & 1U);
    t35 = (t0 + 2680);
    xsi_vlogvar_assign_value(t35, t10, 0, 0, 1);
    goto LAB41;

LAB29:    xsi_set_current_line(78, ng0);
    t3 = (t0 + 2840);
    t4 = (t3 + 56U);
    t7 = *((char **)t4);
    memset(t10, 0, 8);
    t8 = (t10 + 4);
    t9 = (t7 + 4);
    t13 = *((unsigned int *)t7);
    t14 = (t13 >> 2);
    t15 = (t14 & 1);
    *((unsigned int *)t10) = t15;
    t16 = *((unsigned int *)t9);
    t17 = (t16 >> 2);
    t18 = (t17 & 1);
    *((unsigned int *)t8) = t18;
    t11 = (t0 + 2680);
    xsi_vlogvar_assign_value(t11, t10, 0, 0, 1);
    goto LAB41;

LAB31:    xsi_set_current_line(79, ng0);
    t3 = (t0 + 2840);
    t4 = (t3 + 56U);
    t7 = *((char **)t4);
    memset(t20, 0, 8);
    t8 = (t20 + 4);
    t9 = (t7 + 4);
    t13 = *((unsigned int *)t7);
    t14 = (t13 >> 2);
    t15 = (t14 & 1);
    *((unsigned int *)t20) = t15;
    t16 = *((unsigned int *)t9);
    t17 = (t16 >> 2);
    t18 = (t17 & 1);
    *((unsigned int *)t8) = t18;
    memset(t10, 0, 8);
    t11 = (t20 + 4);
    t21 = *((unsigned int *)t11);
    t22 = (~(t21));
    t23 = *((unsigned int *)t20);
    t24 = (t23 & t22);
    t25 = (t24 & 1U);
    if (t25 != 0)
        goto LAB90;

LAB88:    if (*((unsigned int *)t11) == 0)
        goto LAB87;

LAB89:    t12 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t12) = 1;

LAB90:    t19 = (t10 + 4);
    t26 = (t20 + 4);
    t27 = *((unsigned int *)t20);
    t28 = (~(t27));
    *((unsigned int *)t10) = t28;
    *((unsigned int *)t19) = 0;
    if (*((unsigned int *)t26) != 0)
        goto LAB92;

LAB91:    t33 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t33 & 1U);
    t34 = *((unsigned int *)t19);
    *((unsigned int *)t19) = (t34 & 1U);
    t35 = (t0 + 2680);
    xsi_vlogvar_assign_value(t35, t10, 0, 0, 1);
    goto LAB41;

LAB33:    xsi_set_current_line(80, ng0);
    t3 = (t0 + 2840);
    t4 = (t3 + 56U);
    t7 = *((char **)t4);
    memset(t20, 0, 8);
    t8 = (t20 + 4);
    t9 = (t7 + 4);
    t13 = *((unsigned int *)t7);
    t14 = (t13 >> 0);
    t15 = (t14 & 1);
    *((unsigned int *)t20) = t15;
    t16 = *((unsigned int *)t9);
    t17 = (t16 >> 0);
    t18 = (t17 & 1);
    *((unsigned int *)t8) = t18;
    memset(t10, 0, 8);
    t11 = (t20 + 4);
    t21 = *((unsigned int *)t11);
    t22 = (~(t21));
    t23 = *((unsigned int *)t20);
    t24 = (t23 & t22);
    t25 = (t24 & 1U);
    if (t25 != 0)
        goto LAB96;

LAB94:    if (*((unsigned int *)t11) == 0)
        goto LAB93;

LAB95:    t12 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t12) = 1;

LAB96:    t19 = (t10 + 4);
    t26 = (t20 + 4);
    t27 = *((unsigned int *)t20);
    t28 = (~(t27));
    *((unsigned int *)t10) = t28;
    *((unsigned int *)t19) = 0;
    if (*((unsigned int *)t26) != 0)
        goto LAB98;

LAB97:    t33 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t33 & 1U);
    t34 = *((unsigned int *)t19);
    *((unsigned int *)t19) = (t34 & 1U);
    t35 = (t0 + 2840);
    t37 = (t35 + 56U);
    t38 = *((char **)t37);
    memset(t58, 0, 8);
    t39 = (t58 + 4);
    t43 = (t38 + 4);
    t40 = *((unsigned int *)t38);
    t41 = (t40 >> 1);
    t42 = (t41 & 1);
    *((unsigned int *)t58) = t42;
    t45 = *((unsigned int *)t43);
    t46 = (t45 >> 1);
    t47 = (t46 & 1);
    *((unsigned int *)t39) = t47;
    memset(t36, 0, 8);
    t44 = (t58 + 4);
    t49 = *((unsigned int *)t44);
    t50 = (~(t49));
    t51 = *((unsigned int *)t58);
    t53 = (t51 & t50);
    t54 = (t53 & 1U);
    if (t54 != 0)
        goto LAB102;

LAB100:    if (*((unsigned int *)t44) == 0)
        goto LAB99;

LAB101:    t57 = (t36 + 4);
    *((unsigned int *)t36) = 1;
    *((unsigned int *)t57) = 1;

LAB102:    t59 = (t36 + 4);
    t60 = (t58 + 4);
    t55 = *((unsigned int *)t58);
    t56 = (~(t55));
    *((unsigned int *)t36) = t56;
    *((unsigned int *)t59) = 0;
    if (*((unsigned int *)t60) != 0)
        goto LAB104;

LAB103:    t65 = *((unsigned int *)t36);
    *((unsigned int *)t36) = (t65 & 1U);
    t66 = *((unsigned int *)t59);
    *((unsigned int *)t59) = (t66 & 1U);
    t68 = *((unsigned int *)t10);
    t69 = *((unsigned int *)t36);
    t70 = (t68 & t69);
    *((unsigned int *)t67) = t70;
    t71 = (t10 + 4);
    t72 = (t36 + 4);
    t73 = (t67 + 4);
    t74 = *((unsigned int *)t71);
    t75 = *((unsigned int *)t72);
    t76 = (t74 | t75);
    *((unsigned int *)t73) = t76;
    t77 = *((unsigned int *)t73);
    t78 = (t77 != 0);
    if (t78 == 1)
        goto LAB105;

LAB106:
LAB107:    t97 = (t0 + 2680);
    xsi_vlogvar_assign_value(t97, t67, 0, 0, 1);
    goto LAB41;

LAB35:    xsi_set_current_line(81, ng0);
    t3 = ((char*)((ng6)));
    t4 = (t0 + 2680);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    goto LAB41;

LAB37:    xsi_set_current_line(82, ng0);
    t3 = ((char*)((ng6)));
    t4 = (t0 + 2680);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    goto LAB41;

LAB42:    *((unsigned int *)t10) = 1;
    goto LAB45;

LAB47:    t29 = *((unsigned int *)t10);
    t30 = *((unsigned int *)t26);
    *((unsigned int *)t10) = (t29 | t30);
    t31 = *((unsigned int *)t19);
    t32 = *((unsigned int *)t26);
    *((unsigned int *)t19) = (t31 | t32);
    goto LAB46;

LAB48:    t41 = *((unsigned int *)t36);
    t42 = *((unsigned int *)t39);
    *((unsigned int *)t36) = (t41 | t42);
    t43 = (t10 + 4);
    t44 = (t20 + 4);
    t45 = *((unsigned int *)t43);
    t46 = (~(t45));
    t47 = *((unsigned int *)t10);
    t48 = (t47 & t46);
    t49 = *((unsigned int *)t44);
    t50 = (~(t49));
    t51 = *((unsigned int *)t20);
    t52 = (t51 & t50);
    t53 = (~(t48));
    t54 = (~(t52));
    t55 = *((unsigned int *)t39);
    *((unsigned int *)t39) = (t55 & t53);
    t56 = *((unsigned int *)t39);
    *((unsigned int *)t39) = (t56 & t54);
    goto LAB50;

LAB51:    *((unsigned int *)t10) = 1;
    goto LAB54;

LAB56:    t29 = *((unsigned int *)t10);
    t30 = *((unsigned int *)t26);
    *((unsigned int *)t10) = (t29 | t30);
    t31 = *((unsigned int *)t19);
    t32 = *((unsigned int *)t26);
    *((unsigned int *)t19) = (t31 | t32);
    goto LAB55;

LAB57:    *((unsigned int *)t10) = 1;
    goto LAB60;

LAB62:    t29 = *((unsigned int *)t10);
    t30 = *((unsigned int *)t26);
    *((unsigned int *)t10) = (t29 | t30);
    t31 = *((unsigned int *)t19);
    t32 = *((unsigned int *)t26);
    *((unsigned int *)t19) = (t31 | t32);
    goto LAB61;

LAB63:    *((unsigned int *)t10) = 1;
    goto LAB66;

LAB68:    t29 = *((unsigned int *)t10);
    t30 = *((unsigned int *)t26);
    *((unsigned int *)t10) = (t29 | t30);
    t31 = *((unsigned int *)t19);
    t32 = *((unsigned int *)t26);
    *((unsigned int *)t19) = (t31 | t32);
    goto LAB67;

LAB69:    *((unsigned int *)t36) = 1;
    goto LAB72;

LAB74:    t61 = *((unsigned int *)t36);
    t62 = *((unsigned int *)t60);
    *((unsigned int *)t36) = (t61 | t62);
    t63 = *((unsigned int *)t59);
    t64 = *((unsigned int *)t60);
    *((unsigned int *)t59) = (t63 | t64);
    goto LAB73;

LAB75:    t79 = *((unsigned int *)t67);
    t80 = *((unsigned int *)t73);
    *((unsigned int *)t67) = (t79 | t80);
    t81 = (t10 + 4);
    t82 = (t36 + 4);
    t83 = *((unsigned int *)t10);
    t84 = (~(t83));
    t85 = *((unsigned int *)t81);
    t86 = (~(t85));
    t87 = *((unsigned int *)t36);
    t88 = (~(t87));
    t89 = *((unsigned int *)t82);
    t90 = (~(t89));
    t48 = (t84 & t86);
    t52 = (t88 & t90);
    t91 = (~(t48));
    t92 = (~(t52));
    t93 = *((unsigned int *)t73);
    *((unsigned int *)t73) = (t93 & t91);
    t94 = *((unsigned int *)t73);
    *((unsigned int *)t73) = (t94 & t92);
    t95 = *((unsigned int *)t67);
    *((unsigned int *)t67) = (t95 & t91);
    t96 = *((unsigned int *)t67);
    *((unsigned int *)t67) = (t96 & t92);
    goto LAB77;

LAB78:    t41 = *((unsigned int *)t36);
    t42 = *((unsigned int *)t39);
    *((unsigned int *)t36) = (t41 | t42);
    t43 = (t10 + 4);
    t44 = (t20 + 4);
    t45 = *((unsigned int *)t43);
    t46 = (~(t45));
    t47 = *((unsigned int *)t10);
    t48 = (t47 & t46);
    t49 = *((unsigned int *)t44);
    t50 = (~(t49));
    t51 = *((unsigned int *)t20);
    t52 = (t51 & t50);
    t53 = (~(t48));
    t54 = (~(t52));
    t55 = *((unsigned int *)t39);
    *((unsigned int *)t39) = (t55 & t53);
    t56 = *((unsigned int *)t39);
    *((unsigned int *)t39) = (t56 & t54);
    goto LAB80;

LAB81:    *((unsigned int *)t10) = 1;
    goto LAB84;

LAB86:    t29 = *((unsigned int *)t10);
    t30 = *((unsigned int *)t26);
    *((unsigned int *)t10) = (t29 | t30);
    t31 = *((unsigned int *)t19);
    t32 = *((unsigned int *)t26);
    *((unsigned int *)t19) = (t31 | t32);
    goto LAB85;

LAB87:    *((unsigned int *)t10) = 1;
    goto LAB90;

LAB92:    t29 = *((unsigned int *)t10);
    t30 = *((unsigned int *)t26);
    *((unsigned int *)t10) = (t29 | t30);
    t31 = *((unsigned int *)t19);
    t32 = *((unsigned int *)t26);
    *((unsigned int *)t19) = (t31 | t32);
    goto LAB91;

LAB93:    *((unsigned int *)t10) = 1;
    goto LAB96;

LAB98:    t29 = *((unsigned int *)t10);
    t30 = *((unsigned int *)t26);
    *((unsigned int *)t10) = (t29 | t30);
    t31 = *((unsigned int *)t19);
    t32 = *((unsigned int *)t26);
    *((unsigned int *)t19) = (t31 | t32);
    goto LAB97;

LAB99:    *((unsigned int *)t36) = 1;
    goto LAB102;

LAB104:    t61 = *((unsigned int *)t36);
    t62 = *((unsigned int *)t60);
    *((unsigned int *)t36) = (t61 | t62);
    t63 = *((unsigned int *)t59);
    t64 = *((unsigned int *)t60);
    *((unsigned int *)t59) = (t63 | t64);
    goto LAB103;

LAB105:    t79 = *((unsigned int *)t67);
    t80 = *((unsigned int *)t73);
    *((unsigned int *)t67) = (t79 | t80);
    t81 = (t10 + 4);
    t82 = (t36 + 4);
    t83 = *((unsigned int *)t10);
    t84 = (~(t83));
    t85 = *((unsigned int *)t81);
    t86 = (~(t85));
    t87 = *((unsigned int *)t36);
    t88 = (~(t87));
    t89 = *((unsigned int *)t82);
    t90 = (~(t89));
    t48 = (t84 & t86);
    t52 = (t88 & t90);
    t91 = (~(t48));
    t92 = (~(t52));
    t93 = *((unsigned int *)t73);
    *((unsigned int *)t73) = (t93 & t91);
    t94 = *((unsigned int *)t73);
    *((unsigned int *)t73) = (t94 & t92);
    t95 = *((unsigned int *)t67);
    *((unsigned int *)t67) = (t95 & t91);
    t96 = *((unsigned int *)t67);
    *((unsigned int *)t67) = (t96 & t92);
    goto LAB107;

}


extern void work_m_00000000000087620151_0224520526_init()
{
	static char *pe[] = {(void *)Always_37_0,(void *)Always_63_1};
	xsi_register_didat("work_m_00000000000087620151_0224520526", "isim/ProgramStatusRegister_TestBench02_isim_beh.exe.sim/work/m_00000000000087620151_0224520526.didat");
	xsi_register_executes(pe);
}
