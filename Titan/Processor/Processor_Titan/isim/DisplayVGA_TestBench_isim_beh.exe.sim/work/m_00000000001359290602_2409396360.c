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
static const char *ng0 = "C:/Users/u0499404/ECE3710/Processor_Titan/CharacterDisplayRAM.v";
static const char *ng1 = "characterDisplayRAM.dat";
static int ng2[] = {0, 0};
static int ng3[] = {2, 0};
static int ng4[] = {1, 0};



static void Initial_41_0(char *t0)
{
    char t6[8];
    char t7[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;

LAB0:    xsi_set_current_line(42, ng0);
    t1 = (t0 + 3000);
    t2 = ((char*)((ng2)));
    t3 = ((char*)((ng3)));
    t4 = (t0 + 608);
    t5 = *((char **)t4);
    memset(t6, 0, 8);
    xsi_vlog_signed_power(t6, 32, t3, 32, t5, 32, 1);
    t4 = ((char*)((ng4)));
    memset(t7, 0, 8);
    xsi_vlog_signed_minus(t7, 32, t6, 32, t4, 32);
    xsi_vlogfile_readmemb(ng1, 0, t1, 1, *((unsigned int *)t2), 1, *((unsigned int *)t7));

LAB1:    return;
}

static void Always_44_1(char *t0)
{
    char t13[8];
    char t14[8];
    char t21[8];
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
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t22;
    char *t23;
    char *t24;
    unsigned int t25;
    int t26;
    char *t27;
    unsigned int t28;
    int t29;
    int t30;
    unsigned int t31;
    unsigned int t32;
    int t33;
    int t34;

LAB0:    t1 = (t0 + 4168U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(44, ng0);
    t2 = (t0 + 4984);
    *((int *)t2) = 1;
    t3 = (t0 + 4200);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(45, ng0);

LAB5:    xsi_set_current_line(46, ng0);
    t4 = (t0 + 1480U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(47, ng0);
    t11 = (t0 + 1640U);
    t12 = *((char **)t11);
    t11 = (t0 + 3000);
    t15 = (t0 + 3000);
    t16 = (t15 + 72U);
    t17 = *((char **)t16);
    t18 = (t0 + 3000);
    t19 = (t18 + 64U);
    t20 = *((char **)t19);
    t22 = (t0 + 1800U);
    t23 = *((char **)t22);
    t22 = (t0 + 2120U);
    t24 = *((char **)t22);
    xsi_vlogtype_concat(t21, 15, 15, 2U, t24, 7, t23, 8);
    xsi_vlog_generic_convert_array_indices(t13, t14, t17, t20, 2, 1, t21, 15, 2);
    t22 = (t13 + 4);
    t25 = *((unsigned int *)t22);
    t26 = (!(t25));
    t27 = (t14 + 4);
    t28 = *((unsigned int *)t27);
    t29 = (!(t28));
    t30 = (t26 && t29);
    if (t30 == 1)
        goto LAB9;

LAB10:    goto LAB8;

LAB9:    t31 = *((unsigned int *)t13);
    t32 = *((unsigned int *)t14);
    t33 = (t31 - t32);
    t34 = (t33 + 1);
    xsi_vlogvar_assign_value(t11, t12, 0, *((unsigned int *)t14), t34);
    goto LAB10;

}

static void Cont_51_2(char *t0)
{
    char t5[8];
    char t12[8];
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
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;

LAB0:    t1 = (t0 + 4416U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(51, ng0);
    t2 = (t0 + 3000);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t6 = (t0 + 3000);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 3000);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t13 = (t0 + 1960U);
    t14 = *((char **)t13);
    t13 = (t0 + 2280U);
    t15 = *((char **)t13);
    xsi_vlogtype_concat(t12, 15, 15, 2U, t15, 7, t14, 8);
    xsi_vlog_generic_get_array_select_value(t5, 7, t4, t8, t11, 2, 1, t12, 15, 2);
    t13 = (t0 + 5096);
    t16 = (t13 + 56U);
    t17 = *((char **)t16);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    memset(t19, 0, 8);
    t20 = 127U;
    t21 = t20;
    t22 = (t5 + 4);
    t23 = *((unsigned int *)t5);
    t20 = (t20 & t23);
    t24 = *((unsigned int *)t22);
    t21 = (t21 & t24);
    t25 = (t19 + 4);
    t26 = *((unsigned int *)t19);
    *((unsigned int *)t19) = (t26 | t20);
    t27 = *((unsigned int *)t25);
    *((unsigned int *)t25) = (t27 | t21);
    xsi_driver_vfirst_trans(t13, 0, 6);
    t28 = (t0 + 5000);
    *((int *)t28) = 1;

LAB1:    return;
}

static void Cont_52_3(char *t0)
{
    char t5[8];
    char t12[8];
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
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;

LAB0:    t1 = (t0 + 4664U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(52, ng0);
    t2 = (t0 + 3000);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t6 = (t0 + 3000);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 3000);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t13 = (t0 + 1800U);
    t14 = *((char **)t13);
    t13 = (t0 + 2120U);
    t15 = *((char **)t13);
    xsi_vlogtype_concat(t12, 15, 15, 2U, t15, 7, t14, 8);
    xsi_vlog_generic_get_array_select_value(t5, 7, t4, t8, t11, 2, 1, t12, 15, 2);
    t13 = (t0 + 5160);
    t16 = (t13 + 56U);
    t17 = *((char **)t16);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    memset(t19, 0, 8);
    t20 = 127U;
    t21 = t20;
    t22 = (t5 + 4);
    t23 = *((unsigned int *)t5);
    t20 = (t20 & t23);
    t24 = *((unsigned int *)t22);
    t21 = (t21 & t24);
    t25 = (t19 + 4);
    t26 = *((unsigned int *)t19);
    *((unsigned int *)t19) = (t26 | t20);
    t27 = *((unsigned int *)t25);
    *((unsigned int *)t25) = (t27 | t21);
    xsi_driver_vfirst_trans(t13, 0, 6);
    t28 = (t0 + 5016);
    *((int *)t28) = 1;

LAB1:    return;
}


extern void work_m_00000000001359290602_2409396360_init()
{
	static char *pe[] = {(void *)Initial_41_0,(void *)Always_44_1,(void *)Cont_51_2,(void *)Cont_52_3};
	xsi_register_didat("work_m_00000000001359290602_2409396360", "isim/DisplayVGA_TestBench_isim_beh.exe.sim/work/m_00000000001359290602_2409396360.didat");
	xsi_register_executes(pe);
}
