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
static const char *ng0 = "//wannsee/users/u0655172/ECE 3710/Processor_Titan/InstructionROM.v";
static const char *ng1 = "AssemblyCode.dat";
static int ng2[] = {0, 0};
static int ng3[] = {2, 0};
static int ng4[] = {1, 0};



static void Initial_34_0(char *t0)
{
    char t6[8];
    char t7[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;

LAB0:    xsi_set_current_line(35, ng0);
    t1 = (t0 + 2200);
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

static void Always_37_1(char *t0)
{
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
    char *t13;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;

LAB0:    t1 = (t0 + 3368U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(37, ng0);
    t2 = (t0 + 3688);
    *((int *)t2) = 1;
    t3 = (t0 + 3400);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(38, ng0);
    t4 = (t0 + 1480U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB5;

LAB6:
LAB7:    goto LAB2;

LAB5:    xsi_set_current_line(39, ng0);
    t11 = (t0 + 2200);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    t15 = (t0 + 2200);
    t16 = (t15 + 72U);
    t17 = *((char **)t16);
    t18 = (t0 + 2200);
    t19 = (t18 + 64U);
    t20 = *((char **)t19);
    t21 = (t0 + 1640U);
    t22 = *((char **)t21);
    xsi_vlog_generic_get_array_select_value(t14, 32, t13, t17, t20, 2, 1, t22, 32, 2);
    t21 = (t0 + 2040);
    xsi_vlogvar_wait_assign_value(t21, t14, 0, 0, 32, 0LL);
    goto LAB7;

}


extern void work_m_00000000001922042860_1011995634_init()
{
	static char *pe[] = {(void *)Initial_34_0,(void *)Always_37_1};
	xsi_register_didat("work_m_00000000001922042860_1011995634", "isim/Titan_TestBench02_isim_beh.exe.sim/work/m_00000000001922042860_1011995634.didat");
	xsi_register_executes(pe);
}
