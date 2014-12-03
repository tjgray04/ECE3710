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
static unsigned int ng5[] = {2439U, 0U};
static int ng6[] = {0, 0};
static int ng7[] = {80, 0};
static int ng8[] = {80, 0, 0, 0};
static unsigned int ng9[] = {10U, 0U};



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
    xsi_set_current_line(214, ng0);
    t4 = (t1 + 5416);
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
    t15 = (t1 + 5576);
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
    xsi_set_current_line(218, ng0);
    t4 = (t1 + 5736);
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
    t15 = (t1 + 5896);
    xsi_vlogvar_assign_value(t15, t3, 0, 0, 13);
    t0 = 0;

LAB1:    return t0;
}

static void Always_50_0(char *t0)
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

LAB0:    t1 = (t0 + 6816U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(50, ng0);
    t2 = (t0 + 7880);
    *((int *)t2) = 1;
    t3 = (t0 + 6848);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(51, ng0);

LAB5:    xsi_set_current_line(52, ng0);
    t4 = (t0 + 2616U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(57, ng0);

LAB10:    xsi_set_current_line(58, ng0);
    t2 = (t0 + 4456);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 4296);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 2, 0LL);

LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(53, ng0);

LAB9:    xsi_set_current_line(54, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 4296);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 2, 0LL);
    goto LAB8;

}

static void Always_63_1(char *t0)
{
    char t14[8];
    char t23[8];
    char t31[8];
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
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    char *t20;
    char *t21;
    char *t22;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    char *t35;
    char *t36;
    char *t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    char *t45;
    char *t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    int t55;
    int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    char *t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    char *t69;
    char *t70;

LAB0:    t1 = (t0 + 7064U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(63, ng0);
    t2 = (t0 + 7896);
    *((int *)t2) = 1;
    t3 = (t0 + 7096);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(64, ng0);

LAB5:    xsi_set_current_line(65, ng0);
    t4 = (t0 + 2616U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(70, ng0);

LAB10:    xsi_set_current_line(71, ng0);
    t2 = (t0 + 4296);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);

LAB11:    t5 = ((char*)((ng1)));
    t13 = xsi_vlog_unsigned_case_compare(t4, 2, t5, 2);
    if (t13 == 1)
        goto LAB12;

LAB13:    t2 = ((char*)((ng2)));
    t13 = xsi_vlog_unsigned_case_compare(t4, 2, t2, 2);
    if (t13 == 1)
        goto LAB14;

LAB15:    t2 = ((char*)((ng3)));
    t13 = xsi_vlog_unsigned_case_compare(t4, 2, t2, 2);
    if (t13 == 1)
        goto LAB16;

LAB17:    t2 = ((char*)((ng4)));
    t13 = xsi_vlog_unsigned_case_compare(t4, 2, t2, 2);
    if (t13 == 1)
        goto LAB18;

LAB19:
LAB20:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(66, ng0);

LAB9:    xsi_set_current_line(67, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 4456);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 2, 0LL);
    goto LAB8;

LAB12:    xsi_set_current_line(72, ng0);
    t11 = ((char*)((ng2)));
    t12 = (t0 + 4456);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 2, 0LL);
    goto LAB20;

LAB14:    xsi_set_current_line(73, ng0);
    t3 = ((char*)((ng3)));
    t5 = (t0 + 4456);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 2, 0LL);
    goto LAB20;

LAB16:    xsi_set_current_line(75, ng0);

LAB21:    xsi_set_current_line(76, ng0);
    t3 = (t0 + 5256);
    t5 = (t3 + 56U);
    t11 = *((char **)t5);
    memset(t14, 0, 8);
    t12 = (t11 + 4);
    t6 = *((unsigned int *)t12);
    t7 = (~(t6));
    t8 = *((unsigned int *)t11);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB22;

LAB23:    if (*((unsigned int *)t12) != 0)
        goto LAB24;

