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
static const char *ng0 = "C:/Users/Steve Brown/Desktop/ECE3710/Titan/Processor/Processor_Titan/Duration_FSM.v";
static int ng1[] = {0, 0};
static int ng2[] = {100, 0};
static int ng3[] = {1, 0};
static unsigned int ng4[] = {1U, 0U};
static int ng5[] = {50, 0};
static int ng6[] = {33, 0};
static int ng7[] = {25, 0};
static int ng8[] = {17, 0};



static void Always_41_0(char *t0)
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

LAB0:    t1 = (t0 + 4304U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(41, ng0);
    t2 = (t0 + 5368);
    *((int *)t2) = 1;
    t3 = (t0 + 4336);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(42, ng0);

LAB5:    xsi_set_current_line(43, ng0);
    t4 = (t0 + 2024U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(46, ng0);
    t2 = (t0 + 3064);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2904);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 3, 0LL);

LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(44, ng0);
    t11 = (t0 + 472);
    t12 = *((char **)t11);
    t11 = (t0 + 2904);
    xsi_vlogvar_wait_assign_value(t11, t12, 0, 0, 3, 0LL);
    goto LAB8;

}

static void Always_50_1(char *t0)
{
    char t11[8];
    char t12[8];
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
    unsigned int t13;
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
    char *t27;

LAB0:    t1 = (t0 + 4552U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(50, ng0);
    t2 = (t0 + 5384);
    *((int *)t2) = 1;
    t3 = (t0 + 4584);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(51, ng0);

LAB5:    xsi_set_current_line(52, ng0);
    t4 = (t0 + 2904);
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
LAB19:    xsi_set_current_line(59, ng0);
    t2 = (t0 + 472);
    t3 = *((char **)t2);
    t2 = (t0 + 3064);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 3);

LAB21:    goto LAB2;

LAB7:    xsi_set_current_line(53, ng0);
    t7 = (t0 + 2344U);
    t10 = *((char **)t7);
    t7 = (t0 + 3064);
    xsi_vlogvar_assign_value(t7, t10, 0, 0, 3);
    goto LAB21;

LAB9:    xsi_set_current_line(54, ng0);
    t2 = (t0 + 3224);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    memset(t12, 0, 8);
    t7 = (t5 + 4);
    t13 = *((unsigned int *)t7);
    t14 = (~(t13));
    t15 = *((unsigned int *)t5);
    t16 = (t15 & t14);
    t17 = (t16 & 1U);
    if (t17 != 0)
        goto LAB22;

LAB23:    if (*((unsigned int *)t7) != 0)
        goto LAB24;

LAB25:    t10 = (t12 + 4);
    t18 = *((unsigned int *)t12);
    t19 = *((unsigned int *)t10);
    t20 = (t18 || t19);
    if (t20 > 0)
        goto LAB26;

LAB27:    t23 = *((unsigned int *)t12);
    t24 = (~(t23));
    t25 = *((unsigned int *)t10);
    t26 = (t24 || t25);
    if (t26 > 0)
        goto LAB28;

LAB29:    if (*((unsigned int *)t10) > 0)
        goto LAB30;

LAB31:    if (*((unsigned int *)t12) > 0)
        goto LAB32;

LAB33:    memcpy(t11, t27, 8);

LAB34:    t21 = (t0 + 3064);
    xsi_vlogvar_assign_value(t21, t11, 0, 0, 3);
    goto LAB21;

LAB11:    xsi_set_current_line(55, ng0);
    t2 = (t0 + 3224);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    memset(t12, 0, 8);
    t7 = (t5 + 4);
    t13 = *((unsigned int *)t7);
    t14 = (~(t13));
    t15 = *((unsigned int *)t5);
    t16 = (t15 & t14);
    t17 = (t16 & 1U);
    if (t17 != 0)
        goto LAB35;

LAB36:    if (*((unsigned int *)t7) != 0)
        goto LAB37;

LAB38:    t10 = (t12 + 4);
    t18 = *((unsigned int *)t12);
    t19 = *((unsigned int *)t10);
    t20 = (t18 || t19);
    if (t20 > 0)
        goto LAB39;

LAB40:    t23 = *((unsigned int *)t12);
    t24 = (~(t23));
    t25 = *((unsigned int *)t10);
    t26 = (t24 || t25);
    if (t26 > 0)
        goto LAB41;

LAB42:    if (*((unsigned int *)t10) > 0)
        goto LAB43;

LAB44:    if (*((unsigned int *)t12) > 0)
        goto LAB45;

LAB46:    memcpy(t11, t27, 8);

LAB47:    t21 = (t0 + 3064);
    xsi_vlogvar_assign_value(t21, t11, 0, 0, 3);
    goto LAB21;

LAB13:    xsi_set_current_line(56, ng0);
    t2 = (t0 + 3224);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    memset(t12, 0, 8);
    t7 = (t5 + 4);
    t13 = *((unsigned int *)t7);
    t14 = (~(t13));
    t15 = *((unsigned int *)t5);
    t16 = (t15 & t14);
    t17 = (t16 & 1U);
    if (t17 != 0)
        goto LAB48;

LAB49:    if (*((unsigned int *)t7) != 0)
        goto LAB50;

LAB51:    t10 = (t12 + 4);
    t18 = *((unsigned int *)t12);
    t19 = *((unsigned int *)t10);
    t20 = (t18 || t19);
    if (t20 > 0)
        goto LAB52;

LAB53:    t23 = *((unsigned int *)t12);
    t24 = (~(t23));
    t25 = *((unsigned int *)t10);
    t26 = (t24 || t25);
    if (t26 > 0)
        goto LAB54;

LAB55:    if (*((unsigned int *)t10) > 0)
        goto LAB56;

LAB57:    if (*((unsigned int *)t12) > 0)
        goto LAB58;

LAB59:    memcpy(t11, t27, 8);

LAB60:    t21 = (t0 + 3064);
    xsi_vlogvar_assign_value(t21, t11, 0, 0, 3);
    goto LAB21;

LAB15:    xsi_set_current_line(57, ng0);
    t2 = (t0 + 3224);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    memset(t12, 0, 8);
    t7 = (t5 + 4);
    t13 = *((unsigned int *)t7);
    t14 = (~(t13));
    t15 = *((unsigned int *)t5);
    t16 = (t15 & t14);
    t17 = (t16 & 1U);
    if (t17 != 0)
        goto LAB61;

LAB62:    if (*((unsigned int *)t7) != 0)
        goto LAB63;

LAB64:    t10 = (t12 + 4);
    t18 = *((unsigned int *)t12);
    t19 = *((unsigned int *)t10);
    t20 = (t18 || t19);
    if (t20 > 0)
        goto LAB65;

LAB66:    t23 = *((unsigned int *)t12);
    t24 = (~(t23));
    t25 = *((unsigned int *)t10);
    t26 = (t24 || t25);
    if (t26 > 0)
        goto LAB67;

LAB68:    if (*((unsigned int *)t10) > 0)
        goto LAB69;

LAB70:    if (*((unsigned int *)t12) > 0)
        goto LAB71;

LAB72:    memcpy(t11, t27, 8);

LAB73:    t21 = (t0 + 3064);
    xsi_vlogvar_assign_value(t21, t11, 0, 0, 3);
    goto LAB21;

LAB17:    xsi_set_current_line(58, ng0);
    t2 = (t0 + 3224);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    memset(t12, 0, 8);
    t7 = (t5 + 4);
    t13 = *((unsigned int *)t7);
    t14 = (~(t13));
    t15 = *((unsigned int *)t5);
    t16 = (t15 & t14);
    t17 = (t16 & 1U);
    if (t17 != 0)
        goto LAB74;

LAB75:    if (*((unsigned int *)t7) != 0)
        goto LAB76;

LAB77:    t10 = (t12 + 4);
    t18 = *((unsigned int *)t12);
    t19 = *((unsigned int *)t10);
    t20 = (t18 || t19);
    if (t20 > 0)
        goto LAB78;

LAB79:    t23 = *((unsigned int *)t12);
    t24 = (~(t23));
    t25 = *((unsigned int *)t10);
    t26 = (t24 || t25);
    if (t26 > 0)
        goto LAB80;

LAB81:    if (*((unsigned int *)t10) > 0)
        goto LAB82;

LAB83:    if (*((unsigned int *)t12) > 0)
        goto LAB84;

LAB85:    memcpy(t11, t27, 8);

LAB86:    t21 = (t0 + 3064);
    xsi_vlogvar_assign_value(t21, t11, 0, 0, 3);
    goto LAB21;

LAB22:    *((unsigned int *)t12) = 1;
    goto LAB25;

LAB24:    t8 = (t12 + 4);
    *((unsigned int *)t12) = 1;
    *((unsigned int *)t8) = 1;
    goto LAB25;

LAB26:    t21 = (t0 + 472);
    t22 = *((char **)t21);
    goto LAB27;

LAB28:    t21 = (t0 + 608);
    t27 = *((char **)t21);
    goto LAB29;

LAB30:    xsi_vlog_unsigned_bit_combine(t11, 32, t22, 32, t27, 32);
    goto LAB34;

LAB32:    memcpy(t11, t22, 8);
    goto LAB34;

LAB35:    *((unsigned int *)t12) = 1;
    goto LAB38;

LAB37:    t8 = (t12 + 4);
    *((unsigned int *)t12) = 1;
    *((unsigned int *)t8) = 1;
    goto LAB38;

LAB39:    t21 = (t0 + 472);
    t22 = *((char **)t21);
    goto LAB40;

LAB41:    t21 = (t0 + 744);
    t27 = *((char **)t21);
    goto LAB42;

LAB43:    xsi_vlog_unsigned_bit_combine(t11, 32, t22, 32, t27, 32);
    goto LAB47;

LAB45:    memcpy(t11, t22, 8);
    goto LAB47;

LAB48:    *((unsigned int *)t12) = 1;
    goto LAB51;

LAB50:    t8 = (t12 + 4);
    *((unsigned int *)t12) = 1;
    *((unsigned int *)t8) = 1;
    goto LAB51;

LAB52:    t21 = (t0 + 472);
    t22 = *((char **)t21);
    goto LAB53;

LAB54:    t21 = (t0 + 880);
    t27 = *((char **)t21);
    goto LAB55;

LAB56:    xsi_vlog_unsigned_bit_combine(t11, 32, t22, 32, t27, 32);
    goto LAB60;

LAB58:    memcpy(t11, t22, 8);
    goto LAB60;

LAB61:    *((unsigned int *)t12) = 1;
    goto LAB64;

LAB63:    t8 = (t12 + 4);
    *((unsigned int *)t12) = 1;
    *((unsigned int *)t8) = 1;
    goto LAB64;

LAB65:    t21 = (t0 + 472);
    t22 = *((char **)t21);
    goto LAB66;

LAB67:    t21 = (t0 + 1016);
    t27 = *((char **)t21);
    goto LAB68;

LAB69:    xsi_vlog_unsigned_bit_combine(t11, 32, t22, 32, t27, 32);
    goto LAB73;

LAB71:    memcpy(t11, t22, 8);
    goto LAB73;

LAB74:    *((unsigned int *)t12) = 1;
    goto LAB77;

LAB76:    t8 = (t12 + 4);
    *((unsigned int *)t12) = 1;
    *((unsigned int *)t8) = 1;
    goto LAB77;

LAB78:    t21 = (t0 + 472);
    t22 = *((char **)t21);
    goto LAB79;

LAB80:    t21 = (t0 + 1152);
    t27 = *((char **)t21);
    goto LAB81;

LAB82:    xsi_vlog_unsigned_bit_combine(t11, 32, t22, 32, t27, 32);
    goto LAB86;

LAB84:    memcpy(t11, t22, 8);
    goto LAB86;

}

