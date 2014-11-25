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
static const char *ng0 = "C:/Users/u0655172/Desktop/ECE3710/Titan/Processor/Processor_Titan/LogicController.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {7U, 0U};
static unsigned int ng3[] = {10U, 0U};
static unsigned int ng4[] = {1U, 0U};
static int ng5[] = {0, 0};
static unsigned int ng6[] = {5U, 0U};
static unsigned int ng7[] = {9U, 0U};
static unsigned int ng8[] = {14U, 0U};
static unsigned int ng9[] = {6U, 0U};
static unsigned int ng10[] = {11U, 0U};
static unsigned int ng11[] = {3U, 0U};
static unsigned int ng12[] = {2U, 0U};
static unsigned int ng13[] = {4U, 0U};
static unsigned int ng14[] = {12U, 0U};
static unsigned int ng15[] = {13U, 0U};
static unsigned int ng16[] = {15U, 0U};
static unsigned int ng17[] = {8U, 0U};



static void Always_88_0(char *t0)
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

LAB0:    t1 = (t0 + 11600U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(88, ng0);
    t2 = (t0 + 12664);
    *((int *)t2) = 1;
    t3 = (t0 + 11632);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(89, ng0);

LAB5:    xsi_set_current_line(90, ng0);
    t4 = (t0 + 6920U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(93, ng0);
    t2 = (t0 + 10680);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 10520);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 1, 0LL);

LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(91, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 10520);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 1, 0LL);
    goto LAB8;

}

static void Always_97_1(char *t0)
{
    char t11[8];
    char t27[8];
    char t42[8];
    char t58[8];
    char t66[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    int t8;
    char *t9;
    char *t10;
    char *t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    char *t26;
    char *t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    char *t34;
    char *t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    char *t40;
    char *t41;
    char *t43;
    char *t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    char *t57;
    char *t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    char *t65;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    char *t70;
    char *t71;
    char *t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    char *t80;
    char *t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    int t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    int t89;
    unsigned int t90;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    char *t94;
    unsigned int t95;
    unsigned int t96;
    unsigned int t97;
    unsigned int t98;
    unsigned int t99;
    char *t100;
    char *t101;

LAB0:    t1 = (t0 + 11848U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(97, ng0);
    t2 = (t0 + 12680);
    *((int *)t2) = 1;
    t3 = (t0 + 11880);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(98, ng0);

LAB5:    xsi_set_current_line(99, ng0);
    t4 = (t0 + 10520);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);

LAB6:    t7 = ((char*)((ng1)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 1, t7, 1);
    if (t8 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng4)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 1, t2, 1);
    if (t8 == 1)
        goto LAB9;

LAB10:
LAB12:
LAB11:    xsi_set_current_line(106, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 10680);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);

LAB13:    goto LAB2;

LAB7:    xsi_set_current_line(101, ng0);
    t9 = (t0 + 7080U);
    t10 = *((char **)t9);
    t9 = ((char*)((ng2)));
    memset(t11, 0, 8);
    t12 = (t10 + 4);
    t13 = (t9 + 4);
    t14 = *((unsigned int *)t10);
    t15 = *((unsigned int *)t9);
    t16 = (t14 ^ t15);
    t17 = *((unsigned int *)t12);
    t18 = *((unsigned int *)t13);
    t19 = (t17 ^ t18);
    t20 = (t16 | t19);
    t21 = *((unsigned int *)t12);
    t22 = *((unsigned int *)t13);
    t23 = (t21 | t22);
    t24 = (~(t23));
    t25 = (t20 & t24);
    if (t25 != 0)
        goto LAB17;

LAB14:    if (t23 != 0)
        goto LAB16;

LAB15:    *((unsigned int *)t11) = 1;

LAB17:    memset(t27, 0, 8);
    t28 = (t11 + 4);
    t29 = *((unsigned int *)t28);
    t30 = (~(t29));
    t31 = *((unsigned int *)t11);
    t32 = (t31 & t30);
    t33 = (t32 & 1U);
    if (t33 != 0)
        goto LAB18;

LAB19:    if (*((unsigned int *)t28) != 0)
        goto LAB20;

LAB21:    t35 = (t27 + 4);
    t36 = *((unsigned int *)t27);
    t37 = (!(t36));
    t38 = *((unsigned int *)t35);
    t39 = (t37 || t38);
    if (t39 > 0)
        goto LAB22;

LAB23:    memcpy(t66, t27, 8);

LAB24:    t94 = (t66 + 4);
    t95 = *((unsigned int *)t94);
    t96 = (~(t95));
    t97 = *((unsigned int *)t66);
    t98 = (t97 & t96);
    t99 = (t98 != 0);
    if (t99 > 0)
        goto LAB36;

LAB37:    xsi_set_current_line(104, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 10680);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);

LAB38:    goto LAB13;

LAB9:    xsi_set_current_line(105, ng0);
    t3 = ((char*)((ng1)));
    t4 = (t0 + 10680);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 1, 0LL);
    goto LAB13;

LAB16:    t26 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t26) = 1;
    goto LAB17;

