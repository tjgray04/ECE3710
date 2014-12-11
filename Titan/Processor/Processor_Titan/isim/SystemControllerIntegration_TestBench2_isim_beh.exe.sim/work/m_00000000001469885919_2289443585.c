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
static const char *ng0 = "C:/Users/Steve Brown/Desktop/ECE3710/Titan/Processor/Processor_Titan/DeathSFXLibrary.v";
static int ng1[] = {1, 0};
static int ng2[] = {0, 0};
static int ng3[] = {2, 0};
static int ng4[] = {3, 0};
static int ng5[] = {4, 0};
static int ng6[] = {5, 0};
static int ng7[] = {6, 0};
static int ng8[] = {7, 0};



static void Always_49_0(char *t0)
{
    char t13[8];
    char t14[8];
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
    char *t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    char *t31;

LAB0:    t1 = (t0 + 5344U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(49, ng0);
    t2 = (t0 + 5912);
    *((int *)t2) = 1;
    t3 = (t0 + 5376);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(50, ng0);

LAB5:    xsi_set_current_line(51, ng0);
    t4 = (t0 + 3384U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(56, ng0);
    t2 = (t0 + 4424);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2512);
    t11 = *((char **)t5);
    t5 = ((char*)((ng1)));
    memset(t13, 0, 8);
    xsi_vlog_unsigned_add(t13, 32, t11, 32, t5, 32);
    memset(t14, 0, 8);
    t12 = (t4 + 4);
    t15 = (t13 + 4);
    t6 = *((unsigned int *)t4);
    t7 = *((unsigned int *)t13);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t12);
    t10 = *((unsigned int *)t15);
    t16 = (t9 ^ t10);
    t17 = (t8 | t16);
    t18 = *((unsigned int *)t12);
    t19 = *((unsigned int *)t15);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB13;

LAB10:    if (t20 != 0)
        goto LAB12;

LAB11:    *((unsigned int *)t14) = 1;

LAB13:    t24 = (t14 + 4);
    t25 = *((unsigned int *)t24);
    t26 = (~(t25));
    t27 = *((unsigned int *)t14);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB14;

LAB15:    xsi_set_current_line(61, ng0);
    t2 = (t0 + 3544U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB18;

LAB19:    xsi_set_current_line(67, ng0);

LAB22:    xsi_set_current_line(68, ng0);
    t2 = (t0 + 4424);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 4424);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 6, 0LL);
    xsi_set_current_line(69, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 4264);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);

LAB20:
LAB16:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(52, ng0);

LAB9:    xsi_set_current_line(53, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 4424);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 6, 0LL);
    xsi_set_current_line(54, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 4264);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB8;

LAB12:    t23 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB13;

LAB14:    xsi_set_current_line(57, ng0);

LAB17:    xsi_set_current_line(58, ng0);
    t30 = ((char*)((ng1)));
    t31 = (t0 + 4424);
    xsi_vlogvar_wait_assign_value(t31, t30, 0, 0, 6, 0LL);
    xsi_set_current_line(59, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4264);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB16;

LAB18:    xsi_set_current_line(62, ng0);

LAB21:    xsi_set_current_line(63, ng0);
    t4 = (t0 + 4424);
    t5 = (t4 + 56U);
    t11 = *((char **)t5);
    t12 = ((char*)((ng1)));
    memset(t13, 0, 8);
    xsi_vlog_unsigned_add(t13, 32, t11, 6, t12, 32);
    t15 = (t0 + 4424);
    xsi_vlogvar_wait_assign_value(t15, t13, 0, 0, 6, 0LL);
    xsi_set_current_line(64, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 4264);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB20;

}

static void Always_79_1(char *t0)
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

LAB0:    t1 = (t0 + 5592U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(79, ng0);
    t2 = (t0 + 5928);
    *((int *)t2) = 1;
    t3 = (t0 + 5624);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(80, ng0);

LAB5:    xsi_set_current_line(81, ng0);
    t4 = (t0 + 4424);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);

LAB6:    t7 = ((char*)((ng1)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 6, t7, 32);
    if (t8 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng3)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 6, t2, 32);
    if (t8 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng4)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 6, t2, 32);
    if (t8 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng5)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 6, t2, 32);
    if (t8 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng6)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 6, t2, 32);
    if (t8 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng7)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 6, t2, 32);
    if (t8 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng8)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 6, t2, 32);
    if (t8 == 1)
        goto LAB19;

