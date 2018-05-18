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

/* This file is designed for use with ISim build 0xfbc00daa */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "/media/sf_Xilinx/gfau/design/vhdl/ops/mods/outconvert.vhd";
extern char *IEEE_P_2592010699;
extern char *WORK_P_0696720821;
extern char *IEEE_P_0017514958;

unsigned char ieee_p_0017514958_sub_896298246495612401_1861681735(char *, char *, char *);
char *ieee_p_2592010699_sub_16439989832805790689_503743352(char *, char *, char *, char *, char *, char *);
unsigned char ieee_p_2592010699_sub_2763492388968962707_503743352(char *, char *, unsigned int , unsigned int );


static void work_a_0594661914_3212880686_p_0(char *t0)
{
    char t15[16];
    char *t1;
    unsigned char t2;
    char *t3;
    char *t4;
    unsigned char t5;
    unsigned char t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    unsigned char t11;
    unsigned char t12;
    char *t13;
    char *t14;
    unsigned int t16;
    unsigned int t17;
    unsigned char t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    static char *nl0[] = {&&LAB15, &&LAB16};

LAB0:    xsi_set_current_line(55, ng0);
    t1 = (t0 + 992U);
    t2 = ieee_p_2592010699_sub_2763492388968962707_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t2 != 0)
        goto LAB2;

LAB4:
LAB3:    t1 = (t0 + 4704);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(57, ng0);
    t3 = (t0 + 1672U);
    t4 = *((char **)t3);
    t5 = *((unsigned char *)t4);
    t6 = (t5 == (unsigned char)3);
    if (t6 != 0)
        goto LAB5;

LAB7:
LAB6:    xsi_set_current_line(66, ng0);
    t1 = (t0 + 1192U);
    t3 = *((char **)t1);
    t2 = *((unsigned char *)t3);
    t5 = (t2 == (unsigned char)3);
    if (t5 != 0)
        goto LAB8;

LAB10:    xsi_set_current_line(145, ng0);
    t1 = (t0 + 4976);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);

LAB9:    goto LAB3;

LAB5:    xsi_set_current_line(59, ng0);
    t3 = (t0 + 4784);
    t7 = (t3 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t3);
    xsi_set_current_line(60, ng0);
    t1 = ((WORK_P_0696720821) + 1528U);
    t3 = *((char **)t1);
    t1 = (t0 + 4848);
    t4 = (t1 + 56U);
    t7 = *((char **)t4);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t3, 8U);
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(61, ng0);
    t1 = ((WORK_P_0696720821) + 1528U);
    t3 = *((char **)t1);
    t1 = (t0 + 4912);
    t4 = (t1 + 56U);
    t7 = *((char **)t4);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t3, 8U);
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(62, ng0);
    t1 = (t0 + 4976);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB6;

LAB8:    xsi_set_current_line(69, ng0);
    t1 = (t0 + 1512U);
    t4 = *((char **)t1);
    t6 = *((unsigned char *)t4);
    t11 = (t6 == (unsigned char)3);
    if (t11 != 0)
        goto LAB11;

LAB13:    xsi_set_current_line(121, ng0);
    t1 = (t0 + 4784);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(123, ng0);
    t1 = (t0 + 1352U);
    t3 = *((char **)t1);
    t2 = *((unsigned char *)t3);
    t5 = (t2 == (unsigned char)3);
    if (t5 != 0)
        goto LAB26;

LAB28:
LAB27:
LAB12:    goto LAB9;

LAB11:    xsi_set_current_line(71, ng0);
    t1 = (t0 + 3112U);
    t7 = *((char **)t1);
    t12 = *((unsigned char *)t7);
    t1 = (char *)((nl0) + t12);
    goto **((char **)t1);

LAB14:    goto LAB12;

LAB15:    xsi_set_current_line(77, ng0);
    t8 = (t0 + 4784);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t13 = (t10 + 56U);
    t14 = *((char **)t13);
    *((unsigned char *)t14) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t8);
    xsi_set_current_line(78, ng0);
    t1 = (t0 + 4976);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(80, ng0);
    t1 = (t0 + 1992U);
    t3 = *((char **)t1);
    t1 = (t0 + 4848);
    t4 = (t1 + 56U);
    t7 = *((char **)t4);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t3, 8U);
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(81, ng0);
    t1 = ((WORK_P_0696720821) + 1528U);
    t3 = *((char **)t1);
    t1 = (t0 + 4912);
    t4 = (t1 + 56U);
    t7 = *((char **)t4);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t3, 8U);
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(83, ng0);
    t1 = (t0 + 5040);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)1;
    xsi_driver_first_trans_fast(t1);
    goto LAB14;

LAB16:    xsi_set_current_line(88, ng0);
    t1 = (t0 + 4784);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(89, ng0);
    t1 = (t0 + 1992U);
    t3 = *((char **)t1);
    t1 = (t0 + 4848);
    t4 = (t1 + 56U);
    t7 = *((char **)t4);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t3, 8U);
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(91, ng0);
    t1 = (t0 + 2312U);
    t3 = *((char **)t1);
    t5 = *((unsigned char *)t3);
    t6 = (t5 == (unsigned char)3);
    if (t6 == 1)
        goto LAB21;