LAB18:    *((unsigned int *)t27) = 1;
    goto LAB21;

LAB20:    t34 = (t27 + 4);
    *((unsigned int *)t27) = 1;
    *((unsigned int *)t34) = 1;
    goto LAB21;

LAB22:    t40 = (t0 + 7080U);
    t41 = *((char **)t40);
    t40 = ((char*)((ng3)));
    memset(t42, 0, 8);
    t43 = (t41 + 4);
    t44 = (t40 + 4);
    t45 = *((unsigned int *)t41);
    t46 = *((unsigned int *)t40);
    t47 = (t45 ^ t46);
    t48 = *((unsigned int *)t43);
    t49 = *((unsigned int *)t44);
    t50 = (t48 ^ t49);
    t51 = (t47 | t50);
    t52 = *((unsigned int *)t43);
    t53 = *((unsigned int *)t44);
    t54 = (t52 | t53);
    t55 = (~(t54));
    t56 = (t51 & t55);
    if (t56 != 0)
        goto LAB28;

LAB25:    if (t54 != 0)
        goto LAB27;

LAB26:    *((unsigned int *)t42) = 1;

LAB28:    memset(t58, 0, 8);
    t59 = (t42 + 4);
    t60 = *((unsigned int *)t59);
    t61 = (~(t60));
    t62 = *((unsigned int *)t42);
    t63 = (t62 & t61);
    t64 = (t63 & 1U);
    if (t64 != 0)
        goto LAB29;

LAB30:    if (*((unsigned int *)t59) != 0)
        goto LAB31;

LAB32:    t67 = *((unsigned int *)t27);
    t68 = *((unsigned int *)t58);
    t69 = (t67 | t68);
    *((unsigned int *)t66) = t69;
    t70 = (t27 + 4);
    t71 = (t58 + 4);
    t72 = (t66 + 4);
    t73 = *((unsigned int *)t70);
    t74 = *((unsigned int *)t71);
    t75 = (t73 | t74);
    *((unsigned int *)t72) = t75;
    t76 = *((unsigned int *)t72);
    t77 = (t76 != 0);
    if (t77 == 1)
        goto LAB33;

LAB34:
LAB35:    goto LAB24;

LAB27:    t57 = (t42 + 4);
    *((unsigned int *)t42) = 1;
    *((unsigned int *)t57) = 1;
    goto LAB28;

LAB29:    *((unsigned int *)t58) = 1;
    goto LAB32;

LAB31:    t65 = (t58 + 4);
    *((unsigned int *)t58) = 1;
    *((unsigned int *)t65) = 1;
    goto LAB32;

LAB33:    t78 = *((unsigned int *)t66);
    t79 = *((unsigned int *)t72);
    *((unsigned int *)t66) = (t78 | t79);
    t80 = (t27 + 4);
    t81 = (t58 + 4);
    t82 = *((unsigned int *)t80);
    t83 = (~(t82));
    t84 = *((unsigned int *)t27);
    t85 = (t84 & t83);
    t86 = *((unsigned int *)t81);
    t87 = (~(t86));
    t88 = *((unsigned int *)t58);
    t89 = (t88 & t87);
    t90 = (~(t85));
    t91 = (~(t89));
    t92 = *((unsigned int *)t72);
    *((unsigned int *)t72) = (t92 & t90);
    t93 = *((unsigned int *)t72);
    *((unsigned int *)t72) = (t93 & t91);
    goto LAB35;

LAB36:    xsi_set_current_line(102, ng0);
    t100 = ((char*)((ng4)));
    t101 = (t0 + 10680);
    xsi_vlogvar_wait_assign_value(t101, t100, 0, 0, 1, 0LL);
    goto LAB38;

}

static void Always_111_2(char *t0)
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
    int t14;
    char *t15;