static void Always_64_2(char *t0)
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

LAB0:    t1 = (t0 + 4800U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(64, ng0);
    t2 = (t0 + 5400);
    *((int *)t2) = 1;
    t3 = (t0 + 4832);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(65, ng0);

LAB5:    xsi_set_current_line(66, ng0);
    t4 = (t0 + 2904);
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
LAB19:    xsi_set_current_line(163, ng0);

LAB93:    xsi_set_current_line(164, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3224);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(165, ng0);
    t2 = (t0 + 3384);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 3384);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 7, 0LL);

LAB21:    goto LAB2;

LAB7:    xsi_set_current_line(68, ng0);

LAB22:    xsi_set_current_line(69, ng0);
    t7 = ((char*)((ng1)));
    t10 = (t0 + 3224);
    xsi_vlogvar_wait_assign_value(t10, t7, 0, 0, 1, 0LL);
    xsi_set_current_line(70, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3384);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 7, 0LL);
    goto LAB21;

LAB9:    xsi_set_current_line(73, ng0);

LAB23:    xsi_set_current_line(74, ng0);
    t2 = (t0 + 3384);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t7 = ((char*)((ng2)));
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

LAB29:    xsi_set_current_line(79, ng0);
    t2 = (t0 + 2184U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t12 = *((unsigned int *)t2);
    t13 = (~(t12));
    t14 = *((unsigned int *)t3);
    t15 = (t14 & t13);
    t16 = (t15 != 0);
    if (t16 > 0)
        goto LAB32;

LAB33:    xsi_set_current_line(85, ng0);

LAB36:    xsi_set_current_line(86, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3224);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(87, ng0);
    t2 = (t0 + 3384);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 3384);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 7, 0LL);