LAB20:
LAB22:
LAB21:    xsi_set_current_line(89, ng0);

LAB31:    xsi_set_current_line(89, ng0);
    t2 = (t0 + 608);
    t3 = *((char **)t2);
    t2 = (t0 + 3944);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 3);
    xsi_set_current_line(89, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 4104);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 20);

LAB23:    goto LAB2;

LAB7:    xsi_set_current_line(82, ng0);

LAB24:    xsi_set_current_line(82, ng0);
    t9 = (t0 + 1152);
    t10 = *((char **)t9);
    t9 = (t0 + 3944);
    xsi_vlogvar_assign_value(t9, t10, 0, 0, 3);
    xsi_set_current_line(82, ng0);
    t2 = (t0 + 2240);
    t3 = *((char **)t2);
    t2 = (t0 + 4104);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 20);
    goto LAB23;

LAB9:    xsi_set_current_line(83, ng0);

LAB25:    xsi_set_current_line(83, ng0);
    t3 = (t0 + 1152);
    t4 = *((char **)t3);
    t3 = (t0 + 3944);
    xsi_vlogvar_assign_value(t3, t4, 0, 0, 3);
    xsi_set_current_line(83, ng0);
    t2 = (t0 + 2104);
    t3 = *((char **)t2);
    t2 = (t0 + 4104);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 20);
    goto LAB23;

LAB11:    xsi_set_current_line(84, ng0);

LAB26:    xsi_set_current_line(84, ng0);
    t3 = (t0 + 1152);
    t4 = *((char **)t3);
    t3 = (t0 + 3944);
    xsi_vlogvar_assign_value(t3, t4, 0, 0, 3);
    xsi_set_current_line(84, ng0);
    t2 = (t0 + 1968);
    t3 = *((char **)t2);
    t2 = (t0 + 4104);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 20);
    goto LAB23;

LAB13:    xsi_set_current_line(85, ng0);

LAB27:    xsi_set_current_line(85, ng0);
    t3 = (t0 + 1152);
    t4 = *((char **)t3);
    t3 = (t0 + 3944);
    xsi_vlogvar_assign_value(t3, t4, 0, 0, 3);
    xsi_set_current_line(85, ng0);
    t2 = (t0 + 1832);
    t3 = *((char **)t2);
    t2 = (t0 + 4104);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 20);
    goto LAB23;

LAB15:    xsi_set_current_line(86, ng0);

LAB28:    xsi_set_current_line(86, ng0);
    t3 = (t0 + 1152);
    t4 = *((char **)t3);
    t3 = (t0 + 3944);
    xsi_vlogvar_assign_value(t3, t4, 0, 0, 3);
    xsi_set_current_line(86, ng0);
    t2 = (t0 + 1696);
    t3 = *((char **)t2);
    t2 = (t0 + 4104);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 20);
    goto LAB23;

LAB17:    xsi_set_current_line(87, ng0);

LAB29:    xsi_set_current_line(87, ng0);
    t3 = (t0 + 1152);
    t4 = *((char **)t3);
    t3 = (t0 + 3944);
    xsi_vlogvar_assign_value(t3, t4, 0, 0, 3);
    xsi_set_current_line(87, ng0);
    t2 = (t0 + 1560);
    t3 = *((char **)t2);
    t2 = (t0 + 4104);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 20);
    goto LAB23;

LAB19:    xsi_set_current_line(88, ng0);

LAB30:    xsi_set_current_line(88, ng0);
    t3 = (t0 + 1152);
    t4 = *((char **)t3);
    t3 = (t0 + 3944);
    xsi_vlogvar_assign_value(t3, t4, 0, 0, 3);
    xsi_set_current_line(88, ng0);
    t2 = (t0 + 1424);
    t3 = *((char **)t2);
    t2 = (t0 + 4104);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 20);
    goto LAB23;

}


extern void work_m_00000000001469885919_2289443585_init()
{
	static char *pe[] = {(void *)Always_49_0,(void *)Always_79_1};
	xsi_register_didat("work_m_00000000001469885919_2289443585", "isim/SystemControllerIntegration_TestBench2_isim_beh.exe.sim/work/m_00000000001469885919_2289443585.didat");
	xsi_register_executes(pe);
}
