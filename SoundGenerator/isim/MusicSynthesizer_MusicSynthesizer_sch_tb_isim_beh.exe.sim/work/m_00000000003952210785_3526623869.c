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
static const char *ng0 = "//wannsee/users/u0655172/My Documents/Lab6/song_library.v";
static int ng1[] = {1, 0};
static int ng2[] = {43, 0};
static int ng3[] = {0, 0};
static int ng4[] = {2, 0};
static int ng5[] = {85131, 0};
static int ng6[] = {3, 0};
static int ng7[] = {90192, 0};
static int ng8[] = {4, 0};
static int ng9[] = {95557, 0};
static int ng10[] = {5, 0};
static int ng11[] = {6, 0};
static int ng12[] = {7, 0};
static int ng13[] = {101239, 0};
static int ng14[] = {8, 0};
static int ng15[] = {107259, 0};
static int ng16[] = {9, 0};
static int ng17[] = {113636, 0};
static int ng18[] = {10, 0};
static int ng19[] = {11, 0};
static int ng20[] = {12, 0};
static int ng21[] = {120395, 0};
static int ng22[] = {13, 0};
static int ng23[] = {127551, 0};
static int ng24[] = {14, 0};
static int ng25[] = {143172, 0};
static int ng26[] = {15, 0};
static int ng27[] = {16, 0};
static int ng28[] = {17, 0};
static int ng29[] = {151685, 0};
static int ng30[] = {18, 0};
static int ng31[] = {19, 0};
static int ng32[] = {20, 0};
static int ng33[] = {21, 0};
static int ng34[] = {22, 0};
static int ng35[] = {23, 0};
static int ng36[] = {24, 0};
static int ng37[] = {25, 0};
static int ng38[] = {26, 0};
static int ng39[] = {27, 0};
static int ng40[] = {28, 0};
static int ng41[] = {29, 0};
static int ng42[] = {30, 0};
static int ng43[] = {31, 0};
static int ng44[] = {32, 0};
static int ng45[] = {33, 0};
static int ng46[] = {34, 0};
static int ng47[] = {35, 0};
static int ng48[] = {36, 0};
static int ng49[] = {37, 0};
static int ng50[] = {38, 0};
static int ng51[] = {39, 0};
static int ng52[] = {170265, 0};
static int ng53[] = {40, 0};
static int ng54[] = {41, 0};
static int ng55[] = {42, 0};



static void Always_37_0(char *t0)
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

LAB0:    t1 = (t0 + 3824U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(37, ng0);
    t2 = (t0 + 4392);
    *((int *)t2) = 1;
    t3 = (t0 + 3856);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(38, ng0);

LAB5:    xsi_set_current_line(39, ng0);
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

LAB7:    xsi_set_current_line(45, ng0);
    t2 = (t0 + 2904);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
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

LAB15:    xsi_set_current_line(51, ng0);
    t2 = (t0 + 2184U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB18;

LAB19:    xsi_set_current_line(58, ng0);

LAB22:    xsi_set_current_line(59, ng0);
    t2 = (t0 + 2904);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2904);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 6, 0LL);
    xsi_set_current_line(60, ng0);
    t2 = (t0 + 2584);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2584);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 3, 0LL);
    xsi_set_current_line(61, ng0);
    t2 = (t0 + 2744);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2744);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 23, 0LL);

LAB20:
LAB16:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(40, ng0);

LAB9:    xsi_set_current_line(41, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 2904);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 6, 0LL);
    xsi_set_current_line(42, ng0);
    t2 = (t0 + 2584);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2584);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 3, 0LL);
    xsi_set_current_line(43, ng0);
    t2 = (t0 + 2744);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2744);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 23, 0LL);
    goto LAB8;

LAB12:    t21 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB13;

LAB14:    xsi_set_current_line(46, ng0);

LAB17:    xsi_set_current_line(47, ng0);
    t28 = ((char*)((ng1)));
    t29 = (t0 + 2904);
    xsi_vlogvar_wait_assign_value(t29, t28, 0, 0, 6, 0LL);
    xsi_set_current_line(48, ng0);
    t2 = (t0 + 2584);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2584);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 3, 0LL);
    xsi_set_current_line(49, ng0);
    t2 = (t0 + 2744);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2744);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 23, 0LL);
    goto LAB16;