LAB25:    t16 = (t14 + 4);
    t17 = *((unsigned int *)t14);
    t18 = *((unsigned int *)t16);
    t19 = (t17 || t18);
    if (t19 > 0)
        goto LAB26;

LAB27:    memcpy(t31, t14, 8);

LAB28:    t63 = (t31 + 4);
    t64 = *((unsigned int *)t63);
    t65 = (~(t64));
    t66 = *((unsigned int *)t31);
    t67 = (t66 & t65);
    t68 = (t67 != 0);
    if (t68 > 0)
        goto LAB36;

LAB37:    xsi_set_current_line(79, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 4456);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);

LAB38:    goto LAB20;

LAB18:    xsi_set_current_line(81, ng0);
    t3 = ((char*)((ng2)));
    t5 = (t0 + 4456);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 2, 0LL);
    goto LAB20;

LAB22:    *((unsigned int *)t14) = 1;
    goto LAB25;

LAB24:    t15 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t15) = 1;
    goto LAB25;

LAB26:    t20 = (t0 + 5096);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    memset(t23, 0, 8);
    t24 = (t22 + 4);
    t25 = *((unsigned int *)t24);
    t26 = (~(t25));
    t27 = *((unsigned int *)t22);
    t28 = (t27 & t26);
    t29 = (t28 & 1U);
    if (t29 != 0)
        goto LAB29;

LAB30:    if (*((unsigned int *)t24) != 0)
        goto LAB31;

LAB32:    t32 = *((unsigned int *)t14);
    t33 = *((unsigned int *)t23);
    t34 = (t32 & t33);
    *((unsigned int *)t31) = t34;
    t35 = (t14 + 4);
    t36 = (t23 + 4);
    t37 = (t31 + 4);
    t38 = *((unsigned int *)t35);
    t39 = *((unsigned int *)t36);
    t40 = (t38 | t39);
    *((unsigned int *)t37) = t40;
    t41 = *((unsigned int *)t37);
    t42 = (t41 != 0);
    if (t42 == 1)
        goto LAB33;

LAB34:
LAB35:    goto LAB28;

LAB29:    *((unsigned int *)t23) = 1;
    goto LAB32;

LAB31:    t30 = (t23 + 4);
    *((unsigned int *)t23) = 1;
    *((unsigned int *)t30) = 1;
    goto LAB32;

LAB33:    t43 = *((unsigned int *)t31);
    t44 = *((unsigned int *)t37);
    *((unsigned int *)t31) = (t43 | t44);
    t45 = (t14 + 4);
    t46 = (t23 + 4);
    t47 = *((unsigned int *)t14);
    t48 = (~(t47));
    t49 = *((unsigned int *)t45);
    t50 = (~(t49));
    t51 = *((unsigned int *)t23);
    t52 = (~(t51));
    t53 = *((unsigned int *)t46);
    t54 = (~(t53));
    t55 = (t48 & t50);
    t56 = (t52 & t54);
    t57 = (~(t55));
    t58 = (~(t56));
    t59 = *((unsigned int *)t37);
    *((unsigned int *)t37) = (t59 & t57);
    t60 = *((unsigned int *)t37);
    *((unsigned int *)t37) = (t60 & t58);
    t61 = *((unsigned int *)t31);
    *((unsigned int *)t31) = (t61 & t57);
    t62 = *((unsigned int *)t31);
    *((unsigned int *)t31) = (t62 & t58);
    goto LAB35;

LAB36:    xsi_set_current_line(77, ng0);
    t69 = ((char*)((ng4)));
    t70 = (t0 + 4456);
    xsi_vlogvar_wait_assign_value(t70, t69, 0, 0, 2, 0LL);
    goto LAB38;

}

static void Always_87_2(char *t0)
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