LAB0:    t1 = (t0 + 12096U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(111, ng0);
    t2 = (t0 + 12696);
    *((int *)t2) = 1;
    t3 = (t0 + 12128);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(112, ng0);

LAB5:    xsi_set_current_line(113, ng0);
    t4 = (t0 + 6920U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(135, ng0);

LAB10:    xsi_set_current_line(137, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 7640);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(138, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 7800);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(139, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 7960);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(140, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 8120);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(141, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 8280);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(142, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 8440);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(143, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 8600);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(144, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 8760);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(145, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 8920);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(146, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 9080);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(147, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 9240);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(148, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 9400);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(149, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 9560);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(150, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 9720);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(151, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 9880);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(152, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 10360);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);
    xsi_set_current_line(153, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 10200);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(155, ng0);
    t2 = (t0 + 7080U);
    t3 = *((char **)t2);

LAB11:    t2 = ((char*)((ng6)));
    t13 = xsi_vlog_unsigned_case_compare(t3, 4, t2, 4);
    if (t13 == 1)
        goto LAB12;

LAB13:    t2 = ((char*)((ng7)));
    t13 = xsi_vlog_unsigned_case_compare(t3, 4, t2, 4);
    if (t13 == 1)
        goto LAB14;

LAB15:    t2 = ((char*)((ng8)));
    t13 = xsi_vlog_unsigned_case_compare(t3, 4, t2, 4);
    if (t13 == 1)
        goto LAB16;

LAB17:    t2 = ((char*)((ng10)));
    t13 = xsi_vlog_unsigned_case_compare(t3, 4, t2, 4);
    if (t13 == 1)
        goto LAB18;

LAB19:    t2 = ((char*)((ng4)));
    t13 = xsi_vlog_unsigned_case_compare(t3, 4, t2, 4);
    if (t13 == 1)
        goto LAB20;

LAB21:    t2 = ((char*)((ng12)));
    t13 = xsi_vlog_unsigned_case_compare(t3, 4, t2, 4);
    if (t13 == 1)
        goto LAB22;

LAB23:    t2 = ((char*)((ng11)));
    t13 = xsi_vlog_unsigned_case_compare(t3, 4, t2, 4);
    if (t13 == 1)
        goto LAB24;

LAB25:    t2 = ((char*)((ng14)));
    t13 = xsi_vlog_unsigned_case_compare(t3, 4, t2, 4);
    if (t13 == 1)
        goto LAB26;

LAB27:    t2 = ((char*)((ng15)));
    t13 = xsi_vlog_unsigned_case_compare(t3, 4, t2, 4);
    if (t13 == 1)
        goto LAB28;

LAB29:    t2 = ((char*)((ng16)));
    t13 = xsi_vlog_unsigned_case_compare(t3, 4, t2, 4);
    if (t13 == 1)
        goto LAB30;

LAB31:    t2 = ((char*)((ng9)));
    t13 = xsi_vlog_unsigned_case_compare(t3, 4, t2, 4);
    if (t13 == 1)
        goto LAB32;

LAB33:    t2 = ((char*)((ng1)));
    t13 = xsi_vlog_unsigned_case_compare(t3, 4, t2, 4);
    if (t13 == 1)
        goto LAB34;

LAB35:    t2 = ((char*)((ng17)));
    t13 = xsi_vlog_unsigned_case_compare(t3, 4, t2, 4);
    if (t13 == 1)
        goto LAB36;

LAB37:    t2 = ((char*)((ng2)));
    t13 = xsi_vlog_unsigned_case_compare(t3, 4, t2, 4);
    if (t13 == 1)
        goto LAB38;

LAB39:    t2 = ((char*)((ng3)));
    t13 = xsi_vlog_unsigned_case_compare(t3, 4, t2, 4);
    if (t13 == 1)
        goto LAB40;

LAB41:    t2 = ((char*)((ng13)));
    t13 = xsi_vlog_unsigned_case_compare(t3, 4, t2, 4);
    if (t13 == 1)
        goto LAB42;

LAB43:
LAB45:
LAB44:    xsi_set_current_line(372, ng0);

LAB112:    xsi_set_current_line(373, ng0);
    t2 = ((char*)((ng4)));
    t4 = (t0 + 8760);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(374, ng0);
    t2 = ((char*)((ng4)));
    t4 = (t0 + 8920);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);

LAB46:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(114, ng0);

LAB9:    xsi_set_current_line(116, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 7640);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 1, 0LL);
    xsi_set_current_line(117, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 7800);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(118, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 7960);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(119, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 8120);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(120, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 8280);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(121, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 8440);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(122, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 8600);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(123, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 8760);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(124, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 8920);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(125, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 9080);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(126, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 9240);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(127, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 9400);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(128, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 9560);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(129, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 9720);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(130, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 9880);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(131, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 10360);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);
    xsi_set_current_line(132, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 10200);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB8;

LAB12:    xsi_set_current_line(158, ng0);

LAB47:    xsi_set_current_line(159, ng0);
    t4 = ((char*)((ng4)));
    t5 = (t0 + 8120);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(160, ng0);
    t2 = ((char*)((ng4)));
    t4 = (t0 + 8760);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(161, ng0);
    t2 = ((char*)((ng4)));
    t4 = (t0 + 8920);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(162, ng0);
    t2 = ((char*)((ng4)));
    t4 = (t0 + 9400);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);
    goto LAB46;

LAB14:    xsi_set_current_line(165, ng0);

LAB48:    xsi_set_current_line(166, ng0);
    t4 = ((char*)((ng4)));
    t5 = (t0 + 8120);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(167, ng0);
    t2 = ((char*)((ng4)));
    t4 = (t0 + 8760);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(168, ng0);
    t2 = ((char*)((ng4)));
    t4 = (t0 + 8920);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(169, ng0);
    t2 = ((char*)((ng4)));
    t4 = (t0 + 9400);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(170, ng0);
    t2 = ((char*)((ng4)));
    t4 = (t0 + 10360);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 3, 0LL);
    goto LAB46;

LAB16:    xsi_set_current_line(173, ng0);

LAB49:    xsi_set_current_line(174, ng0);
    t4 = ((char*)((ng4)));
    t5 = (t0 + 8760);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(175, ng0);
    t2 = ((char*)((ng4)));
    t4 = (t0 + 8920);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(176, ng0);
    t2 = ((char*)((ng4)));
    t4 = (t0 + 9400);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(177, ng0);
    t2 = ((char*)((ng9)));
    t4 = (t0 + 10360);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 3, 0LL);
    goto LAB46;

