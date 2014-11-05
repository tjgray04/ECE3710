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
static const char *ng0 = "C:/Users/u0499404/ECE3710/Processor_Titan/vgaControl.v";
static int ng1[] = {1, 0};
static int ng2[] = {0, 0};
static unsigned int ng3[] = {96U, 0U};
static unsigned int ng4[] = {143U, 0U};
static unsigned int ng5[] = {784U, 0U};
static unsigned int ng6[] = {799U, 0U};
static unsigned int ng7[] = {1U, 0U};
static unsigned int ng8[] = {2U, 0U};
static unsigned int ng9[] = {520U, 0U};
static unsigned int ng10[] = {3U, 0U};
static unsigned int ng11[] = {0U, 0U};



static void Always_31_0(char *t0)
{
    char t6[8];
    char t18[8];
    char t26[8];
    char t30[8];
    char t38[8];
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
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t27;
    char *t28;
    char *t29;
    char *t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    char *t37;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    char *t42;
    char *t43;
    char *t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    char *t52;
    char *t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    int t62;
    int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    char *t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    char *t76;
    char *t77;

LAB0:    t1 = (t0 + 3808U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(31, ng0);
    t2 = (t0 + 4376);
    *((int *)t2) = 1;
    t3 = (t0 + 3840);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(32, ng0);

LAB5:    xsi_set_current_line(34, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t0 + 1608);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(35, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(36, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(37, ng0);
    t2 = (t0 + 2408);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng1)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_add(t6, 32, t4, 12, t5, 32);
    t7 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t7, t6, 0, 0, 12, 0LL);
    xsi_set_current_line(39, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t8 = *((unsigned int *)t2);
    t9 = (~(t8));
    t10 = *((unsigned int *)t3);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(49, ng0);

LAB10:    xsi_set_current_line(52, ng0);
    t2 = (t0 + 2408);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t6, 0, 8);
    t7 = (t4 + 4);
    if (*((unsigned int *)t7) != 0)
        goto LAB12;

LAB11:    t13 = (t5 + 4);
    if (*((unsigned int *)t13) != 0)
        goto LAB12;

LAB15:    if (*((unsigned int *)t4) < *((unsigned int *)t5))
        goto LAB13;

LAB14:    t15 = (t6 + 4);
    t8 = *((unsigned int *)t15);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB16;

LAB17:    xsi_set_current_line(57, ng0);
    t2 = (t0 + 2408);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng4)));
    memset(t6, 0, 8);
    t7 = (t4 + 4);
    if (*((unsigned int *)t7) != 0)
        goto LAB21;

LAB20:    t13 = (t5 + 4);
    if (*((unsigned int *)t13) != 0)
        goto LAB21;

LAB24:    if (*((unsigned int *)t4) < *((unsigned int *)t5))
        goto LAB23;

LAB22:    *((unsigned int *)t6) = 1;

LAB23:    memset(t18, 0, 8);
    t15 = (t6 + 4);
    t8 = *((unsigned int *)t15);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB25;

LAB26:    if (*((unsigned int *)t15) != 0)
        goto LAB27;

LAB28:    t17 = (t18 + 4);
    t19 = *((unsigned int *)t18);
    t20 = *((unsigned int *)t17);
    t21 = (t19 || t20);
    if (t21 > 0)
        goto LAB29;

LAB30:    memcpy(t38, t18, 8);

LAB31:    t70 = (t38 + 4);
    t71 = *((unsigned int *)t70);
    t72 = (~(t71));
    t73 = *((unsigned int *)t38);
    t74 = (t73 & t72);
    t75 = (t74 != 0);
    if (t75 > 0)
        goto LAB44;

LAB45:    xsi_set_current_line(65, ng0);
    t2 = (t0 + 2408);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng6)));
    memset(t6, 0, 8);
    t7 = (t4 + 4);
    if (*((unsigned int *)t7) != 0)
        goto LAB49;

LAB48:    t13 = (t5 + 4);
    if (*((unsigned int *)t13) != 0)
        goto LAB49;

LAB52:    if (*((unsigned int *)t4) < *((unsigned int *)t5))
        goto LAB51;

LAB50:    *((unsigned int *)t6) = 1;

LAB51:    t15 = (t6 + 4);
    t8 = *((unsigned int *)t15);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB53;

LAB54:
LAB55:
LAB46:
LAB18:    xsi_set_current_line(78, ng0);
    t2 = (t0 + 2568);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng8)));
    memset(t6, 0, 8);
    t7 = (t4 + 4);
    if (*((unsigned int *)t7) != 0)
        goto LAB65;

LAB64:    t13 = (t5 + 4);
    if (*((unsigned int *)t13) != 0)
        goto LAB65;

LAB68:    if (*((unsigned int *)t4) < *((unsigned int *)t5))
        goto LAB66;

LAB67:    t15 = (t6 + 4);
    t8 = *((unsigned int *)t15);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB69;

LAB70:    xsi_set_current_line(83, ng0);
    t2 = (t0 + 2568);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng9)));
    memset(t6, 0, 8);
    t7 = (t4 + 4);
    if (*((unsigned int *)t7) != 0)
        goto LAB74;

