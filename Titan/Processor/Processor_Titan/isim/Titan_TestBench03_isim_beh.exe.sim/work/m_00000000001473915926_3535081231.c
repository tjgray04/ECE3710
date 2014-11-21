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
static const char *ng0 = "C:/Users/u0499404/Desktop/ECE3710/Titan/Processor/Processor_Titan/RegFile.v";
static int ng1[] = {0, 0};
static unsigned int ng2[] = {31U, 0U};



static void Always_53_0(char *t0)
{
    char t6[8];
    char t7[8];
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

LAB0:    t1 = (t0 + 4376U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(53, ng0);
    t2 = (t0 + 5440);
    *((int *)t2) = 1;
    t3 = (t0 + 4408);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(54, ng0);

LAB5:    xsi_set_current_line(55, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t0 + 3456);
    t8 = (t0 + 3456);
    t9 = (t8 + 72U);
    t10 = *((char **)t9);
    t11 = (t0 + 3456);
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

LAB7:    xsi_set_current_line(57, ng0);
    t2 = (t0 + 1776U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t16 = *((unsigned int *)t2);
    t19 = (~(t16));
    t22 = *((unsigned int *)t3);
    t23 = (t22 & t19);
    t26 = (t23 != 0);
    if (t26 > 0)
        goto LAB8;

LAB9:    xsi_set_current_line(60, ng0);
    t2 = (t0 + 1936U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t16 = *((unsigned int *)t2);
    t19 = (~(t16));
    t22 = *((unsigned int *)t3);
    t23 = (t22 & t19);
    t26 = (t23 != 0);
    if (t26 > 0)
        goto LAB13;

LAB14:
LAB15:
LAB10:    goto LAB2;

LAB6:    t22 = *((unsigned int *)t6);
    t23 = *((unsigned int *)t7);
    t24 = (t22 - t23);
    t25 = (t24 + 1);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, *((unsigned int *)t7), t25, 0LL);
    goto LAB7;

LAB8:    xsi_set_current_line(58, ng0);
    t4 = (t0 + 2576U);
    t5 = *((char **)t4);
    t4 = (t0 + 3456);
    t8 = (t0 + 3456);
    t9 = (t8 + 72U);
    t10 = *((char **)t9);
    t11 = (t0 + 3456);
    t12 = (t11 + 64U);
    t13 = *((char **)t12);
    t14 = (t0 + 2416U);
    t15 = *((char **)t14);
    xsi_vlog_generic_convert_array_indices(t6, t7, t10, t13, 2, 1, t15, 5, 2);
    t14 = (t6 + 4);
    t27 = *((unsigned int *)t14);
    t17 = (!(t27));
    t18 = (t7 + 4);
    t28 = *((unsigned int *)t18);
    t20 = (!(t28));
    t21 = (t17 && t20);
    if (t21 == 1)
        goto LAB11;

LAB12:    goto LAB10;

LAB11:    t29 = *((unsigned int *)t6);
    t30 = *((unsigned int *)t7);
    t24 = (t29 - t30);
    t25 = (t24 + 1);
    xsi_vlogvar_wait_assign_value(t4, t5, 0, *((unsigned int *)t7), t25, 0LL);
    goto LAB12;

LAB13:    xsi_set_current_line(61, ng0);
    t4 = (t0 + 2576U);
    t5 = *((char **)t4);
    t4 = (t0 + 3456);
    t8 = (t0 + 3456);
    t9 = (t8 + 72U);
    t10 = *((char **)t9);
    t11 = (t0 + 3456);
    t12 = (t11 + 64U);
    t13 = *((char **)t12);
    t14 = ((char*)((ng2)));
    xsi_vlog_generic_convert_array_indices(t6, t7, t10, t13, 2, 1, t14, 5, 2);
    t15 = (t6 + 4);
    t27 = *((unsigned int *)t15);
    t17 = (!(t27));
    t18 = (t7 + 4);
    t28 = *((unsigned int *)t18);
    t20 = (!(t28));
    t21 = (t17 && t20);
    if (t21 == 1)
        goto LAB16;

LAB17:    goto LAB15;

LAB16:    t29 = *((unsigned int *)t6);
    t30 = *((unsigned int *)t7);
    t24 = (t29 - t30);
    t25 = (t24 + 1);
    xsi_vlogvar_wait_assign_value(t4, t5, 0, *((unsigned int *)t7), t25, 0LL);
    goto LAB17;

}

static void Cont_64_1(char *t0)
{
    char t3[8];
    char t4[8];
    char t19[8];
    char *t1;
    char *t2;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;
    char *t17;
    char *t18;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;

LAB0:    t1 = (t0 + 4624U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(64, ng0);
    t2 = (t0 + 2096U);
    t5 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t5 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 & 31U);
    if (t10 != 0)
        goto LAB4;

LAB5:    if (*((unsigned int *)t2) != 0)
        goto LAB6;

LAB7:    t12 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t14 = *((unsigned int *)t12);
    t15 = (t13 || t14);
    if (t15 > 0)
        goto LAB8;

LAB9:    t28 = *((unsigned int *)t4);
    t29 = (~(t28));
    t30 = *((unsigned int *)t12);
    t31 = (t29 || t30);
    if (t31 > 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t12) > 0)
        goto LAB12;

LAB13:    if (*((unsigned int *)t4) > 0)
        goto LAB14;

LAB15:    memcpy(t3, t26, 8);

LAB16:    t32 = (t0 + 5568);
    t33 = (t32 + 56U);
    t34 = *((char **)t33);
    t35 = (t34 + 56U);
    t36 = *((char **)t35);
    memcpy(t36, t3, 8);
    xsi_driver_vfirst_trans(t32, 0, 31);
    t37 = (t0 + 5456);
    *((int *)t37) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t4) = 1;
    goto LAB7;

LAB6:    t11 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB7;

LAB8:    t16 = (t0 + 3456);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    t20 = (t0 + 3456);
    t21 = (t20 + 72U);
    t22 = *((char **)t21);
    t23 = (t0 + 3456);
    t24 = (t23 + 64U);
    t25 = *((char **)t24);
    t26 = (t0 + 2096U);
    t27 = *((char **)t26);
    xsi_vlog_generic_get_array_select_value(t19, 32, t18, t22, t25, 2, 1, t27, 5, 2);
    goto LAB9;

LAB10:    t26 = ((char*)((ng1)));
    goto LAB11;

LAB12:    xsi_vlog_unsigned_bit_combine(t3, 32, t19, 32, t26, 32);
    goto LAB16;

LAB14:    memcpy(t3, t19, 8);
    goto LAB16;

}