LAB18:    xsi_set_current_line(180, ng0);

LAB50:    xsi_set_current_line(181, ng0);
    t4 = ((char*)((ng4)));
    t5 = (t0 + 8280);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(182, ng0);
    t2 = ((char*)((ng4)));
    t4 = (t0 + 8760);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(183, ng0);
    t2 = ((char*)((ng4)));
    t4 = (t0 + 8920);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(184, ng0);
    t2 = ((char*)((ng2)));
    t4 = (t0 + 10360);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 3, 0LL);
    goto LAB46;

LAB20:    xsi_set_current_line(187, ng0);

LAB51:    xsi_set_current_line(188, ng0);
    t4 = ((char*)((ng4)));
    t5 = (t0 + 8760);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(189, ng0);
    t2 = ((char*)((ng4)));
    t4 = (t0 + 8920);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(190, ng0);
    t2 = ((char*)((ng4)));
    t4 = (t0 + 9400);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(191, ng0);
    t2 = ((char*)((ng11)));
    t4 = (t0 + 10360);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 3, 0LL);
    goto LAB46;

LAB22:    xsi_set_current_line(194, ng0);

LAB52:    xsi_set_current_line(195, ng0);
    t4 = ((char*)((ng4)));
    t5 = (t0 + 8760);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(196, ng0);
    t2 = ((char*)((ng4)));
    t4 = (t0 + 8920);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(197, ng0);
    t2 = ((char*)((ng4)));
    t4 = (t0 + 9400);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(198, ng0);
    t2 = ((char*)((ng12)));
    t4 = (t0 + 10360);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 3, 0LL);
    goto LAB46;

LAB24:    xsi_set_current_line(201, ng0);

LAB53:    xsi_set_current_line(202, ng0);
    t4 = ((char*)((ng4)));
    t5 = (t0 + 8760);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(203, ng0);
    t2 = ((char*)((ng4)));
    t4 = (t0 + 8920);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(204, ng0);
    t2 = ((char*)((ng4)));
    t4 = (t0 + 9400);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(205, ng0);
    t2 = ((char*)((ng13)));
    t4 = (t0 + 10360);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 3, 0LL);
    goto LAB46;

LAB26:    xsi_set_current_line(208, ng0);

LAB54:    xsi_set_current_line(209, ng0);
    t4 = ((char*)((ng4)));
    t5 = (t0 + 7640);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 1, 0LL);
    goto LAB46;

LAB28:    xsi_set_current_line(213, ng0);

LAB55:    xsi_set_current_line(214, ng0);
    t4 = ((char*)((ng4)));
    t5 = (t0 + 7800);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 1, 0LL);
    goto LAB46;

LAB30:    xsi_set_current_line(217, ng0);

LAB56:    xsi_set_current_line(218, ng0);
    t4 = ((char*)((ng4)));
    t5 = (t0 + 7800);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(219, ng0);
    t2 = ((char*)((ng4)));
    t4 = (t0 + 9560);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);
    goto LAB46;

LAB32:    xsi_set_current_line(222, ng0);

LAB57:    xsi_set_current_line(223, ng0);
    t4 = ((char*)((ng4)));
    t5 = (t0 + 7960);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 1, 0LL);
    goto LAB46;

LAB34:    xsi_set_current_line(226, ng0);

LAB58:    xsi_set_current_line(227, ng0);
    t4 = (t0 + 7240U);
    t5 = *((char **)t4);

LAB59:    t4 = ((char*)((ng6)));
    t14 = xsi_vlog_unsigned_case_compare(t5, 4, t4, 4);
    if (t14 == 1)
        goto LAB60;

LAB61:    t2 = ((char*)((ng9)));
    t13 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t13 == 1)
        goto LAB62;

LAB63:    t2 = ((char*)((ng7)));
    t13 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t13 == 1)
        goto LAB64;

LAB65:    t2 = ((char*)((ng8)));
    t13 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t13 == 1)
        goto LAB66;

LAB67:    t2 = ((char*)((ng10)));
    t13 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t13 == 1)
        goto LAB68;

LAB69:    t2 = ((char*)((ng4)));
    t13 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t13 == 1)
        goto LAB70;

LAB71:    t2 = ((char*)((ng12)));
    t13 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t13 == 1)
        goto LAB72;

LAB73:    t2 = ((char*)((ng11)));
    t13 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t13 == 1)
        goto LAB74;

LAB75:    t2 = ((char*)((ng13)));
    t13 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t13 == 1)
        goto LAB76;

LAB77:
LAB79:
LAB78:    xsi_set_current_line(302, ng0);