LAB0:    t1 = (t0 + 7312U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(87, ng0);
    t2 = (t0 + 7912);
    *((int *)t2) = 1;
    t3 = (t0 + 7344);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(88, ng0);

LAB5:    xsi_set_current_line(89, ng0);
    t4 = (t0 + 2616U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(99, ng0);

LAB10:    xsi_set_current_line(100, ng0);
    t2 = (t0 + 4296);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);

LAB11:    t5 = ((char*)((ng1)));
    t13 = xsi_vlog_unsigned_case_compare(t4, 2, t5, 2);
    if (t13 == 1)
        goto LAB12;

LAB13:    t2 = ((char*)((ng2)));
    t13 = xsi_vlog_unsigned_case_compare(t4, 2, t2, 2);
    if (t13 == 1)
        goto LAB14;

LAB15:    t2 = ((char*)((ng3)));
    t13 = xsi_vlog_unsigned_case_compare(t4, 2, t2, 2);
    if (t13 == 1)
        goto LAB16;

LAB17:    t2 = ((char*)((ng4)));
    t13 = xsi_vlog_unsigned_case_compare(t4, 2, t2, 2);
    if (t13 == 1)
        goto LAB18;

LAB19:
LAB21:
LAB20:    xsi_set_current_line(177, ng0);

LAB50:    xsi_set_current_line(178, ng0);
    t2 = (t0 + 4616);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t11 = (t0 + 4616);
    xsi_vlogvar_wait_assign_value(t11, t5, 0, 0, 13, 0LL);
    xsi_set_current_line(179, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3816);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(180, ng0);
    t2 = (t0 + 4616);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    memcpy(t14, t5, 8);
    t11 = (t0 + 4136);
    xsi_vlogvar_wait_assign_value(t11, t14, 0, 0, 14, 0LL);
    xsi_set_current_line(181, ng0);
    t2 = (t0 + 4936);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t11 = (t0 + 3976);
    xsi_vlogvar_wait_assign_value(t11, t5, 0, 0, 7, 0LL);
    xsi_set_current_line(182, ng0);
    t2 = (t0 + 4936);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t11 = (t0 + 4936);
    xsi_vlogvar_wait_assign_value(t11, t5, 0, 0, 7, 0LL);
    xsi_set_current_line(183, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 5256);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);

LAB22:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(90, ng0);

LAB9:    xsi_set_current_line(91, ng0);
    t11 = ((char*)((ng5)));
    t12 = (t0 + 4616);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 13, 0LL);
    xsi_set_current_line(92, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 3816);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(93, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 4136);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 14, 0LL);
    xsi_set_current_line(94, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 3976);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 7, 0LL);
    xsi_set_current_line(95, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 4936);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 7, 0LL);
    xsi_set_current_line(96, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 5256);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB8;

LAB12:    xsi_set_current_line(102, ng0);

LAB23:    xsi_set_current_line(103, ng0);
    t11 = ((char*)((ng5)));
    t12 = (t0 + 4616);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 13, 0LL);
    xsi_set_current_line(104, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 3816);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(105, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 4136);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 14, 0LL);
    xsi_set_current_line(106, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 3976);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 7, 0LL);
    xsi_set_current_line(107, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 4936);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 7, 0LL);
    xsi_set_current_line(108, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 5256);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB22;

LAB14:    xsi_set_current_line(111, ng0);

LAB24:    xsi_set_current_line(112, ng0);
    t3 = (t0 + 4616);
    t5 = (t3 + 56U);
    t11 = *((char **)t5);
    t12 = (t0 + 4616);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 13, 0LL);
    xsi_set_current_line(113, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 3816);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(114, ng0);
    t2 = (t0 + 4616);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    memcpy(t14, t5, 8);
    t11 = (t0 + 4136);
    xsi_vlogvar_wait_assign_value(t11, t14, 0, 0, 14, 0LL);
    xsi_set_current_line(115, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 3976);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 7, 0LL);
    xsi_set_current_line(116, ng0);
    t2 = (t0 + 3416U);
    t3 = *((char **)t2);
    t2 = (t0 + 4936);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 7, 0LL);
    xsi_set_current_line(117, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 5256);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB22;

LAB16:    xsi_set_current_line(120, ng0);

