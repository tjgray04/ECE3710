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
static const char *ng0 = "C:/Users/Steve Brown/Desktop/ECE3710/Titan/Processor/Processor_Titan/SoundFX_FSM.v";
static int ng1[] = {0, 0};
static unsigned int ng2[] = {3U, 0U};
static int ng3[] = {100, 0};
static int ng4[] = {1, 0};
static int ng5[] = {50, 0};
static int ng6[] = {33, 0};
static int ng7[] = {25, 0};
static int ng8[] = {17, 0};
static unsigned int ng9[] = {1U, 0U};



static void Always_43_0(char *t0)
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

LAB0:    t1 = (t0 + 5376U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(43, ng0);
    t2 = (t0 + 6440);
    *((int *)t2) = 1;
    t3 = (t0 + 5408);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(44, ng0);

LAB5:    xsi_set_current_line(45, ng0);
    t4 = (t0 + 2296U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(48, ng0);
    t2 = (t0 + 4136);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 3976);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 3, 0LL);

LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(46, ng0);
    t11 = (t0 + 1288);
    t12 = *((char **)t11);
    t11 = (t0 + 3976);
    xsi_vlogvar_wait_assign_value(t11, t12, 0, 0, 3, 0LL);
    goto LAB8;

}

static void Always_52_1(char *t0)
{
    char t11[8];
    char t35[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    int t9;
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
    char *t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    char *t33;
    char *t34;

LAB0:    t1 = (t0 + 5624U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(52, ng0);
    t2 = (t0 + 6456);
    *((int *)t2) = 1;
    t3 = (t0 + 5656);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(53, ng0);

LAB5:    xsi_set_current_line(54, ng0);
    t4 = (t0 + 3976);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);

LAB6:    t7 = (t0 + 1288);
    t8 = *((char **)t7);
    t9 = xsi_vlog_unsigned_case_compare(t6, 3, t8, 32);
    if (t9 == 1)
        goto LAB7;

LAB8:    t2 = (t0 + 472);
    t3 = *((char **)t2);
    t9 = xsi_vlog_unsigned_case_compare(t6, 3, t3, 32);
    if (t9 == 1)
        goto LAB9;

LAB10:    t2 = (t0 + 608);
    t3 = *((char **)t2);
    t9 = xsi_vlog_unsigned_case_compare(t6, 3, t3, 32);
    if (t9 == 1)
        goto LAB11;

LAB12:    t2 = (t0 + 744);
    t3 = *((char **)t2);
    t9 = xsi_vlog_unsigned_case_compare(t6, 3, t3, 32);
    if (t9 == 1)
        goto LAB13;

LAB14:    t2 = (t0 + 880);
    t3 = *((char **)t2);
    t9 = xsi_vlog_unsigned_case_compare(t6, 3, t3, 32);
    if (t9 == 1)
        goto LAB15;

LAB16:    t2 = (t0 + 1016);
    t3 = *((char **)t2);
    t9 = xsi_vlog_unsigned_case_compare(t6, 3, t3, 32);
    if (t9 == 1)
        goto LAB17;

LAB18:    t2 = (t0 + 1152);
    t3 = *((char **)t2);
    t9 = xsi_vlog_unsigned_case_compare(t6, 3, t3, 32);
    if (t9 == 1)
        goto LAB19;

LAB20:    t2 = (t0 + 1424);
    t3 = *((char **)t2);
    t9 = xsi_vlog_unsigned_case_compare(t6, 3, t3, 32);
    if (t9 == 1)
        goto LAB21;

LAB22:
LAB24:
LAB23:    xsi_set_current_line(107, ng0);
    t2 = (t0 + 1288);
    t3 = *((char **)t2);
    t2 = (t0 + 4136);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 3);

LAB25:    goto LAB2;

LAB7:    xsi_set_current_line(56, ng0);

LAB26:    xsi_set_current_line(57, ng0);
    t7 = (t0 + 3096U);
    t10 = *((char **)t7);
    t7 = ((char*)((ng1)));
    memset(t11, 0, 8);
    t12 = (t10 + 4);
    t13 = (t7 + 4);
    t14 = *((unsigned int *)t10);
    t15 = *((unsigned int *)t7);
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
        goto LAB28;

LAB27:    if (t23 != 0)
        goto LAB29;

LAB30:    t27 = (t11 + 4);
    t28 = *((unsigned int *)t27);
    t29 = (~(t28));
    t30 = *((unsigned int *)t11);
    t31 = (t30 & t29);
    t32 = (t31 != 0);
    if (t32 > 0)
        goto LAB31;

LAB32:    xsi_set_current_line(60, ng0);
    t2 = (t0 + 1288);
    t3 = *((char **)t2);
    t2 = (t0 + 4136);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 3);

LAB33:    goto LAB25;

LAB9:    xsi_set_current_line(63, ng0);

LAB34:    xsi_set_current_line(64, ng0);
    t2 = (t0 + 2616U);
    t4 = *((char **)t2);
    t2 = (t4 + 4);
    t14 = *((unsigned int *)t2);
    t15 = (~(t14));
    t16 = *((unsigned int *)t4);
    t17 = (t16 & t15);
    t18 = (t17 != 0);
    if (t18 > 0)
        goto LAB35;

LAB36:    xsi_set_current_line(66, ng0);
    t2 = (t0 + 3096U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng2)));
    memset(t11, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t14 = *((unsigned int *)t3);
    t15 = *((unsigned int *)t2);
    t16 = (t14 ^ t15);
    t17 = *((unsigned int *)t4);
    t18 = *((unsigned int *)t5);
    t19 = (t17 ^ t18);
    t20 = (t16 | t19);
    t21 = *((unsigned int *)t4);
    t22 = *((unsigned int *)t5);
    t23 = (t21 | t22);
    t24 = (~(t23));
    t25 = (t20 & t24);
    if (t25 != 0)
        goto LAB41;

LAB38:    if (t23 != 0)
        goto LAB40;

LAB39:    *((unsigned int *)t11) = 1;

LAB41:    t8 = (t11 + 4);
    t28 = *((unsigned int *)t8);
    t29 = (~(t28));
    t30 = *((unsigned int *)t11);
    t31 = (t30 & t29);
    t32 = (t31 != 0);
    if (t32 > 0)
        goto LAB42;

LAB43:    xsi_set_current_line(69, ng0);
    t2 = (t0 + 2776U);
    t3 = *((char **)t2);
    t2 = (t0 + 4136);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 3);

