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
static const char *ng0 = "//wannsee/users/u0655172/ECE 3710/Processor_Titan/ALU.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {1U, 0U};
static unsigned int ng3[] = {2U, 0U};
static unsigned int ng4[] = {3U, 0U};
static unsigned int ng5[] = {4U, 0U};
static unsigned int ng6[] = {5U, 0U};
static unsigned int ng7[] = {6U, 0U};
static unsigned int ng8[] = {7U, 0U};



static void Cont_48_0(char *t0)
{
    char t5[16];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;

LAB0:    t1 = (t0 + 5304U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(48, ng0);
    t2 = (t0 + 2544U);
    t3 = *((char **)t2);
    t2 = (t0 + 2704U);
    t4 = *((char **)t2);
    xsi_vlog_unsigned_add(t5, 33, t3, 32, t4, 32);
    t2 = (t0 + 7288);
    t6 = (t2 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    xsi_vlog_bit_copy(t9, 0, t5, 0, 33);
    xsi_driver_vfirst_trans(t2, 0, 32);
    t10 = (t0 + 7112);
    *((int *)t10) = 1;

LAB1:    return;
}

static void Cont_52_1(char *t0)
{
    char t4[8];
    char t14[8];
    char t22[8];
    char t56[8];
    char t64[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    char *t26;
    char *t27;
    char *t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    char *t36;
    char *t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    int t46;
    int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    char *t54;
    char *t55;
    char *t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    char *t68;
    char *t69;
    char *t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    char *t78;
    char *t79;
    char *t80;
    char *t81;
    char *t82;
    unsigned int t83;
    unsigned int t84;
    char *t85;
    unsigned int t86;
    unsigned int t87;
    char *t88;
    unsigned int t89;
    unsigned int t90;
    char *t91;

LAB0:    t1 = (t0 + 5552U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(52, ng0);
    t2 = (t0 + 2544U);
    t3 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t4 + 4);
    t5 = (t3 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (t6 >> 31);
    t8 = (t7 & 1);
    *((unsigned int *)t4) = t8;
    t9 = *((unsigned int *)t5);
    t10 = (t9 >> 31);
    t11 = (t10 & 1);
    *((unsigned int *)t2) = t11;
    t12 = (t0 + 2704U);
    t13 = *((char **)t12);
    memset(t14, 0, 8);
    t12 = (t14 + 4);
    t15 = (t13 + 4);
    t16 = *((unsigned int *)t13);
    t17 = (t16 >> 31);
    t18 = (t17 & 1);
    *((unsigned int *)t14) = t18;
    t19 = *((unsigned int *)t15);
    t20 = (t19 >> 31);
    t21 = (t20 & 1);
    *((unsigned int *)t12) = t21;
    t23 = *((unsigned int *)t4);
    t24 = *((unsigned int *)t14);
    t25 = (t23 & t24);
    *((unsigned int *)t22) = t25;
    t26 = (t4 + 4);
    t27 = (t14 + 4);
    t28 = (t22 + 4);
    t29 = *((unsigned int *)t26);
    t30 = *((unsigned int *)t27);
    t31 = (t29 | t30);
    *((unsigned int *)t28) = t31;
    t32 = *((unsigned int *)t28);
    t33 = (t32 != 0);
    if (t33 == 1)
        goto LAB4;

LAB5:
LAB6:    t54 = (t0 + 3024U);
    t55 = *((char **)t54);
    memset(t56, 0, 8);
    t54 = (t56 + 4);
    t57 = (t55 + 4);
    t58 = *((unsigned int *)t55);
    t59 = (t58 >> 31);
    t60 = (t59 & 1);
    *((unsigned int *)t56) = t60;
    t61 = *((unsigned int *)t57);
    t62 = (t61 >> 31);
    t63 = (t62 & 1);
    *((unsigned int *)t54) = t63;
    t65 = *((unsigned int *)t22);
    t66 = *((unsigned int *)t56);
    t67 = (t65 ^ t66);
    *((unsigned int *)t64) = t67;
    t68 = (t22 + 4);
    t69 = (t56 + 4);
    t70 = (t64 + 4);
    t71 = *((unsigned int *)t68);
    t72 = *((unsigned int *)t69);
    t73 = (t71 | t72);
    *((unsigned int *)t70) = t73;
    t74 = *((unsigned int *)t70);
    t75 = (t74 != 0);
    if (t75 == 1)
        goto LAB7;

LAB8:
LAB9:    t78 = (t0 + 7352);
    t79 = (t78 + 56U);
    t80 = *((char **)t79);
    t81 = (t80 + 56U);
    t82 = *((char **)t81);
    memset(t82, 0, 8);
    t83 = 1U;
    t84 = t83;
    t85 = (t64 + 4);
    t86 = *((unsigned int *)t64);
    t83 = (t83 & t86);
    t87 = *((unsigned int *)t85);
    t84 = (t84 & t87);
    t88 = (t82 + 4);
    t89 = *((unsigned int *)t82);
    *((unsigned int *)t82) = (t89 | t83);
    t90 = *((unsigned int *)t88);
    *((unsigned int *)t88) = (t90 | t84);
    xsi_driver_vfirst_trans(t78, 0, 0);
    t91 = (t0 + 7128);
    *((int *)t91) = 1;

LAB1:    return;
LAB4:    t34 = *((unsigned int *)t22);
    t35 = *((unsigned int *)t28);
    *((unsigned int *)t22) = (t34 | t35);
    t36 = (t4 + 4);
    t37 = (t14 + 4);
    t38 = *((unsigned int *)t4);
    t39 = (~(t38));
    t40 = *((unsigned int *)t36);
    t41 = (~(t40));
    t42 = *((unsigned int *)t14);
    t43 = (~(t42));
    t44 = *((unsigned int *)t37);
    t45 = (~(t44));
    t46 = (t39 & t41);
    t47 = (t43 & t45);
    t48 = (~(t46));
    t49 = (~(t47));
    t50 = *((unsigned int *)t28);
    *((unsigned int *)t28) = (t50 & t48);
    t51 = *((unsigned int *)t28);
    *((unsigned int *)t28) = (t51 & t49);
    t52 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t52 & t48);
    t53 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t53 & t49);
    goto LAB6;

LAB7:    t76 = *((unsigned int *)t64);
    t77 = *((unsigned int *)t70);
    *((unsigned int *)t64) = (t76 | t77);
    goto LAB9;

}

static void Cont_56_2(char *t0)
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

LAB0:    t1 = (t0 + 5800U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(56, ng0);
    t2 = (t0 + 2544U);
    t3 = *((char **)t2);
    t2 = (t0 + 2704U);
    t4 = *((char **)t2);
    memset(t5, 0, 8);
    xsi_vlog_unsigned_minus(t5, 32, t3, 32, t4, 32);
    t2 = (t0 + 7416);
    t6 = (t2 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t5, 8);
    xsi_driver_vfirst_trans(t2, 0, 31);
    t10 = (t0 + 7144);
    *((int *)t10) = 1;

LAB1:    return;
}

static void Cont_60_3(char *t0)
{
    char t4[8];
    char t12[8];
    char t15[8];
    char t40[8];
    char t72[8];
    char t75[8];
    char t100[8];
    char t132[8];
    char t135[8];
    char t162[8];
    char t170[8];
    char t204[8];
    char t212[8];
    char t244[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t13;
    char *t14;
    char *t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    char *t29;
    char *t30;
    char *t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    char *t44;
    char *t45;
    char *t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    char *t54;
    char *t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    int t64;
    int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    char *t73;
    char *t74;
    char *t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    char *t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    char *t89;
    char *t90;
    char *t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    unsigned int t97;
    unsigned int t98;
    unsigned int t99;
    unsigned int t101;
    unsigned int t102;
    unsigned int t103;
    char *t104;
    char *t105;
    char *t106;
    unsigned int t107;
    unsigned int t108;
    unsigned int t109;
    unsigned int t110;
    unsigned int t111;
    unsigned int t112;
    unsigned int t113;
    char *t114;
    char *t115;
    unsigned int t116;
    unsigned int t117;
    unsigned int t118;
    unsigned int t119;
    unsigned int t120;
    unsigned int t121;
    unsigned int t122;
    unsigned int t123;
    int t124;
    int t125;
    unsigned int t126;
    unsigned int t127;
    unsigned int t128;
    unsigned int t129;
    unsigned int t130;
    unsigned int t131;
    char *t133;
    char *t134;
    char *t136;
    unsigned int t137;
    unsigned int t138;
    unsigned int t139;
    unsigned int t140;
    unsigned int t141;
    unsigned int t142;
    char *t143;
    unsigned int t144;
    unsigned int t145;
    unsigned int t146;
    unsigned int t147;
    unsigned int t148;
    char *t149;
    char *t150;
    char *t151;
    unsigned int t152;
    unsigned int t153;
    unsigned int t154;
    unsigned int t155;
    unsigned int t156;
    unsigned int t157;
    unsigned int t158;
    unsigned int t159;
    char *t160;
    char *t161;
    char *t163;
    unsigned int t164;
    unsigned int t165;
    unsigned int t166;
    unsigned int t167;
    unsigned int t168;
    unsigned int t169;
    unsigned int t171;
    unsigned int t172;
    unsigned int t173;
    char *t174;
    char *t175;
    char *t176;
    unsigned int t177;
    unsigned int t178;
    unsigned int t179;
    unsigned int t180;
    unsigned int t181;
    unsigned int t182;
    unsigned int t183;
    char *t184;
    char *t185;
    unsigned int t186;
    unsigned int t187;
    unsigned int t188;
    unsigned int t189;
    unsigned int t190;
    unsigned int t191;
    unsigned int t192;
    unsigned int t193;
    int t194;
    int t195;
    unsigned int t196;
    unsigned int t197;
    unsigned int t198;
    unsigned int t199;
    unsigned int t200;
    unsigned int t201;
    char *t202;
    char *t203;
    char *t205;
    unsigned int t206;
    unsigned int t207;
    unsigned int t208;
    unsigned int t209;
    unsigned int t210;
    unsigned int t211;
    unsigned int t213;
    unsigned int t214;
    unsigned int t215;
    char *t216;
    char *t217;
    char *t218;
    unsigned int t219;
    unsigned int t220;
    unsigned int t221;
    unsigned int t222;
    unsigned int t223;
    unsigned int t224;
    unsigned int t225;
    char *t226;
    char *t227;
    unsigned int t228;
    unsigned int t229;
    unsigned int t230;
    unsigned int t231;
    unsigned int t232;
    unsigned int t233;
    unsigned int t234;
    unsigned int t235;
    int t236;
    int t237;
    unsigned int t238;
    unsigned int t239;
    unsigned int t240;
    unsigned int t241;
    unsigned int t242;
    unsigned int t243;
    char *t245;
    char *t246;
    char *t247;
    char *t248;
    char *t249;
    unsigned int t250;
    unsigned int t251;
    char *t252;
    unsigned int t253;
    unsigned int t254;
    char *t255;
    unsigned int t256;
    unsigned int t257;
    char *t258;

LAB0:    t1 = (t0 + 6048U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(60, ng0);
    t2 = (t0 + 2544U);
    t3 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t4 + 4);
    t5 = (t3 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (t6 >> 31);
    t8 = (t7 & 1);
    *((unsigned int *)t4) = t8;
    t9 = *((unsigned int *)t5);
    t10 = (t9 >> 31);
    t11 = (t10 & 1);
    *((unsigned int *)t2) = t11;
    t13 = (t0 + 2704U);
    t14 = *((char **)t13);
    memset(t15, 0, 8);
    t13 = (t15 + 4);
    t16 = (t14 + 4);
    t17 = *((unsigned int *)t14);
    t18 = (t17 >> 31);
    t19 = (t18 & 1);
    *((unsigned int *)t15) = t19;
    t20 = *((unsigned int *)t16);
    t21 = (t20 >> 31);
    t22 = (t21 & 1);
    *((unsigned int *)t13) = t22;
    memset(t12, 0, 8);
    t23 = (t15 + 4);
    t24 = *((unsigned int *)t23);
    t25 = (~(t24));
    t26 = *((unsigned int *)t15);
    t27 = (t26 & t25);
    t28 = (t27 & 1U);
    if (t28 != 0)
        goto LAB7;

LAB5:    if (*((unsigned int *)t23) == 0)
        goto LAB4;

LAB6:    t29 = (t12 + 4);
    *((unsigned int *)t12) = 1;
    *((unsigned int *)t29) = 1;

LAB7:    t30 = (t12 + 4);
    t31 = (t15 + 4);
    t32 = *((unsigned int *)t15);
    t33 = (~(t32));
    *((unsigned int *)t12) = t33;
    *((unsigned int *)t30) = 0;
    if (*((unsigned int *)t31) != 0)
        goto LAB9;

LAB8:    t38 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t38 & 1U);
    t39 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t39 & 1U);
    t41 = *((unsigned int *)t4);
    t42 = *((unsigned int *)t12);
    t43 = (t41 & t42);
    *((unsigned int *)t40) = t43;
    t44 = (t4 + 4);
    t45 = (t12 + 4);
    t46 = (t40 + 4);
    t47 = *((unsigned int *)t44);
    t48 = *((unsigned int *)t45);
    t49 = (t47 | t48);
    *((unsigned int *)t46) = t49;
    t50 = *((unsigned int *)t46);
    t51 = (t50 != 0);
    if (t51 == 1)
        goto LAB10;

LAB11:
LAB12:    t73 = (t0 + 3024U);
    t74 = *((char **)t73);
    memset(t75, 0, 8);
    t73 = (t75 + 4);
    t76 = (t74 + 4);
    t77 = *((unsigned int *)t74);
    t78 = (t77 >> 31);
    t79 = (t78 & 1);
    *((unsigned int *)t75) = t79;
    t80 = *((unsigned int *)t76);
    t81 = (t80 >> 31);
    t82 = (t81 & 1);
    *((unsigned int *)t73) = t82;
    memset(t72, 0, 8);
    t83 = (t75 + 4);
    t84 = *((unsigned int *)t83);
    t85 = (~(t84));
    t86 = *((unsigned int *)t75);
    t87 = (t86 & t85);
    t88 = (t87 & 1U);
    if (t88 != 0)
        goto LAB16;

LAB14:    if (*((unsigned int *)t83) == 0)
        goto LAB13;

LAB15:    t89 = (t72 + 4);
    *((unsigned int *)t72) = 1;
    *((unsigned int *)t89) = 1;

LAB16:    t90 = (t72 + 4);
    t91 = (t75 + 4);
    t92 = *((unsigned int *)t75);
    t93 = (~(t92));
    *((unsigned int *)t72) = t93;
    *((unsigned int *)t90) = 0;
    if (*((unsigned int *)t91) != 0)
        goto LAB18;

LAB17:    t98 = *((unsigned int *)t72);
    *((unsigned int *)t72) = (t98 & 1U);
    t99 = *((unsigned int *)t90);
    *((unsigned int *)t90) = (t99 & 1U);
    t101 = *((unsigned int *)t40);
    t102 = *((unsigned int *)t72);
    t103 = (t101 & t102);
    *((unsigned int *)t100) = t103;
    t104 = (t40 + 4);
    t105 = (t72 + 4);
    t106 = (t100 + 4);
    t107 = *((unsigned int *)t104);
    t108 = *((unsigned int *)t105);
    t109 = (t107 | t108);
    *((unsigned int *)t106) = t109;
    t110 = *((unsigned int *)t106);
    t111 = (t110 != 0);
    if (t111 == 1)
        goto LAB19;

LAB20:
LAB21:    t133 = (t0 + 2544U);
    t134 = *((char **)t133);
    memset(t135, 0, 8);
    t133 = (t135 + 4);
    t136 = (t134 + 4);
    t137 = *((unsigned int *)t134);
    t138 = (t137 >> 31);
    t139 = (t138 & 1);
    *((unsigned int *)t135) = t139;
    t140 = *((unsigned int *)t136);
    t141 = (t140 >> 31);
    t142 = (t141 & 1);
    *((unsigned int *)t133) = t142;
    memset(t132, 0, 8);
    t143 = (t135 + 4);
    t144 = *((unsigned int *)t143);
    t145 = (~(t144));
    t146 = *((unsigned int *)t135);
    t147 = (t146 & t145);
    t148 = (t147 & 1U);
    if (t148 != 0)
        goto LAB25;

LAB23:    if (*((unsigned int *)t143) == 0)
        goto LAB22;

LAB24:    t149 = (t132 + 4);
    *((unsigned int *)t132) = 1;
    *((unsigned int *)t149) = 1;

LAB25:    t150 = (t132 + 4);
    t151 = (t135 + 4);
    t152 = *((unsigned int *)t135);
    t153 = (~(t152));
    *((unsigned int *)t132) = t153;
    *((unsigned int *)t150) = 0;
    if (*((unsigned int *)t151) != 0)
        goto LAB27;

LAB26:    t158 = *((unsigned int *)t132);
    *((unsigned int *)t132) = (t158 & 1U);
    t159 = *((unsigned int *)t150);
    *((unsigned int *)t150) = (t159 & 1U);
    t160 = (t0 + 2704U);
    t161 = *((char **)t160);
    memset(t162, 0, 8);
    t160 = (t162 + 4);
    t163 = (t161 + 4);
    t164 = *((unsigned int *)t161);
    t165 = (t164 >> 31);
    t166 = (t165 & 1);
    *((unsigned int *)t162) = t166;
    t167 = *((unsigned int *)t163);
    t168 = (t167 >> 31);
    t169 = (t168 & 1);
    *((unsigned int *)t160) = t169;
    t171 = *((unsigned int *)t132);
    t172 = *((unsigned int *)t162);
    t173 = (t171 & t172);
    *((unsigned int *)t170) = t173;
    t174 = (t132 + 4);
    t175 = (t162 + 4);
    t176 = (t170 + 4);
    t177 = *((unsigned int *)t174);
    t178 = *((unsigned int *)t175);
    t179 = (t177 | t178);
    *((unsigned int *)t176) = t179;
    t180 = *((unsigned int *)t176);
    t181 = (t180 != 0);
    if (t181 == 1)
        goto LAB28;

LAB29:
LAB30:    t202 = (t0 + 3024U);
    t203 = *((char **)t202);
    memset(t204, 0, 8);
    t202 = (t204 + 4);
    t205 = (t203 + 4);
    t206 = *((unsigned int *)t203);
    t207 = (t206 >> 31);
    t208 = (t207 & 1);
    *((unsigned int *)t204) = t208;
    t209 = *((unsigned int *)t205);
    t210 = (t209 >> 31);
    t211 = (t210 & 1);
    *((unsigned int *)t202) = t211;
    t213 = *((unsigned int *)t170);
    t214 = *((unsigned int *)t204);
    t215 = (t213 & t214);
    *((unsigned int *)t212) = t215;
    t216 = (t170 + 4);
    t217 = (t204 + 4);
    t218 = (t212 + 4);
    t219 = *((unsigned int *)t216);
    t220 = *((unsigned int *)t217);
    t221 = (t219 | t220);
    *((unsigned int *)t218) = t221;
    t222 = *((unsigned int *)t218);
    t223 = (t222 != 0);
    if (t223 == 1)
        goto LAB31;

LAB32:
LAB33:    memset(t244, 0, 8);
    xsi_vlog_unsigned_add(t244, 1, t100, 1, t212, 1);
    t245 = (t0 + 7480);
    t246 = (t245 + 56U);
    t247 = *((char **)t246);
    t248 = (t247 + 56U);
    t249 = *((char **)t248);
    memset(t249, 0, 8);
    t250 = 1U;
    t251 = t250;
    t252 = (t244 + 4);
    t253 = *((unsigned int *)t244);
    t250 = (t250 & t253);
    t254 = *((unsigned int *)t252);
    t251 = (t251 & t254);
    t255 = (t249 + 4);
    t256 = *((unsigned int *)t249);
    *((unsigned int *)t249) = (t256 | t250);
    t257 = *((unsigned int *)t255);
    *((unsigned int *)t255) = (t257 | t251);
    xsi_driver_vfirst_trans(t245, 0, 0);
    t258 = (t0 + 7160);
    *((int *)t258) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t12) = 1;
    goto LAB7;

LAB9:    t34 = *((unsigned int *)t12);
    t35 = *((unsigned int *)t31);
    *((unsigned int *)t12) = (t34 | t35);
    t36 = *((unsigned int *)t30);
    t37 = *((unsigned int *)t31);
    *((unsigned int *)t30) = (t36 | t37);
    goto LAB8;

LAB10:    t52 = *((unsigned int *)t40);
    t53 = *((unsigned int *)t46);
    *((unsigned int *)t40) = (t52 | t53);
    t54 = (t4 + 4);
    t55 = (t12 + 4);
    t56 = *((unsigned int *)t4);
    t57 = (~(t56));
    t58 = *((unsigned int *)t54);
    t59 = (~(t58));
    t60 = *((unsigned int *)t12);
    t61 = (~(t60));
    t62 = *((unsigned int *)t55);
    t63 = (~(t62));
    t64 = (t57 & t59);
    t65 = (t61 & t63);
    t66 = (~(t64));
    t67 = (~(t65));
    t68 = *((unsigned int *)t46);
    *((unsigned int *)t46) = (t68 & t66);
    t69 = *((unsigned int *)t46);
    *((unsigned int *)t46) = (t69 & t67);
    t70 = *((unsigned int *)t40);
    *((unsigned int *)t40) = (t70 & t66);
    t71 = *((unsigned int *)t40);
    *((unsigned int *)t40) = (t71 & t67);
    goto LAB12;

LAB13:    *((unsigned int *)t72) = 1;
    goto LAB16;

LAB18:    t94 = *((unsigned int *)t72);
    t95 = *((unsigned int *)t91);
    *((unsigned int *)t72) = (t94 | t95);
    t96 = *((unsigned int *)t90);
    t97 = *((unsigned int *)t91);
    *((unsigned int *)t90) = (t96 | t97);
    goto LAB17;

LAB19:    t112 = *((unsigned int *)t100);
    t113 = *((unsigned int *)t106);
    *((unsigned int *)t100) = (t112 | t113);
    t114 = (t40 + 4);
    t115 = (t72 + 4);
    t116 = *((unsigned int *)t40);
    t117 = (~(t116));
    t118 = *((unsigned int *)t114);
    t119 = (~(t118));
    t120 = *((unsigned int *)t72);
    t121 = (~(t120));
    t122 = *((unsigned int *)t115);
    t123 = (~(t122));
    t124 = (t117 & t119);
    t125 = (t121 & t123);
    t126 = (~(t124));
    t127 = (~(t125));
    t128 = *((unsigned int *)t106);
    *((unsigned int *)t106) = (t128 & t126);
    t129 = *((unsigned int *)t106);
    *((unsigned int *)t106) = (t129 & t127);
    t130 = *((unsigned int *)t100);
    *((unsigned int *)t100) = (t130 & t126);
    t131 = *((unsigned int *)t100);
    *((unsigned int *)t100) = (t131 & t127);
    goto LAB21;

LAB22:    *((unsigned int *)t132) = 1;
    goto LAB25;

LAB27:    t154 = *((unsigned int *)t132);
    t155 = *((unsigned int *)t151);
    *((unsigned int *)t132) = (t154 | t155);
    t156 = *((unsigned int *)t150);
    t157 = *((unsigned int *)t151);
    *((unsigned int *)t150) = (t156 | t157);
    goto LAB26;

LAB28:    t182 = *((unsigned int *)t170);
    t183 = *((unsigned int *)t176);
    *((unsigned int *)t170) = (t182 | t183);
    t184 = (t132 + 4);
    t185 = (t162 + 4);
    t186 = *((unsigned int *)t132);
    t187 = (~(t186));
    t188 = *((unsigned int *)t184);
    t189 = (~(t188));
    t190 = *((unsigned int *)t162);
    t191 = (~(t190));
    t192 = *((unsigned int *)t185);
    t193 = (~(t192));
    t194 = (t187 & t189);
    t195 = (t191 & t193);
    t196 = (~(t194));
    t197 = (~(t195));
    t198 = *((unsigned int *)t176);
    *((unsigned int *)t176) = (t198 & t196);
    t199 = *((unsigned int *)t176);
    *((unsigned int *)t176) = (t199 & t197);
    t200 = *((unsigned int *)t170);
    *((unsigned int *)t170) = (t200 & t196);
    t201 = *((unsigned int *)t170);
    *((unsigned int *)t170) = (t201 & t197);
    goto LAB30;

LAB31:    t224 = *((unsigned int *)t212);
    t225 = *((unsigned int *)t218);
    *((unsigned int *)t212) = (t224 | t225);
    t226 = (t170 + 4);
    t227 = (t204 + 4);
    t228 = *((unsigned int *)t170);
    t229 = (~(t228));
    t230 = *((unsigned int *)t226);
    t231 = (~(t230));
    t232 = *((unsigned int *)t204);
    t233 = (~(t232));
    t234 = *((unsigned int *)t227);
    t235 = (~(t234));
    t236 = (t229 & t231);
    t237 = (t233 & t235);
    t238 = (~(t236));
    t239 = (~(t237));
    t240 = *((unsigned int *)t218);
    *((unsigned int *)t218) = (t240 & t238);
    t241 = *((unsigned int *)t218);
    *((unsigned int *)t218) = (t241 & t239);
    t242 = *((unsigned int *)t212);
    *((unsigned int *)t212) = (t242 & t238);
    t243 = *((unsigned int *)t212);
    *((unsigned int *)t212) = (t243 & t239);
    goto LAB33;

}

static void Cont_63_4(char *t0)
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
    unsigned int t13;
    unsigned int t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;

LAB0:    t1 = (t0 + 6296U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(63, ng0);
    t2 = (t0 + 2544U);
    t3 = *((char **)t2);
    t2 = (t0 + 2704U);
    t4 = *((char **)t2);
    memset(t5, 0, 8);
    t2 = (t3 + 4);
    if (*((unsigned int *)t2) != 0)
        goto LAB5;

LAB4:    t6 = (t4 + 4);
    if (*((unsigned int *)t6) != 0)
        goto LAB5;

LAB8:    if (*((unsigned int *)t3) < *((unsigned int *)t4))
        goto LAB6;

LAB7:    t8 = (t0 + 7544);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    memset(t12, 0, 8);
    t13 = 1U;
    t14 = t13;
    t15 = (t5 + 4);
    t16 = *((unsigned int *)t5);
    t13 = (t13 & t16);
    t17 = *((unsigned int *)t15);
    t14 = (t14 & t17);
    t18 = (t12 + 4);
    t19 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t19 | t13);
    t20 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t20 | t14);
    xsi_driver_vfirst_trans(t8, 0, 0);
    t21 = (t0 + 7176);
    *((int *)t21) = 1;