LAB90:    xsi_set_current_line(303, ng0);
    t2 = ((char*)((ng4)));
    t4 = (t0 + 8120);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(304, ng0);
    t2 = ((char*)((ng4)));
    t4 = (t0 + 8760);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(305, ng0);
    t2 = ((char*)((ng4)));
    t4 = (t0 + 8920);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(306, ng0);
    t2 = ((char*)((ng4)));
    t4 = (t0 + 9240);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(307, ng0);
    t2 = ((char*)((ng4)));
    t4 = (t0 + 9400);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(308, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 10360);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 3, 0LL);

LAB80:    goto LAB46;

LAB36:    xsi_set_current_line(313, ng0);

LAB91:    xsi_set_current_line(314, ng0);
    t4 = (t0 + 7240U);
    t11 = *((char **)t4);

LAB92:    t4 = ((char*)((ng13)));
    t14 = xsi_vlog_unsigned_case_compare(t11, 4, t4, 4);
    if (t14 == 1)
        goto LAB93;

LAB94:    t2 = ((char*)((ng1)));
    t13 = xsi_vlog_unsigned_case_compare(t11, 4, t2, 4);
    if (t13 == 1)
        goto LAB95;

LAB96:    t2 = ((char*)((ng9)));
    t13 = xsi_vlog_unsigned_case_compare(t11, 4, t2, 4);
    if (t13 == 1)
        goto LAB97;

LAB98:    t2 = ((char*)((ng11)));
    t13 = xsi_vlog_unsigned_case_compare(t11, 4, t2, 4);
    if (t13 == 1)
        goto LAB99;

LAB100:
LAB102:
LAB101:    xsi_set_current_line(344, ng0);

LAB108:    xsi_set_current_line(345, ng0);
    t2 = ((char*)((ng4)));
    t4 = (t0 + 8760);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(346, ng0);
    t2 = ((char*)((ng4)));
    t4 = (t0 + 9080);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(347, ng0);
    t2 = ((char*)((ng4)));
    t4 = (t0 + 9240);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(348, ng0);
    t2 = ((char*)((ng4)));
    t4 = (t0 + 9400);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);

LAB103:    goto LAB46;

LAB38:    xsi_set_current_line(354, ng0);

LAB109:    xsi_set_current_line(355, ng0);
    t4 = ((char*)((ng4)));
    t12 = (t0 + 10200);
    xsi_vlogvar_wait_assign_value(t12, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(356, ng0);
    t2 = ((char*)((ng4)));
    t4 = (t0 + 8920);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(357, ng0);
    t2 = ((char*)((ng4)));
    t4 = (t0 + 9400);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);
    goto LAB46;

LAB40:    xsi_set_current_line(360, ng0);

LAB110:    xsi_set_current_line(361, ng0);
    t4 = ((char*)((ng4)));
    t12 = (t0 + 10200);
    xsi_vlogvar_wait_assign_value(t12, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(362, ng0);
    t2 = ((char*)((ng4)));
    t4 = (t0 + 8920);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(363, ng0);
    t2 = ((char*)((ng4)));
    t4 = (t0 + 9880);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(364, ng0);
    t2 = ((char*)((ng4)));
    t4 = (t0 + 8600);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);
    goto LAB46;

LAB42:    xsi_set_current_line(367, ng0);

LAB111:    xsi_set_current_line(368, ng0);
    t4 = ((char*)((ng4)));
    t12 = (t0 + 9400);
    xsi_vlogvar_wait_assign_value(t12, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(369, ng0);
    t2 = ((char*)((ng4)));
    t4 = (t0 + 8440);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);
    goto LAB46;

LAB60:    xsi_set_current_line(229, ng0);

LAB81:    xsi_set_current_line(230, ng0);
    t11 = ((char*)((ng4)));
    t12 = (t0 + 8120);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 1, 0LL);
    xsi_set_current_line(231, ng0);
    t2 = ((char*)((ng4)));
    t4 = (t0 + 8760);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(232, ng0);
    t2 = ((char*)((ng4)));
    t4 = (t0 + 8920);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(233, ng0);
    t2 = ((char*)((ng4)));
    t4 = (t0 + 9240);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(234, ng0);
    t2 = ((char*)((ng4)));
    t4 = (t0 + 9400);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(235, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 10360);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 3, 0LL);
    goto LAB80;

LAB62:    xsi_set_current_line(238, ng0);

LAB82:    xsi_set_current_line(239, ng0);
    t4 = ((char*)((ng4)));
    t11 = (t0 + 8760);
    xsi_vlogvar_wait_assign_value(t11, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(240, ng0);
    t2 = ((char*)((ng4)));
    t4 = (t0 + 8920);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(241, ng0);
    t2 = ((char*)((ng4)));
    t4 = (t0 + 9240);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(242, ng0);
    t2 = ((char*)((ng4)));
    t4 = (t0 + 9400);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(243, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 10360);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 3, 0LL);
    goto LAB80;

LAB64:    xsi_set_current_line(246, ng0);