LAB44:
LAB37:    goto LAB25;

LAB11:    xsi_set_current_line(72, ng0);

LAB45:    xsi_set_current_line(73, ng0);
    t2 = (t0 + 2616U);
    t4 = *((char **)t2);
    t2 = (t4 + 4);
    t14 = *((unsigned int *)t2);
    t15 = (~(t14));
    t16 = *((unsigned int *)t4);
    t17 = (t16 & t15);
    t18 = (t17 != 0);
    if (t18 > 0)
        goto LAB46;

LAB47:    xsi_set_current_line(76, ng0);
    t2 = (t0 + 4296);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t35, 0, 8);
    t5 = (t4 + 4);
    t14 = *((unsigned int *)t5);
    t15 = (~(t14));
    t16 = *((unsigned int *)t4);
    t17 = (t16 & t15);
    t18 = (t17 & 1U);
    if (t18 != 0)
        goto LAB49;

LAB50:    if (*((unsigned int *)t5) != 0)
        goto LAB51;

LAB52:    t8 = (t35 + 4);
    t19 = *((unsigned int *)t35);
    t20 = *((unsigned int *)t8);
    t21 = (t19 || t20);
    if (t21 > 0)
        goto LAB53;

LAB54:    t22 = *((unsigned int *)t35);
    t23 = (~(t22));
    t24 = *((unsigned int *)t8);
    t25 = (t23 || t24);
    if (t25 > 0)
        goto LAB55;

LAB56:    if (*((unsigned int *)t8) > 0)
        goto LAB57;

LAB58:    if (*((unsigned int *)t35) > 0)
        goto LAB59;

LAB60:    memcpy(t11, t13, 8);

LAB61:    t10 = (t0 + 4136);
    xsi_vlogvar_assign_value(t10, t11, 0, 0, 3);

LAB48:    goto LAB25;

LAB13:    xsi_set_current_line(79, ng0);

LAB62:    xsi_set_current_line(80, ng0);
    t2 = (t0 + 2616U);
    t4 = *((char **)t2);
    t2 = (t4 + 4);
    t14 = *((unsigned int *)t2);
    t15 = (~(t14));
    t16 = *((unsigned int *)t4);
    t17 = (t16 & t15);
    t18 = (t17 != 0);
    if (t18 > 0)
        goto LAB63;

LAB64:    xsi_set_current_line(83, ng0);
    t2 = (t0 + 4296);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t35, 0, 8);
    t5 = (t4 + 4);
    t14 = *((unsigned int *)t5);
    t15 = (~(t14));
    t16 = *((unsigned int *)t4);
    t17 = (t16 & t15);
    t18 = (t17 & 1U);
    if (t18 != 0)
        goto LAB66;

LAB67:    if (*((unsigned int *)t5) != 0)
        goto LAB68;

LAB69:    t8 = (t35 + 4);
    t19 = *((unsigned int *)t35);
    t20 = *((unsigned int *)t8);
    t21 = (t19 || t20);
    if (t21 > 0)
        goto LAB70;

LAB71:    t22 = *((unsigned int *)t35);
    t23 = (~(t22));
    t24 = *((unsigned int *)t8);
    t25 = (t23 || t24);
    if (t25 > 0)
        goto LAB72;

LAB73:    if (*((unsigned int *)t8) > 0)
        goto LAB74;

LAB75:    if (*((unsigned int *)t35) > 0)
        goto LAB76;

LAB77:    memcpy(t11, t13, 8);

LAB78:    t10 = (t0 + 4136);
    xsi_vlogvar_assign_value(t10, t11, 0, 0, 3);

LAB65:    goto LAB25;

LAB15:    xsi_set_current_line(86, ng0);

LAB79:    xsi_set_current_line(87, ng0);
    t2 = (t0 + 2616U);
    t4 = *((char **)t2);
    t2 = (t4 + 4);
    t14 = *((unsigned int *)t2);
    t15 = (~(t14));
    t16 = *((unsigned int *)t4);
    t17 = (t16 & t15);
    t18 = (t17 != 0);
    if (t18 > 0)
        goto LAB80;

LAB81:    xsi_set_current_line(90, ng0);
    t2 = (t0 + 4296);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t35, 0, 8);
    t5 = (t4 + 4);
    t14 = *((unsigned int *)t5);
    t15 = (~(t14));
    t16 = *((unsigned int *)t4);
    t17 = (t16 & t15);
    t18 = (t17 & 1U);
    if (t18 != 0)
        goto LAB83;

LAB84:    if (*((unsigned int *)t5) != 0)
        goto LAB85;

LAB86:    t8 = (t35 + 4);
    t19 = *((unsigned int *)t35);
    t20 = *((unsigned int *)t8);
    t21 = (t19 || t20);
    if (t21 > 0)
        goto LAB87;

LAB88:    t22 = *((unsigned int *)t35);
    t23 = (~(t22));
    t24 = *((unsigned int *)t8);
    t25 = (t23 || t24);
    if (t25 > 0)
        goto LAB89;

LAB90:    if (*((unsigned int *)t8) > 0)
        goto LAB91;

LAB92:    if (*((unsigned int *)t35) > 0)
        goto LAB93;

LAB94:    memcpy(t11, t13, 8);

LAB95:    t10 = (t0 + 4136);
    xsi_vlogvar_assign_value(t10, t11, 0, 0, 3);

LAB82:    goto LAB25;

LAB17:    xsi_set_current_line(93, ng0);

LAB96:    xsi_set_current_line(94, ng0);
    t2 = (t0 + 2616U);
    t4 = *((char **)t2);
    t2 = (t4 + 4);
    t14 = *((unsigned int *)t2);
    t15 = (~(t14));
    t16 = *((unsigned int *)t4);
    t17 = (t16 & t15);
    t18 = (t17 != 0);
    if (t18 > 0)
        goto LAB97;