LAB1:    return;
LAB5:    t7 = (t5 + 4);
    *((unsigned int *)t5) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB7;

LAB6:    *((unsigned int *)t5) = 1;
    goto LAB7;

}

static void Cont_66_5(char *t0)
{
    char t7[8];
    char *t1;
    char *t2;
    char *t4;
    char *t6;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    unsigned int t15;
    unsigned int t16;
    char *t17;
    unsigned int t18;
    unsigned int t19;
    char *t20;

LAB0:    t1 = (t0 + 6544U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(66, ng0);
    t2 = (t0 + 2544U);
    t4 = *((char **)t2);
    t2 = (t0 + 2704U);
    t6 = *((char **)t2);
    memset(t7, 0, 8);
    xsi_vlog_signed_less(t7, 32, t4, 32, t6, 32);
    t2 = (t0 + 7608);
    t8 = (t2 + 56U);
    t9 = *((char **)t8);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    memset(t11, 0, 8);
    t12 = 1U;
    t13 = t12;
    t14 = (t7 + 4);
    t15 = *((unsigned int *)t7);
    t12 = (t12 & t15);
    t16 = *((unsigned int *)t14);
    t13 = (t13 & t16);
    t17 = (t11 + 4);
    t18 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t18 | t12);
    t19 = *((unsigned int *)t17);
    *((unsigned int *)t17) = (t19 | t13);
    xsi_driver_vfirst_trans(t2, 0, 0);
    t20 = (t0 + 7192);
    *((int *)t20) = 1;

LAB1:    return;
}