LAB18:    xsi_set_current_line(52, ng0);

LAB21:    xsi_set_current_line(53, ng0);
    t4 = (t0 + 2904);
    t5 = (t4 + 56U);
    t11 = *((char **)t5);
    t12 = ((char*)((ng1)));
    memset(t13, 0, 8);
    xsi_vlog_unsigned_add(t13, 32, t11, 6, t12, 32);
    t21 = (t0 + 2904);
    xsi_vlogvar_wait_assign_value(t21, t13, 0, 0, 6, 0LL);
    xsi_set_current_line(54, ng0);
    t2 = (t0 + 2584);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2584);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 3, 0LL);
    xsi_set_current_line(55, ng0);
    t2 = (t0 + 2744);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2744);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 23, 0LL);
    goto LAB20;

}

static void Always_66_1(char *t0)
{
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

LAB0:    t1 = (t0 + 4072U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(66, ng0);
    t2 = (t0 + 4408);
    *((int *)t2) = 1;
    t3 = (t0 + 4104);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(67, ng0);

LAB5:    xsi_set_current_line(68, ng0);
    t4 = (t0 + 2904);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);

LAB6:    t7 = ((char*)((ng1)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 6, t7, 32);
    if (t8 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng4)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 6, t2, 32);
    if (t8 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng6)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 6, t2, 32);
    if (t8 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng8)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 6, t2, 32);
    if (t8 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng10)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 6, t2, 32);
    if (t8 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng11)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 6, t2, 32);
    if (t8 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng12)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 6, t2, 32);
    if (t8 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng14)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 6, t2, 32);
    if (t8 == 1)
        goto LAB21;