LAB98:    xsi_set_current_line(97, ng0);
    t2 = (t0 + 4296);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t35, 0, 8);
    t5 = (t4 + 4);
    t14 = *((unsigned int *)t5);
    t15 = (~(t14));
    t16 = *((unsigned int *)t4);
    t17 = (t16 & t15);
    t18 = (t17 & 1U);
    if (t18 != 0)
        goto LAB100;

LAB101:    if (*((unsigned int *)t5) != 0)
        goto LAB102;

LAB103:    t8 = (t35 + 4);
    t19 = *((unsigned int *)t35);
    t20 = *((unsigned int *)t8);
    t21 = (t19 || t20);
    if (t21 > 0)
        goto LAB104;

LAB105:    t22 = *((unsigned int *)t35);
    t23 = (~(t22));
    t24 = *((unsigned int *)t8);
    t25 = (t23 || t24);
    if (t25 > 0)
        goto LAB106;

LAB107:    if (*((unsigned int *)t8) > 0)
        goto LAB108;

LAB109:    if (*((unsigned int *)t35) > 0)
        goto LAB110;

LAB111:    memcpy(t11, t13, 8);

LAB112:    t10 = (t0 + 4136);
    xsi_vlogvar_assign_value(t10, t11, 0, 0, 3);

LAB99:    goto LAB25;

LAB19:    xsi_set_current_line(100, ng0);

LAB113:    xsi_set_current_line(101, ng0);
    t2 = (t0 + 2616U);
    t4 = *((char **)t2);
    t2 = (t4 + 4);
    t14 = *((unsigned int *)t2);
    t15 = (~(t14));
    t16 = *((unsigned int *)t4);
    t17 = (t16 & t15);
    t18 = (t17 != 0);
    if (t18 > 0)
        goto LAB114;

LAB115:    xsi_set_current_line(104, ng0);
    t2 = (t0 + 4296);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t35, 0, 8);
    t5 = (t4 + 4);
    t14 = *((unsigned int *)t5);
    t15 = (~(t14));
    t16 = *((unsigned int *)t4);
    t17 = (t16 & t15);
    t18 = (t17 & 1U);
    if (t18 != 0)
        goto LAB117;

LAB118:    if (*((unsigned int *)t5) != 0)
        goto LAB119;

LAB120:    t8 = (t35 + 4);
    t19 = *((unsigned int *)t35);
    t20 = *((unsigned int *)t8);
    t21 = (t19 || t20);
    if (t21 > 0)
        goto LAB121;

LAB122:    t22 = *((unsigned int *)t35);
    t23 = (~(t22));
    t24 = *((unsigned int *)t8);
    t25 = (t23 || t24);
    if (t25 > 0)
        goto LAB123;

LAB124:    if (*((unsigned int *)t8) > 0)
        goto LAB125;

LAB126:    if (*((unsigned int *)t35) > 0)
        goto LAB127;

LAB128:    memcpy(t11, t13, 8);

LAB129:    t10 = (t0 + 4136);
    xsi_vlogvar_assign_value(t10, t11, 0, 0, 3);

LAB116:    goto LAB25;

LAB21:    xsi_set_current_line(106, ng0);
    t2 = (t0 + 1288);
    t4 = *((char **)t2);
    t2 = (t0 + 4136);
    xsi_vlogvar_assign_value(t2, t4, 0, 0, 3);
    goto LAB25;

LAB28:    *((unsigned int *)t11) = 1;
    goto LAB30;

LAB29:    t26 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t26) = 1;
    goto LAB30;

LAB31:    xsi_set_current_line(58, ng0);
    t33 = (t0 + 472);
    t34 = *((char **)t33);
    t33 = (t0 + 4136);
    xsi_vlogvar_assign_value(t33, t34, 0, 0, 3);
    goto LAB33;

LAB35:    xsi_set_current_line(65, ng0);
    t5 = (t0 + 1424);
    t7 = *((char **)t5);
    t5 = (t0 + 4136);
    xsi_vlogvar_assign_value(t5, t7, 0, 0, 3);
    goto LAB37;

LAB40:    t7 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB41;

LAB42:    xsi_set_current_line(67, ng0);
    t10 = (t0 + 2936U);
    t12 = *((char **)t10);
    t10 = (t0 + 4136);
    xsi_vlogvar_assign_value(t10, t12, 0, 0, 3);
    goto LAB44;

LAB46:    xsi_set_current_line(74, ng0);
    t5 = (t0 + 1424);
    t7 = *((char **)t5);
    t5 = (t0 + 4136);
    xsi_vlogvar_assign_value(t5, t7, 0, 0, 3);
    goto LAB48;

LAB49:    *((unsigned int *)t35) = 1;
    goto LAB52;

LAB51:    t7 = (t35 + 4);
    *((unsigned int *)t35) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB52;

LAB53:    t10 = (t0 + 472);
    t12 = *((char **)t10);
    goto LAB54;

LAB55:    t10 = (t0 + 608);
    t13 = *((char **)t10);
    goto LAB56;

LAB57:    xsi_vlog_unsigned_bit_combine(t11, 32, t12, 32, t13, 32);
    goto LAB61;

LAB59:    memcpy(t11, t12, 8);
    goto LAB61;

LAB63:    xsi_set_current_line(81, ng0);
    t5 = (t0 + 1424);
    t7 = *((char **)t5);
    t5 = (t0 + 4136);
    xsi_vlogvar_assign_value(t5, t7, 0, 0, 3);
    goto LAB65;

LAB66:    *((unsigned int *)t35) = 1;
    goto LAB69;

LAB68:    t7 = (t35 + 4);
    *((unsigned int *)t35) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB69;

LAB70:    t10 = (t0 + 472);
    t12 = *((char **)t10);
    goto LAB71;

LAB72:    t10 = (t0 + 744);
    t13 = *((char **)t10);
    goto LAB73;

LAB74:    xsi_vlog_unsigned_bit_combine(t11, 32, t12, 32, t13, 32);
    goto LAB78;

LAB76:    memcpy(t11, t12, 8);
    goto LAB78;

LAB80:    xsi_set_current_line(88, ng0);
    t5 = (t0 + 1424);
    t7 = *((char **)t5);
    t5 = (t0 + 4136);
    xsi_vlogvar_assign_value(t5, t7, 0, 0, 3);
    goto LAB82;