static void Always_69_6(char *t0)
{
    char t7[8];
    char t18[8];
    char t21[8];
    char t32[8];
    char t49[8];
    char t80[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    char *t8;
    char *t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    char *t17;
    char *t19;
    char *t20;
    char *t22;
    char *t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    char *t31;
    char *t33;
    char *t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    char *t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
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
    int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    char *t77;
    int t78;
    char *t79;
    char *t81;
    char *t82;
    char *t83;

LAB0:    t1 = (t0 + 6792U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(69, ng0);
    t2 = (t0 + 7208);
    *((int *)t2) = 1;
    t3 = (t0 + 6824);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(70, ng0);

LAB5:    xsi_set_current_line(71, ng0);
    t4 = (t0 + 2864U);
    t5 = *((char **)t4);

LAB6:    t4 = ((char*)((ng1)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t4, 3);
    if (t6 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng2)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t6 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng3)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t6 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng4)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t6 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng5)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t6 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng6)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t6 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng7)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t6 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng8)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t6 == 1)
        goto LAB21;

LAB22:
LAB24:
LAB23:    xsi_set_current_line(105, ng0);

LAB67:    xsi_set_current_line(106, ng0);
    t2 = (t0 + 3024U);
    t3 = *((char **)t2);
    t2 = (t0 + 4224);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 32);
    xsi_set_current_line(107, ng0);
    t2 = (t0 + 4384);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t8 = (t0 + 4384);
    xsi_vlogvar_assign_value(t8, t4, 0, 0, 5);