LAB22:    t2 = ((char*)((ng16)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 6, t2, 32);
    if (t8 == 1)
        goto LAB23;

LAB24:    t2 = ((char*)((ng18)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 6, t2, 32);
    if (t8 == 1)
        goto LAB25;

LAB26:    t2 = ((char*)((ng19)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 6, t2, 32);
    if (t8 == 1)
        goto LAB27;

LAB28:    t2 = ((char*)((ng20)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 6, t2, 32);
    if (t8 == 1)
        goto LAB29;

LAB30:    t2 = ((char*)((ng22)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 6, t2, 32);
    if (t8 == 1)
        goto LAB31;

LAB32:    t2 = ((char*)((ng24)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 6, t2, 32);
    if (t8 == 1)
        goto LAB33;

LAB34:    t2 = ((char*)((ng26)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 6, t2, 32);
    if (t8 == 1)
        goto LAB35;

LAB36:    t2 = ((char*)((ng27)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 6, t2, 32);
    if (t8 == 1)
        goto LAB37;

LAB38:    t2 = ((char*)((ng28)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 6, t2, 32);
    if (t8 == 1)
        goto LAB39;

LAB40:    t2 = ((char*)((ng30)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 6, t2, 32);
    if (t8 == 1)
        goto LAB41;

LAB42:    t2 = ((char*)((ng31)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 6, t2, 32);
    if (t8 == 1)
        goto LAB43;

LAB44:    t2 = ((char*)((ng32)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 6, t2, 32);
    if (t8 == 1)
        goto LAB45;

LAB46:    t2 = ((char*)((ng33)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 6, t2, 32);
    if (t8 == 1)
        goto LAB47;

LAB48:    t2 = ((char*)((ng34)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 6, t2, 32);
    if (t8 == 1)
        goto LAB49;

LAB50:    t2 = ((char*)((ng35)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 6, t2, 32);
    if (t8 == 1)
        goto LAB51;

LAB52:    t2 = ((char*)((ng36)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 6, t2, 32);
    if (t8 == 1)
        goto LAB53;

LAB54:    t2 = ((char*)((ng37)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 6, t2, 32);
    if (t8 == 1)
        goto LAB55;

LAB56:    t2 = ((char*)((ng38)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 6, t2, 32);
    if (t8 == 1)
        goto LAB57;

LAB58:    t2 = ((char*)((ng39)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 6, t2, 32);
    if (t8 == 1)
        goto LAB59;

LAB60:    t2 = ((char*)((ng40)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 6, t2, 32);
    if (t8 == 1)
        goto LAB61;

LAB62:    t2 = ((char*)((ng41)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 6, t2, 32);
    if (t8 == 1)
        goto LAB63;

LAB64:    t2 = ((char*)((ng42)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 6, t2, 32);
    if (t8 == 1)
        goto LAB65;

LAB66:    t2 = ((char*)((ng43)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 6, t2, 32);
    if (t8 == 1)
        goto LAB67;

LAB68:    t2 = ((char*)((ng44)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 6, t2, 32);
    if (t8 == 1)
        goto LAB69;

LAB70:    t2 = ((char*)((ng45)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 6, t2, 32);
    if (t8 == 1)
        goto LAB71;

LAB72:    t2 = ((char*)((ng46)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 6, t2, 32);
    if (t8 == 1)
        goto LAB73;

LAB74:    t2 = ((char*)((ng47)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 6, t2, 32);
    if (t8 == 1)
        goto LAB75;

LAB76:    t2 = ((char*)((ng48)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 6, t2, 32);
    if (t8 == 1)
        goto LAB77;

LAB78:    t2 = ((char*)((ng49)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 6, t2, 32);
    if (t8 == 1)
        goto LAB79;

LAB80:    t2 = ((char*)((ng50)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 6, t2, 32);
    if (t8 == 1)
        goto LAB81;

LAB82:    t2 = ((char*)((ng51)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 6, t2, 32);
    if (t8 == 1)
        goto LAB83;

LAB84:    t2 = ((char*)((ng53)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 6, t2, 32);
    if (t8 == 1)
        goto LAB85;

LAB86:    t2 = ((char*)((ng54)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 6, t2, 32);
    if (t8 == 1)
        goto LAB87;

LAB88:    t2 = ((char*)((ng55)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 6, t2, 32);
    if (t8 == 1)
        goto LAB89;

LAB90:    t2 = ((char*)((ng2)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 6, t2, 32);
    if (t8 == 1)
        goto LAB91;

LAB92:
LAB94:
LAB93:    xsi_set_current_line(198, ng0);

LAB139:    xsi_set_current_line(199, ng0);
    t2 = (t0 + 608);
    t3 = *((char **)t2);
    t2 = (t0 + 2584);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 3);
    xsi_set_current_line(200, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2744);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 23);

LAB95:    goto LAB2;

LAB7:    xsi_set_current_line(69, ng0);

LAB96:    xsi_set_current_line(70, ng0);
    t9 = (t0 + 608);
    t10 = *((char **)t9);
    t9 = (t0 + 2584);
    xsi_vlogvar_assign_value(t9, t10, 0, 0, 3);
    xsi_set_current_line(71, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2744);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 23);
    goto LAB95;

LAB9:    xsi_set_current_line(72, ng0);

LAB97:    xsi_set_current_line(73, ng0);
    t3 = (t0 + 744);
    t4 = *((char **)t3);
    t3 = (t0 + 2584);
    xsi_vlogvar_assign_value(t3, t4, 0, 0, 3);
    xsi_set_current_line(74, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 2744);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 23);
    goto LAB95;

LAB11:    xsi_set_current_line(75, ng0);

LAB98:    xsi_set_current_line(76, ng0);
    t3 = (t0 + 744);
    t4 = *((char **)t3);
    t3 = (t0 + 2584);
    xsi_vlogvar_assign_value(t3, t4, 0, 0, 3);
    xsi_set_current_line(77, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 2744);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 23);
    goto LAB95;

LAB13:    xsi_set_current_line(78, ng0);

LAB99:    xsi_set_current_line(79, ng0);
    t3 = (t0 + 880);
    t4 = *((char **)t3);
    t3 = (t0 + 2584);
    xsi_vlogvar_assign_value(t3, t4, 0, 0, 3);
    xsi_set_current_line(80, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 2744);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 23);
    goto LAB95;

LAB15:    xsi_set_current_line(81, ng0);

LAB100:    xsi_set_current_line(82, ng0);
    t3 = (t0 + 880);
    t4 = *((char **)t3);
    t3 = (t0 + 2584);
    xsi_vlogvar_assign_value(t3, t4, 0, 0, 3);
    xsi_set_current_line(83, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 2744);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 23);
    goto LAB95;

LAB17:    xsi_set_current_line(84, ng0);

LAB101:    xsi_set_current_line(85, ng0);
    t3 = (t0 + 880);
    t4 = *((char **)t3);
    t3 = (t0 + 2584);
    xsi_vlogvar_assign_value(t3, t4, 0, 0, 3);
    xsi_set_current_line(86, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 2744);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 23);
    goto LAB95;

LAB19:    xsi_set_current_line(87, ng0);

LAB102:    xsi_set_current_line(88, ng0);
    t3 = (t0 + 744);
    t4 = *((char **)t3);
    t3 = (t0 + 2584);
    xsi_vlogvar_assign_value(t3, t4, 0, 0, 3);
    xsi_set_current_line(89, ng0);
    t2 = ((char*)((ng13)));
    t3 = (t0 + 2744);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 23);
    goto LAB95;

LAB21:    xsi_set_current_line(90, ng0);

LAB103:    xsi_set_current_line(91, ng0);
    t3 = (t0 + 744);
    t4 = *((char **)t3);
    t3 = (t0 + 2584);
    xsi_vlogvar_assign_value(t3, t4, 0, 0, 3);
    xsi_set_current_line(92, ng0);
    t2 = ((char*)((ng15)));
    t3 = (t0 + 2744);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 23);
    goto LAB95;

LAB23:    xsi_set_current_line(93, ng0);

LAB104:    xsi_set_current_line(94, ng0);
    t3 = (t0 + 744);
    t4 = *((char **)t3);
    t3 = (t0 + 2584);
    xsi_vlogvar_assign_value(t3, t4, 0, 0, 3);
    xsi_set_current_line(95, ng0);
    t2 = ((char*)((ng17)));
    t3 = (t0 + 2744);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 23);
    goto LAB95;

LAB25:    xsi_set_current_line(96, ng0);

LAB105:    xsi_set_current_line(97, ng0);
    t3 = (t0 + 1016);
    t4 = *((char **)t3);
    t3 = (t0 + 2584);
    xsi_vlogvar_assign_value(t3, t4, 0, 0, 3);
    xsi_set_current_line(98, ng0);
    t2 = ((char*)((ng17)));
    t3 = (t0 + 2744);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 23);
    goto LAB95;

LAB27:    xsi_set_current_line(99, ng0);

LAB106:    xsi_set_current_line(100, ng0);
    t3 = (t0 + 1016);
    t4 = *((char **)t3);
    t3 = (t0 + 2584);
    xsi_vlogvar_assign_value(t3, t4, 0, 0, 3);
    xsi_set_current_line(101, ng0);
    t2 = ((char*)((ng17)));
    t3 = (t0 + 2744);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 23);
    goto LAB95;

LAB29:    xsi_set_current_line(102, ng0);

LAB107:    xsi_set_current_line(103, ng0);
    t3 = (t0 + 744);
    t4 = *((char **)t3);
    t3 = (t0 + 2584);
    xsi_vlogvar_assign_value(t3, t4, 0, 0, 3);
    xsi_set_current_line(104, ng0);
    t2 = ((char*)((ng21)));
    t3 = (t0 + 2744);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 23);
    goto LAB95;

LAB31:    xsi_set_current_line(105, ng0);

LAB108:    xsi_set_current_line(106, ng0);
    t3 = (t0 + 744);
    t4 = *((char **)t3);
    t3 = (t0 + 2584);
    xsi_vlogvar_assign_value(t3, t4, 0, 0, 3);
    xsi_set_current_line(107, ng0);
    t2 = ((char*)((ng23)));
    t3 = (t0 + 2744);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 23);
    goto LAB95;

LAB33:    xsi_set_current_line(108, ng0);

LAB109:    xsi_set_current_line(109, ng0);
    t3 = (t0 + 1152);
    t4 = *((char **)t3);
    t3 = (t0 + 2584);
    xsi_vlogvar_assign_value(t3, t4, 0, 0, 3);
    xsi_set_current_line(110, ng0);
    t2 = ((char*)((ng25)));
    t3 = (t0 + 2744);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 23);
    goto LAB95;

LAB35:    xsi_set_current_line(111, ng0);

LAB110:    xsi_set_current_line(112, ng0);
    t3 = (t0 + 1152);
    t4 = *((char **)t3);
    t3 = (t0 + 2584);
    xsi_vlogvar_assign_value(t3, t4, 0, 0, 3);
    xsi_set_current_line(113, ng0);
    t2 = ((char*)((ng23)));
    t3 = (t0 + 2744);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 23);
    goto LAB95;

LAB37:    xsi_set_current_line(114, ng0);

LAB111:    xsi_set_current_line(115, ng0);
    t3 = (t0 + 1152);
    t4 = *((char **)t3);
    t3 = (t0 + 2584);
    xsi_vlogvar_assign_value(t3, t4, 0, 0, 3);
    xsi_set_current_line(116, ng0);
    t2 = ((char*)((ng25)));
    t3 = (t0 + 2744);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 23);
    goto LAB95;

LAB39:    xsi_set_current_line(117, ng0);

LAB112:    xsi_set_current_line(118, ng0);
    t3 = (t0 + 1016);
    t4 = *((char **)t3);
    t3 = (t0 + 2584);
    xsi_vlogvar_assign_value(t3, t4, 0, 0, 3);
    xsi_set_current_line(119, ng0);
    t2 = ((char*)((ng29)));
    t3 = (t0 + 2744);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 23);
    goto LAB95;

LAB41:    xsi_set_current_line(120, ng0);

LAB113:    xsi_set_current_line(121, ng0);
    t3 = (t0 + 1016);
    t4 = *((char **)t3);
    t3 = (t0 + 2584);
    xsi_vlogvar_assign_value(t3, t4, 0, 0, 3);
    xsi_set_current_line(122, ng0);
    t2 = ((char*)((ng25)));
    t3 = (t0 + 2744);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 23);
    goto LAB95;

LAB43:    xsi_set_current_line(123, ng0);

LAB114:    xsi_set_current_line(124, ng0);
    t3 = (t0 + 744);
    t4 = *((char **)t3);
    t3 = (t0 + 2584);
    xsi_vlogvar_assign_value(t3, t4, 0, 0, 3);
    xsi_set_current_line(125, ng0);
    t2 = ((char*)((ng23)));
    t3 = (t0 + 2744);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 23);
    goto LAB95;

LAB45:    xsi_set_current_line(126, ng0);

LAB115:    xsi_set_current_line(127, ng0);
    t3 = (t0 + 744);
    t4 = *((char **)t3);
    t3 = (t0 + 2584);
    xsi_vlogvar_assign_value(t3, t4, 0, 0, 3);
    xsi_set_current_line(128, ng0);
    t2 = ((char*)((ng25)));
    t3 = (t0 + 2744);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 23);
    goto LAB95;

LAB47:    xsi_set_current_line(129, ng0);

LAB116:    xsi_set_current_line(130, ng0);
    t3 = (t0 + 744);
    t4 = *((char **)t3);
    t3 = (t0 + 2584);
    xsi_vlogvar_assign_value(t3, t4, 0, 0, 3);
    xsi_set_current_line(131, ng0);
    t2 = ((char*)((ng29)));
    t3 = (t0 + 2744);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 23);
    goto LAB95;

LAB49:    xsi_set_current_line(132, ng0);

LAB117:    xsi_set_current_line(133, ng0);
    t3 = (t0 + 744);
    t4 = *((char **)t3);
    t3 = (t0 + 2584);
    xsi_vlogvar_assign_value(t3, t4, 0, 0, 3);
    xsi_set_current_line(134, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2744);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 23);
    goto LAB95;

LAB51:    xsi_set_current_line(135, ng0);

LAB118:    xsi_set_current_line(136, ng0);
    t3 = (t0 + 744);
    t4 = *((char **)t3);
    t3 = (t0 + 2584);
    xsi_vlogvar_assign_value(t3, t4, 0, 0, 3);
    xsi_set_current_line(137, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 2744);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 23);
    goto LAB95;

LAB53:    xsi_set_current_line(138, ng0);

LAB119:    xsi_set_current_line(139, ng0);
    t3 = (t0 + 744);
    t4 = *((char **)t3);
    t3 = (t0 + 2584);
    xsi_vlogvar_assign_value(t3, t4, 0, 0, 3);
    xsi_set_current_line(140, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 2744);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 23);
    goto LAB95;

LAB55:    xsi_set_current_line(141, ng0);

LAB120:    xsi_set_current_line(142, ng0);
    t3 = (t0 + 880);
    t4 = *((char **)t3);
    t3 = (t0 + 2584);
    xsi_vlogvar_assign_value(t3, t4, 0, 0, 3);
    xsi_set_current_line(143, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 2744);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 23);
    goto LAB95;

LAB57:    xsi_set_current_line(144, ng0);

LAB121:    xsi_set_current_line(145, ng0);
    t3 = (t0 + 880);
    t4 = *((char **)t3);
    t3 = (t0 + 2584);
    xsi_vlogvar_assign_value(t3, t4, 0, 0, 3);
    xsi_set_current_line(146, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 2744);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 23);
    goto LAB95;

LAB59:    xsi_set_current_line(147, ng0);

LAB122:    xsi_set_current_line(148, ng0);
    t3 = (t0 + 880);
    t4 = *((char **)t3);
    t3 = (t0 + 2584);
    xsi_vlogvar_assign_value(t3, t4, 0, 0, 3);
    xsi_set_current_line(149, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 2744);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 23);
    goto LAB95;

LAB61:    xsi_set_current_line(150, ng0);

LAB123:    xsi_set_current_line(151, ng0);
    t3 = (t0 + 744);
    t4 = *((char **)t3);
    t3 = (t0 + 2584);
    xsi_vlogvar_assign_value(t3, t4, 0, 0, 3);
    xsi_set_current_line(152, ng0);
    t2 = ((char*)((ng13)));
    t3 = (t0 + 2744);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 23);
    goto LAB95;

LAB63:    xsi_set_current_line(153, ng0);

LAB124:    xsi_set_current_line(154, ng0);
    t3 = (t0 + 744);
    t4 = *((char **)t3);
    t3 = (t0 + 2584);
    xsi_vlogvar_assign_value(t3, t4, 0, 0, 3);
    xsi_set_current_line(155, ng0);
    t2 = ((char*)((ng15)));
    t3 = (t0 + 2744);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 23);
    goto LAB95;

LAB65:    xsi_set_current_line(156, ng0);

LAB125:    xsi_set_current_line(157, ng0);
    t3 = (t0 + 1016);
    t4 = *((char **)t3);
    t3 = (t0 + 2584);
    xsi_vlogvar_assign_value(t3, t4, 0, 0, 3);
    xsi_set_current_line(158, ng0);
    t2 = ((char*)((ng17)));
    t3 = (t0 + 2744);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 23);
    goto LAB95;

LAB67:    xsi_set_current_line(159, ng0);

LAB126:    xsi_set_current_line(160, ng0);
    t3 = (t0 + 1016);
    t4 = *((char **)t3);
    t3 = (t0 + 2584);
    xsi_vlogvar_assign_value(t3, t4, 0, 0, 3);
    xsi_set_current_line(161, ng0);
    t2 = ((char*)((ng17)));
    t3 = (t0 + 2744);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 23);
    goto LAB95;

LAB69:    xsi_set_current_line(162, ng0);

LAB127:    xsi_set_current_line(163, ng0);
    t3 = (t0 + 1016);
    t4 = *((char **)t3);
    t3 = (t0 + 2584);
    xsi_vlogvar_assign_value(t3, t4, 0, 0, 3);
    xsi_set_current_line(164, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2744);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 23);
    goto LAB95;

LAB71:    xsi_set_current_line(165, ng0);

LAB128:    xsi_set_current_line(166, ng0);
    t3 = (t0 + 1016);
    t4 = *((char **)t3);
    t3 = (t0 + 2584);
    xsi_vlogvar_assign_value(t3, t4, 0, 0, 3);
    xsi_set_current_line(167, ng0);
    t2 = ((char*)((ng17)));
    t3 = (t0 + 2744);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 23);
    goto LAB95;