LAB83:    *((unsigned int *)t35) = 1;
    goto LAB86;

LAB85:    t7 = (t35 + 4);
    *((unsigned int *)t35) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB86;

LAB87:    t10 = (t0 + 472);
    t12 = *((char **)t10);
    goto LAB88;

LAB89:    t10 = (t0 + 880);
    t13 = *((char **)t10);
    goto LAB90;

LAB91:    xsi_vlog_unsigned_bit_combine(t11, 32, t12, 32, t13, 32);
    goto LAB95;

LAB93:    memcpy(t11, t12, 8);
    goto LAB95;

LAB97:    xsi_set_current_line(95, ng0);
    t5 = (t0 + 1424);
    t7 = *((char **)t5);
    t5 = (t0 + 4136);
    xsi_vlogvar_assign_value(t5, t7, 0, 0, 3);
    goto LAB99;

LAB100:    *((unsigned int *)t35) = 1;
    goto LAB103;

LAB102:    t7 = (t35 + 4);
    *((unsigned int *)t35) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB103;

LAB104:    t10 = (t0 + 472);
    t12 = *((char **)t10);
    goto LAB105;

LAB106:    t10 = (t0 + 1016);
    t13 = *((char **)t10);
    goto LAB107;

LAB108:    xsi_vlog_unsigned_bit_combine(t11, 32, t12, 32, t13, 32);
    goto LAB112;

LAB110:    memcpy(t11, t12, 8);
    goto LAB112;

LAB114:    xsi_set_current_line(102, ng0);
    t5 = (t0 + 1424);
    t7 = *((char **)t5);
    t5 = (t0 + 4136);
    xsi_vlogvar_assign_value(t5, t7, 0, 0, 3);
    goto LAB116;

LAB117:    *((unsigned int *)t35) = 1;
    goto LAB120;

LAB119:    t7 = (t35 + 4);
    *((unsigned int *)t35) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB120;

LAB121:    t10 = (t0 + 472);
    t12 = *((char **)t10);
    goto LAB122;

LAB123:    t10 = (t0 + 1152);
    t13 = *((char **)t10);
    goto LAB124;

LAB125:    xsi_vlog_unsigned_bit_combine(t11, 32, t12, 32, t13, 32);
    goto LAB129;

LAB127:    memcpy(t11, t12, 8);
    goto LAB129;

}

static void Always_112_2(char *t0)
{
    char t11[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    int t9;
    char *t10;
    unsigned int t12;
    unsigned int t13;
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
    char *t24;
    char *t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    char *t31;
    char *t32;

LAB0:    t1 = (t0 + 5872U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(112, ng0);
    t2 = (t0 + 6472);
    *((int *)t2) = 1;
    t3 = (t0 + 5904);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(113, ng0);

LAB5:    xsi_set_current_line(114, ng0);
    t4 = (t0 + 3976);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);

LAB6:    t7 = (t0 + 472);
    t8 = *((char **)t7);
    t9 = xsi_vlog_unsigned_case_compare(t6, 3, t8, 32);
    if (t9 == 1)
        goto LAB7;

LAB8:    t2 = (t0 + 608);
    t3 = *((char **)t2);
    t9 = xsi_vlog_unsigned_case_compare(t6, 3, t3, 32);
    if (t9 == 1)
        goto LAB9;

LAB10:    t2 = (t0 + 744);
    t3 = *((char **)t2);
    t9 = xsi_vlog_unsigned_case_compare(t6, 3, t3, 32);
    if (t9 == 1)
        goto LAB11;

LAB12:    t2 = (t0 + 880);
    t3 = *((char **)t2);
    t9 = xsi_vlog_unsigned_case_compare(t6, 3, t3, 32);
    if (t9 == 1)
        goto LAB13;

LAB14:    t2 = (t0 + 1016);
    t3 = *((char **)t2);
    t9 = xsi_vlog_unsigned_case_compare(t6, 3, t3, 32);
    if (t9 == 1)
        goto LAB15;

LAB16:    t2 = (t0 + 1152);
    t3 = *((char **)t2);
    t9 = xsi_vlog_unsigned_case_compare(t6, 3, t3, 32);
    if (t9 == 1)
        goto LAB17;

LAB18:
LAB20:
LAB19:    xsi_set_current_line(211, ng0);

LAB93:    xsi_set_current_line(212, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4296);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(213, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4456);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 7, 0LL);

LAB21:    goto LAB2;

LAB7:    xsi_set_current_line(116, ng0);

LAB22:    xsi_set_current_line(117, ng0);
    t7 = ((char*)((ng1)));
    t10 = (t0 + 4296);
    xsi_vlogvar_wait_assign_value(t10, t7, 0, 0, 1, 0LL);
    xsi_set_current_line(118, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4456);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 7, 0LL);
    goto LAB21;

LAB9:    xsi_set_current_line(121, ng0);

LAB23:    xsi_set_current_line(122, ng0);
    t2 = (t0 + 4456);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t7 = ((char*)((ng3)));
    memset(t11, 0, 8);
    t8 = (t5 + 4);
    t10 = (t7 + 4);
    t12 = *((unsigned int *)t5);
    t13 = *((unsigned int *)t7);
    t14 = (t12 ^ t13);
    t15 = *((unsigned int *)t8);
    t16 = *((unsigned int *)t10);
    t17 = (t15 ^ t16);
    t18 = (t14 | t17);
    t19 = *((unsigned int *)t8);
    t20 = *((unsigned int *)t10);
    t21 = (t19 | t20);
    t22 = (~(t21));
    t23 = (t18 & t22);
    if (t23 != 0)
        goto LAB27;

LAB24:    if (t21 != 0)
        goto LAB26;

LAB25:    *((unsigned int *)t11) = 1;

LAB27:    t25 = (t11 + 4);
    t26 = *((unsigned int *)t25);
    t27 = (~(t26));
    t28 = *((unsigned int *)t11);
    t29 = (t28 & t27);
    t30 = (t29 != 0);
    if (t30 > 0)
        goto LAB28;