LAB25:    goto LAB2;

LAB7:    xsi_set_current_line(73, ng0);

LAB26:    xsi_set_current_line(74, ng0);
    t8 = (t0 + 3024U);
    t9 = *((char **)t8);
    memset(t7, 0, 8);
    t8 = (t7 + 4);
    t10 = (t9 + 4);
    t11 = *((unsigned int *)t9);
    t12 = (t11 >> 0);
    *((unsigned int *)t7) = t12;
    t13 = *((unsigned int *)t10);
    t14 = (t13 >> 0);
    *((unsigned int *)t8) = t14;
    t15 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t15 & 4294967295U);
    t16 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t16 & 4294967295U);
    t17 = (t0 + 4224);
    xsi_vlogvar_assign_value(t17, t7, 0, 0, 32);
    xsi_set_current_line(75, ng0);
    t2 = (t0 + 4384);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t18, 0, 8);
    t8 = (t18 + 4);
    t9 = (t4 + 4);
    t11 = *((unsigned int *)t4);
    t12 = (t11 >> 0);
    *((unsigned int *)t18) = t12;
    t13 = *((unsigned int *)t9);
    t14 = (t13 >> 0);
    *((unsigned int *)t8) = t14;
    t15 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t15 & 3U);
    t16 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t16 & 3U);
    t10 = (t0 + 3184U);
    t17 = *((char **)t10);
    t10 = (t0 + 4384);
    t19 = (t10 + 56U);
    t20 = *((char **)t19);
    memset(t21, 0, 8);
    t22 = (t21 + 4);
    t23 = (t20 + 4);
    t24 = *((unsigned int *)t20);
    t25 = (t24 >> 3);
    t26 = (t25 & 1);
    *((unsigned int *)t21) = t26;
    t27 = *((unsigned int *)t23);
    t28 = (t27 >> 3);
    t29 = (t28 & 1);
    *((unsigned int *)t22) = t29;
    t30 = (t0 + 3024U);
    t31 = *((char **)t30);
    memset(t32, 0, 8);
    t30 = (t32 + 4);
    t33 = (t31 + 8);
    t34 = (t31 + 12);
    t35 = *((unsigned int *)t33);
    t36 = (t35 >> 0);
    t37 = (t36 & 1);
    *((unsigned int *)t32) = t37;
    t38 = *((unsigned int *)t34);
    t39 = (t38 >> 0);
    t40 = (t39 & 1);
    *((unsigned int *)t30) = t40;
    xsi_vlogtype_concat(t7, 5, 5, 4U, t32, 1, t21, 1, t17, 1, t18, 2);
    t41 = (t0 + 4384);
    xsi_vlogvar_assign_value(t41, t7, 0, 0, 5);
    goto LAB25;