LAB34:
LAB30:    goto LAB21;

LAB11:    xsi_set_current_line(91, ng0);

LAB37:    xsi_set_current_line(92, ng0);
    t2 = (t0 + 3384);
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

LAB43:    xsi_set_current_line(97, ng0);
    t2 = (t0 + 2184U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t12 = *((unsigned int *)t2);
    t13 = (~(t12));
    t14 = *((unsigned int *)t3);
    t15 = (t14 & t13);
    t16 = (t15 != 0);
    if (t16 > 0)
        goto LAB46;

LAB47:    xsi_set_current_line(103, ng0);

LAB50:    xsi_set_current_line(104, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3224);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(105, ng0);
    t2 = (t0 + 3384);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 3384);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 7, 0LL);

LAB48:
LAB44:    goto LAB21;

LAB13:    xsi_set_current_line(109, ng0);

LAB51:    xsi_set_current_line(110, ng0);
    t2 = (t0 + 3384);
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

LAB57:    xsi_set_current_line(115, ng0);
    t2 = (t0 + 2184U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t12 = *((unsigned int *)t2);
    t13 = (~(t12));
    t14 = *((unsigned int *)t3);
    t15 = (t14 & t13);
    t16 = (t15 != 0);
    if (t16 > 0)
        goto LAB60;

LAB61:    xsi_set_current_line(121, ng0);

LAB64:    xsi_set_current_line(122, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3224);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(123, ng0);
    t2 = (t0 + 3384);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 3384);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 7, 0LL);

