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
static const char *ng0 = "C:/Users/u0499404/ECE3710/Processor_Titan/LogicController.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {7U, 0U};
static unsigned int ng3[] = {10U, 0U};
static unsigned int ng4[] = {1U, 0U};
static unsigned int ng5[] = {5U, 0U};
static unsigned int ng6[] = {9U, 0U};
static unsigned int ng7[] = {14U, 0U};
static unsigned int ng8[] = {6U, 0U};
static unsigned int ng9[] = {11U, 0U};
static unsigned int ng10[] = {3U, 0U};
static unsigned int ng11[] = {2U, 0U};
static unsigned int ng12[] = {4U, 0U};
static unsigned int ng13[] = {12U, 0U};
static unsigned int ng14[] = {13U, 0U};
static unsigned int ng15[] = {15U, 0U};
static unsigned int ng16[] = {8U, 0U};



static void Cont_88_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;

LAB0:    t1 = (t0 + 11760U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(88, ng0);
    t2 = (t0 + 7240U);
    t3 = *((char **)t2);
    t2 = (t0 + 13216);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t7, 0, 8);
    t8 = 31U;
    t9 = t8;
    t10 = (t3 + 4);
    t11 = *((unsigned int *)t3);
    t8 = (t8 & t11);
    t12 = *((unsigned int *)t10);
    t9 = (t9 & t12);
    t13 = (t7 + 4);
    t14 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t14 | t8);
    t15 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t15 | t9);
    xsi_driver_vfirst_trans(t2, 0, 4);
    t16 = (t0 + 13072);
    *((int *)t16) = 1;

LAB1:    return;
}

static void Always_91_1(char *t0)
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

LAB0:    t1 = (t0 + 12008U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(91, ng0);
    t2 = (t0 + 13088);
    *((int *)t2) = 1;
    t3 = (t0 + 12040);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(92, ng0);

LAB5:    xsi_set_current_line(93, ng0);
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

LAB7:    xsi_set_current_line(96, ng0);
    t2 = (t0 + 10840);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 10680);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 1, 0LL);

LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(94, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 10680);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 1, 0LL);
    goto LAB8;

}

static void Always_100_2(char *t0)
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

LAB0:    t1 = (t0 + 12256U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(100, ng0);
    t2 = (t0 + 13104);
    *((int *)t2) = 1;
    t3 = (t0 + 12288);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(101, ng0);

LAB5:    xsi_set_current_line(102, ng0);
    t4 = (t0 + 10680);
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
LAB11:    xsi_set_current_line(108, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 10840);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);

LAB13:    goto LAB2;

LAB7:    xsi_set_current_line(103, ng0);
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

LAB37:    xsi_set_current_line(106, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 10840);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);

LAB38:    goto LAB13;

LAB9:    xsi_set_current_line(107, ng0);
    t3 = ((char*)((ng1)));
    t4 = (t0 + 10840);
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

LAB36:    xsi_set_current_line(104, ng0);
    t100 = ((char*)((ng4)));
    t101 = (t0 + 10840);
    xsi_vlogvar_wait_assign_value(t101, t100, 0, 0, 1, 0LL);
    goto LAB38;

}

static void Always_113_3(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    int t7;
    char *t8;
    char *t9;
    char *t10;

LAB0:    t1 = (t0 + 12504U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(113, ng0);
    t2 = (t0 + 13120);
    *((int *)t2) = 1;
    t3 = (t0 + 12536);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(114, ng0);

LAB5:    xsi_set_current_line(116, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t0 + 7960);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(117, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 8120);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(118, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 8280);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(119, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 8440);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(120, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 8600);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(121, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 8760);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(122, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 8920);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(123, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 9080);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(124, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 9240);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(125, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 9400);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(126, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 9560);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(127, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 9720);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(128, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 9880);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(129, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 10040);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(130, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 10200);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(131, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 10520);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);
    xsi_set_current_line(133, ng0);
    t2 = (t0 + 7080U);
    t3 = *((char **)t2);

LAB6:    t2 = ((char*)((ng5)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 4, t2, 4);
    if (t6 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng6)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 4, t2, 4);
    if (t6 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng7)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 4, t2, 4);
    if (t6 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng9)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 4, t2, 4);
    if (t6 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng4)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 4, t2, 4);
    if (t6 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng11)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 4, t2, 4);
    if (t6 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng10)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 4, t2, 4);
    if (t6 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng13)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 4, t2, 4);
    if (t6 == 1)
        goto LAB21;

