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
static const char *ng0 = "/media/sf_Xilinx/gfau/design/vhdl/top_tb.vhd";
extern char *WORK_P_1871661363;
extern char *IEEE_P_2592010699;

unsigned char ieee_p_2592010699_sub_13554554585326073636_503743352(char *, char *, unsigned int , unsigned int );
unsigned char ieee_p_2592010699_sub_2763492388968962707_503743352(char *, char *, unsigned int , unsigned int );
unsigned char ieee_p_2592010699_sub_374109322130769762_503743352(char *, unsigned char );


static void work_a_3115858369_2372691052_p_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    int t4;
    char *t5;
    int t6;
    int t7;
    char *t8;
    char *t9;
    unsigned char t10;
    unsigned char t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    int64 t16;
    int64 t17;

LAB0:    t1 = (t0 + 5544U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(150, ng0);
    t2 = ((WORK_P_1871661363) + 1168U);
    t3 = *((char **)t2);
    t4 = *((int *)t3);
    t2 = (t0 + 10401);
    *((int *)t2) = 1;
    t5 = (t0 + 10405);
    *((int *)t5) = t4;
    t6 = 1;
    t7 = t4;

LAB4:    if (t6 <= t7)
        goto LAB5;

LAB7:    goto LAB2;

LAB5:    xsi_set_current_line(151, ng0);
    t8 = (t0 + 1032U);
    t9 = *((char **)t8);
    t10 = *((unsigned char *)t9);
    t11 = ieee_p_2592010699_sub_374109322130769762_503743352(IEEE_P_2592010699, t10);
    t8 = (t0 + 6616);
    t12 = (t8 + 56U);
    t13 = *((char **)t12);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    *((unsigned char *)t15) = t11;
    xsi_driver_first_trans_fast(t8);
    xsi_set_current_line(152, ng0);
    t2 = ((WORK_P_1871661363) + 1288U);
    t3 = *((char **)t2);
    t16 = *((int64 *)t3);
    t17 = (t16 / 2);
    t2 = (t0 + 5352);
    xsi_process_wait(t2, t17);

LAB10:    *((char **)t1) = &&LAB11;

LAB1:    return;
LAB6:    t2 = (t0 + 10401);
    t6 = *((int *)t2);
    t3 = (t0 + 10405);
    t7 = *((int *)t3);
    if (t6 == t7)
        goto LAB7;

LAB12:    t4 = (t6 + 1);
    t6 = t4;
    t5 = (t0 + 10401);
    *((int *)t5) = t6;
    goto LAB4;

LAB8:    goto LAB6;

LAB9:    goto LAB8;

LAB11:    goto LAB9;

}

static void work_a_3115858369_2372691052_p_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    int t4;
    char *t5;
    int t6;
    int t7;
    char *t8;
    char *t9;
    unsigned char t10;
    unsigned char t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    int64 t16;
    int64 t17;

LAB0:    t1 = (t0 + 5792U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(160, ng0);
    t2 = ((WORK_P_1871661363) + 1168U);
    t3 = *((char **)t2);
    t4 = *((int *)t3);
    t2 = (t0 + 10409);
    *((int *)t2) = 1;
    t5 = (t0 + 10413);
    *((int *)t5) = t4;
    t6 = 1;
    t7 = t4;

LAB4:    if (t6 <= t7)
        goto LAB5;

LAB7:    goto LAB2;

LAB5:    xsi_set_current_line(161, ng0);
    t8 = (t0 + 1672U);
    t9 = *((char **)t8);
    t10 = *((unsigned char *)t9);
    t11 = ieee_p_2592010699_sub_374109322130769762_503743352(IEEE_P_2592010699, t10);
    t8 = (t0 + 6680);
    t12 = (t8 + 56U);
    t13 = *((char **)t12);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    *((unsigned char *)t15) = t11;
    xsi_driver_first_trans_fast(t8);
    xsi_set_current_line(162, ng0);
    t2 = (t0 + 4568U);
    t3 = *((char **)t2);
    t16 = *((int64 *)t3);
    t17 = (t16 / 2);
    t2 = (t0 + 5600);
    xsi_process_wait(t2, t17);

LAB10:    *((char **)t1) = &&LAB11;

LAB1:    return;
LAB6:    t2 = (t0 + 10409);
    t6 = *((int *)t2);
    t3 = (t0 + 10413);
    t7 = *((int *)t3);
    if (t6 == t7)
        goto LAB7;

LAB12:    t4 = (t6 + 1);
    t6 = t4;
    t5 = (t0 + 10409);
    *((int *)t5) = t6;
    goto LAB4;

LAB8:    goto LAB6;

LAB9:    goto LAB8;

LAB11:    goto LAB9;

}