LAB62:
LAB58:    goto LAB21;

LAB15:    xsi_set_current_line(127, ng0);

LAB65:    xsi_set_current_line(128, ng0);
    t2 = (t0 + 3384);
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

LAB71:    xsi_set_current_line(133, ng0);
    t2 = (t0 + 2184U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t12 = *((unsigned int *)t2);
    t13 = (~(t12));
    t14 = *((unsigned int *)t3);
    t15 = (t14 & t13);
    t16 = (t15 != 0);
    if (t16 > 0)
        goto LAB74;

LAB75:    xsi_set_current_line(139, ng0);

LAB78:    xsi_set_current_line(140, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3224);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(141, ng0);
    t2 = (t0 + 3384);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 3384);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 7, 0LL);

LAB76:
LAB72:    goto LAB21;

LAB17:    xsi_set_current_line(145, ng0);

LAB79:    xsi_set_current_line(146, ng0);
    t2 = (t0 + 3384);
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

LAB85:    xsi_set_current_line(151, ng0);
    t2 = (t0 + 2184U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t12 = *((unsigned int *)t2);
    t13 = (~(t12));
    t14 = *((unsigned int *)t3);
    t15 = (t14 & t13);
    t16 = (t15 != 0);
    if (t16 > 0)
        goto LAB88;

LAB89:    xsi_set_current_line(157, ng0);

LAB92:    xsi_set_current_line(158, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3224);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(159, ng0);
    t2 = (t0 + 3384);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 3384);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 7, 0LL);