LAB29:    xsi_set_current_line(127, ng0);
    t2 = (t0 + 2456U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t12 = *((unsigned int *)t2);
    t13 = (~(t12));
    t14 = *((unsigned int *)t3);
    t15 = (t14 & t13);
    t16 = (t15 != 0);
    if (t16 > 0)
        goto LAB32;

LAB33:    xsi_set_current_line(133, ng0);

LAB36:    xsi_set_current_line(134, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4296);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(135, ng0);
    t2 = (t0 + 4456);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 4456);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 7, 0LL);

LAB34:
LAB30:    goto LAB21;

LAB11:    xsi_set_current_line(139, ng0);

LAB37:    xsi_set_current_line(140, ng0);
    t2 = (t0 + 4456);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t7 = ((char*)((ng5)));
    memset(t11, 0, 8);
    t8 = (t5 + 4);
    t10 = (t7 + 4);
    t12 = *((unsigned int *)t5);
    t13 = *((unsigned int *)t7);
    t14 = (t12 ^ t13);
    t15 = *((unsigned int *)t8);
    t16 = *((unsigned int *)t10);
    t17 = (t15 ^ t16);
    t18 = (t14 | t17);
    t19 = *((unsigned int *)t8);
    t20 = *((unsigned int *)t10);
    t21 = (t19 | t20);
    t22 = (~(t21));
    t23 = (t18 & t22);
    if (t23 != 0)
        goto LAB41;

LAB38:    if (t21 != 0)
        goto LAB40;

LAB39:    *((unsigned int *)t11) = 1;

LAB41:    t25 = (t11 + 4);
    t26 = *((unsigned int *)t25);
    t27 = (~(t26));
    t28 = *((unsigned int *)t11);
    t29 = (t28 & t27);
    t30 = (t29 != 0);
    if (t30 > 0)
        goto LAB42;

LAB43:    xsi_set_current_line(145, ng0);
    t2 = (t0 + 2456U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t12 = *((unsigned int *)t2);
    t13 = (~(t12));
    t14 = *((unsigned int *)t3);
    t15 = (t14 & t13);
    t16 = (t15 != 0);
    if (t16 > 0)
        goto LAB46;

LAB47:    xsi_set_current_line(151, ng0);

LAB50:    xsi_set_current_line(152, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4296);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(153, ng0);
    t2 = (t0 + 4456);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 4456);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 7, 0LL);

LAB48:
LAB44:    goto LAB21;

LAB13:    xsi_set_current_line(157, ng0);

LAB51:    xsi_set_current_line(158, ng0);
    t2 = (t0 + 4456);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t7 = ((char*)((ng6)));
    memset(t11, 0, 8);
    t8 = (t5 + 4);
    t10 = (t7 + 4);
    t12 = *((unsigned int *)t5);
    t13 = *((unsigned int *)t7);
    t14 = (t12 ^ t13);
    t15 = *((unsigned int *)t8);
    t16 = *((unsigned int *)t10);
    t17 = (t15 ^ t16);
    t18 = (t14 | t17);
    t19 = *((unsigned int *)t8);
    t20 = *((unsigned int *)t10);
    t21 = (t19 | t20);
    t22 = (~(t21));
    t23 = (t18 & t22);
    if (t23 != 0)
        goto LAB55;

LAB52:    if (t21 != 0)
        goto LAB54;

LAB53:    *((unsigned int *)t11) = 1;

LAB55:    t25 = (t11 + 4);
    t26 = *((unsigned int *)t25);
    t27 = (~(t26));
    t28 = *((unsigned int *)t11);
    t29 = (t28 & t27);
    t30 = (t29 != 0);
    if (t30 > 0)
        goto LAB56;

LAB57:    xsi_set_current_line(163, ng0);
    t2 = (t0 + 2456U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t12 = *((unsigned int *)t2);
    t13 = (~(t12));
    t14 = *((unsigned int *)t3);
    t15 = (t14 & t13);
    t16 = (t15 != 0);
    if (t16 > 0)
        goto LAB60;

LAB61:    xsi_set_current_line(169, ng0);

LAB64:    xsi_set_current_line(170, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4296);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(171, ng0);
    t2 = (t0 + 4456);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 4456);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 7, 0LL);

LAB62:
LAB58:    goto LAB21;

LAB15:    xsi_set_current_line(175, ng0);

LAB65:    xsi_set_current_line(176, ng0);
    t2 = (t0 + 4456);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t7 = ((char*)((ng7)));
    memset(t11, 0, 8);
    t8 = (t5 + 4);
    t10 = (t7 + 4);
    t12 = *((unsigned int *)t5);
    t13 = *((unsigned int *)t7);
    t14 = (t12 ^ t13);
    t15 = *((unsigned int *)t8);
    t16 = *((unsigned int *)t10);
    t17 = (t15 ^ t16);
    t18 = (t14 | t17);
    t19 = *((unsigned int *)t8);
    t20 = *((unsigned int *)t10);
    t21 = (t19 | t20);
    t22 = (~(t21));
    t23 = (t18 & t22);
    if (t23 != 0)
        goto LAB69;

LAB66:    if (t21 != 0)
        goto LAB68;

LAB67:    *((unsigned int *)t11) = 1;

LAB69:    t25 = (t11 + 4);
    t26 = *((unsigned int *)t25);
    t27 = (~(t26));
    t28 = *((unsigned int *)t11);
    t29 = (t28 & t27);
    t30 = (t29 != 0);
    if (t30 > 0)
        goto LAB70;

LAB71:    xsi_set_current_line(181, ng0);
    t2 = (t0 + 2456U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t12 = *((unsigned int *)t2);
    t13 = (~(t12));
    t14 = *((unsigned int *)t3);
    t15 = (t14 & t13);
    t16 = (t15 != 0);
    if (t16 > 0)
        goto LAB74;

LAB75:    xsi_set_current_line(187, ng0);

LAB78:    xsi_set_current_line(188, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4296);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(189, ng0);
    t2 = (t0 + 4456);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 4456);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 7, 0LL);

LAB76:
LAB72:    goto LAB21;

LAB17:    xsi_set_current_line(193, ng0);