LAB9:    xsi_set_current_line(77, ng0);

LAB27:    xsi_set_current_line(78, ng0);
    t3 = (t0 + 3344U);
    t4 = *((char **)t3);
    t3 = (t0 + 4224);
    xsi_vlogvar_assign_value(t3, t4, 0, 0, 32);
    xsi_set_current_line(79, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3504U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng1)));
    t8 = (t0 + 2544U);
    t9 = *((char **)t8);
    memset(t21, 0, 8);
    t8 = (t21 + 4);
    t10 = (t9 + 4);
    t11 = *((unsigned int *)t9);
    t12 = (t11 >> 31);
    t13 = (t12 & 1);
    *((unsigned int *)t21) = t13;
    t14 = *((unsigned int *)t10);
    t15 = (t14 >> 31);
    t16 = (t15 & 1);
    *((unsigned int *)t8) = t16;
    memset(t18, 0, 8);
    t17 = (t21 + 4);
    t24 = *((unsigned int *)t17);
    t25 = (~(t24));
    t26 = *((unsigned int *)t21);
    t27 = (t26 & t25);
    t28 = (t27 & 1U);
    if (t28 != 0)
        goto LAB31;

LAB29:    if (*((unsigned int *)t17) == 0)
        goto LAB28;

LAB30:    t19 = (t18 + 4);
    *((unsigned int *)t18) = 1;
    *((unsigned int *)t19) = 1;