LAB90:
LAB86:    goto LAB21;

LAB26:    t24 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t24) = 1;
    goto LAB27;

LAB28:    xsi_set_current_line(75, ng0);

LAB31:    xsi_set_current_line(76, ng0);
    t31 = ((char*)((ng3)));
    t32 = (t0 + 3224);
    xsi_vlogvar_wait_assign_value(t32, t31, 0, 0, 1, 0LL);
    xsi_set_current_line(77, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3384);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 7, 0LL);
    goto LAB30;

LAB32:    xsi_set_current_line(80, ng0);

LAB35:    xsi_set_current_line(81, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t0 + 3224);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(82, ng0);
    t2 = (t0 + 3384);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng4)));
    memset(t11, 0, 8);
    xsi_vlog_unsigned_add(t11, 7, t4, 7, t5, 7);
    t7 = (t0 + 3384);
    xsi_vlogvar_wait_assign_value(t7, t11, 0, 0, 7, 0LL);
    goto LAB34;

LAB40:    t24 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t24) = 1;
    goto LAB41;

LAB42:    xsi_set_current_line(93, ng0);

LAB45:    xsi_set_current_line(94, ng0);
    t31 = ((char*)((ng3)));
    t32 = (t0 + 3224);
    xsi_vlogvar_wait_assign_value(t32, t31, 0, 0, 1, 0LL);
    xsi_set_current_line(95, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3384);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 7, 0LL);
    goto LAB44;

LAB46:    xsi_set_current_line(98, ng0);

LAB49:    xsi_set_current_line(99, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t0 + 3224);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(100, ng0);
    t2 = (t0 + 3384);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng4)));
    memset(t11, 0, 8);
    xsi_vlog_unsigned_add(t11, 7, t4, 7, t5, 7);
    t7 = (t0 + 3384);
    xsi_vlogvar_wait_assign_value(t7, t11, 0, 0, 7, 0LL);
    goto LAB48;

LAB54:    t24 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t24) = 1;
    goto LAB55;

LAB56:    xsi_set_current_line(111, ng0);

LAB59:    xsi_set_current_line(112, ng0);
    t31 = ((char*)((ng3)));
    t32 = (t0 + 3224);
    xsi_vlogvar_wait_assign_value(t32, t31, 0, 0, 1, 0LL);
    xsi_set_current_line(113, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3384);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 7, 0LL);
    goto LAB58;

LAB60:    xsi_set_current_line(116, ng0);

LAB63:    xsi_set_current_line(117, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t0 + 3224);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(118, ng0);
    t2 = (t0 + 3384);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng4)));
    memset(t11, 0, 8);
    xsi_vlog_unsigned_add(t11, 7, t4, 7, t5, 7);
    t7 = (t0 + 3384);
    xsi_vlogvar_wait_assign_value(t7, t11, 0, 0, 7, 0LL);
    goto LAB62;

LAB68:    t24 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t24) = 1;
    goto LAB69;

LAB70:    xsi_set_current_line(129, ng0);