LAB79:    xsi_set_current_line(194, ng0);
    t2 = (t0 + 4456);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t7 = ((char*)((ng8)));
    memset(t11, 0, 8);
    t8 = (t5 + 4);
    t10 = (t7 + 4);
    t12 = *((unsigned int *)t5);
    t13 = *((unsigned int *)t7);
    t14 = (t12 ^ t13);
    t15 = *((unsigned int *)t8);
    t16 = *((unsigned int *)t10);
    t17 = (t15 ^ t16);
    t18 = (t14 | t17);
    t19 = *((unsigned int *)t8);
    t20 = *((unsigned int *)t10);
    t21 = (t19 | t20);
    t22 = (~(t21));
    t23 = (t18 & t22);
    if (t23 != 0)
        goto LAB83;

LAB80:    if (t21 != 0)
        goto LAB82;

LAB81:    *((unsigned int *)t11) = 1;

LAB83:    t25 = (t11 + 4);
    t26 = *((unsigned int *)t25);
    t27 = (~(t26));
    t28 = *((unsigned int *)t11);
    t29 = (t28 & t27);
    t30 = (t29 != 0);
    if (t30 > 0)
        goto LAB84;

LAB85:    xsi_set_current_line(199, ng0);
    t2 = (t0 + 2456U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t12 = *((unsigned int *)t2);
    t13 = (~(t12));
    t14 = *((unsigned int *)t3);
    t15 = (t14 & t13);
    t16 = (t15 != 0);
    if (t16 > 0)
        goto LAB88;

LAB89:    xsi_set_current_line(205, ng0);

LAB92:    xsi_set_current_line(206, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4296);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(207, ng0);
    t2 = (t0 + 4456);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 4456);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 7, 0LL);

LAB90:
LAB86:    goto LAB21;

LAB26:    t24 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t24) = 1;
    goto LAB27;

LAB28:    xsi_set_current_line(123, ng0);

LAB31:    xsi_set_current_line(124, ng0);
    t31 = ((char*)((ng4)));
    t32 = (t0 + 4296);
    xsi_vlogvar_wait_assign_value(t32, t31, 0, 0, 1, 0LL);
    xsi_set_current_line(125, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4456);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 7, 0LL);
    goto LAB30;

LAB32:    xsi_set_current_line(128, ng0);

LAB35:    xsi_set_current_line(129, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t0 + 4296);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(130, ng0);
    t2 = (t0 + 4456);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng4)));
    memset(t11, 0, 8);
    xsi_vlog_unsigned_add(t11, 32, t4, 7, t5, 32);
    t7 = (t0 + 4456);
    xsi_vlogvar_wait_assign_value(t7, t11, 0, 0, 7, 0LL);
    goto LAB34;

LAB40:    t24 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t24) = 1;
    goto LAB41;

LAB42:    xsi_set_current_line(141, ng0);

LAB45:    xsi_set_current_line(142, ng0);
    t31 = ((char*)((ng4)));
    t32 = (t0 + 4296);
    xsi_vlogvar_wait_assign_value(t32, t31, 0, 0, 1, 0LL);
    xsi_set_current_line(143, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4456);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 7, 0LL);
    goto LAB44;

LAB46:    xsi_set_current_line(146, ng0);

LAB49:    xsi_set_current_line(147, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t0 + 4296);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(148, ng0);
    t2 = (t0 + 4456);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng4)));
    memset(t11, 0, 8);
    xsi_vlog_unsigned_add(t11, 32, t4, 7, t5, 32);
    t7 = (t0 + 4456);
    xsi_vlogvar_wait_assign_value(t7, t11, 0, 0, 7, 0LL);
    goto LAB48;

LAB54:    t24 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t24) = 1;
    goto LAB55;

LAB56:    xsi_set_current_line(159, ng0);

LAB59:    xsi_set_current_line(160, ng0);
    t31 = ((char*)((ng4)));
    t32 = (t0 + 4296);
    xsi_vlogvar_wait_assign_value(t32, t31, 0, 0, 1, 0LL);
    xsi_set_current_line(161, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4456);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 7, 0LL);
    goto LAB58;

LAB60:    xsi_set_current_line(164, ng0);

LAB63:    xsi_set_current_line(165, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t0 + 4296);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(166, ng0);
    t2 = (t0 + 4456);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng4)));
    memset(t11, 0, 8);
    xsi_vlog_unsigned_add(t11, 32, t4, 7, t5, 32);
    t7 = (t0 + 4456);
    xsi_vlogvar_wait_assign_value(t7, t11, 0, 0, 7, 0LL);
    goto LAB62;

LAB68:    t24 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t24) = 1;
    goto LAB69;

LAB70:    xsi_set_current_line(177, ng0);

LAB73:    xsi_set_current_line(178, ng0);
    t31 = ((char*)((ng4)));
    t32 = (t0 + 4296);
    xsi_vlogvar_wait_assign_value(t32, t31, 0, 0, 1, 0LL);
    xsi_set_current_line(179, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4456);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 7, 0LL);
    goto LAB72;

LAB74:    xsi_set_current_line(182, ng0);

LAB77:    xsi_set_current_line(183, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t0 + 4296);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(184, ng0);
    t2 = (t0 + 4456);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng4)));
    memset(t11, 0, 8);
    xsi_vlog_unsigned_add(t11, 32, t4, 7, t5, 32);
    t7 = (t0 + 4456);
    xsi_vlogvar_wait_assign_value(t7, t11, 0, 0, 7, 0LL);
    goto LAB76;

LAB82:    t24 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t24) = 1;
    goto LAB83;

LAB84:    xsi_set_current_line(195, ng0);

LAB87:    xsi_set_current_line(196, ng0);
    t31 = ((char*)((ng4)));
    t32 = (t0 + 4296);
    xsi_vlogvar_wait_assign_value(t32, t31, 0, 0, 1, 0LL);
    xsi_set_current_line(197, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4456);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 7, 0LL);
    goto LAB86;

LAB88:    xsi_set_current_line(200, ng0);

LAB91:    xsi_set_current_line(201, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t0 + 4296);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(202, ng0);
    t2 = (t0 + 4456);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng4)));
    memset(t11, 0, 8);
    xsi_vlog_unsigned_add(t11, 32, t4, 7, t5, 32);
    t7 = (t0 + 4456);
    xsi_vlogvar_wait_assign_value(t7, t11, 0, 0, 7, 0LL);
    goto LAB90;

}