LAB31:    t20 = (t18 + 4);
    t22 = (t21 + 4);
    t29 = *((unsigned int *)t21);
    t35 = (~(t29));
    *((unsigned int *)t18) = t35;
    *((unsigned int *)t20) = 0;
    if (*((unsigned int *)t22) != 0)
        goto LAB33;

LAB32:    t40 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t40 & 1U);
    t42 = *((unsigned int *)t20);
    *((unsigned int *)t20) = (t42 & 1U);
    t23 = (t0 + 2704U);
    t30 = *((char **)t23);
    memset(t32, 0, 8);
    t23 = (t32 + 4);
    t31 = (t30 + 4);
    t43 = *((unsigned int *)t30);
    t44 = (t43 >> 31);
    t45 = (t44 & 1);
    *((unsigned int *)t32) = t45;
    t46 = *((unsigned int *)t31);
    t47 = (t46 >> 31);
    t48 = (t47 & 1);
    *((unsigned int *)t23) = t48;
    t50 = *((unsigned int *)t18);
    t51 = *((unsigned int *)t32);
    t52 = (t50 & t51);
    *((unsigned int *)t49) = t52;
    t33 = (t18 + 4);
    t34 = (t32 + 4);
    t41 = (t49 + 4);
    t53 = *((unsigned int *)t33);
    t54 = *((unsigned int *)t34);
    t55 = (t53 | t54);
    *((unsigned int *)t41) = t55;
    t56 = *((unsigned int *)t41);
    t57 = (t56 != 0);
    if (t57 == 1)
        goto LAB34;

LAB35:
LAB36:    xsi_vlogtype_concat(t7, 5, 5, 4U, t49, 1, t3, 1, t4, 1, t2, 2);
    t77 = (t0 + 4384);
    xsi_vlogvar_assign_value(t77, t7, 0, 0, 5);
    goto LAB25;

LAB11:    xsi_set_current_line(81, ng0);

LAB37:    xsi_set_current_line(82, ng0);
    t3 = (t0 + 2544U);
    t4 = *((char **)t3);
    t3 = (t0 + 2704U);
    t8 = *((char **)t3);
    t11 = *((unsigned int *)t4);
    t12 = *((unsigned int *)t8);
    t13 = (t11 | t12);
    *((unsigned int *)t7) = t13;
    t3 = (t4 + 4);
    t9 = (t8 + 4);
    t10 = (t7 + 4);
    t14 = *((unsigned int *)t3);
    t15 = *((unsigned int *)t9);
    t16 = (t14 | t15);
    *((unsigned int *)t10) = t16;
    t24 = *((unsigned int *)t10);
    t25 = (t24 != 0);
    if (t25 == 1)
        goto LAB38;