LAB22:    t2 = ((char*)((ng14)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 4, t2, 4);
    if (t6 == 1)
        goto LAB23;

LAB24:    t2 = ((char*)((ng15)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 4, t2, 4);
    if (t6 == 1)
        goto LAB25;

LAB26:    t2 = ((char*)((ng8)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 4, t2, 4);
    if (t6 == 1)
        goto LAB27;

LAB28:    t2 = ((char*)((ng1)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 4, t2, 4);
    if (t6 == 1)
        goto LAB29;

LAB30:    t2 = ((char*)((ng16)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 4, t2, 4);
    if (t6 == 1)
        goto LAB31;

LAB32:    t2 = ((char*)((ng2)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 4, t2, 4);
    if (t6 == 1)
        goto LAB33;

LAB34:    t2 = ((char*)((ng3)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 4, t2, 4);
    if (t6 == 1)
        goto LAB35;

LAB36:    t2 = ((char*)((ng12)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 4, t2, 4);
    if (t6 == 1)
        goto LAB37;

LAB38:
LAB40:
LAB39:    xsi_set_current_line(346, ng0);

LAB105:    xsi_set_current_line(347, ng0);
    t2 = ((char*)((ng4)));
    t4 = (t0 + 9080);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(348, ng0);
    t2 = ((char*)((ng4)));
    t4 = (t0 + 9240);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);

LAB41:    goto LAB2;

LAB7:    xsi_set_current_line(136, ng0);

LAB42:    xsi_set_current_line(137, ng0);
    t4 = ((char*)((ng4)));
    t5 = (t0 + 8440);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(138, ng0);
    t2 = ((char*)((ng4)));
    t4 = (t0 + 9080);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(139, ng0);
    t2 = ((char*)((ng4)));
    t4 = (t0 + 9240);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(140, ng0);
    t2 = ((char*)((ng4)));
    t4 = (t0 + 9720);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);
    goto LAB41;

LAB9:    xsi_set_current_line(143, ng0);

LAB43:    xsi_set_current_line(144, ng0);
    t4 = ((char*)((ng4)));
    t5 = (t0 + 8440);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(145, ng0);
    t2 = ((char*)((ng4)));
    t4 = (t0 + 9080);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(146, ng0);
    t2 = ((char*)((ng4)));
    t4 = (t0 + 9240);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(147, ng0);
    t2 = ((char*)((ng4)));
    t4 = (t0 + 9720);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(148, ng0);
    t2 = ((char*)((ng4)));
    t4 = (t0 + 10520);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 3, 0LL);
    goto LAB41;

LAB11:    xsi_set_current_line(151, ng0);

LAB44:    xsi_set_current_line(152, ng0);
    t4 = ((char*)((ng4)));
    t5 = (t0 + 9080);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(153, ng0);
    t2 = ((char*)((ng4)));
    t4 = (t0 + 9240);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(154, ng0);
    t2 = ((char*)((ng4)));
    t4 = (t0 + 9720);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(155, ng0);
    t2 = ((char*)((ng8)));
    t4 = (t0 + 10520);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 3, 0LL);
    goto LAB41;

LAB13:    xsi_set_current_line(158, ng0);

LAB45:    xsi_set_current_line(159, ng0);
    t4 = ((char*)((ng4)));
    t5 = (t0 + 8600);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(160, ng0);
    t2 = ((char*)((ng4)));
    t4 = (t0 + 9080);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(161, ng0);
    t2 = ((char*)((ng4)));
    t4 = (t0 + 9240);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(162, ng0);
    t2 = ((char*)((ng2)));
    t4 = (t0 + 10520);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 3, 0LL);
    goto LAB41;

LAB15:    xsi_set_current_line(165, ng0);

LAB46:    xsi_set_current_line(166, ng0);
    t4 = ((char*)((ng4)));
    t5 = (t0 + 9080);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(167, ng0);
    t2 = ((char*)((ng4)));
    t4 = (t0 + 9240);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(168, ng0);
    t2 = ((char*)((ng4)));
    t4 = (t0 + 9720);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(169, ng0);
    t2 = ((char*)((ng10)));
    t4 = (t0 + 10520);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 3, 0LL);
    goto LAB41;

LAB17:    xsi_set_current_line(172, ng0);

LAB47:    xsi_set_current_line(173, ng0);
    t4 = ((char*)((ng4)));
    t5 = (t0 + 9080);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(174, ng0);
    t2 = ((char*)((ng4)));
    t4 = (t0 + 9240);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(175, ng0);
    t2 = ((char*)((ng4)));
    t4 = (t0 + 9720);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(176, ng0);
    t2 = ((char*)((ng11)));
    t4 = (t0 + 10520);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 3, 0LL);
    goto LAB41;

LAB19:    xsi_set_current_line(179, ng0);

LAB48:    xsi_set_current_line(180, ng0);
    t4 = ((char*)((ng4)));
    t5 = (t0 + 9080);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(181, ng0);
    t2 = ((char*)((ng4)));
    t4 = (t0 + 9240);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(182, ng0);
    t2 = ((char*)((ng4)));
    t4 = (t0 + 9720);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(183, ng0);
    t2 = ((char*)((ng12)));
    t4 = (t0 + 10520);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 3, 0LL);
    goto LAB41;