static void Cont_65_2(char *t0)
{
    char t3[8];
    char t4[8];
    char t19[8];
    char *t1;
    char *t2;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;
    char *t17;
    char *t18;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;

LAB0:    t1 = (t0 + 4872U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(65, ng0);
    t2 = (t0 + 2256U);
    t5 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t5 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 & 31U);
    if (t10 != 0)
        goto LAB4;

LAB5:    if (*((unsigned int *)t2) != 0)
        goto LAB6;

LAB7:    t12 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t14 = *((unsigned int *)t12);
    t15 = (t13 || t14);
    if (t15 > 0)
        goto LAB8;

LAB9:    t28 = *((unsigned int *)t4);
    t29 = (~(t28));
    t30 = *((unsigned int *)t12);
    t31 = (t29 || t30);
    if (t31 > 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t12) > 0)
        goto LAB12;

LAB13:    if (*((unsigned int *)t4) > 0)
        goto LAB14;

LAB15:    memcpy(t3, t26, 8);

LAB16:    t32 = (t0 + 5632);
    t33 = (t32 + 56U);
    t34 = *((char **)t33);
    t35 = (t34 + 56U);
    t36 = *((char **)t35);
    memcpy(t36, t3, 8);
    xsi_driver_vfirst_trans(t32, 0, 31);
    t37 = (t0 + 5472);
    *((int *)t37) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t4) = 1;
    goto LAB7;

LAB6:    t11 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB7;

LAB8:    t16 = (t0 + 3456);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    t20 = (t0 + 3456);
    t21 = (t20 + 72U);
    t22 = *((char **)t21);
    t23 = (t0 + 3456);
    t24 = (t23 + 64U);
    t25 = *((char **)t24);
    t26 = (t0 + 2256U);
    t27 = *((char **)t26);
    xsi_vlog_generic_get_array_select_value(t19, 32, t18, t22, t25, 2, 1, t27, 5, 2);
    goto LAB9;

LAB10:    t26 = ((char*)((ng1)));
    goto LAB11;

LAB12:    xsi_vlog_unsigned_bit_combine(t3, 32, t19, 32, t26, 32);
    goto LAB16;

LAB14:    memcpy(t3, t19, 8);
    goto LAB16;

}

static void Cont_66_3(char *t0)
{
    char t5[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;

LAB0:    t1 = (t0 + 5120U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(66, ng0);
    t2 = (t0 + 3456);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t6 = (t0 + 3456);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 3456);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng2)));
    xsi_vlog_generic_get_array_select_value(t5, 32, t4, t8, t11, 2, 1, t12, 5, 2);
    t13 = (t0 + 5696);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    memcpy(t17, t5, 8);
    xsi_driver_vfirst_trans(t13, 0, 31);
    t18 = (t0 + 5488);
    *((int *)t18) = 1;

LAB1:    return;
}


extern void work_m_00000000001473915926_3535081231_init()
{
	static char *pe[] = {(void *)Always_53_0,(void *)Cont_64_1,(void *)Cont_65_2,(void *)Cont_66_3};
	xsi_register_didat("work_m_00000000001473915926_3535081231", "isim/Titan_TestBench03_isim_beh.exe.sim/work/m_00000000001473915926_3535081231.didat");
	xsi_register_executes(pe);
}