static void Always_219_3(char *t0)
{
    char t13[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    int t7;
    char *t8;
    int t9;
    char *t10;
    int t11;
    char *t12;
    char *t14;
    char *t15;
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
    unsigned int t26;
    unsigned int t27;
    char *t28;
    char *t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;

LAB0:    t1 = (t0 + 6120U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(219, ng0);
    t2 = (t0 + 6488);
    *((int *)t2) = 1;
    t3 = (t0 + 6152);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(220, ng0);

LAB5:    xsi_set_current_line(221, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t0 + 3496);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(222, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3656);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(223, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3816);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(224, ng0);
    t2 = (t0 + 3976);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);

LAB6:    t5 = (t0 + 1288);
    t6 = *((char **)t5);
    t7 = xsi_vlog_unsigned_case_compare(t4, 3, t6, 32);
    if (t7 == 1)
        goto LAB7;

LAB8:    t5 = (t0 + 472);
    t8 = *((char **)t5);
    t9 = xsi_vlog_unsigned_case_compare(t4, 3, t8, 32);
    if (t9 == 1)
        goto LAB9;

LAB10:    t5 = (t0 + 608);
    t10 = *((char **)t5);
    t11 = xsi_vlog_unsigned_case_compare(t4, 3, t10, 32);
    if (t11 == 1)
        goto LAB11;

LAB12:    t2 = (t0 + 744);
    t3 = *((char **)t2);
    t7 = xsi_vlog_unsigned_case_compare(t4, 3, t3, 32);
    if (t7 == 1)
        goto LAB13;

LAB14:    t2 = (t0 + 880);
    t3 = *((char **)t2);
    t7 = xsi_vlog_unsigned_case_compare(t4, 3, t3, 32);
    if (t7 == 1)
        goto LAB15;

LAB16:    t2 = (t0 + 1016);
    t3 = *((char **)t2);
    t7 = xsi_vlog_unsigned_case_compare(t4, 3, t3, 32);
    if (t7 == 1)
        goto LAB17;

LAB18:    t2 = (t0 + 1152);
    t3 = *((char **)t2);
    t7 = xsi_vlog_unsigned_case_compare(t4, 3, t3, 32);
    if (t7 == 1)
        goto LAB19;

LAB20:    t2 = (t0 + 1424);
    t3 = *((char **)t2);
    t7 = xsi_vlog_unsigned_case_compare(t4, 3, t3, 32);
    if (t7 == 1)
        goto LAB21;

LAB22:
LAB24:
LAB23:
LAB25:    goto LAB2;

LAB7:    goto LAB25;

LAB9:    goto LAB25;

LAB11:    xsi_set_current_line(228, ng0);

LAB26:    xsi_set_current_line(229, ng0);
    t5 = (t0 + 3096U);
    t12 = *((char **)t5);
    t5 = ((char*)((ng2)));
    memset(t13, 0, 8);
    t14 = (t12 + 4);
    t15 = (t5 + 4);
    t16 = *((unsigned int *)t12);
    t17 = *((unsigned int *)t5);
    t18 = (t16 ^ t17);
    t19 = *((unsigned int *)t14);
    t20 = *((unsigned int *)t15);
    t21 = (t19 ^ t20);
    t22 = (t18 | t21);
    t23 = *((unsigned int *)t14);
    t24 = *((unsigned int *)t15);
    t25 = (t23 | t24);
    t26 = (~(t25));
    t27 = (t22 & t26);
    if (t27 != 0)
        goto LAB30;

LAB27:    if (t25 != 0)
        goto LAB29;

LAB28:    *((unsigned int *)t13) = 1;

LAB30:    t29 = (t13 + 4);
    t30 = *((unsigned int *)t29);
    t31 = (~(t30));
    t32 = *((unsigned int *)t13);
    t33 = (t32 & t31);
    t34 = (t33 != 0);
    if (t34 > 0)
        goto LAB31;

LAB32:    xsi_set_current_line(232, ng0);
    t2 = (t0 + 4296);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 3496);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 1);

LAB33:    goto LAB25;

LAB13:    xsi_set_current_line(235, ng0);

LAB34:    xsi_set_current_line(236, ng0);
    t2 = (t0 + 3096U);
    t5 = *((char **)t2);
    t2 = ((char*)((ng2)));
    memset(t13, 0, 8);
    t6 = (t5 + 4);
    t8 = (t2 + 4);
    t16 = *((unsigned int *)t5);
    t17 = *((unsigned int *)t2);
    t18 = (t16 ^ t17);
    t19 = *((unsigned int *)t6);
    t20 = *((unsigned int *)t8);
    t21 = (t19 ^ t20);
    t22 = (t18 | t21);
    t23 = *((unsigned int *)t6);
    t24 = *((unsigned int *)t8);
    t25 = (t23 | t24);
    t26 = (~(t25));
    t27 = (t22 & t26);
    if (t27 != 0)
        goto LAB38;

LAB35:    if (t25 != 0)
        goto LAB37;

LAB36:    *((unsigned int *)t13) = 1;

LAB38:    t12 = (t13 + 4);
    t30 = *((unsigned int *)t12);
    t31 = (~(t30));
    t32 = *((unsigned int *)t13);
    t33 = (t32 & t31);
    t34 = (t33 != 0);
    if (t34 > 0)
        goto LAB39;

LAB40:    xsi_set_current_line(239, ng0);
    t2 = (t0 + 4296);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 3496);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 1);

LAB41:    goto LAB25;

LAB15:    xsi_set_current_line(242, ng0);

LAB42:    xsi_set_current_line(243, ng0);
    t2 = (t0 + 3096U);
    t5 = *((char **)t2);
    t2 = ((char*)((ng2)));
    memset(t13, 0, 8);
    t6 = (t5 + 4);
    t8 = (t2 + 4);
    t16 = *((unsigned int *)t5);
    t17 = *((unsigned int *)t2);
    t18 = (t16 ^ t17);
    t19 = *((unsigned int *)t6);
    t20 = *((unsigned int *)t8);
    t21 = (t19 ^ t20);
    t22 = (t18 | t21);
    t23 = *((unsigned int *)t6);
    t24 = *((unsigned int *)t8);
    t25 = (t23 | t24);
    t26 = (~(t25));
    t27 = (t22 & t26);
    if (t27 != 0)
        goto LAB46;

