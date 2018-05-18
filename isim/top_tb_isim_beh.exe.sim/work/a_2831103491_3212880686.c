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
static const char *ng0 = "/media/sf_Xilinx/gfau/design/vhdl/ops/mods/outselect.vhd";
extern char *WORK_P_0696720821;



static void work_a_2831103491_3212880686_p_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    int t4;
    char *t5;
    char *t6;
    int t7;
    char *t8;
    char *t9;
    int t10;
    char *t11;
    int t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    unsigned char t20;
    unsigned char t21;
    unsigned char t22;
    unsigned char t23;
    unsigned char t24;

LAB0:    xsi_set_current_line(42, ng0);
    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t1 = (t0 + 7578);
    t4 = xsi_mem_cmp(t1, t2, 3U);
    if (t4 == 1)
        goto LAB3;

LAB8:    t5 = (t0 + 7581);
    t7 = xsi_mem_cmp(t5, t2, 3U);
    if (t7 == 1)
        goto LAB4;

LAB9:    t8 = (t0 + 7584);
    t10 = xsi_mem_cmp(t8, t2, 3U);
    if (t10 == 1)
        goto LAB5;

LAB10:    t11 = (t0 + 7587);
    t13 = xsi_mem_cmp(t11, t2, 3U);
    if (t13 == 1)
        goto LAB6;

LAB11:
LAB7:    xsi_set_current_line(206, ng0);
    t1 = (t0 + 4688);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(208, ng0);
    t1 = (t0 + 4752);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(209, ng0);
    t1 = (t0 + 4816);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(210, ng0);
    t1 = (t0 + 4880);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)8;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(211, ng0);
    t1 = ((WORK_P_0696720821) + 1528U);
    t2 = *((char **)t1);
    t1 = (t0 + 4624);
    t3 = (t1 + 56U);
    t5 = *((char **)t3);
    t6 = (t5 + 56U);
    t8 = *((char **)t6);
    memcpy(t8, t2, 8U);
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t1 = (t0 + 4544);
    *((int *)t1) = 1;

LAB1:    return;
LAB3:    xsi_set_current_line(48, ng0);
    t14 = (t0 + 1352U);
    t15 = *((char **)t14);
    t14 = (t0 + 4624);
    t16 = (t14 + 56U);
    t17 = *((char **)t16);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    memcpy(t19, t15, 8U);
    xsi_driver_first_trans_fast_port(t14);
    xsi_set_current_line(50, ng0);
    t1 = (t0 + 4688);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(53, ng0);
    t1 = (t0 + 4752);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(56, ng0);
    t1 = (t0 + 1192U);
    t2 = *((char **)t1);
    t20 = *((unsigned char *)t2);
    t21 = (t20 == (unsigned char)2);
    if (t21 != 0)
        goto LAB13;

LAB15:    xsi_set_current_line(64, ng0);
    t1 = (t0 + 4816);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(65, ng0);
    t1 = (t0 + 4880);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)8;
    xsi_driver_first_trans_fast_port(t1);

LAB14:    goto LAB2;

LAB4:    xsi_set_current_line(73, ng0);
    t1 = (t0 + 4688);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(76, ng0);
    t1 = (t0 + 4752);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(79, ng0);
    t1 = (t0 + 1992U);
    t2 = *((char **)t1);
    t21 = *((unsigned char *)t2);
    t22 = (t21 == (unsigned char)2);
    if (t22 == 1)
        goto LAB19;

LAB20:    t20 = (unsigned char)0;

LAB21:    if (t20 != 0)
        goto LAB16;

LAB18:    xsi_set_current_line(101, ng0);
    t1 = (t0 + 4816);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(102, ng0);
    t1 = (t0 + 4880);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)8;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(104, ng0);
    t1 = ((WORK_P_0696720821) + 1888U);
    t2 = *((char **)t1);
    t1 = (t0 + 4624);
    t3 = (t1 + 56U);
    t5 = *((char **)t3);
    t6 = (t5 + 56U);
    t8 = *((char **)t6);
    memcpy(t8, t2, 8U);
    xsi_driver_first_trans_fast_port(t1);

LAB17:    goto LAB2;

LAB5:    xsi_set_current_line(112, ng0);
    t1 = (t0 + 1992U);
    t2 = *((char **)t1);
    t21 = *((unsigned char *)t2);
    t22 = (t21 == (unsigned char)2);
    if (t22 == 1)
        goto LAB28;

LAB29:    t20 = (unsigned char)0;

LAB30:    if (t20 != 0)
        goto LAB25;

