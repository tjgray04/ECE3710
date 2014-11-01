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
static const char *ng0 = "C:/Users/Steve Brown/Desktop/ECE3710/Titan/Processor/Processor_Titan/CharacterDisplayRAM.v";
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
    t1 = (t0 + 3480);
    t2 = ((char*)((ng2)));
    t3 = ((char*)((ng3)));
    t4 = (t0 + 608);
    t5 = *((char **)t4);
    memset(t6, 0, 8);
    xsi_vlog_signed_power(t6, 32, t3, 32, t5, 32, 1);
    t4 = ((char*)((ng4)));
    memset(t7, 0, 8);
    xsi_vlog_signed_minus(t7, 32, t6, 32, t4, 32);
    xsi_vlogfile_readmemh(ng1, 0, t1, 1, *((unsigned int *)t2), 1, *((unsigned int *)t7));

LAB1:    return;
}

static void Always_44_1(char *t0)
{
    char t14[8];
    char t21[8];
    char t30[8];
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
    char *t13;
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
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t31;
    int t32;
    unsigned int t33;
    int t34;
    int t35;
    unsigned int t36;
    unsigned int t37;
    int t38;
    int t39;

LAB0:    t1 = (t0 + 4648U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(44, ng0);
    t2 = (t0 + 4968);
    *((int *)t2) = 1;
    t3 = (t0 + 4680);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(44, ng0);

LAB5:    xsi_set_current_line(45, ng0);
    t4 = (t0 + 1800U);
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
    t2 = (t0 + 1640U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB9;

LAB10:
LAB11:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(47, ng0);
    t11 = (t0 + 3480);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    t15 = (t0 + 3480);
    t16 = (t15 + 72U);
    t17 = *((char **)t16);
    t18 = (t0 + 3480);
    t19 = (t18 + 64U);
    t20 = *((char **)t19);
    t22 = (t0 + 2440U);
    t23 = *((char **)t22);
    t22 = (t0 + 2760U);
    t24 = *((char **)t22);
    xsi_vlogtype_concat(t21, 15, 15, 2U, t24, 7, t23, 8);
    xsi_vlog_generic_get_array_select_value(t14, 6, t13, t17, t20, 2, 1, t21, 15, 2);
    t22 = (t0 + 3320);
    xsi_vlogvar_wait_assign_value(t22, t14, 0, 0, 6, 0LL);
    goto LAB8;

LAB9:    xsi_set_current_line(48, ng0);

LAB12:    xsi_set_current_line(49, ng0);
    t4 = (t0 + 1960U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t25 = *((unsigned int *)t4);
    t26 = (~(t25));
    t27 = *((unsigned int *)t5);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB13;

LAB14:
LAB15:    xsi_set_current_line(52, ng0);
    t2 = (t0 + 3480);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 3480);
    t11 = (t5 + 72U);
    t12 = *((char **)t11);
    t13 = (t0 + 3480);
    t15 = (t13 + 64U);
    t16 = *((char **)t15);
    t17 = (t0 + 2280U);
    t18 = *((char **)t17);
    t17 = (t0 + 2600U);
    t19 = *((char **)t17);
    xsi_vlogtype_concat(t21, 15, 15, 2U, t19, 7, t18, 8);
    xsi_vlog_generic_get_array_select_value(t14, 6, t4, t12, t16, 2, 1, t21, 15, 2);
    t17 = (t0 + 3160);
    xsi_vlogvar_wait_assign_value(t17, t14, 0, 0, 6, 0LL);
    goto LAB11;

LAB13:    xsi_set_current_line(50, ng0);
    t11 = (t0 + 2120U);
    t12 = *((char **)t11);
    t11 = (t0 + 3480);
    t13 = (t0 + 3480);
    t15 = (t13 + 72U);
    t16 = *((char **)t15);
    t17 = (t0 + 3480);
    t18 = (t17 + 64U);
    t19 = *((char **)t18);
    t20 = (t0 + 2280U);
    t22 = *((char **)t20);
    t20 = (t0 + 2600U);
    t23 = *((char **)t20);
    xsi_vlogtype_concat(t30, 15, 15, 2U, t23, 7, t22, 8);
    xsi_vlog_generic_convert_array_indices(t14, t21, t16, t19, 2, 1, t30, 15, 2);
    t20 = (t14 + 4);
    t31 = *((unsigned int *)t20);
    t32 = (!(t31));
    t24 = (t21 + 4);
    t33 = *((unsigned int *)t24);
    t34 = (!(t33));
    t35 = (t32 && t34);
    if (t35 == 1)
        goto LAB16;

LAB17:    goto LAB15;

LAB16:    t36 = *((unsigned int *)t14);
    t37 = *((unsigned int *)t21);
    t38 = (t36 - t37);
    t39 = (t38 + 1);
    xsi_vlogvar_wait_assign_value(t11, t12, 0, *((unsigned int *)t21), t39, 0LL);
    goto LAB17;

}


extern void work_m_00000000001679824975_2409396360_init()
{
	static char *pe[] = {(void *)Initial_41_0,(void *)Always_44_1};
	xsi_register_didat("work_m_00000000001679824975_2409396360", "isim/CharacterDisplayRAM_isim_beh.exe.sim/work/m_00000000001679824975_2409396360.didat");
	xsi_register_executes(pe);
}
