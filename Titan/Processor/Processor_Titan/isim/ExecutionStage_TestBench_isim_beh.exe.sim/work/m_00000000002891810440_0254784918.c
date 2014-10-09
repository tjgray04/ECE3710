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
static const char *ng0 = "//wannsee/users/u0655172/My Documents/Processor_Titan/RegFile.v";
static int ng1[] = {0, 0};



static void Always_41_0(char *t0)
{
    char t6[8];
    char t7[8];
    char t42[8];
    char t48[8];
    char t84[8];
    char t85[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    unsigned int t16;
    int t17;
    char *t18;
    unsigned int t19;
    int t20;
    int t21;
    unsigned int t22;
    unsigned int t23;
    int t24;
    int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    char *t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    char *t60;
    char *t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    char *t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    char *t82;
    char *t83;
    char *t86;
    char *t87;
    char *t88;
    char *t89;
    char *t90;
    char *t91;
    char *t92;
    char *t93;
    unsigned int t94;
    char *t95;
    unsigned int t96;
    unsigned int t97;
    unsigned int t98;
    int t99;
    int t100;

LAB0:    t1 = (t0 + 4560U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(41, ng0);
    t2 = (t0 + 4880);
    *((int *)t2) = 1;
    t3 = (t0 + 4592);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(42, ng0);

LAB5:    xsi_set_current_line(43, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t0 + 3480);
    t8 = (t0 + 3480);
    t9 = (t8 + 72U);
    t10 = *((char **)t9);
    t11 = (t0 + 3480);
    t12 = (t11 + 64U);
    t13 = *((char **)t12);
    t14 = ((char*)((ng1)));
    xsi_vlog_generic_convert_array_indices(t6, t7, t10, t13, 2, 1, t14, 32, 1);
    t15 = (t6 + 4);
    t16 = *((unsigned int *)t15);
    t17 = (!(t16));
    t18 = (t7 + 4);
    t19 = *((unsigned int *)t18);
    t20 = (!(t19));
    t21 = (t17 && t20);
    if (t21 == 1)
        goto LAB6;

LAB7:    xsi_set_current_line(44, ng0);
    t2 = (t0 + 3480);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 3480);
    t8 = (t5 + 72U);
    t9 = *((char **)t8);
    t10 = (t0 + 3480);
    t11 = (t10 + 64U);
    t12 = *((char **)t11);
    t13 = (t0 + 1960U);
    t14 = *((char **)t13);
    xsi_vlog_generic_get_array_select_value(t6, 32, t4, t9, t12, 2, 1, t14, 5, 2);
    t13 = (t0 + 3000);
    xsi_vlogvar_assign_value(t13, t6, 0, 0, 32);
    xsi_set_current_line(45, ng0);
    t2 = (t0 + 3480);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 3480);
    t8 = (t5 + 72U);
    t9 = *((char **)t8);
    t10 = (t0 + 3480);
    t11 = (t10 + 64U);
    t12 = *((char **)t11);
    t13 = (t0 + 2120U);
    t14 = *((char **)t13);
    xsi_vlog_generic_get_array_select_value(t6, 32, t4, t9, t12, 2, 1, t14, 5, 2);
    t13 = (t0 + 3160);
    xsi_vlogvar_assign_value(t13, t6, 0, 0, 32);
    xsi_set_current_line(46, ng0);
    t2 = (t0 + 3640);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 3320);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 32);
    xsi_set_current_line(47, ng0);
    t2 = (t0 + 1480U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t16 = *((unsigned int *)t2);
    t19 = (~(t16));
    t22 = *((unsigned int *)t3);
    t23 = (t22 & t19);
    t26 = (t23 != 0);
    if (t26 > 0)
        goto LAB8;

LAB9:    xsi_set_current_line(55, ng0);

LAB12:    xsi_set_current_line(57, ng0);
    t2 = (t0 + 1640U);
    t3 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t3 + 4);
    t16 = *((unsigned int *)t2);
    t19 = (~(t16));
    t22 = *((unsigned int *)t3);
    t23 = (t22 & t19);
    t26 = (t23 & 1U);
    if (t26 != 0)
        goto LAB13;

LAB14:    if (*((unsigned int *)t2) != 0)
        goto LAB15;

LAB16:    t5 = (t6 + 4);
    t27 = *((unsigned int *)t6);
    t28 = *((unsigned int *)t5);
    t29 = (t27 || t28);
    if (t29 > 0)
        goto LAB17;

LAB18:    memcpy(t48, t6, 8);

LAB19:    t76 = (t48 + 4);
    t77 = *((unsigned int *)t76);
    t78 = (~(t77));
    t79 = *((unsigned int *)t48);
    t80 = (t79 & t78);
    t81 = (t80 != 0);
    if (t81 > 0)
        goto LAB31;

LAB32:
LAB33:    xsi_set_current_line(60, ng0);
    t2 = (t0 + 1800U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t16 = *((unsigned int *)t2);
    t19 = (~(t16));
    t22 = *((unsigned int *)t3);
    t23 = (t22 & t19);
    t26 = (t23 != 0);
    if (t26 > 0)
        goto LAB36;

LAB37:
LAB38:
LAB10:    goto LAB2;

LAB6:    t22 = *((unsigned int *)t6);
    t23 = *((unsigned int *)t7);
    t24 = (t22 - t23);
    t25 = (t24 + 1);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, *((unsigned int *)t7), t25, 0LL);
    goto LAB7;

LAB8:    xsi_set_current_line(48, ng0);