LAB21:    xsi_set_current_line(186, ng0);

LAB49:    xsi_set_current_line(187, ng0);
    t4 = ((char*)((ng4)));
    t5 = (t0 + 7960);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 1, 0LL);
    goto LAB41;

LAB23:    xsi_set_current_line(191, ng0);

LAB50:    xsi_set_current_line(192, ng0);
    t4 = ((char*)((ng4)));
    t5 = (t0 + 8120);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 1, 0LL);
    goto LAB41;

LAB25:    xsi_set_current_line(195, ng0);

LAB51:    xsi_set_current_line(196, ng0);
    t4 = ((char*)((ng4)));
    t5 = (t0 + 8120);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(197, ng0);
    t2 = ((char*)((ng4)));
    t4 = (t0 + 9880);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);
    goto LAB41;

LAB27:    xsi_set_current_line(200, ng0);

LAB52:    xsi_set_current_line(201, ng0);
    t4 = ((char*)((ng4)));
    t5 = (t0 + 8280);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 1, 0LL);
    goto LAB41;

LAB29:    xsi_set_current_line(205, ng0);
    t4 = (t0 + 7400U);
    t5 = *((char **)t4);

LAB53:    t4 = ((char*)((ng5)));
    t7 = xsi_vlog_unsigned_case_compare(t5, 4, t4, 4);
    if (t7 == 1)
        goto LAB54;