LAB83:    xsi_set_current_line(247, ng0);
    t4 = ((char*)((ng4)));
    t11 = (t0 + 8120);
    xsi_vlogvar_wait_assign_value(t11, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(248, ng0);
    t2 = ((char*)((ng4)));
    t4 = (t0 + 8760);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(249, ng0);
    t2 = ((char*)((ng4)));
    t4 = (t0 + 8920);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(250, ng0);
    t2 = ((char*)((ng4)));
    t4 = (t0 + 9240);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(251, ng0);
    t2 = ((char*)((ng4)));
    t4 = (t0 + 9400);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(252, ng0);
    t2 = ((char*)((ng4)));
    t4 = (t0 + 10360);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 3, 0LL);
    goto LAB80;

LAB66:    xsi_set_current_line(255, ng0);

LAB84:    xsi_set_current_line(256, ng0);
    t4 = ((char*)((ng4)));
    t11 = (t0 + 8760);
    xsi_vlogvar_wait_assign_value(t11, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(257, ng0);
    t2 = ((char*)((ng4)));
    t4 = (t0 + 8920);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(258, ng0);
    t2 = ((char*)((ng4)));
    t4 = (t0 + 9240);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(259, ng0);
    t2 = ((char*)((ng4)));
    t4 = (t0 + 9400);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(260, ng0);
    t2 = ((char*)((ng9)));
    t4 = (t0 + 10360);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 3, 0LL);
    goto LAB80;

LAB68:    xsi_set_current_line(263, ng0);

LAB85:    xsi_set_current_line(264, ng0);
    t4 = ((char*)((ng4)));
    t11 = (t0 + 8280);
    xsi_vlogvar_wait_assign_value(t11, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(265, ng0);
    t2 = ((char*)((ng4)));
    t4 = (t0 + 8760);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(266, ng0);
    t2 = ((char*)((ng4)));
    t4 = (t0 + 8920);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(267, ng0);
    t2 = ((char*)((ng4)));
    t4 = (t0 + 9240);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(268, ng0);
    t2 = ((char*)((ng2)));
    t4 = (t0 + 10360);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 3, 0LL);
    goto LAB80;

LAB70:    xsi_set_current_line(271, ng0);

LAB86:    xsi_set_current_line(272, ng0);
    t4 = ((char*)((ng4)));
    t11 = (t0 + 8760);
    xsi_vlogvar_wait_assign_value(t11, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(273, ng0);
    t2 = ((char*)((ng4)));
    t4 = (t0 + 8920);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(274, ng0);
    t2 = ((char*)((ng4)));
    t4 = (t0 + 9240);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(275, ng0);
    t2 = ((char*)((ng4)));
    t4 = (t0 + 9400);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(276, ng0);
    t2 = ((char*)((ng11)));
    t4 = (t0 + 10360);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 3, 0LL);
    goto LAB80;

LAB72:    xsi_set_current_line(279, ng0);

LAB87:    xsi_set_current_line(280, ng0);
    t4 = ((char*)((ng4)));
    t11 = (t0 + 8760);
    xsi_vlogvar_wait_assign_value(t11, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(281, ng0);
    t2 = ((char*)((ng4)));
    t4 = (t0 + 8920);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(282, ng0);
    t2 = ((char*)((ng4)));
    t4 = (t0 + 9240);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(283, ng0);
    t2 = ((char*)((ng4)));
    t4 = (t0 + 9400);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(284, ng0);
    t2 = ((char*)((ng12)));
    t4 = (t0 + 10360);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 3, 0LL);
    goto LAB80;

LAB74:    xsi_set_current_line(287, ng0);

LAB88:    xsi_set_current_line(288, ng0);
    t4 = ((char*)((ng4)));
    t11 = (t0 + 8760);
    xsi_vlogvar_wait_assign_value(t11, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(289, ng0);
    t2 = ((char*)((ng4)));
    t4 = (t0 + 8920);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(290, ng0);
    t2 = ((char*)((ng4)));
    t4 = (t0 + 9240);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(291, ng0);
    t2 = ((char*)((ng4)));
    t4 = (t0 + 9400);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(292, ng0);
    t2 = ((char*)((ng13)));
    t4 = (t0 + 10360);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 3, 0LL);
    goto LAB80;

LAB76:    xsi_set_current_line(295, ng0);

LAB89:    xsi_set_current_line(296, ng0);
    t4 = ((char*)((ng4)));
    t11 = (t0 + 8760);
    xsi_vlogvar_wait_assign_value(t11, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(297, ng0);
    t2 = ((char*)((ng4)));
    t4 = (t0 + 8920);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(298, ng0);
    t2 = ((char*)((ng4)));
    t4 = (t0 + 9400);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(299, ng0);
    t2 = ((char*)((ng6)));
    t4 = (t0 + 10360);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 3, 0LL);
    goto LAB80;

LAB93:    xsi_set_current_line(316, ng0);

LAB104:    xsi_set_current_line(317, ng0);
    t12 = ((char*)((ng4)));
    t15 = (t0 + 8760);
    xsi_vlogvar_wait_assign_value(t15, t12, 0, 0, 1, 0LL);
    xsi_set_current_line(318, ng0);
    t2 = ((char*)((ng4)));
    t4 = (t0 + 9080);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(319, ng0);
    t2 = ((char*)((ng4)));
    t4 = (t0 + 9240);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(320, ng0);
    t2 = ((char*)((ng4)));
    t4 = (t0 + 9400);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);
    goto LAB103;