static void work_a_3115858369_2372691052_p_2(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    unsigned char t7;
    char *t8;
    char *t9;
    int64 t10;
    int64 t11;

LAB0:    t1 = (t0 + 6040U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(171, ng0);
    t2 = (t0 + 6744);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(173, ng0);
    t2 = (t0 + 10417);
    t7 = (24U != 24U);
    if (t7 == 1)
        goto LAB4;

LAB5:    t4 = (t0 + 6808);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t8 = (t6 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t2, 24U);
    xsi_driver_first_trans_delta(t4, 0U, 24U, 0LL);
    xsi_set_current_line(182, ng0);
    t2 = (t0 + 6872);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(184, ng0);

LAB8:    t2 = (t0 + 6360);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB9;

LAB1:    return;
LAB4:    xsi_size_not_matching(24U, 24U, 0);
    goto LAB5;

LAB6:    t4 = (t0 + 6360);
    *((int *)t4) = 0;
    xsi_set_current_line(186, ng0);
    t2 = (t0 + 10441);
    t7 = (8U != 8U);
    if (t7 == 1)
        goto LAB10;

LAB11:    t4 = (t0 + 6808);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t8 = (t6 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t2, 8U);
    xsi_driver_first_trans_delta(t4, 24U, 8U, 0LL);
    xsi_set_current_line(187, ng0);
    t2 = (t0 + 6936);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(189, ng0);

LAB14:    t2 = (t0 + 6376);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB15;
    goto LAB1;

LAB7:    t3 = (t0 + 1632U);
    t7 = ieee_p_2592010699_sub_13554554585326073636_503743352(IEEE_P_2592010699, t3, 0U, 0U);
    if (t7 == 1)
        goto LAB6;
    else
        goto LAB8;

LAB9:    goto LAB7;

LAB10:    xsi_size_not_matching(8U, 8U, 0);
    goto LAB11;

LAB12:    t4 = (t0 + 6376);
    *((int *)t4) = 0;
    xsi_set_current_line(191, ng0);
    t2 = (t0 + 6936);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(192, ng0);
    t2 = (t0 + 10449);
    t7 = (8U != 8U);
    if (t7 == 1)
        goto LAB16;

LAB17:    t4 = (t0 + 6808);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t8 = (t6 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t2, 8U);
    xsi_driver_first_trans_delta(t4, 24U, 8U, 0LL);
    xsi_set_current_line(194, ng0);

LAB20:    t2 = (t0 + 6392);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB21;
    goto LAB1;

LAB13:    t3 = (t0 + 1632U);
    t7 = ieee_p_2592010699_sub_13554554585326073636_503743352(IEEE_P_2592010699, t3, 0U, 0U);
    if (t7 == 1)
        goto LAB12;
    else
        goto LAB14;

LAB15:    goto LAB13;

LAB16:    xsi_size_not_matching(8U, 8U, 0);
    goto LAB17;

LAB18:    t4 = (t0 + 6392);
    *((int *)t4) = 0;
    xsi_set_current_line(196, ng0);
    t2 = (t0 + 6936);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(198, ng0);

LAB24:    t2 = (t0 + 6408);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB25;
    goto LAB1;

LAB19:    t3 = (t0 + 1632U);
    t7 = ieee_p_2592010699_sub_13554554585326073636_503743352(IEEE_P_2592010699, t3, 0U, 0U);
    if (t7 == 1)
        goto LAB18;
    else
        goto LAB20;

LAB21:    goto LAB19;

LAB22:    t4 = (t0 + 6408);
    *((int *)t4) = 0;
    xsi_set_current_line(200, ng0);
    t2 = (t0 + 6936);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(201, ng0);
    t2 = (t0 + 10457);
    t7 = (8U != 8U);
    if (t7 == 1)
        goto LAB26;

LAB27:    t4 = (t0 + 6808);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t8 = (t6 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t2, 8U);
    xsi_driver_first_trans_delta(t4, 24U, 8U, 0LL);
    xsi_set_current_line(203, ng0);

LAB30:    t2 = (t0 + 6424);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB31;
    goto LAB1;

LAB23:    t3 = (t0 + 1632U);
    t7 = ieee_p_2592010699_sub_13554554585326073636_503743352(IEEE_P_2592010699, t3, 0U, 0U);
    if (t7 == 1)
        goto LAB22;
    else
        goto LAB24;

LAB25:    goto LAB23;

LAB26:    xsi_size_not_matching(8U, 8U, 0);
    goto LAB27;

LAB28:    t4 = (t0 + 6424);
    *((int *)t4) = 0;
    xsi_set_current_line(205, ng0);
    t2 = (t0 + 10465);
    t7 = (8U != 8U);
    if (t7 == 1)
        goto LAB32;

LAB33:    t4 = (t0 + 6808);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t8 = (t6 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t2, 8U);
    xsi_driver_first_trans_delta(t4, 24U, 8U, 0LL);
    xsi_set_current_line(207, ng0);

LAB36:    t2 = (t0 + 6440);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB37;
    goto LAB1;

LAB29:    t3 = (t0 + 1632U);
    t7 = ieee_p_2592010699_sub_13554554585326073636_503743352(IEEE_P_2592010699, t3, 0U, 0U);
    if (t7 == 1)
        goto LAB28;
    else
        goto LAB30;

LAB31:    goto LAB29;

LAB32:    xsi_size_not_matching(8U, 8U, 0);
    goto LAB33;

LAB34:    t4 = (t0 + 6440);
    *((int *)t4) = 0;
    xsi_set_current_line(209, ng0);

LAB40:    t2 = (t0 + 6456);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB41;
    goto LAB1;

LAB35:    t3 = (t0 + 2112U);
    t7 = ieee_p_2592010699_sub_2763492388968962707_503743352(IEEE_P_2592010699, t3, 0U, 0U);
    if (t7 == 1)
        goto LAB34;
    else
        goto LAB36;

LAB37:    goto LAB35;

LAB38:    t4 = (t0 + 6456);
    *((int *)t4) = 0;
    xsi_set_current_line(211, ng0);
    t2 = (t0 + 7000);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(213, ng0);

LAB44:    t2 = (t0 + 6472);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB45;
    goto LAB1;

LAB39:    t3 = (t0 + 1632U);
    t7 = ieee_p_2592010699_sub_13554554585326073636_503743352(IEEE_P_2592010699, t3, 0U, 0U);
    if (t7 == 1)
        goto LAB38;
    else
        goto LAB40;

LAB41:    goto LAB39;

LAB42:    t4 = (t0 + 6472);
    *((int *)t4) = 0;
    xsi_set_current_line(215, ng0);
    t2 = (t0 + 7000);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(217, ng0);
    t2 = (t0 + 10473);
    t7 = (8U != 8U);
    if (t7 == 1)
        goto LAB46;

LAB47:    t4 = (t0 + 6808);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t8 = (t6 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t2, 8U);
    xsi_driver_first_trans_delta(t4, 24U, 8U, 0LL);
    xsi_set_current_line(219, ng0);

LAB50:    t2 = (t0 + 6488);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB51;
    goto LAB1;

LAB43:    t3 = (t0 + 1632U);
    t7 = ieee_p_2592010699_sub_13554554585326073636_503743352(IEEE_P_2592010699, t3, 0U, 0U);
    if (t7 == 1)
        goto LAB42;
    else
        goto LAB44;

LAB45:    goto LAB43;

LAB46:    xsi_size_not_matching(8U, 8U, 0);
    goto LAB47;

LAB48:    t4 = (t0 + 6488);
    *((int *)t4) = 0;
    xsi_set_current_line(221, ng0);
    t2 = (t0 + 6936);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(223, ng0);

LAB54:    t2 = (t0 + 6504);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB55;
    goto LAB1;

LAB49:    t3 = (t0 + 1632U);
    t7 = ieee_p_2592010699_sub_13554554585326073636_503743352(IEEE_P_2592010699, t3, 0U, 0U);
    if (t7 == 1)
        goto LAB48;
    else
        goto LAB50;

LAB51:    goto LAB49;

LAB52:    t4 = (t0 + 6504);
    *((int *)t4) = 0;
    xsi_set_current_line(225, ng0);
    t2 = (t0 + 6936);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(227, ng0);
    t2 = (t0 + 10481);
    t7 = (8U != 8U);
    if (t7 == 1)
        goto LAB56;

LAB57:    t4 = (t0 + 6808);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t8 = (t6 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t2, 8U);
    xsi_driver_first_trans_delta(t4, 24U, 8U, 0LL);
    xsi_set_current_line(229, ng0);

LAB60:    t2 = (t0 + 6520);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB61;
    goto LAB1;

LAB53:    t3 = (t0 + 1632U);
    t7 = ieee_p_2592010699_sub_13554554585326073636_503743352(IEEE_P_2592010699, t3, 0U, 0U);
    if (t7 == 1)
        goto LAB52;
    else
        goto LAB54;

LAB55:    goto LAB53;

LAB56:    xsi_size_not_matching(8U, 8U, 0);
    goto LAB57;

LAB58:    t4 = (t0 + 6520);
    *((int *)t4) = 0;
    xsi_set_current_line(231, ng0);
    t2 = (t0 + 10489);
    t7 = (8U != 8U);
    if (t7 == 1)
        goto LAB62;

LAB63:    t4 = (t0 + 6808);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t8 = (t6 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t2, 8U);
    xsi_driver_first_trans_delta(t4, 24U, 8U, 0LL);
    xsi_set_current_line(233, ng0);

LAB66:    t2 = (t0 + 6536);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB67;
    goto LAB1;

LAB59:    t3 = (t0 + 1632U);
    t7 = ieee_p_2592010699_sub_13554554585326073636_503743352(IEEE_P_2592010699, t3, 0U, 0U);
    if (t7 == 1)
        goto LAB58;
    else
        goto LAB60;

LAB61:    goto LAB59;

LAB62:    xsi_size_not_matching(8U, 8U, 0);
    goto LAB63;

LAB64:    t4 = (t0 + 6536);
    *((int *)t4) = 0;
    xsi_set_current_line(235, ng0);
    t2 = (t0 + 6744);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(237, ng0);
    t2 = (t0 + 4568U);
    t3 = *((char **)t2);
    t10 = *((int64 *)t3);
    t11 = (t10 * 5);
    t2 = (t0 + 5848);
    xsi_process_wait(t2, t11);

LAB70:    *((char **)t1) = &&LAB71;
    goto LAB1;

LAB65:    t3 = (t0 + 1632U);
    t7 = ieee_p_2592010699_sub_13554554585326073636_503743352(IEEE_P_2592010699, t3, 0U, 0U);
    if (t7 == 1)
        goto LAB64;
    else
        goto LAB66;

LAB67:    goto LAB65;

LAB68:    xsi_set_current_line(239, ng0);
    t2 = (t0 + 6872);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(241, ng0);
    t2 = (t0 + 4568U);
    t3 = *((char **)t2);
    t10 = *((int64 *)t3);
    t11 = (t10 * 5);
    t2 = (t0 + 5848);
    xsi_process_wait(t2, t11);

LAB74:    *((char **)t1) = &&LAB75;
    goto LAB1;

LAB69:    goto LAB68;

LAB71:    goto LAB69;

LAB72:    xsi_set_current_line(246, ng0);
    if ((unsigned char)0 == 0)
        goto LAB76;

LAB77:    xsi_set_current_line(248, ng0);

LAB80:    *((char **)t1) = &&LAB81;
    goto LAB1;

LAB73:    goto LAB72;

LAB75:    goto LAB73;

LAB76:    t2 = (t0 + 10497);
    xsi_report(t2, 16U, (unsigned char)3);
    goto LAB77;

LAB78:    goto LAB2;

LAB79:    goto LAB78;

LAB81:    goto LAB79;

}


extern void work_a_3115858369_2372691052_init()
{
	static char *pe[] = {(void *)work_a_3115858369_2372691052_p_0,(void *)work_a_3115858369_2372691052_p_1,(void *)work_a_3115858369_2372691052_p_2};
	xsi_register_didat("work_a_3115858369_2372691052", "isim/top_tb_isim_beh.exe.sim/work/a_3115858369_2372691052.didat");
	xsi_register_executes(pe);
}