LAB11:    xsi_set_current_line(49, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t0 + 3000);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 32, 0LL);
    xsi_set_current_line(50, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3160);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    xsi_set_current_line(51, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3320);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    xsi_set_current_line(52, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3640);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    goto LAB10;

LAB13:    *((unsigned int *)t6) = 1;
    goto LAB16;

LAB15:    t4 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t4) = 1;
    goto LAB16;

LAB17:    t8 = (t0 + 2280U);
    t9 = *((char **)t8);
    t8 = ((char*)((ng1)));
    memset(t7, 0, 8);
    t10 = (t9 + 4);
    t11 = (t8 + 4);
    t30 = *((unsigned int *)t9);
    t31 = *((unsigned int *)t8);
    t32 = (t30 ^ t31);
    t33 = *((unsigned int *)t10);
    t34 = *((unsigned int *)t11);
    t35 = (t33 ^ t34);
    t36 = (t32 | t35);
    t37 = *((unsigned int *)t10);
    t38 = *((unsigned int *)t11);
    t39 = (t37 | t38);
    t40 = (~(t39));
    t41 = (t36 & t40);
    if (t41 != 0)
        goto LAB21;

LAB20:    if (t39 != 0)
        goto LAB22;

LAB23:    memset(t42, 0, 8);
    t13 = (t7 + 4);
    t43 = *((unsigned int *)t13);
    t44 = (~(t43));
    t45 = *((unsigned int *)t7);
    t46 = (t45 & t44);
    t47 = (t46 & 1U);
    if (t47 != 0)
        goto LAB24;

LAB25:    if (*((unsigned int *)t13) != 0)
        goto LAB26;

LAB27:    t49 = *((unsigned int *)t6);
    t50 = *((unsigned int *)t42);
    t51 = (t49 & t50);
    *((unsigned int *)t48) = t51;
    t15 = (t6 + 4);
    t18 = (t42 + 4);
    t52 = (t48 + 4);
    t53 = *((unsigned int *)t15);
    t54 = *((unsigned int *)t18);
    t55 = (t53 | t54);
    *((unsigned int *)t52) = t55;
    t56 = *((unsigned int *)t52);
    t57 = (t56 != 0);
    if (t57 == 1)
        goto LAB28;

LAB29:
LAB30:    goto LAB19;

LAB21:    *((unsigned int *)t7) = 1;
    goto LAB23;

LAB22:    t12 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB23;

LAB24:    *((unsigned int *)t42) = 1;
    goto LAB27;

LAB26:    t14 = (t42 + 4);
    *((unsigned int *)t42) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB27;

LAB28:    t58 = *((unsigned int *)t48);
    t59 = *((unsigned int *)t52);
    *((unsigned int *)t48) = (t58 | t59);
    t60 = (t6 + 4);
    t61 = (t42 + 4);
    t62 = *((unsigned int *)t6);
    t63 = (~(t62));
    t64 = *((unsigned int *)t60);
    t65 = (~(t64));
    t66 = *((unsigned int *)t42);
    t67 = (~(t66));
    t68 = *((unsigned int *)t61);
    t69 = (~(t68));
    t17 = (t63 & t65);
    t20 = (t67 & t69);
    t70 = (~(t17));
    t71 = (~(t20));
    t72 = *((unsigned int *)t52);
    *((unsigned int *)t52) = (t72 & t70);
    t73 = *((unsigned int *)t52);
    *((unsigned int *)t52) = (t73 & t71);
    t74 = *((unsigned int *)t48);
    *((unsigned int *)t48) = (t74 & t70);
    t75 = *((unsigned int *)t48);
    *((unsigned int *)t48) = (t75 & t71);
    goto LAB30;

LAB31:    xsi_set_current_line(58, ng0);
    t82 = (t0 + 2600U);
    t83 = *((char **)t82);
    t82 = (t0 + 3480);
    t86 = (t0 + 3480);
    t87 = (t86 + 72U);
    t88 = *((char **)t87);
    t89 = (t0 + 3480);
    t90 = (t89 + 64U);
    t91 = *((char **)t90);
    t92 = (t0 + 2280U);
    t93 = *((char **)t92);
    xsi_vlog_generic_convert_array_indices(t84, t85, t88, t91, 2, 1, t93, 5, 2);
    t92 = (t84 + 4);
    t94 = *((unsigned int *)t92);
    t21 = (!(t94));
    t95 = (t85 + 4);
    t96 = *((unsigned int *)t95);
    t24 = (!(t96));
    t25 = (t21 && t24);
    if (t25 == 1)
        goto LAB34;

LAB35:    goto LAB33;

LAB34:    t97 = *((unsigned int *)t84);
    t98 = *((unsigned int *)t85);
    t99 = (t97 - t98);
    t100 = (t99 + 1);
    xsi_vlogvar_wait_assign_value(t82, t83, 0, *((unsigned int *)t85), t100, 0LL);
    goto LAB35;

LAB36:    xsi_set_current_line(61, ng0);
    t4 = (t0 + 2440U);
    t5 = *((char **)t4);
    t4 = (t0 + 3640);
    xsi_vlogvar_wait_assign_value(t4, t5, 0, 0, 32, 0LL);
    goto LAB38;

}


extern void work_m_00000000002891810440_0254784918_init()
{
	static char *pe[] = {(void *)Always_41_0};
	xsi_register_didat("work_m_00000000002891810440_0254784918", "isim/ExecutionStage_TestBench_isim_beh.exe.sim/work/m_00000000002891810440_0254784918.didat");
	xsi_register_executes(pe);
}