LAB73:    xsi_set_current_line(130, ng0);
    t31 = ((char*)((ng3)));
    t32 = (t0 + 3224);
    xsi_vlogvar_wait_assign_value(t32, t31, 0, 0, 1, 0LL);
    xsi_set_current_line(131, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3384);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 7, 0LL);
    goto LAB72;

LAB74:    xsi_set_current_line(134, ng0);

LAB77:    xsi_set_current_line(135, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t0 + 3224);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(136, ng0);
    t2 = (t0 + 3384);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng4)));
    memset(t11, 0, 8);
    xsi_vlog_unsigned_add(t11, 7, t4, 7, t5, 7);
    t7 = (t0 + 3384);
    xsi_vlogvar_wait_assign_value(t7, t11, 0, 0, 7, 0LL);
    goto LAB76;

LAB82:    t24 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t24) = 1;
    goto LAB83;

LAB84:    xsi_set_current_line(147, ng0);

LAB87:    xsi_set_current_line(148, ng0);
    t31 = ((char*)((ng3)));
    t32 = (t0 + 3224);
    xsi_vlogvar_wait_assign_value(t32, t31, 0, 0, 1, 0LL);
    xsi_set_current_line(149, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3384);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 7, 0LL);
    goto LAB86;

LAB88:    xsi_set_current_line(152, ng0);

LAB91:    xsi_set_current_line(153, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t0 + 3224);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(154, ng0);
    t2 = (t0 + 3384);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng4)));
    memset(t11, 0, 8);
    xsi_vlog_unsigned_add(t11, 7, t4, 7, t5, 7);
    t7 = (t0 + 3384);
    xsi_vlogvar_wait_assign_value(t7, t11, 0, 0, 7, 0LL);
    goto LAB90;

}

static void Always_171_3(char *t0)
{
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

LAB0:    t1 = (t0 + 5048U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(171, ng0);
    t2 = (t0 + 5416);
    *((int *)t2) = 1;
    t3 = (t0 + 5080);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(172, ng0);

LAB5:    xsi_set_current_line(173, ng0);
    t4 = (t0 + 2904);
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
LAB19:    xsi_set_current_line(180, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2744);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);

LAB21:    goto LAB2;

LAB7:    xsi_set_current_line(174, ng0);
    t7 = ((char*)((ng1)));
    t10 = (t0 + 2744);
    xsi_vlogvar_assign_value(t10, t7, 0, 0, 1);
    goto LAB21;

LAB9:    xsi_set_current_line(175, ng0);
    t2 = (t0 + 3224);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t7 = (t0 + 2744);
    xsi_vlogvar_assign_value(t7, t5, 0, 0, 1);
    goto LAB21;

LAB11:    xsi_set_current_line(176, ng0);
    t2 = (t0 + 3224);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t7 = (t0 + 2744);
    xsi_vlogvar_assign_value(t7, t5, 0, 0, 1);
    goto LAB21;

LAB13:    xsi_set_current_line(177, ng0);
    t2 = (t0 + 3224);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t7 = (t0 + 2744);
    xsi_vlogvar_assign_value(t7, t5, 0, 0, 1);
    goto LAB21;

LAB15:    xsi_set_current_line(178, ng0);
    t2 = (t0 + 3224);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t7 = (t0 + 2744);
    xsi_vlogvar_assign_value(t7, t5, 0, 0, 1);
    goto LAB21;

LAB17:    xsi_set_current_line(179, ng0);
    t2 = (t0 + 3224);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t7 = (t0 + 2744);
    xsi_vlogvar_assign_value(t7, t5, 0, 0, 1);
    goto LAB21;

}


extern void work_m_00000000001183767618_2544418878_init()
{
	static char *pe[] = {(void *)Always_41_0,(void *)Always_50_1,(void *)Always_64_2,(void *)Always_171_3};
	xsi_register_didat("work_m_00000000001183767618_2544418878", "isim/SystemControllerIntegration_TestBench2_isim_beh.exe.sim/work/m_00000000001183767618_2544418878.didat");
	xsi_register_executes(pe);
}