LAB27:    t1 = (t0 + 2152U);
    t2 = *((char **)t1);
    t20 = *((unsigned char *)t2);
    t21 = (t20 == (unsigned char)3);
    if (t21 != 0)
        goto LAB34;

LAB35:    xsi_set_current_line(152, ng0);
    t1 = (t0 + 4688);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(154, ng0);
    t1 = (t0 + 4816);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(155, ng0);
    t1 = (t0 + 4880);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)8;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(157, ng0);
    t1 = (t0 + 4752);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(158, ng0);
    t1 = ((WORK_P_0696720821) + 1888U);
    t2 = *((char **)t1);
    t1 = (t0 + 4624);
    t3 = (t1 + 56U);
    t5 = *((char **)t3);
    t6 = (t5 + 56U);
    t8 = *((char **)t6);
    memcpy(t8, t2, 8U);
    xsi_driver_first_trans_fast_port(t1);

LAB26:    goto LAB2;

LAB6:    xsi_set_current_line(166, ng0);
    t1 = (t0 + 1992U);
    t2 = *((char **)t1);
    t20 = *((unsigned char *)t2);
    t21 = (t20 <= (unsigned char)2);
    if (t21 != 0)
        goto LAB36;

LAB38:    xsi_set_current_line(192, ng0);
    t1 = (t0 + 4688);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(194, ng0);
    t1 = (t0 + 4816);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(195, ng0);
    t1 = (t0 + 4880);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)8;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(198, ng0);
    t1 = (t0 + 4752);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(199, ng0);
    t1 = ((WORK_P_0696720821) + 1528U);
    t2 = *((char **)t1);
    t1 = (t0 + 4624);
    t3 = (t1 + 56U);
    t5 = *((char **)t3);
    t6 = (t5 + 56U);
    t8 = *((char **)t6);
    memcpy(t8, t2, 8U);
    xsi_driver_first_trans_fast_port(t1);

LAB37:    goto LAB2;

LAB12:;
LAB13:    xsi_set_current_line(59, ng0);
    t1 = (t0 + 4816);
    t3 = (t1 + 56U);
    t5 = *((char **)t3);
    t6 = (t5 + 56U);
    t8 = *((char **)t6);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(60, ng0);
    t1 = (t0 + 1192U);
    t2 = *((char **)t1);
    t20 = *((unsigned char *)t2);
    t1 = (t0 + 4880);
    t3 = (t1 + 56U);
    t5 = *((char **)t3);
    t6 = (t5 + 56U);
    t8 = *((char **)t6);
    *((unsigned char *)t8) = t20;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB14;

LAB16:    xsi_set_current_line(82, ng0);
    t1 = (t0 + 1512U);
    t5 = *((char **)t1);
    t1 = (t0 + 4624);
    t6 = (t1 + 56U);
    t8 = *((char **)t6);
    t9 = (t8 + 56U);
    t11 = *((char **)t9);
    memcpy(t11, t5, 8U);
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(85, ng0);
    t1 = (t0 + 1192U);
    t2 = *((char **)t1);
    t20 = *((unsigned char *)t2);
    t21 = (t20 == (unsigned char)3);
    if (t21 != 0)
        goto LAB22;

LAB24:    xsi_set_current_line(93, ng0);
    t1 = (t0 + 4816);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(94, ng0);
    t1 = (t0 + 4880);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)8;
    xsi_driver_first_trans_fast_port(t1);

LAB23:    goto LAB17;

LAB19:    t1 = (t0 + 2152U);
    t3 = *((char **)t1);
    t23 = *((unsigned char *)t3);
    t24 = (t23 == (unsigned char)2);
    t20 = t24;
    goto LAB21;

LAB22:    xsi_set_current_line(88, ng0);
    t1 = (t0 + 4816);
    t3 = (t1 + 56U);
    t5 = *((char **)t3);
    t6 = (t5 + 56U);
    t8 = *((char **)t6);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(89, ng0);
    t1 = (t0 + 1192U);
    t2 = *((char **)t1);
    t20 = *((unsigned char *)t2);
    t1 = (t0 + 4880);
    t3 = (t1 + 56U);
    t5 = *((char **)t3);
    t6 = (t5 + 56U);
    t8 = *((char **)t6);
    *((unsigned char *)t8) = t20;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB23;