LAB39:
LAB40:    t20 = (t0 + 4224);
    xsi_vlogvar_assign_value(t20, t7, 0, 0, 32);
    xsi_set_current_line(83, ng0);
    t2 = (t0 + 4384);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t8 = (t0 + 4384);
    xsi_vlogvar_assign_value(t8, t4, 0, 0, 5);
    goto LAB25;

LAB13:    xsi_set_current_line(85, ng0);

LAB41:    xsi_set_current_line(86, ng0);
    t3 = (t0 + 2544U);
    t4 = *((char **)t3);
    t3 = (t0 + 2704U);
    t8 = *((char **)t3);
    t11 = *((unsigned int *)t4);
    t12 = *((unsigned int *)t8);
    t13 = (t11 & t12);
    *((unsigned int *)t7) = t13;
    t3 = (t4 + 4);
    t9 = (t8 + 4);
    t10 = (t7 + 4);
    t14 = *((unsigned int *)t3);
    t15 = *((unsigned int *)t9);
    t16 = (t14 | t15);
    *((unsigned int *)t10) = t16;
    t24 = *((unsigned int *)t10);
    t25 = (t24 != 0);
    if (t25 == 1)
        goto LAB42;

LAB43:
LAB44:    t20 = (t0 + 4224);
    xsi_vlogvar_assign_value(t20, t7, 0, 0, 32);
    xsi_set_current_line(87, ng0);
    t2 = (t0 + 4384);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t8 = (t0 + 4384);
    xsi_vlogvar_assign_value(t8, t4, 0, 0, 5);
    goto LAB25;

LAB15:    xsi_set_current_line(89, ng0);

LAB45:    xsi_set_current_line(90, ng0);
    t3 = (t0 + 2544U);
    t4 = *((char **)t3);
    t3 = (t0 + 2704U);
    t8 = *((char **)t3);
    t11 = *((unsigned int *)t4);
    t12 = *((unsigned int *)t8);
    t13 = (t11 ^ t12);
    *((unsigned int *)t7) = t13;
    t3 = (t4 + 4);
    t9 = (t8 + 4);
    t10 = (t7 + 4);
    t14 = *((unsigned int *)t3);
    t15 = *((unsigned int *)t9);
    t16 = (t14 | t15);
    *((unsigned int *)t10) = t16;
    t24 = *((unsigned int *)t10);
    t25 = (t24 != 0);
    if (t25 == 1)
        goto LAB46;

LAB47:
LAB48:    t17 = (t0 + 4224);
    xsi_vlogvar_assign_value(t17, t7, 0, 0, 32);
    xsi_set_current_line(91, ng0);
    t2 = (t0 + 4384);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t8 = (t0 + 4384);
    xsi_vlogvar_assign_value(t8, t4, 0, 0, 5);
    goto LAB25;

LAB17:    xsi_set_current_line(93, ng0);

LAB49:    xsi_set_current_line(94, ng0);
    t3 = (t0 + 2544U);
    t4 = *((char **)t3);
    memset(t7, 0, 8);
    t3 = (t7 + 4);
    t8 = (t4 + 4);
    t11 = *((unsigned int *)t4);
    t12 = (~(t11));
    *((unsigned int *)t7) = t12;
    *((unsigned int *)t3) = 0;
    if (*((unsigned int *)t8) != 0)
        goto LAB51;

LAB50:    t24 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t24 & 4294967295U);
    t25 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t25 & 4294967295U);
    t9 = (t0 + 4224);
    xsi_vlogvar_assign_value(t9, t7, 0, 0, 32);
    xsi_set_current_line(95, ng0);
    t2 = (t0 + 4384);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t8 = (t0 + 4384);
    xsi_vlogvar_assign_value(t8, t4, 0, 0, 5);
    goto LAB25;

LAB19:    xsi_set_current_line(97, ng0);

LAB52:    xsi_set_current_line(98, ng0);
    t3 = (t0 + 2544U);
    t4 = *((char **)t3);
    t3 = (t0 + 2704U);
    t8 = *((char **)t3);
    memset(t7, 0, 8);
    xsi_vlog_unsigned_multiply(t7, 32, t4, 32, t8, 32);
    t3 = (t0 + 4224);
    xsi_vlogvar_assign_value(t3, t7, 0, 0, 32);
    xsi_set_current_line(99, ng0);
    t2 = (t0 + 4384);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t8 = (t0 + 4384);
    xsi_vlogvar_assign_value(t8, t4, 0, 0, 5);
    goto LAB25;

LAB21:    xsi_set_current_line(101, ng0);

LAB53:    xsi_set_current_line(102, ng0);
    t3 = (t0 + 3344U);
    t4 = *((char **)t3);
    t3 = (t0 + 4224);
    xsi_vlogvar_assign_value(t3, t4, 0, 0, 32);
    xsi_set_current_line(103, ng0);
    t2 = (t0 + 3824U);
    t3 = *((char **)t2);
    t2 = (t0 + 3344U);
    t4 = *((char **)t2);
    memset(t21, 0, 8);
    t2 = (t4 + 4);
    t11 = *((unsigned int *)t2);
    t12 = (~(t11));
    t13 = *((unsigned int *)t4);
    t14 = (t13 & t12);
    t15 = (t14 & 4294967295U);
    if (t15 != 0)
        goto LAB54;

LAB55:    if (*((unsigned int *)t2) != 0)
        goto LAB56;

LAB57:    t9 = (t21 + 4);
    t16 = *((unsigned int *)t21);
    t24 = *((unsigned int *)t9);
    t25 = (t16 || t24);
    if (t25 > 0)
        goto LAB58;

LAB59:    t37 = *((unsigned int *)t21);
    t38 = (~(t37));
    t39 = *((unsigned int *)t9);
    t40 = (t38 || t39);
    if (t40 > 0)
        goto LAB60;

LAB61:    if (*((unsigned int *)t9) > 0)
        goto LAB62;

LAB63:    if (*((unsigned int *)t21) > 0)
        goto LAB64;

LAB65:    memcpy(t18, t23, 8);