LAB22:    t2 = (unsigned char)0;

LAB23:    if (t2 != 0)
        goto LAB18;

LAB20:    xsi_set_current_line(99, ng0);
    t1 = ((WORK_P_0696720821) + 1528U);
    t3 = *((char **)t1);
    t1 = (t0 + 4912);
    t4 = (t1 + 56U);
    t7 = *((char **)t4);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t3, 8U);
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(100, ng0);
    t1 = (t0 + 4976);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(101, ng0);
    t1 = (t0 + 5040);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)1;
    xsi_driver_first_trans_fast(t1);

LAB19:    goto LAB14;

LAB17:    xsi_set_current_line(108, ng0);
    t1 = (t0 + 4784);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(109, ng0);
    t1 = (t0 + 4976);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(111, ng0);
    t1 = ((WORK_P_0696720821) + 1528U);
    t3 = *((char **)t1);
    t1 = (t0 + 4848);
    t4 = (t1 + 56U);
    t7 = *((char **)t4);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t3, 8U);
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(112, ng0);
    t1 = ((WORK_P_0696720821) + 1528U);
    t3 = *((char **)t1);
    t1 = (t0 + 4912);
    t4 = (t1 + 56U);
    t7 = *((char **)t4);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t3, 8U);
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(113, ng0);
    t1 = (t0 + 5040);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);
    goto LAB14;

LAB18:    xsi_set_current_line(93, ng0);
    t1 = (t0 + 2632U);
    t7 = *((char **)t1);
    t1 = (t0 + 7704U);
    t8 = (t0 + 1832U);
    t9 = *((char **)t8);
    t8 = (t0 + 7656U);
    t10 = ieee_p_2592010699_sub_16439989832805790689_503743352(IEEE_P_2592010699, t15, t7, t1, t9, t8);
    t13 = (t15 + 12U);
    t16 = *((unsigned int *)t13);
    t17 = (1U * t16);
    t18 = (8U != t17);
    if (t18 == 1)
        goto LAB24;

LAB25:    t14 = (t0 + 4912);
    t19 = (t14 + 56U);
    t20 = *((char **)t19);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    memcpy(t22, t10, 8U);
    xsi_driver_first_trans_fast_port(t14);
    xsi_set_current_line(94, ng0);
    t1 = (t0 + 4976);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(95, ng0);
    t1 = (t0 + 5040);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)1;
    xsi_driver_first_trans_fast(t1);
    goto LAB19;

LAB21:    t1 = (t0 + 1352U);
    t4 = *((char **)t1);
    t11 = *((unsigned char *)t4);
    t12 = (t11 == (unsigned char)3);
    t2 = t12;
    goto LAB23;

LAB24:    xsi_size_not_matching(8U, t17, 0);
    goto LAB25;

LAB26:    xsi_set_current_line(125, ng0);
    t1 = (t0 + 4976);
    t4 = (t1 + 56U);
    t7 = *((char **)t4);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(127, ng0);
    t1 = ((WORK_P_0696720821) + 1528U);
    t3 = *((char **)t1);
    t1 = (t0 + 4848);
    t4 = (t1 + 56U);
    t7 = *((char **)t4);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t3, 8U);
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(129, ng0);
    t1 = (t0 + 1992U);
    t3 = *((char **)t1);
    t1 = (t0 + 7672U);
    t2 = ieee_p_0017514958_sub_896298246495612401_1861681735(IEEE_P_0017514958, t3, t1);
    t5 = (t2 == (unsigned char)2);
    if (t5 != 0)
        goto LAB29;

LAB31:    xsi_set_current_line(135, ng0);
    t1 = (t0 + 1992U);
    t3 = *((char **)t1);
    t1 = (t0 + 4912);
    t4 = (t1 + 56U);
    t7 = *((char **)t4);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t3, 8U);
    xsi_driver_first_trans_fast_port(t1);

LAB30:    goto LAB27;

LAB29:    xsi_set_current_line(131, ng0);
    t4 = (t0 + 1992U);
    t7 = *((char **)t4);
    t4 = (t0 + 7672U);
    t8 = (t0 + 1832U);
    t9 = *((char **)t8);
    t8 = (t0 + 7656U);
    t10 = ieee_p_2592010699_sub_16439989832805790689_503743352(IEEE_P_2592010699, t15, t7, t4, t9, t8);
    t13 = (t15 + 12U);
    t16 = *((unsigned int *)t13);
    t17 = (1U * t16);
    t6 = (8U != t17);
    if (t6 == 1)
        goto LAB32;

LAB33:    t14 = (t0 + 4912);
    t19 = (t14 + 56U);
    t20 = *((char **)t19);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    memcpy(t22, t10, 8U);
    xsi_driver_first_trans_fast_port(t14);
    goto LAB30;

LAB32:    xsi_size_not_matching(8U, t17, 0);
    goto LAB33;

}


extern void work_a_0594661914_3212880686_init()
{
	static char *pe[] = {(void *)work_a_0594661914_3212880686_p_0};
	xsi_register_didat("work_a_0594661914_3212880686", "isim/top_tb_isim_beh.exe.sim/work/a_0594661914_3212880686.didat");
	xsi_register_executes(pe);
}