LAB25:    xsi_set_current_line(121, ng0);
    t3 = (t0 + 2776U);
    t5 = *((char **)t3);
    t3 = (t5 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB26;

LAB27:    xsi_set_current_line(130, ng0);
    t2 = (t0 + 2936U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB30;

LAB31:    xsi_set_current_line(139, ng0);
    t2 = (t0 + 3096U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB34;

LAB35:    xsi_set_current_line(148, ng0);
    t2 = (t0 + 3256U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB41;

LAB42:    xsi_set_current_line(158, ng0);

LAB48:    xsi_set_current_line(159, ng0);
    t2 = (t0 + 4616);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t11 = (t0 + 4616);
    xsi_vlogvar_wait_assign_value(t11, t5, 0, 0, 13, 0LL);
    xsi_set_current_line(160, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3816);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(161, ng0);
    t2 = (t0 + 4616);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    memcpy(t14, t5, 8);
    t11 = (t0 + 4136);
    xsi_vlogvar_wait_assign_value(t11, t14, 0, 0, 14, 0LL);
    xsi_set_current_line(162, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 3976);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 7, 0LL);
    xsi_set_current_line(163, ng0);
    t2 = (t0 + 4936);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t11 = (t0 + 4936);
    xsi_vlogvar_wait_assign_value(t11, t5, 0, 0, 7, 0LL);
    xsi_set_current_line(164, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 5256);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);

LAB43:
LAB36:
LAB32:
LAB28:    goto LAB22;

LAB18:    xsi_set_current_line(168, ng0);

LAB49:    xsi_set_current_line(169, ng0);
    t3 = (t0 + 4616);
    t5 = (t3 + 56U);
    t11 = *((char **)t5);
    t12 = (t0 + 4616);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 13, 0LL);
    xsi_set_current_line(170, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3816);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(171, ng0);
    t2 = (t0 + 4616);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    memcpy(t14, t5, 8);
    t11 = (t0 + 4136);
    xsi_vlogvar_wait_assign_value(t11, t14, 0, 0, 14, 0LL);
    xsi_set_current_line(172, ng0);
    t2 = (t0 + 4936);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t11 = (t0 + 3976);
    xsi_vlogvar_wait_assign_value(t11, t5, 0, 0, 7, 0LL);
    xsi_set_current_line(173, ng0);
    t2 = (t0 + 4936);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t11 = (t0 + 4936);
    xsi_vlogvar_wait_assign_value(t11, t5, 0, 0, 7, 0LL);
    xsi_set_current_line(174, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 5256);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB22;

LAB26:    xsi_set_current_line(122, ng0);

LAB29:    xsi_set_current_line(123, ng0);
    t11 = (t0 + 4616);
    t12 = (t11 + 56U);
    t15 = *((char **)t12);
    t16 = ((char*)((ng3)));
    memset(t14, 0, 8);
    xsi_vlog_unsigned_add(t14, 13, t15, 13, t16, 13);
    t17 = (t0 + 4616);
    xsi_vlogvar_wait_assign_value(t17, t14, 0, 0, 13, 0LL);
    xsi_set_current_line(124, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3816);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(125, ng0);
    t2 = (t0 + 4616);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    memcpy(t14, t5, 8);
    t11 = (t0 + 4136);
    xsi_vlogvar_wait_assign_value(t11, t14, 0, 0, 14, 0LL);
    xsi_set_current_line(126, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 3976);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 7, 0LL);
    xsi_set_current_line(127, ng0);
    t2 = (t0 + 4936);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t11 = (t0 + 4936);
    xsi_vlogvar_wait_assign_value(t11, t5, 0, 0, 7, 0LL);
    xsi_set_current_line(128, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 5256);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB28;

LAB30:    xsi_set_current_line(131, ng0);

