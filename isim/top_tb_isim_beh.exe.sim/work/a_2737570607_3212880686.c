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
static const char *ng0 = "/media/sf_Xilinx/gfau/design/vhdl/ops/mods/mul.vhd";
extern char *IEEE_P_1242562249;
extern char *IEEE_P_2592010699;

char *ieee_p_1242562249_sub_1006216973935652998_1035706684(char *, char *, char *, char *, int );
char *ieee_p_1242562249_sub_1701011461141717515_1035706684(char *, char *, char *, char *, char *, char *);
int ieee_p_1242562249_sub_17802405650254020620_1035706684(char *, char *, char *);
unsigned char ieee_p_2592010699_sub_3488546069778340532_503743352(char *, unsigned char , unsigned char );


static void work_a_2737570607_3212880686_p_0(char *t0)
{
    char t1[16];
    char t4[16];
    char *t2;
    char *t3;
    char *t5;
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

LAB0:    xsi_set_current_line(35, ng0);

LAB3:    t2 = (t0 + 1032U);
    t3 = *((char **)t2);
    t5 = ((IEEE_P_2592010699) + 4000);
    t6 = (t0 + 6288U);
    t2 = xsi_base_array_concat(t2, t4, t5, (char)99, (unsigned char)2, (char)97, t3, t6, (char)101);
    t7 = (t0 + 1192U);
    t8 = *((char **)t7);
    t7 = (t0 + 6304U);
    t9 = ieee_p_1242562249_sub_1701011461141717515_1035706684(IEEE_P_1242562249, t1, t2, t4, t8, t7);
    t10 = (t0 + 4152);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    memcpy(t14, t9, 9U);
    xsi_driver_first_trans_fast(t10);

LAB2:    t15 = (t0 + 4040);
    *((int *)t15) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_2737570607_3212880686_p_1(char *t0)
{
    char t1[16];
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;

LAB0:    xsi_set_current_line(36, ng0);

LAB3:    t2 = (t0 + 1672U);
    t3 = *((char **)t2);
    t2 = (t0 + 6352U);
    t4 = ieee_p_1242562249_sub_1006216973935652998_1035706684(IEEE_P_1242562249, t1, t3, t2, 1);
    t5 = (t0 + 4216);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t4, 9U);
    xsi_driver_first_trans_fast(t5);

LAB2:    t10 = (t0 + 4056);
    *((int *)t10) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_2737570607_3212880686_p_2(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    int t4;
    int t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    char *t9;
    unsigned char t10;
    char *t11;
    char *t12;
    char *t13;
    int t14;
    int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    unsigned char t20;
    unsigned char t21;
    unsigned char t22;
    char *t23;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;

LAB0:    xsi_set_current_line(42, ng0);
    t1 = (t0 + 1672U);
    t2 = *((char **)t1);
    t1 = (t0 + 1352U);
    t3 = *((char **)t1);
    t1 = (t0 + 6320U);
    t4 = ieee_p_1242562249_sub_17802405650254020620_1035706684(IEEE_P_1242562249, t3, t1);
    t5 = (t4 - 8);
    t6 = (t5 * -1);
    xsi_vhdl_check_range_of_index(8, 0, -1, t4);
    t7 = (1U * t6);
    t8 = (0 + t7);
    t9 = (t2 + t8);
    t10 = *((unsigned char *)t9);
    t11 = (t0 + 1832U);
    t12 = *((char **)t11);
    t11 = (t0 + 1352U);
    t13 = *((char **)t11);
    t11 = (t0 + 6320U);
    t14 = ieee_p_1242562249_sub_17802405650254020620_1035706684(IEEE_P_1242562249, t13, t11);
    t15 = (t14 - 8);
    t16 = (t15 * -1);
    xsi_vhdl_check_range_of_index(8, 0, -1, t14);
    t17 = (1U * t16);
    t18 = (0 + t17);
    t19 = (t12 + t18);
    t20 = *((unsigned char *)t19);
    t21 = ieee_p_2592010699_sub_3488546069778340532_503743352(IEEE_P_2592010699, t10, t20);
    t22 = (t21 == (unsigned char)2);
    if (t22 != 0)
        goto LAB2;

LAB4:    xsi_set_current_line(51, ng0);
    t1 = (t0 + 1832U);
    t2 = *((char **)t1);
    t6 = (8 - 7);
    t7 = (t6 * 1U);
    t8 = (0 + t7);
    t1 = (t2 + t8);
    t3 = (t0 + 4280);
    t9 = (t3 + 56U);
    t11 = *((char **)t9);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    memcpy(t13, t1, 8U);
    xsi_driver_first_trans_fast_port(t3);

LAB3:    t1 = (t0 + 4072);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(46, ng0);
    t23 = (t0 + 1672U);
    t24 = *((char **)t23);
    t25 = (8 - 7);
    t26 = (t25 * 1U);
    t27 = (0 + t26);
    t23 = (t24 + t27);
    t28 = (t0 + 4280);
    t29 = (t28 + 56U);
    t30 = *((char **)t29);
    t31 = (t30 + 56U);
    t32 = *((char **)t31);
    memcpy(t32, t23, 8U);
    xsi_driver_first_trans_fast_port(t28);
    goto LAB3;

}


extern void work_a_2737570607_3212880686_init()
{
	static char *pe[] = {(void *)work_a_2737570607_3212880686_p_0,(void *)work_a_2737570607_3212880686_p_1,(void *)work_a_2737570607_3212880686_p_2};
	xsi_register_didat("work_a_2737570607_3212880686", "isim/top_tb_isim_beh.exe.sim/work/a_2737570607_3212880686.didat");
	xsi_register_executes(pe);
}