LAB73:    xsi_set_current_line(168, ng0);

LAB129:    xsi_set_current_line(169, ng0);
    t3 = (t0 + 744);
    t4 = *((char **)t3);
    t3 = (t0 + 2584);
    xsi_vlogvar_assign_value(t3, t4, 0, 0, 3);
    xsi_set_current_line(170, ng0);
    t2 = ((char*)((ng23)));
    t3 = (t0 + 2744);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 23);
    goto LAB95;

LAB75:    xsi_set_current_line(171, ng0);

LAB130:    xsi_set_current_line(172, ng0);
    t3 = (t0 + 744);
    t4 = *((char **)t3);
    t3 = (t0 + 2584);
    xsi_vlogvar_assign_value(t3, t4, 0, 0, 3);
    xsi_set_current_line(173, ng0);
    t2 = ((char*)((ng25)));
    t3 = (t0 + 2744);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 23);
    goto LAB95;

LAB77:    xsi_set_current_line(174, ng0);

LAB131:    xsi_set_current_line(175, ng0);
    t3 = (t0 + 1152);
    t4 = *((char **)t3);
    t3 = (t0 + 2584);
    xsi_vlogvar_assign_value(t3, t4, 0, 0, 3);
    xsi_set_current_line(176, ng0);
    t2 = ((char*)((ng29)));
    t3 = (t0 + 2744);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 23);
    goto LAB95;