LAB33:    xsi_set_current_line(132, ng0);
    t5 = (t0 + 4616);
    t11 = (t5 + 56U);
    t12 = *((char **)t11);
    t15 = ((char*)((ng3)));
    memset(t14, 0, 8);
    xsi_vlog_unsigned_minus(t14, 13, t12, 13, t15, 13);
    t16 = (t0 + 4616);
    xsi_vlogvar_wait_assign_value(t16, t14, 0, 0, 13, 0LL);
    xsi_set_current_line(133, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3816);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(134, ng0);
    t2 = (t0 + 4616);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    memcpy(t14, t5, 8);
    t11 = (t0 + 4136);
    xsi_vlogvar_wait_assign_value(t11, t14, 0, 0, 14, 0LL);
    xsi_set_current_line(135, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 3976);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 7, 0LL);
    xsi_set_current_line(136, ng0);
    t2 = (t0 + 4936);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t11 = (t0 + 4936);
    xsi_vlogvar_wait_assign_value(t11, t5, 0, 0, 7, 0LL);
    xsi_set_current_line(137, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 5256);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB32;

LAB34:    xsi_set_current_line(140, ng0);

LAB37:    xsi_set_current_line(141, ng0);
    t5 = (t0 + 4616);
    t11 = (t5 + 56U);
    t12 = *((char **)t11);
    t15 = ((char*)((ng7)));
    memset(t14, 0, 8);
    xsi_vlog_unsigned_add(t14, 32, t12, 13, t15, 32);
    t16 = (t0 + 7120);
    t17 = (t0 + 1392);
    t18 = xsi_create_subprogram_invocation(t16, 0, t0, t17, 0, 0);
    t19 = (t0 + 5416);
    xsi_vlogvar_assign_value(t19, t14, 0, 0, 14);

LAB38:    t20 = (t0 + 7216);
    t21 = *((char **)t20);
    t22 = (t21 + 80U);
    t23 = *((char **)t22);
    t24 = (t23 + 272U);
    t25 = *((char **)t24);
    t26 = (t25 + 0U);
    t27 = *((char **)t26);
    t13 = ((int  (*)(char *, char *))t27)(t0, t21);
    if (t13 != 0)
        goto LAB40;

LAB39:    t21 = (t0 + 7216);
    t28 = *((char **)t21);
    t21 = (t0 + 5576);
    t29 = (t21 + 56U);
    t30 = *((char **)t29);
    memcpy(t31, t30, 8);
    t32 = (t0 + 1392);
    t33 = (t0 + 7120);
    t34 = 0;
    xsi_delete_subprogram_invocation(t32, t28, t0, t33, t34);
    t35 = (t0 + 4616);
    xsi_vlogvar_wait_assign_value(t35, t31, 0, 0, 13, 0LL);
    xsi_set_current_line(142, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3816);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(143, ng0);
    t2 = (t0 + 4616);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    memcpy(t14, t5, 8);
    t11 = (t0 + 4136);
    xsi_vlogvar_wait_assign_value(t11, t14, 0, 0, 14, 0LL);
    xsi_set_current_line(144, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 3976);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 7, 0LL);
    xsi_set_current_line(145, ng0);
    t2 = (t0 + 4936);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t11 = (t0 + 4936);
    xsi_vlogvar_wait_assign_value(t11, t5, 0, 0, 7, 0LL);
    xsi_set_current_line(146, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 5256);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB36;

LAB40:    t20 = (t0 + 7312U);
    *((char **)t20) = &&LAB38;
    goto LAB1;

LAB41:    xsi_set_current_line(149, ng0);

LAB44:    xsi_set_current_line(150, ng0);
    t5 = (t0 + 4616);
    t11 = (t5 + 56U);
    t12 = *((char **)t11);
    t15 = ((char*)((ng8)));
    xsi_vlog_unsigned_minus(t36, 33, t12, 13, t15, 32);
    t16 = (t0 + 7120);
    t17 = (t0 + 1824);
    t18 = xsi_create_subprogram_invocation(t16, 0, t0, t17, 0, 0);
    t19 = (t0 + 5736);
    xsi_vlogvar_assign_value(t19, t36, 0, 0, 33);