LAB73:    t13 = (t5 + 4);
    if (*((unsigned int *)t13) != 0)
        goto LAB74;

LAB77:    if (*((unsigned int *)t4) < *((unsigned int *)t5))
        goto LAB76;

LAB75:    *((unsigned int *)t6) = 1;

LAB76:    t15 = (t6 + 4);
    t8 = *((unsigned int *)t15);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB78;

LAB79:
LAB80:
LAB71:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(40, ng0);

LAB9:    xsi_set_current_line(41, ng0);
    t4 = ((char*)((ng2)));
    t5 = (t0 + 1608);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(42, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(43, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 12, 0LL);
    xsi_set_current_line(44, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2568);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 12, 0LL);
    xsi_set_current_line(45, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(46, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB8;

LAB12:    t14 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB14;

LAB13:    *((unsigned int *)t6) = 1;
    goto LAB14;

LAB16:    xsi_set_current_line(53, ng0);

LAB19:    xsi_set_current_line(54, ng0);
    t16 = ((char*)((ng2)));
    t17 = (t0 + 1608);
    xsi_vlogvar_wait_assign_value(t17, t16, 0, 0, 1, 0LL);
    goto LAB18;

LAB21:    t14 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB23;

LAB25:    *((unsigned int *)t18) = 1;
    goto LAB28;

LAB27:    t16 = (t18 + 4);
    *((unsigned int *)t18) = 1;
    *((unsigned int *)t16) = 1;
    goto LAB28;

LAB29:    t22 = (t0 + 2408);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    t25 = ((char*)((ng5)));
    memset(t26, 0, 8);
    t27 = (t24 + 4);
    if (*((unsigned int *)t27) != 0)
        goto LAB33;

LAB32:    t28 = (t25 + 4);
    if (*((unsigned int *)t28) != 0)
        goto LAB33;

LAB36:    if (*((unsigned int *)t24) < *((unsigned int *)t25))
        goto LAB34;

LAB35:    memset(t30, 0, 8);
    t31 = (t26 + 4);
    t32 = *((unsigned int *)t31);
    t33 = (~(t32));
    t34 = *((unsigned int *)t26);
    t35 = (t34 & t33);
    t36 = (t35 & 1U);
    if (t36 != 0)
        goto LAB37;

LAB38:    if (*((unsigned int *)t31) != 0)
        goto LAB39;

LAB40:    t39 = *((unsigned int *)t18);
    t40 = *((unsigned int *)t30);
    t41 = (t39 & t40);
    *((unsigned int *)t38) = t41;
    t42 = (t18 + 4);
    t43 = (t30 + 4);
    t44 = (t38 + 4);
    t45 = *((unsigned int *)t42);
    t46 = *((unsigned int *)t43);
    t47 = (t45 | t46);
    *((unsigned int *)t44) = t47;
    t48 = *((unsigned int *)t44);
    t49 = (t48 != 0);
    if (t49 == 1)
        goto LAB41;

LAB42:
LAB43:    goto LAB31;

LAB33:    t29 = (t26 + 4);
    *((unsigned int *)t26) = 1;
    *((unsigned int *)t29) = 1;
    goto LAB35;

LAB34:    *((unsigned int *)t26) = 1;
    goto LAB35;

LAB37:    *((unsigned int *)t30) = 1;
    goto LAB40;

LAB39:    t37 = (t30 + 4);
    *((unsigned int *)t30) = 1;
    *((unsigned int *)t37) = 1;
    goto LAB40;

LAB41:    t50 = *((unsigned int *)t38);
    t51 = *((unsigned int *)t44);
    *((unsigned int *)t38) = (t50 | t51);
    t52 = (t18 + 4);
    t53 = (t30 + 4);
    t54 = *((unsigned int *)t18);
    t55 = (~(t54));
    t56 = *((unsigned int *)t52);
    t57 = (~(t56));
    t58 = *((unsigned int *)t30);
    t59 = (~(t58));
    t60 = *((unsigned int *)t53);
    t61 = (~(t60));
    t62 = (t55 & t57);
    t63 = (t59 & t61);
    t64 = (~(t62));
    t65 = (~(t63));
    t66 = *((unsigned int *)t44);
    *((unsigned int *)t44) = (t66 & t64);
    t67 = *((unsigned int *)t44);
    *((unsigned int *)t44) = (t67 & t65);
    t68 = *((unsigned int *)t38);
    *((unsigned int *)t38) = (t68 & t64);
    t69 = *((unsigned int *)t38);
    *((unsigned int *)t38) = (t69 & t65);
    goto LAB43;

LAB44:    xsi_set_current_line(58, ng0);

LAB47:    xsi_set_current_line(60, ng0);
    t76 = ((char*)((ng1)));
    t77 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t77, t76, 0, 0, 1, 0LL);
    xsi_set_current_line(62, ng0);
    t2 = (t0 + 2088);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng1)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_add(t6, 32, t4, 1, t5, 32);
    t7 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t7, t6, 0, 0, 1, 0LL);
    goto LAB46;

LAB49:    t14 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB51;