LAB55:    t2 = ((char*)((ng8)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB56;

LAB57:    t2 = ((char*)((ng6)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB58;

LAB59:    t2 = ((char*)((ng7)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB60;

LAB61:    t2 = ((char*)((ng9)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB62;

LAB63:    t2 = ((char*)((ng4)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB64;

LAB65:    t2 = ((char*)((ng11)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB66;

LAB67:    t2 = ((char*)((ng10)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB68;

LAB69:    t2 = ((char*)((ng12)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB70;

LAB71:
LAB73:
LAB72:    xsi_set_current_line(280, ng0);

LAB84:    xsi_set_current_line(281, ng0);
    t2 = ((char*)((ng4)));
    t4 = (t0 + 8440);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(282, ng0);
    t2 = ((char*)((ng4)));
    t4 = (t0 + 9080);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(283, ng0);
    t2 = ((char*)((ng4)));
    t4 = (t0 + 9240);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(284, ng0);
    t2 = ((char*)((ng4)));
    t4 = (t0 + 9560);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(285, ng0);
    t2 = ((char*)((ng4)));
    t4 = (t0 + 9720);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(286, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 10520);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 3, 0LL);

LAB74:    goto LAB41;

LAB31:    xsi_set_current_line(291, ng0);
    t4 = (t0 + 7400U);
    t8 = *((char **)t4);

LAB85:    t4 = ((char*)((ng12)));
    t7 = xsi_vlog_unsigned_case_compare(t8, 4, t4, 4);
    if (t7 == 1)
        goto LAB86;

LAB87:    t2 = ((char*)((ng1)));
    t6 = xsi_vlog_unsigned_case_compare(t8, 4, t2, 4);
    if (t6 == 1)
        goto LAB88;

LAB89:    t2 = ((char*)((ng8)));
    t6 = xsi_vlog_unsigned_case_compare(t8, 4, t2, 4);
    if (t6 == 1)
        goto LAB90;

LAB91:    t2 = ((char*)((ng10)));
    t6 = xsi_vlog_unsigned_case_compare(t8, 4, t2, 4);
    if (t6 == 1)
        goto LAB92;

LAB93:
LAB95:
LAB94:    xsi_set_current_line(321, ng0);

LAB101:    xsi_set_current_line(322, ng0);
    t2 = ((char*)((ng4)));
    t4 = (t0 + 9080);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(323, ng0);
    t2 = ((char*)((ng4)));
    t4 = (t0 + 9400);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(324, ng0);
    t2 = ((char*)((ng4)));
    t4 = (t0 + 9560);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(325, ng0);
    t2 = ((char*)((ng4)));
    t4 = (t0 + 9720);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);

LAB96:    goto LAB41;

LAB33:    xsi_set_current_line(330, ng0);

LAB102:    xsi_set_current_line(331, ng0);
    t4 = ((char*)((ng4)));
    t9 = (t0 + 9240);
    xsi_vlogvar_wait_assign_value(t9, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(332, ng0);
    t2 = ((char*)((ng4)));
    t4 = (t0 + 9720);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);
    goto LAB41;

LAB35:    xsi_set_current_line(335, ng0);

LAB103:    xsi_set_current_line(336, ng0);
    t4 = ((char*)((ng4)));
    t9 = (t0 + 9240);
    xsi_vlogvar_wait_assign_value(t9, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(337, ng0);
    t2 = ((char*)((ng4)));
    t4 = (t0 + 10200);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(338, ng0);
    t2 = ((char*)((ng4)));
    t4 = (t0 + 8920);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);
    goto LAB41;

LAB37:    xsi_set_current_line(341, ng0);

LAB104:    xsi_set_current_line(342, ng0);
    t4 = ((char*)((ng4)));
    t9 = (t0 + 9720);
    xsi_vlogvar_wait_assign_value(t9, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(343, ng0);
    t2 = ((char*)((ng4)));
    t4 = (t0 + 8760);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);
    goto LAB41;

LAB54:    xsi_set_current_line(207, ng0);

LAB75:    xsi_set_current_line(208, ng0);
    t8 = ((char*)((ng4)));
    t9 = (t0 + 8440);
    xsi_vlogvar_wait_assign_value(t9, t8, 0, 0, 1, 0LL);
    xsi_set_current_line(209, ng0);
    t2 = ((char*)((ng4)));
    t4 = (t0 + 9080);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(210, ng0);
    t2 = ((char*)((ng4)));
    t4 = (t0 + 9240);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(211, ng0);
    t2 = ((char*)((ng4)));
    t4 = (t0 + 9560);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(212, ng0);
    t2 = ((char*)((ng4)));
    t4 = (t0 + 9720);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(213, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 10520);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 3, 0LL);
    goto LAB74;

LAB56:    xsi_set_current_line(216, ng0);

LAB76:    xsi_set_current_line(217, ng0);
    t4 = ((char*)((ng4)));
    t8 = (t0 + 9080);
    xsi_vlogvar_wait_assign_value(t8, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(218, ng0);
    t2 = ((char*)((ng4)));
    t4 = (t0 + 9240);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(219, ng0);
    t2 = ((char*)((ng4)));
    t4 = (t0 + 9560);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(220, ng0);
    t2 = ((char*)((ng4)));
    t4 = (t0 + 9720);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(221, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 10520);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 3, 0LL);
    goto LAB74;

LAB58:    xsi_set_current_line(224, ng0);

LAB77:    xsi_set_current_line(225, ng0);
    t4 = ((char*)((ng4)));
    t8 = (t0 + 8440);
    xsi_vlogvar_wait_assign_value(t8, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(226, ng0);
    t2 = ((char*)((ng4)));
    t4 = (t0 + 9080);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(227, ng0);
    t2 = ((char*)((ng4)));
    t4 = (t0 + 9240);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(228, ng0);
    t2 = ((char*)((ng4)));
    t4 = (t0 + 9560);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(229, ng0);
    t2 = ((char*)((ng4)));
    t4 = (t0 + 9720);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(230, ng0);
    t2 = ((char*)((ng4)));
    t4 = (t0 + 10520);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 3, 0LL);
    goto LAB74;

LAB60:    xsi_set_current_line(233, ng0);

LAB78:    xsi_set_current_line(234, ng0);
    t4 = ((char*)((ng4)));
    t8 = (t0 + 9080);
    xsi_vlogvar_wait_assign_value(t8, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(235, ng0);
    t2 = ((char*)((ng4)));
    t4 = (t0 + 9240);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(236, ng0);
    t2 = ((char*)((ng4)));
    t4 = (t0 + 9560);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(237, ng0);
    t2 = ((char*)((ng4)));
    t4 = (t0 + 9720);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(238, ng0);
    t2 = ((char*)((ng8)));
    t4 = (t0 + 10520);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 3, 0LL);
    goto LAB74;

LAB62:    xsi_set_current_line(241, ng0);

LAB79:    xsi_set_current_line(242, ng0);
    t4 = ((char*)((ng4)));
    t8 = (t0 + 8600);
    xsi_vlogvar_wait_assign_value(t8, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(243, ng0);
    t2 = ((char*)((ng4)));
    t4 = (t0 + 9080);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(244, ng0);
    t2 = ((char*)((ng4)));
    t4 = (t0 + 9240);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(245, ng0);
    t2 = ((char*)((ng4)));
    t4 = (t0 + 9560);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(246, ng0);
    t2 = ((char*)((ng2)));
    t4 = (t0 + 10520);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 3, 0LL);
    goto LAB74;

LAB64:    xsi_set_current_line(249, ng0);

LAB80:    xsi_set_current_line(250, ng0);
    t4 = ((char*)((ng4)));
    t8 = (t0 + 9080);
    xsi_vlogvar_wait_assign_value(t8, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(251, ng0);
    t2 = ((char*)((ng4)));
    t4 = (t0 + 9240);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(252, ng0);
    t2 = ((char*)((ng4)));
    t4 = (t0 + 9560);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(253, ng0);
    t2 = ((char*)((ng4)));
    t4 = (t0 + 9720);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(254, ng0);
    t2 = ((char*)((ng10)));
    t4 = (t0 + 10520);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 3, 0LL);
    goto LAB74;

LAB66:    xsi_set_current_line(257, ng0);

LAB81:    xsi_set_current_line(258, ng0);
    t4 = ((char*)((ng4)));
    t8 = (t0 + 9080);
    xsi_vlogvar_wait_assign_value(t8, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(259, ng0);
    t2 = ((char*)((ng4)));
    t4 = (t0 + 9240);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(260, ng0);
    t2 = ((char*)((ng4)));
    t4 = (t0 + 9560);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(261, ng0);
    t2 = ((char*)((ng4)));
    t4 = (t0 + 9720);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(262, ng0);
    t2 = ((char*)((ng11)));
    t4 = (t0 + 10520);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 3, 0LL);
    goto LAB74;

LAB68:    xsi_set_current_line(265, ng0);

LAB82:    xsi_set_current_line(266, ng0);
    t4 = ((char*)((ng4)));
    t8 = (t0 + 9080);
    xsi_vlogvar_wait_assign_value(t8, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(267, ng0);
    t2 = ((char*)((ng4)));
    t4 = (t0 + 9240);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(268, ng0);
    t2 = ((char*)((ng4)));
    t4 = (t0 + 9560);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(269, ng0);
    t2 = ((char*)((ng4)));
    t4 = (t0 + 9720);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(270, ng0);
    t2 = ((char*)((ng12)));
    t4 = (t0 + 10520);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 3, 0LL);
    goto LAB74;

LAB70:    xsi_set_current_line(273, ng0);

LAB83:    xsi_set_current_line(274, ng0);
    t4 = ((char*)((ng4)));
    t8 = (t0 + 9080);
    xsi_vlogvar_wait_assign_value(t8, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(275, ng0);
    t2 = ((char*)((ng4)));
    t4 = (t0 + 9240);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(276, ng0);
    t2 = ((char*)((ng4)));
    t4 = (t0 + 9720);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(277, ng0);
    t2 = ((char*)((ng5)));
    t4 = (t0 + 10520);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 3, 0LL);
    goto LAB74;

LAB86:    xsi_set_current_line(293, ng0);

LAB97:    xsi_set_current_line(294, ng0);
    t9 = ((char*)((ng4)));
    t10 = (t0 + 9080);
    xsi_vlogvar_wait_assign_value(t10, t9, 0, 0, 1, 0LL);
    xsi_set_current_line(295, ng0);
    t2 = ((char*)((ng4)));
    t4 = (t0 + 9400);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(296, ng0);
    t2 = ((char*)((ng4)));
    t4 = (t0 + 9560);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(297, ng0);
    t2 = ((char*)((ng4)));
    t4 = (t0 + 9720);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);
    goto LAB96;

LAB88:    xsi_set_current_line(300, ng0);

LAB98:    xsi_set_current_line(301, ng0);
    t4 = ((char*)((ng4)));
    t9 = (t0 + 9080);
    xsi_vlogvar_wait_assign_value(t9, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(302, ng0);
    t2 = ((char*)((ng4)));
    t4 = (t0 + 9720);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);
    goto LAB96;

LAB90:    xsi_set_current_line(305, ng0);

LAB99:    xsi_set_current_line(306, ng0);
    t4 = ((char*)((ng4)));
    t9 = (t0 + 9080);
    xsi_vlogvar_wait_assign_value(t9, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(307, ng0);
    t2 = ((char*)((ng4)));
    t4 = (t0 + 9400);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(308, ng0);
    t2 = ((char*)((ng4)));
    t4 = (t0 + 9560);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(309, ng0);
    t2 = ((char*)((ng4)));
    t4 = (t0 + 9720);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(310, ng0);
    t2 = ((char*)((ng4)));
    t4 = (t0 + 10040);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);
    goto LAB96;

LAB92:    xsi_set_current_line(313, ng0);

LAB100:    xsi_set_current_line(314, ng0);
    t4 = ((char*)((ng4)));
    t9 = (t0 + 9080);
    xsi_vlogvar_wait_assign_value(t9, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(315, ng0);
    t2 = ((char*)((ng4)));
    t4 = (t0 + 9400);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(316, ng0);
    t2 = ((char*)((ng4)));
    t4 = (t0 + 9560);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(317, ng0);
    t2 = ((char*)((ng4)));
    t4 = (t0 + 9720);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(318, ng0);
    t2 = ((char*)((ng4)));
    t4 = (t0 + 10040);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);
    goto LAB96;

}

static void Always_354_4(char *t0)
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

LAB0:    t1 = (t0 + 12752U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(354, ng0);
    t2 = (t0 + 13136);
    *((int *)t2) = 1;
    t3 = (t0 + 12784);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(355, ng0);

LAB5:    xsi_set_current_line(356, ng0);
    t4 = (t0 + 10680);
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
LAB11:    xsi_set_current_line(362, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 10360);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);

LAB13:    goto LAB2;

LAB7:    xsi_set_current_line(357, ng0);
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

LAB37:    xsi_set_current_line(360, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 10360);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);

LAB38:    goto LAB13;

LAB9:    xsi_set_current_line(361, ng0);
    t3 = ((char*)((ng4)));
    t4 = (t0 + 10360);
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

LAB36:    xsi_set_current_line(358, ng0);
    t100 = ((char*)((ng1)));
    t101 = (t0 + 10360);
    xsi_vlogvar_wait_assign_value(t101, t100, 0, 0, 1, 0LL);
    goto LAB38;

}


extern void work_m_00000000003457302477_4003945793_init()
{
	static char *pe[] = {(void *)Cont_88_0,(void *)Always_91_1,(void *)Always_100_2,(void *)Always_113_3,(void *)Always_354_4};
	xsi_register_didat("work_m_00000000003457302477_4003945793", "isim/Titan_TestBench03_isim_beh.exe.sim/work/m_00000000003457302477_4003945793.didat");
	xsi_register_executes(pe);
}