LAB95:    xsi_set_current_line(323, ng0);

LAB105:    xsi_set_current_line(324, ng0);
    t4 = ((char*)((ng4)));
    t12 = (t0 + 8760);
    xsi_vlogvar_wait_assign_value(t12, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(325, ng0);
    t2 = ((char*)((ng4)));
    t4 = (t0 + 9400);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);
    goto LAB103;

LAB97:    xsi_set_current_line(328, ng0);

LAB106:    xsi_set_current_line(329, ng0);
    t4 = ((char*)((ng4)));
    t12 = (t0 + 8760);
    xsi_vlogvar_wait_assign_value(t12, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(330, ng0);
    t2 = ((char*)((ng4)));
    t4 = (t0 + 9080);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(331, ng0);
    t2 = ((char*)((ng4)));
    t4 = (t0 + 9240);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(332, ng0);
    t2 = ((char*)((ng4)));
    t4 = (t0 + 9400);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(333, ng0);
    t2 = ((char*)((ng4)));
    t4 = (t0 + 9720);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);
    goto LAB103;

LAB99:    xsi_set_current_line(336, ng0);

LAB107:    xsi_set_current_line(337, ng0);
    t4 = ((char*)((ng4)));
    t12 = (t0 + 8760);
    xsi_vlogvar_wait_assign_value(t12, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(338, ng0);
    t2 = ((char*)((ng4)));
    t4 = (t0 + 9080);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(339, ng0);
    t2 = ((char*)((ng4)));
    t4 = (t0 + 9240);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(340, ng0);
    t2 = ((char*)((ng4)));
    t4 = (t0 + 9400);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(341, ng0);
    t2 = ((char*)((ng4)));
    t4 = (t0 + 9720);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);
    goto LAB103;

}

static void Always_381_3(char *t0)
{
    char t14[8];
    char t25[8];
    char t40[8];
    char t56[8];
    char t64[8];
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
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;
    char *t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    char *t32;
    char *t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    char *t38;
    char *t39;
    char *t41;
    char *t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    char *t55;
    char *t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    char *t63;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    char *t68;
    char *t69;
    char *t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    char *t78;
    char *t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    int t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    int t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    char *t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    unsigned int t97;
    char *t98;
    char *t99;

LAB0:    t1 = (t0 + 12344U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(381, ng0);
    t2 = (t0 + 12712);
    *((int *)t2) = 1;
    t3 = (t0 + 12376);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(382, ng0);

LAB5:    xsi_set_current_line(383, ng0);
    t4 = (t0 + 6920U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(389, ng0);

LAB10:    xsi_set_current_line(390, ng0);
    t2 = (t0 + 10520);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);

LAB11:    t5 = ((char*)((ng1)));
    t13 = xsi_vlog_unsigned_case_compare(t4, 1, t5, 1);
    if (t13 == 1)
        goto LAB12;

LAB13:    t2 = ((char*)((ng4)));
    t13 = xsi_vlog_unsigned_case_compare(t4, 1, t2, 1);
    if (t13 == 1)
        goto LAB14;

LAB15:
LAB17:
LAB16:    xsi_set_current_line(407, ng0);

LAB48:    xsi_set_current_line(408, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 10040);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);

LAB18:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(384, ng0);

LAB9:    xsi_set_current_line(385, ng0);
    t11 = ((char*)((ng5)));
    t12 = (t0 + 10040);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 1, 0LL);
    goto LAB8;

LAB12:    xsi_set_current_line(391, ng0);

LAB19:    xsi_set_current_line(392, ng0);
    t11 = (t0 + 7080U);
    t12 = *((char **)t11);
    t11 = ((char*)((ng2)));
    memset(t14, 0, 8);
    t15 = (t12 + 4);
    t16 = (t11 + 4);
    t6 = *((unsigned int *)t12);
    t7 = *((unsigned int *)t11);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t15);
    t10 = *((unsigned int *)t16);
    t17 = (t9 ^ t10);
    t18 = (t8 | t17);
    t19 = *((unsigned int *)t15);
    t20 = *((unsigned int *)t16);
    t21 = (t19 | t20);
    t22 = (~(t21));
    t23 = (t18 & t22);
    if (t23 != 0)
        goto LAB23;

LAB20:    if (t21 != 0)
        goto LAB22;

LAB21:    *((unsigned int *)t14) = 1;

LAB23:    memset(t25, 0, 8);
    t26 = (t14 + 4);
    t27 = *((unsigned int *)t26);
    t28 = (~(t27));
    t29 = *((unsigned int *)t14);
    t30 = (t29 & t28);
    t31 = (t30 & 1U);
    if (t31 != 0)
        goto LAB24;

LAB25:    if (*((unsigned int *)t26) != 0)
        goto LAB26;

LAB27:    t33 = (t25 + 4);
    t34 = *((unsigned int *)t25);
    t35 = (!(t34));
    t36 = *((unsigned int *)t33);
    t37 = (t35 || t36);
    if (t37 > 0)
        goto LAB28;