LAB43:    if (t25 != 0)
        goto LAB45;

LAB44:    *((unsigned int *)t13) = 1;

LAB46:    t12 = (t13 + 4);
    t30 = *((unsigned int *)t12);
    t31 = (~(t30));
    t32 = *((unsigned int *)t13);
    t33 = (t32 & t31);
    t34 = (t33 != 0);
    if (t34 > 0)
        goto LAB47;

LAB48:    xsi_set_current_line(246, ng0);
    t2 = (t0 + 4296);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 3496);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 1);

LAB49:    goto LAB25;

LAB17:    xsi_set_current_line(249, ng0);

LAB50:    xsi_set_current_line(250, ng0);
    t2 = (t0 + 3096U);
    t5 = *((char **)t2);
    t2 = ((char*)((ng2)));
    memset(t13, 0, 8);
    t6 = (t5 + 4);
    t8 = (t2 + 4);
    t16 = *((unsigned int *)t5);
    t17 = *((unsigned int *)t2);
    t18 = (t16 ^ t17);
    t19 = *((unsigned int *)t6);
    t20 = *((unsigned int *)t8);
    t21 = (t19 ^ t20);
    t22 = (t18 | t21);
    t23 = *((unsigned int *)t6);
    t24 = *((unsigned int *)t8);
    t25 = (t23 | t24);
    t26 = (~(t25));
    t27 = (t22 & t26);
    if (t27 != 0)
        goto LAB54;

LAB51:    if (t25 != 0)
        goto LAB53;

LAB52:    *((unsigned int *)t13) = 1;

LAB54:    t12 = (t13 + 4);
    t30 = *((unsigned int *)t12);
    t31 = (~(t30));
    t32 = *((unsigned int *)t13);
    t33 = (t32 & t31);
    t34 = (t33 != 0);
    if (t34 > 0)
        goto LAB55;

LAB56:    xsi_set_current_line(253, ng0);
    t2 = (t0 + 4296);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 3496);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 1);

LAB57:    goto LAB25;

LAB19:    xsi_set_current_line(256, ng0);

LAB58:    xsi_set_current_line(257, ng0);
    t2 = (t0 + 3096U);
    t5 = *((char **)t2);
    t2 = ((char*)((ng2)));
    memset(t13, 0, 8);
    t6 = (t5 + 4);
    t8 = (t2 + 4);
    t16 = *((unsigned int *)t5);
    t17 = *((unsigned int *)t2);
    t18 = (t16 ^ t17);
    t19 = *((unsigned int *)t6);
    t20 = *((unsigned int *)t8);
    t21 = (t19 ^ t20);
    t22 = (t18 | t21);
    t23 = *((unsigned int *)t6);
    t24 = *((unsigned int *)t8);
    t25 = (t23 | t24);
    t26 = (~(t25));
    t27 = (t22 & t26);
    if (t27 != 0)
        goto LAB62;

LAB59:    if (t25 != 0)
        goto LAB61;

LAB60:    *((unsigned int *)t13) = 1;

LAB62:    t12 = (t13 + 4);
    t30 = *((unsigned int *)t12);
    t31 = (~(t30));
    t32 = *((unsigned int *)t13);
    t33 = (t32 & t31);
    t34 = (t33 != 0);
    if (t34 > 0)
        goto LAB63;

LAB64:    xsi_set_current_line(260, ng0);
    t2 = (t0 + 4296);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 3496);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 1);

LAB65:    goto LAB25;

LAB21:    xsi_set_current_line(262, ng0);
    t2 = ((char*)((ng9)));
    t5 = (t0 + 3816);
    xsi_vlogvar_assign_value(t5, t2, 0, 0, 1);
    goto LAB25;

LAB29:    t28 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t28) = 1;
    goto LAB30;

LAB31:    xsi_set_current_line(230, ng0);
    t35 = (t0 + 4296);
    t36 = (t35 + 56U);
    t37 = *((char **)t36);
    t38 = (t0 + 3656);
    xsi_vlogvar_assign_value(t38, t37, 0, 0, 1);
    goto LAB33;

LAB37:    t10 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t10) = 1;
    goto LAB38;

LAB39:    xsi_set_current_line(237, ng0);
    t14 = (t0 + 4296);
    t15 = (t14 + 56U);
    t28 = *((char **)t15);
    t29 = (t0 + 3656);
    xsi_vlogvar_assign_value(t29, t28, 0, 0, 1);
    goto LAB41;

LAB45:    t10 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t10) = 1;
    goto LAB46;

LAB47:    xsi_set_current_line(244, ng0);
    t14 = (t0 + 4296);
    t15 = (t14 + 56U);
    t28 = *((char **)t15);
    t29 = (t0 + 3656);
    xsi_vlogvar_assign_value(t29, t28, 0, 0, 1);
    goto LAB49;

LAB53:    t10 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t10) = 1;
    goto LAB54;

LAB55:    xsi_set_current_line(251, ng0);
    t14 = (t0 + 4296);
    t15 = (t14 + 56U);
    t28 = *((char **)t15);
    t29 = (t0 + 3656);
    xsi_vlogvar_assign_value(t29, t28, 0, 0, 1);
    goto LAB57;

LAB61:    t10 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t10) = 1;
    goto LAB62;

LAB63:    xsi_set_current_line(258, ng0);
    t14 = (t0 + 4296);
    t15 = (t14 + 56U);
    t28 = *((char **)t15);
    t29 = (t0 + 3656);
    xsi_vlogvar_assign_value(t29, t28, 0, 0, 1);
    goto LAB65;

}


extern void work_m_00000000000690908502_1306365758_init()
{
	static char *pe[] = {(void *)Always_43_0,(void *)Always_52_1,(void *)Always_112_2,(void *)Always_219_3};
	xsi_register_didat("work_m_00000000000690908502_1306365758", "isim/SystemControllerIntegration_TestBench2_isim_beh.exe.sim/work/m_00000000000690908502_1306365758.didat");
	xsi_register_executes(pe);
}