LAB53:    xsi_set_current_line(66, ng0);

LAB56:    xsi_set_current_line(67, ng0);
    t16 = ((char*)((ng2)));
    t17 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t17, t16, 0, 0, 12, 0LL);
    xsi_set_current_line(68, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1608);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(70, ng0);
    t2 = (t0 + 1768);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng7)));
    memset(t6, 0, 8);
    t7 = (t4 + 4);
    t13 = (t5 + 4);
    t8 = *((unsigned int *)t4);
    t9 = *((unsigned int *)t5);
    t10 = (t8 ^ t9);
    t11 = *((unsigned int *)t7);
    t12 = *((unsigned int *)t13);
    t19 = (t11 ^ t12);
    t20 = (t10 | t19);
    t21 = *((unsigned int *)t7);
    t32 = *((unsigned int *)t13);
    t33 = (t21 | t32);
    t34 = (~(t33));
    t35 = (t20 & t34);
    if (t35 != 0)
        goto LAB60;

LAB57:    if (t33 != 0)
        goto LAB59;

LAB58:    *((unsigned int *)t6) = 1;

LAB60:    t15 = (t6 + 4);
    t36 = *((unsigned int *)t15);
    t39 = (~(t36));
    t40 = *((unsigned int *)t6);
    t41 = (t40 & t39);
    t45 = (t41 != 0);
    if (t45 > 0)
        goto LAB61;

LAB62:
LAB63:    xsi_set_current_line(73, ng0);
    t2 = (t0 + 2568);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng1)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_add(t6, 32, t4, 12, t5, 32);
    t7 = (t0 + 2568);
    xsi_vlogvar_wait_assign_value(t7, t6, 0, 0, 12, 0LL);
    goto LAB55;

LAB59:    t14 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB60;

LAB61:    xsi_set_current_line(71, ng0);
    t16 = (t0 + 2248);
    t17 = (t16 + 56U);
    t22 = *((char **)t17);
    t23 = ((char*)((ng1)));
    memset(t18, 0, 8);
    xsi_vlog_unsigned_add(t18, 32, t22, 1, t23, 32);
    t24 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t24, t18, 0, 0, 1, 0LL);
    goto LAB63;

LAB65:    t14 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB67;

LAB66:    *((unsigned int *)t6) = 1;
    goto LAB67;

LAB69:    xsi_set_current_line(79, ng0);

LAB72:    xsi_set_current_line(80, ng0);
    t16 = ((char*)((ng2)));
    t17 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t17, t16, 0, 0, 1, 0LL);
    goto LAB71;

LAB74:    t14 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB76;

LAB78:    xsi_set_current_line(84, ng0);

LAB81:    xsi_set_current_line(85, ng0);
    t16 = ((char*)((ng2)));
    t17 = (t0 + 2568);
    xsi_vlogvar_wait_assign_value(t17, t16, 0, 0, 12, 0LL);
    xsi_set_current_line(86, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(87, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB80;

}

static void Always_94_1(char *t0)
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

LAB0:    t1 = (t0 + 4056U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(94, ng0);
    t2 = (t0 + 4392);
    *((int *)t2) = 1;
    t3 = (t0 + 4088);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(95, ng0);

LAB5:    xsi_set_current_line(96, ng0);
    t4 = (t0 + 1208U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(101, ng0);
    t2 = (t0 + 2888);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng10)));
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
        goto LAB13;

LAB10:    if (t18 != 0)
        goto LAB12;

LAB11:    *((unsigned int *)t13) = 1;

LAB13:    t22 = (t13 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t13);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB14;

LAB15:    xsi_set_current_line(107, ng0);

LAB18:    xsi_set_current_line(108, ng0);
    t2 = (t0 + 2888);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng1)));
    memset(t13, 0, 8);
    xsi_vlog_unsigned_add(t13, 32, t4, 2, t5, 32);
    t11 = (t0 + 2888);
    xsi_vlogvar_wait_assign_value(t11, t13, 0, 0, 2, 0LL);
    xsi_set_current_line(109, ng0);
    t2 = ((char*)((ng11)));
    t3 = (t0 + 2728);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);

LAB16:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(97, ng0);

LAB9:    xsi_set_current_line(98, ng0);
    t11 = ((char*)((ng2)));
    t12 = (t0 + 2888);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 2, 0LL);
    xsi_set_current_line(99, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2728);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB8;

LAB12:    t21 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB13;

LAB14:    xsi_set_current_line(102, ng0);

LAB17:    xsi_set_current_line(103, ng0);
    t28 = ((char*)((ng2)));
    t29 = (t0 + 2888);
    xsi_vlogvar_wait_assign_value(t29, t28, 0, 0, 2, 0LL);
    xsi_set_current_line(104, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2728);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB16;

}


extern void work_m_00000000000668907324_2000479223_init()
{
	static char *pe[] = {(void *)Always_31_0,(void *)Always_94_1};
	xsi_register_didat("work_m_00000000000668907324_2000479223", "isim/vgaControl_isim_beh.exe.sim/work/m_00000000000668907324_2000479223.didat");
	xsi_register_executes(pe);
}