LAB79:    xsi_set_current_line(177, ng0);

LAB132:    xsi_set_current_line(178, ng0);
    t3 = (t0 + 1152);
    t4 = *((char **)t3);
    t3 = (t0 + 2584);
    xsi_vlogvar_assign_value(t3, t4, 0, 0, 3);
    xsi_set_current_line(179, ng0);
    t2 = ((char*)((ng25)));
    t3 = (t0 + 2744);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 23);
    goto LAB95;

LAB81:    xsi_set_current_line(180, ng0);

LAB133:    xsi_set_current_line(181, ng0);
    t3 = (t0 + 1152);
    t4 = *((char **)t3);
    t3 = (t0 + 2584);
    xsi_vlogvar_assign_value(t3, t4, 0, 0, 3);
    xsi_set_current_line(182, ng0);
    t2 = ((char*)((ng29)));
    t3 = (t0 + 2744);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 23);
    goto LAB95;

LAB83:    xsi_set_current_line(183, ng0);

LAB134:    xsi_set_current_line(184, ng0);
    t3 = (t0 + 1016);
    t4 = *((char **)t3);
    t3 = (t0 + 2584);
    xsi_vlogvar_assign_value(t3, t4, 0, 0, 3);
    xsi_set_current_line(185, ng0);
    t2 = ((char*)((ng52)));
    t3 = (t0 + 2744);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 23);
    goto LAB95;