LAB29:    memcpy(t64, t25, 8);

LAB30:    t92 = (t64 + 4);
    t93 = *((unsigned int *)t92);
    t94 = (~(t93));
    t95 = *((unsigned int *)t64);
    t96 = (t95 & t94);
    t97 = (t96 != 0);
    if (t97 > 0)
        goto LAB42;

LAB43:    xsi_set_current_line(398, ng0);

LAB46:    xsi_set_current_line(399, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 10040);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);

LAB44:    goto LAB18;

LAB14:    xsi_set_current_line(403, ng0);

LAB47:    xsi_set_current_line(404, ng0);
    t3 = ((char*)((ng4)));
    t5 = (t0 + 10040);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 1, 0LL);
    goto LAB18;

LAB22:    t24 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t24) = 1;
    goto LAB23;

LAB24:    *((unsigned int *)t25) = 1;
    goto LAB27;

LAB26:    t32 = (t25 + 4);
    *((unsigned int *)t25) = 1;
    *((unsigned int *)t32) = 1;
    goto LAB27;

LAB28:    t38 = (t0 + 7080U);
    t39 = *((char **)t38);
    t38 = ((char*)((ng3)));
    memset(t40, 0, 8);
    t41 = (t39 + 4);
    t42 = (t38 + 4);
    t43 = *((unsigned int *)t39);
    t44 = *((unsigned int *)t38);
    t45 = (t43 ^ t44);
    t46 = *((unsigned int *)t41);
    t47 = *((unsigned int *)t42);
    t48 = (t46 ^ t47);
    t49 = (t45 | t48);
    t50 = *((unsigned int *)t41);
    t51 = *((unsigned int *)t42);
    t52 = (t50 | t51);
    t53 = (~(t52));
    t54 = (t49 & t53);
    if (t54 != 0)
        goto LAB34;

LAB31:    if (t52 != 0)
        goto LAB33;

LAB32:    *((unsigned int *)t40) = 1;

LAB34:    memset(t56, 0, 8);
    t57 = (t40 + 4);
    t58 = *((unsigned int *)t57);
    t59 = (~(t58));
    t60 = *((unsigned int *)t40);
    t61 = (t60 & t59);
    t62 = (t61 & 1U);
    if (t62 != 0)
        goto LAB35;

LAB36:    if (*((unsigned int *)t57) != 0)
        goto LAB37;

LAB38:    t65 = *((unsigned int *)t25);
    t66 = *((unsigned int *)t56);
    t67 = (t65 | t66);
    *((unsigned int *)t64) = t67;
    t68 = (t25 + 4);
    t69 = (t56 + 4);
    t70 = (t64 + 4);
    t71 = *((unsigned int *)t68);
    t72 = *((unsigned int *)t69);
    t73 = (t71 | t72);
    *((unsigned int *)t70) = t73;
    t74 = *((unsigned int *)t70);
    t75 = (t74 != 0);
    if (t75 == 1)
        goto LAB39;

LAB40:
LAB41:    goto LAB30;

LAB33:    t55 = (t40 + 4);
    *((unsigned int *)t40) = 1;
    *((unsigned int *)t55) = 1;
    goto LAB34;

LAB35:    *((unsigned int *)t56) = 1;
    goto LAB38;

LAB37:    t63 = (t56 + 4);
    *((unsigned int *)t56) = 1;
    *((unsigned int *)t63) = 1;
    goto LAB38;

LAB39:    t76 = *((unsigned int *)t64);
    t77 = *((unsigned int *)t70);
    *((unsigned int *)t64) = (t76 | t77);
    t78 = (t25 + 4);
    t79 = (t56 + 4);
    t80 = *((unsigned int *)t78);
    t81 = (~(t80));
    t82 = *((unsigned int *)t25);
    t83 = (t82 & t81);
    t84 = *((unsigned int *)t79);
    t85 = (~(t84));
    t86 = *((unsigned int *)t56);
    t87 = (t86 & t85);
    t88 = (~(t83));
    t89 = (~(t87));
    t90 = *((unsigned int *)t70);
    *((unsigned int *)t70) = (t90 & t88);
    t91 = *((unsigned int *)t70);
    *((unsigned int *)t70) = (t91 & t89);
    goto LAB41;

LAB42:    xsi_set_current_line(393, ng0);

LAB45:    xsi_set_current_line(394, ng0);
    t98 = ((char*)((ng1)));
    t99 = (t0 + 10040);
    xsi_vlogvar_wait_assign_value(t99, t98, 0, 0, 1, 0LL);
    goto LAB44;

}


extern void work_m_00000000003770283007_4003945793_init()
{
	static char *pe[] = {(void *)Always_88_0,(void *)Always_97_1,(void *)Always_111_2,(void *)Always_381_3};
	xsi_register_didat("work_m_00000000003770283007_4003945793", "isim/SystemControllerIntegration_TestBench_isim_beh.exe.sim/work/m_00000000003770283007_4003945793.didat");
	xsi_register_executes(pe);
}
