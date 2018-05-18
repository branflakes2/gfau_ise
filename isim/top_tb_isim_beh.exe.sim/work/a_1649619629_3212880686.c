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
static const char *ng0 = "/media/sf_Xilinx/gfau/design/vhdl/ops/mods/operators.vhd";
extern char *IEEE_P_0017514958;
extern char *IEEE_P_2592010699;

unsigned char ieee_p_0017514958_sub_18359437307400844447_1861681735(char *, char *, char *);
unsigned char ieee_p_0017514958_sub_896298246495612401_1861681735(char *, char *, char *);
unsigned char ieee_p_2592010699_sub_374109322130769762_503743352(char *, unsigned char );


static void work_a_1649619629_3212880686_p_0(char *t0)
{
    char *t1;
    char *t2;
    int t3;
    unsigned int t4;
    unsigned int t5;
    unsigned int t6;
    unsigned char t7;
    unsigned char t8;
    char *t9;
    char *t10;
    unsigned char t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    unsigned char t17;

LAB0:    xsi_set_current_line(231, ng0);
    t1 = (t0 + 1512U);
    t2 = *((char **)t1);
    t3 = (2 - 5);
    t4 = (t3 * -1);
    t5 = (1U * t4);
    t6 = (0 + t5);
    t1 = (t2 + t6);
    t7 = *((unsigned char *)t1);
    t8 = (t7 == (unsigned char)2);
    if (t8 != 0)
        goto LAB2;

LAB4:    t1 = (t0 + 1512U);
    t2 = *((char **)t1);
    t3 = (2 - 5);
    t4 = (t3 * -1);
    t5 = (1U * t4);
    t6 = (0 + t5);
    t1 = (t2 + t6);
    t7 = *((unsigned char *)t1);
    t8 = (t7 == (unsigned char)3);
    if (t8 != 0)
        goto LAB5;

LAB6:
LAB3:    xsi_set_current_line(241, ng0);
    t1 = (t0 + 1512U);
    t2 = *((char **)t1);
    t3 = (1 - 5);
    t4 = (t3 * -1);
    t5 = (1U * t4);
    t6 = (0 + t5);
    t1 = (t2 + t6);
    t7 = *((unsigned char *)t1);
    t8 = (t7 == (unsigned char)2);
    if (t8 != 0)
        goto LAB7;

LAB9:    t1 = (t0 + 1512U);
    t2 = *((char **)t1);
    t3 = (1 - 5);
    t4 = (t3 * -1);
    t5 = (1U * t4);
    t6 = (0 + t5);
    t1 = (t2 + t6);
    t7 = *((unsigned char *)t1);
    t8 = (t7 == (unsigned char)3);
    if (t8 != 0)
        goto LAB10;

LAB11:
LAB8:    t1 = (t0 + 6584);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(233, ng0);
    t9 = (t0 + 1672U);
    t10 = *((char **)t9);
    t9 = (t0 + 10888U);
    t11 = ieee_p_0017514958_sub_896298246495612401_1861681735(IEEE_P_0017514958, t10, t9);
    t12 = (t0 + 6664);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    *((unsigned char *)t16) = t11;
    xsi_driver_first_trans_fast(t12);
    goto LAB3;

LAB5:    xsi_set_current_line(237, ng0);
    t9 = (t0 + 1672U);
    t10 = *((char **)t9);
    t9 = (t0 + 10888U);
    t11 = ieee_p_0017514958_sub_18359437307400844447_1861681735(IEEE_P_0017514958, t10, t9);
    t17 = ieee_p_2592010699_sub_374109322130769762_503743352(IEEE_P_2592010699, t11);
    t12 = (t0 + 6664);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    *((unsigned char *)t16) = t17;
    xsi_driver_first_trans_fast(t12);
    goto LAB3;

LAB7:    xsi_set_current_line(243, ng0);
    t9 = (t0 + 1832U);
    t10 = *((char **)t9);
    t9 = (t0 + 10904U);
    t11 = ieee_p_0017514958_sub_896298246495612401_1861681735(IEEE_P_0017514958, t10, t9);
    t12 = (t0 + 6728);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    *((unsigned char *)t16) = t11;
    xsi_driver_first_trans_fast(t12);
    goto LAB8;

LAB10:    xsi_set_current_line(247, ng0);
    t9 = (t0 + 1832U);
    t10 = *((char **)t9);
    t9 = (t0 + 10904U);
    t11 = ieee_p_0017514958_sub_18359437307400844447_1861681735(IEEE_P_0017514958, t10, t9);
    t17 = ieee_p_2592010699_sub_374109322130769762_503743352(IEEE_P_2592010699, t11);
    t12 = (t0 + 6728);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    *((unsigned char *)t16) = t17;
    xsi_driver_first_trans_fast(t12);
    goto LAB8;

}


extern void work_a_1649619629_3212880686_init()
{
	static char *pe[] = {(void *)work_a_1649619629_3212880686_p_0};
	xsi_register_didat("work_a_1649619629_3212880686", "isim/top_tb_isim_beh.exe.sim/work/a_1649619629_3212880686.didat");
	xsi_register_executes(pe);
}
