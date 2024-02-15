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
static const char *ng0 = "C:/Users/Alessandro/Documents/VHDL Projects/doorlock/match.vhd";



static void work_a_3701504332_3212880686_p_0(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    char *t6;
    unsigned char t7;
    unsigned int t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;

LAB0:    xsi_set_current_line(44, ng0);
    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB2;

LAB4:    xsi_set_current_line(51, ng0);
    t1 = (t0 + 3072);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t9 = *((char **)t6);
    *((unsigned char *)t9) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);

LAB3:    t1 = (t0 + 2992);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(45, ng0);
    t1 = (t0 + 1032U);
    t5 = *((char **)t1);
    t1 = (t0 + 1192U);
    t6 = *((char **)t1);
    t7 = 1;
    if (4U == 4U)
        goto LAB8;

LAB9:    t7 = 0;

LAB10:    if (t7 != 0)
        goto LAB5;

LAB7:    xsi_set_current_line(48, ng0);
    t1 = (t0 + 3072);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t9 = *((char **)t6);
    *((unsigned char *)t9) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);

LAB6:    goto LAB3;

LAB5:    xsi_set_current_line(46, ng0);
    t10 = (t0 + 3072);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    *((unsigned char *)t14) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t10);
    goto LAB6;

LAB8:    t8 = 0;

LAB11:    if (t8 < 4U)
        goto LAB12;
    else
        goto LAB10;

LAB12:    t1 = (t5 + t8);
    t9 = (t6 + t8);
    if (*((unsigned char *)t1) != *((unsigned char *)t9))
        goto LAB9;

LAB13:    t8 = (t8 + 1);
    goto LAB11;

}


extern void work_a_3701504332_3212880686_init()
{
	static char *pe[] = {(void *)work_a_3701504332_3212880686_p_0};
	xsi_register_didat("work_a_3701504332_3212880686", "isim/door_lock_tb_isim_beh.exe.sim/work/a_3701504332_3212880686.didat");
	xsi_register_executes(pe);
}