LAB25:    xsi_set_current_line(115, ng0);
    t1 = (t0 + 4688);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t8 = (t6 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(118, ng0);
    t1 = (t0 + 1672U);
    t2 = *((char **)t1);
    t1 = (t0 + 4624);
    t3 = (t1 + 56U);
    t5 = *((char **)t3);
    t6 = (t5 + 56U);
    t8 = *((char **)t6);
    memcpy(t8, t2, 8U);
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(119, ng0);
    t1 = (t0 + 4752);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(122, ng0);
    t1 = (t0 + 1192U);
    t2 = *((char **)t1);
    t20 = *((unsigned char *)t2);
    t21 = (t20 == (unsigned char)3);
    if (t21 != 0)
        goto LAB31;

LAB33:    xsi_set_current_line(130, ng0);
    t1 = (t0 + 4816);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(131, ng0);
    t1 = (t0 + 4880);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)8;
    xsi_driver_first_trans_fast_port(t1);

LAB32:    goto LAB26;

LAB28:    t1 = (t0 + 2152U);
    t3 = *((char **)t1);
    t23 = *((unsigned char *)t3);
    t24 = (t23 == (unsigned char)2);
    t20 = t24;
    goto LAB30;

LAB31:    xsi_set_current_line(125, ng0);
    t1 = (t0 + 4816);
    t3 = (t1 + 56U);
    t5 = *((char **)t3);
    t6 = (t5 + 56U);
    t8 = *((char **)t6);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(126, ng0);
    t1 = (t0 + 1192U);
    t2 = *((char **)t1);
    t20 = *((unsigned char *)t2);
    t1 = (t0 + 4880);
    t3 = (t1 + 56U);
    t5 = *((char **)t3);
    t6 = (t5 + 56U);
    t8 = *((char **)t6);
    *((unsigned char *)t8) = t20;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB32;

LAB34:    xsi_set_current_line(138, ng0);
    t1 = (t0 + 4816);
    t3 = (t1 + 56U);
    t5 = *((char **)t3);
    t6 = (t5 + 56U);
    t8 = *((char **)t6);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(139, ng0);
    t1 = (t0 + 4880);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)8;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(142, ng0);
    t1 = (t0 + 4688);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(145, ng0);
    t1 = (t0 + 4752);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(146, ng0);
    t1 = ((WORK_P_0696720821) + 1528U);
    t2 = *((char **)t1);
    t1 = (t0 + 4624);
    t3 = (t1 + 56U);
    t5 = *((char **)t3);
    t6 = (t5 + 56U);
    t8 = *((char **)t6);
    memcpy(t8, t2, 8U);
    xsi_driver_first_trans_fast_port(t1);
    goto LAB26;

LAB36:    xsi_set_current_line(169, ng0);
    t1 = (t0 + 4688);
    t3 = (t1 + 56U);
    t5 = *((char **)t3);
    t6 = (t5 + 56U);
    t8 = *((char **)t6);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(172, ng0);
    t1 = (t0 + 1832U);
    t2 = *((char **)t1);
    t1 = (t0 + 4624);
    t3 = (t1 + 56U);
    t5 = *((char **)t3);
    t6 = (t5 + 56U);
    t8 = *((char **)t6);
    memcpy(t8, t2, 8U);
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(173, ng0);
    t1 = (t0 + 4752);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(176, ng0);
    t1 = (t0 + 1192U);
    t2 = *((char **)t1);
    t20 = *((unsigned char *)t2);
    t21 = (t20 == (unsigned char)3);
    if (t21 != 0)
        goto LAB39;

LAB41:    xsi_set_current_line(183, ng0);
    t1 = (t0 + 4816);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(184, ng0);
    t1 = (t0 + 4880);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)8;
    xsi_driver_first_trans_fast_port(t1);

LAB40:    goto LAB37;

LAB39:    xsi_set_current_line(178, ng0);
    t1 = (t0 + 4816);
    t3 = (t1 + 56U);
    t5 = *((char **)t3);
    t6 = (t5 + 56U);
    t8 = *((char **)t6);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(179, ng0);
    t1 = (t0 + 1192U);
    t2 = *((char **)t1);
    t20 = *((unsigned char *)t2);
    t1 = (t0 + 4880);
    t3 = (t1 + 56U);
    t5 = *((char **)t3);
    t6 = (t5 + 56U);
    t8 = *((char **)t6);
    *((unsigned char *)t8) = t20;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB40;

}


extern void work_a_2831103491_3212880686_init()
{
	static char *pe[] = {(void *)work_a_2831103491_3212880686_p_0};
	xsi_register_didat("work_a_2831103491_3212880686", "isim/top_tb_isim_beh.exe.sim/work/a_2831103491_3212880686.didat");
	xsi_register_executes(pe);
}
