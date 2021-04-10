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
static const char *ng0 = "C:/Users/artur/OneDrive/Pulpit/UCiSW_2/Projekt/Digit_signal_gen.vhd";
extern char *IEEE_P_2592010699;
extern char *IEEE_P_1242562249;

char *ieee_p_1242562249_sub_1547198987_1035706684(char *, char *, char *, char *, char *, char *);
unsigned char ieee_p_2592010699_sub_1744673427_503743352(char *, char *, unsigned int , unsigned int );


static void work_a_3908696430_3212880686_p_0(char *t0)
{
    char t20[16];
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
    int t12;
    int t13;
    unsigned char t14;
    int t15;
    int t16;
    char *t17;
    char *t18;
    char *t19;
    char *t21;
    char *t22;
    char *t23;
    char *t24;

LAB0:    xsi_set_current_line(55, ng0);
    t1 = (t0 + 992U);
    t2 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t2 != 0)
        goto LAB2;

LAB4:
LAB3:    xsi_set_current_line(67, ng0);
    t1 = (t0 + 1152U);
    t5 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t5 == 1)
        goto LAB11;

LAB12:    t2 = (unsigned char)0;

LAB13:    if (t2 != 0)
        goto LAB8;

LAB10:
LAB9:    t1 = (t0 + 4320);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(56, ng0);
    t3 = (t0 + 2472U);
    t4 = *((char **)t3);
    t5 = *((unsigned char *)t4);
    t6 = (t5 == (unsigned char)3);
    if (t6 != 0)
        goto LAB5;

LAB7:    xsi_set_current_line(60, ng0);
    t1 = (t0 + 7365);
    t4 = (t0 + 4544);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 4U);
    xsi_driver_first_trans_fast_port(t4);
    xsi_set_current_line(61, ng0);
    t1 = (t0 + 7369);
    t4 = (t0 + 4608);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 4U);
    xsi_driver_first_trans_fast_port(t4);
    xsi_set_current_line(62, ng0);
    t1 = (t0 + 4416);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(63, ng0);
    t1 = (t0 + 4480);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);

LAB6:    goto LAB3;

LAB5:    xsi_set_current_line(57, ng0);
    t3 = (t0 + 4416);
    t7 = (t3 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = (unsigned char)2;
    xsi_driver_first_trans_fast(t3);
    xsi_set_current_line(58, ng0);
    t1 = (t0 + 4480);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB6;

LAB8:    xsi_set_current_line(70, ng0);
    t3 = (t0 + 1992U);
    t7 = *((char **)t3);
    t12 = *((int *)t7);
    t3 = (t0 + 2768U);
    t8 = *((char **)t3);
    t13 = *((int *)t8);
    t14 = (t12 < t13);
    if (t14 != 0)
        goto LAB14;

LAB16:    xsi_set_current_line(73, ng0);
    t1 = (t0 + 2312U);
    t3 = *((char **)t1);
    t1 = (t0 + 7373);
    t7 = ((IEEE_P_2592010699) + 4024);
    t2 = xsi_vhdl_lessthan(t7, t3, 12U, t1, 12U);
    if (t2 != 0)
        goto LAB17;

LAB19:    xsi_set_current_line(76, ng0);
    t1 = (t0 + 7385);
    t4 = (t0 + 4736);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 12U);
    xsi_driver_first_trans_fast(t4);

LAB18:    xsi_set_current_line(78, ng0);
    t1 = (t0 + 4672);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    *((int *)t8) = 0;
    xsi_driver_first_trans_fast(t1);

LAB15:    goto LAB9;

LAB11:    t3 = (t0 + 2472U);
    t4 = *((char **)t3);
    t6 = *((unsigned char *)t4);
    t11 = (t6 == (unsigned char)3);
    t2 = t11;
    goto LAB13;

LAB14:    xsi_set_current_line(71, ng0);
    t3 = (t0 + 1992U);
    t9 = *((char **)t3);
    t15 = *((int *)t9);
    t16 = (t15 + 1);
    t3 = (t0 + 4672);
    t10 = (t3 + 56U);
    t17 = *((char **)t10);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    *((int *)t19) = t16;
    xsi_driver_first_trans_fast(t3);
    goto LAB15;

LAB17:    xsi_set_current_line(74, ng0);
    t8 = (t0 + 2312U);
    t9 = *((char **)t8);
    t8 = (t0 + 7304U);
    t10 = (t0 + 2152U);
    t17 = *((char **)t10);
    t10 = (t0 + 7288U);
    t18 = ieee_p_1242562249_sub_1547198987_1035706684(IEEE_P_1242562249, t20, t9, t8, t17, t10);
    t19 = (t0 + 4736);
    t21 = (t19 + 56U);
    t22 = *((char **)t21);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    memcpy(t24, t18, 12U);
    xsi_driver_first_trans_fast(t19);
    goto LAB18;

}

static void work_a_3908696430_3212880686_p_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(83, ng0);

LAB3:    t1 = (t0 + 2312U);
    t2 = *((char **)t1);
    t1 = (t0 + 4800);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 12U);
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t7 = (t0 + 4336);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}


extern void work_a_3908696430_3212880686_init()
{
	static char *pe[] = {(void *)work_a_3908696430_3212880686_p_0,(void *)work_a_3908696430_3212880686_p_1};
	xsi_register_didat("work_a_3908696430_3212880686", "isim/Digit_signal_gen_tb_isim_beh.exe.sim/work/a_3908696430_3212880686.didat");
	xsi_register_executes(pe);
}