LAB45:    t20 = (t0 + 7216);
    t21 = *((char **)t20);
    t22 = (t21 + 80U);
    t23 = *((char **)t22);
    t24 = (t23 + 272U);
    t25 = *((char **)t24);
    t26 = (t25 + 0U);
    t27 = *((char **)t26);
    t13 = ((int  (*)(char *, char *))t27)(t0, t21);
    if (t13 != 0)
        goto LAB47;

LAB46:    t21 = (t0 + 7216);
    t28 = *((char **)t21);
    t21 = (t0 + 5896);
    t29 = (t21 + 56U);
    t30 = *((char **)t29);
    memcpy(t14, t30, 8);
    t32 = (t0 + 1824);
    t33 = (t0 + 7120);
    t34 = 0;
    xsi_delete_subprogram_invocation(t32, t28, t0, t33, t34);
    t35 = (t0 + 4616);
    xsi_vlogvar_wait_assign_value(t35, t14, 0, 0, 13, 0LL);
    xsi_set_current_line(151, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3816);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(152, ng0);
    t2 = (t0 + 4616);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    memcpy(t14, t5, 8);
    t11 = (t0 + 4136);
    xsi_vlogvar_wait_assign_value(t11, t14, 0, 0, 14, 0LL);
    xsi_set_current_line(153, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 3976);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 7, 0LL);
    xsi_set_current_line(154, ng0);
    t2 = (t0 + 4936);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t11 = (t0 + 4936);
    xsi_vlogvar_wait_assign_value(t11, t5, 0, 0, 7, 0LL);
    xsi_set_current_line(155, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 5256);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB43;

LAB47:    t20 = (t0 + 7312U);
    *((char **)t20) = &&LAB45;
    goto LAB1;

}

static void Always_190_3(char *t0)
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

LAB0:    t1 = (t0 + 7560U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(190, ng0);
    t2 = (t0 + 7928);
    *((int *)t2) = 1;
    t3 = (t0 + 7592);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(191, ng0);

LAB5:    xsi_set_current_line(192, ng0);
    t4 = (t0 + 2616U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(198, ng0);

LAB10:    xsi_set_current_line(199, ng0);
    t2 = (t0 + 4776);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng9)));
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

LAB16:    xsi_set_current_line(205, ng0);

LAB19:    xsi_set_current_line(206, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 5096);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(207, ng0);
    t2 = (t0 + 4776);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t13, 0, 8);
    xsi_vlog_unsigned_add(t13, 14, t4, 14, t5, 14);
    t11 = (t0 + 4776);
    xsi_vlogvar_wait_assign_value(t11, t13, 0, 0, 14, 0LL);

LAB17:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(193, ng0);

LAB9:    xsi_set_current_line(194, ng0);
    t11 = ((char*)((ng6)));
    t12 = (t0 + 5096);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 1, 0LL);
    xsi_set_current_line(195, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 4776);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 14, 0LL);
    goto LAB8;

LAB13:    t21 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB14;

LAB15:    xsi_set_current_line(200, ng0);

LAB18:    xsi_set_current_line(201, ng0);
    t28 = ((char*)((ng3)));
    t29 = (t0 + 5096);
    xsi_vlogvar_wait_assign_value(t29, t28, 0, 0, 1, 0LL);
    xsi_set_current_line(202, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 4776);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 14, 0LL);
    goto LAB17;

}


extern void work_m_00000000000810641788_3019199309_init()
{
	static char *pe[] = {(void *)Always_50_0,(void *)Always_63_1,(void *)Always_87_2,(void *)Always_190_3};
	static char *se[] = {(void *)sp_trunc_14_to_13,(void *)sp_trunc_32_to_13};
	xsi_register_didat("work_m_00000000000810641788_3019199309", "isim/TestGlyphMover_TestBench_isim_beh.exe.sim/work/m_00000000000810641788_3019199309.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}