LAB85:    xsi_set_current_line(186, ng0);

LAB135:    xsi_set_current_line(187, ng0);
    t3 = (t0 + 1016);
    t4 = *((char **)t3);
    t3 = (t0 + 2584);
    xsi_vlogvar_assign_value(t3, t4, 0, 0, 3);
    xsi_set_current_line(188, ng0);
    t2 = ((char*)((ng29)));
    t3 = (t0 + 2744);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 23);
    goto LAB95;

LAB87:    xsi_set_current_line(189, ng0);

LAB136:    xsi_set_current_line(190, ng0);
    t3 = (t0 + 744);
    t4 = *((char **)t3);
    t3 = (t0 + 2584);
    xsi_vlogvar_assign_value(t3, t4, 0, 0, 3);
    xsi_set_current_line(191, ng0);
    t2 = ((char*)((ng25)));
    t3 = (t0 + 2744);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 23);
    goto LAB95;

LAB89:    xsi_set_current_line(192, ng0);

LAB137:    xsi_set_current_line(193, ng0);
    t3 = (t0 + 744);
    t4 = *((char **)t3);
    t3 = (t0 + 2584);
    xsi_vlogvar_assign_value(t3, t4, 0, 0, 3);
    xsi_set_current_line(194, ng0);
    t2 = ((char*)((ng29)));
    t3 = (t0 + 2744);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 23);
    goto LAB95;

LAB91:    xsi_set_current_line(195, ng0);

LAB138:    xsi_set_current_line(196, ng0);
    t3 = (t0 + 608);
    t4 = *((char **)t3);
    t3 = (t0 + 2584);
    xsi_vlogvar_assign_value(t3, t4, 0, 0, 3);
    xsi_set_current_line(197, ng0);
    t2 = ((char*)((ng52)));
    t3 = (t0 + 2744);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 23);
    goto LAB95;

}


extern void work_m_00000000003952210785_3526623869_init()
{
	static char *pe[] = {(void *)Always_37_0,(void *)Always_66_1};
	xsi_register_didat("work_m_00000000003952210785_3526623869", "isim/MusicSynthesizer_MusicSynthesizer_sch_tb_isim_beh.exe.sim/work/m_00000000003952210785_3526623869.didat");
	xsi_register_executes(pe);
}