LAB66:    t30 = (t0 + 4384);
    t31 = (t30 + 56U);
    t33 = *((char **)t31);
    memset(t49, 0, 8);
    t34 = (t49 + 4);
    t41 = (t33 + 4);
    t42 = *((unsigned int *)t33);
    t43 = (t42 >> 2);
    t44 = (t43 & 1);
    *((unsigned int *)t49) = t44;
    t45 = *((unsigned int *)t41);
    t46 = (t45 >> 2);
    t47 = (t46 & 1);
    *((unsigned int *)t34) = t47;
    t60 = (t0 + 3664U);
    t61 = *((char **)t60);
    t60 = (t0 + 4384);
    t77 = (t60 + 56U);
    t79 = *((char **)t77);
    memset(t80, 0, 8);
    t81 = (t80 + 4);
    t82 = (t79 + 4);
    t48 = *((unsigned int *)t79);
    t50 = (t48 >> 4);
    t51 = (t50 & 1);
    *((unsigned int *)t80) = t51;
    t52 = *((unsigned int *)t82);
    t53 = (t52 >> 4);
    t54 = (t53 & 1);
    *((unsigned int *)t81) = t54;
    xsi_vlogtype_concat(t7, 5, 5, 5U, t80, 1, t61, 1, t49, 1, t18, 1, t3, 1);
    t83 = (t0 + 4384);
    xsi_vlogvar_assign_value(t83, t7, 0, 0, 5);
    goto LAB25;

LAB28:    *((unsigned int *)t18) = 1;
    goto LAB31;

LAB33:    t36 = *((unsigned int *)t18);
    t37 = *((unsigned int *)t22);
    *((unsigned int *)t18) = (t36 | t37);
    t38 = *((unsigned int *)t20);
    t39 = *((unsigned int *)t22);
    *((unsigned int *)t20) = (t38 | t39);
    goto LAB32;

LAB34:    t58 = *((unsigned int *)t49);
    t59 = *((unsigned int *)t41);
    *((unsigned int *)t49) = (t58 | t59);
    t60 = (t18 + 4);
    t61 = (t32 + 4);
    t62 = *((unsigned int *)t18);
    t63 = (~(t62));
    t64 = *((unsigned int *)t60);
    t65 = (~(t64));
    t66 = *((unsigned int *)t32);
    t67 = (~(t66));
    t68 = *((unsigned int *)t61);
    t69 = (~(t68));
    t6 = (t63 & t65);
    t70 = (t67 & t69);
    t71 = (~(t6));
    t72 = (~(t70));
    t73 = *((unsigned int *)t41);
    *((unsigned int *)t41) = (t73 & t71);
    t74 = *((unsigned int *)t41);
    *((unsigned int *)t41) = (t74 & t72);
    t75 = *((unsigned int *)t49);
    *((unsigned int *)t49) = (t75 & t71);
    t76 = *((unsigned int *)t49);
    *((unsigned int *)t49) = (t76 & t72);
    goto LAB36;

LAB38:    t26 = *((unsigned int *)t7);
    t27 = *((unsigned int *)t10);
    *((unsigned int *)t7) = (t26 | t27);
    t17 = (t4 + 4);
    t19 = (t8 + 4);
    t28 = *((unsigned int *)t17);
    t29 = (~(t28));
    t35 = *((unsigned int *)t4);
    t70 = (t35 & t29);
    t36 = *((unsigned int *)t19);
    t37 = (~(t36));
    t38 = *((unsigned int *)t8);
    t78 = (t38 & t37);
    t39 = (~(t70));
    t40 = (~(t78));
    t42 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t42 & t39);
    t43 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t43 & t40);
    goto LAB40;

LAB42:    t26 = *((unsigned int *)t7);
    t27 = *((unsigned int *)t10);
    *((unsigned int *)t7) = (t26 | t27);
    t17 = (t4 + 4);
    t19 = (t8 + 4);
    t28 = *((unsigned int *)t4);
    t29 = (~(t28));
    t35 = *((unsigned int *)t17);
    t36 = (~(t35));
    t37 = *((unsigned int *)t8);
    t38 = (~(t37));
    t39 = *((unsigned int *)t19);
    t40 = (~(t39));
    t70 = (t29 & t36);
    t78 = (t38 & t40);
    t42 = (~(t70));
    t43 = (~(t78));
    t44 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t44 & t42);
    t45 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t45 & t43);
    t46 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t46 & t42);
    t47 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t47 & t43);
    goto LAB44;

LAB46:    t26 = *((unsigned int *)t7);
    t27 = *((unsigned int *)t10);
    *((unsigned int *)t7) = (t26 | t27);
    goto LAB48;

LAB51:    t13 = *((unsigned int *)t7);
    t14 = *((unsigned int *)t8);
    *((unsigned int *)t7) = (t13 | t14);
    t15 = *((unsigned int *)t3);
    t16 = *((unsigned int *)t8);
    *((unsigned int *)t3) = (t15 | t16);
    goto LAB50;

LAB54:    *((unsigned int *)t21) = 1;
    goto LAB57;

LAB56:    t8 = (t21 + 4);
    *((unsigned int *)t21) = 1;
    *((unsigned int *)t8) = 1;
    goto LAB57;

LAB58:    t10 = (t0 + 4384);
    t17 = (t10 + 56U);
    t19 = *((char **)t17);
    memset(t32, 0, 8);
    t20 = (t32 + 4);
    t22 = (t19 + 4);
    t26 = *((unsigned int *)t19);
    t27 = (t26 >> 1);
    t28 = (t27 & 1);
    *((unsigned int *)t32) = t28;
    t29 = *((unsigned int *)t22);
    t35 = (t29 >> 1);
    t36 = (t35 & 1);
    *((unsigned int *)t20) = t36;
    goto LAB59;

LAB60:    t23 = ((char*)((ng2)));
    goto LAB61;

LAB62:    xsi_vlog_unsigned_bit_combine(t18, 1, t32, 1, t23, 1);
    goto LAB66;

LAB64:    memcpy(t18, t32, 8);
    goto LAB66;

}


extern void work_m_00000000004049467934_0886308060_init()
{
	static char *pe[] = {(void *)Cont_48_0,(void *)Cont_52_1,(void *)Cont_56_2,(void *)Cont_60_3,(void *)Cont_63_4,(void *)Cont_66_5,(void *)Always_69_6};
	xsi_register_didat("work_m_00000000004049467934_0886308060", "isim/ALU_isim_beh.exe.sim/work/m_00000000004049467934_0886308060.didat");
	xsi_register_executes(pe);
}
