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
static const char *ng0 = "C:/Users/Alessandro/Documents/VHDL Projects/doorlock/fsm.vhd";
extern char *IEEE_P_2592010699;

unsigned char ieee_p_2592010699_sub_1744673427_503743352(char *, char *, unsigned int , unsigned int );


static void work_a_3643194780_3212880686_p_0(char *t0)
{
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

LAB0:    xsi_set_current_line(58, ng0);
    t1 = (t0 + 992U);
    t2 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t2 != 0)
        goto LAB2;

LAB4:
LAB3:    t1 = (t0 + 5320);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(59, ng0);
    t3 = (t0 + 3272U);
    t4 = *((char **)t3);
    t5 = *((unsigned char *)t4);
    t6 = (t5 == (unsigned char)3);
    if (t6 != 0)
        goto LAB5;

LAB7:    xsi_set_current_line(62, ng0);
    t1 = (t0 + 3592U);
    t3 = *((char **)t1);
    t2 = *((unsigned char *)t3);
    t1 = (t0 + 5416);
    t4 = (t1 + 56U);
    t7 = *((char **)t4);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = t2;
    xsi_driver_first_trans_fast(t1);

LAB6:    goto LAB3;

LAB5:    xsi_set_current_line(60, ng0);
    t3 = (t0 + 5416);
    t7 = (t3 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = (unsigned char)0;
    xsi_driver_first_trans_fast(t3);
    goto LAB6;

}

static void work_a_3643194780_3212880686_p_1(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    unsigned int t9;
    char *t10;
    char *t11;
    char *t12;
    unsigned char t13;
    unsigned char t14;
    unsigned char t15;
    unsigned int t16;
    char *t17;
    char *t18;
    unsigned char t19;
    unsigned char t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    unsigned int t25;
    char *t26;
    unsigned char t27;
    unsigned char t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    static char *nl0[] = {&&LAB3, &&LAB4, &&LAB5, &&LAB6, &&LAB7, &&LAB10, &&LAB9, &&LAB8};

LAB0:    xsi_set_current_line(69, ng0);
    t1 = (t0 + 3432U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (char *)((nl0) + t3);
    goto **((char **)t1);

LAB2:    t1 = (t0 + 5336);
    *((int *)t1) = 1;

LAB1:    return;
LAB3:    xsi_set_current_line(71, ng0);
    t4 = (t0 + 5480);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t4);
    xsi_set_current_line(72, ng0);
    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t1 = (t0 + 9371);
    t3 = 1;
    if (2U == 2U)
        goto LAB14;

LAB15:    t3 = 0;

LAB16:    if (t3 != 0)
        goto LAB11;

LAB13:    xsi_set_current_line(83, ng0);
    t1 = (t0 + 5544);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(84, ng0);
    t1 = (t0 + 5608);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(85, ng0);
    t1 = (t0 + 5672);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(86, ng0);
    t1 = (t0 + 5736);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(87, ng0);
    t1 = (t0 + 5800);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(88, ng0);
    t1 = (t0 + 5864);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(89, ng0);
    t1 = (t0 + 5928);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(90, ng0);
    t1 = (t0 + 5992);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(91, ng0);
    t1 = (t0 + 6056);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);

LAB12:    goto LAB2;

LAB4:    xsi_set_current_line(95, ng0);
    t1 = (t0 + 5480);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(96, ng0);
    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t1 = (t0 + 9373);
    t14 = 1;
    if (2U == 2U)
        goto LAB29;

LAB30:    t14 = 0;

LAB31:    if (t14 == 1)
        goto LAB26;

LAB27:    t7 = (t0 + 1352U);
    t8 = *((char **)t7);
    t7 = (t0 + 9375);
    t15 = 1;
    if (2U == 2U)
        goto LAB35;

LAB36:    t15 = 0;

LAB37:    t13 = t15;

LAB28:    if (t13 == 1)
        goto LAB23;

LAB24:    t3 = (unsigned char)0;

LAB25:    if (t3 != 0)
        goto LAB20;

LAB22:    xsi_set_current_line(106, ng0);
    t1 = (t0 + 5544);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)1;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(107, ng0);
    t1 = (t0 + 5608);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(108, ng0);
    t1 = (t0 + 5672);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(109, ng0);
    t1 = (t0 + 5736);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(110, ng0);
    t1 = (t0 + 5800);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(111, ng0);
    t1 = (t0 + 5864);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(112, ng0);
    t1 = (t0 + 5928);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(113, ng0);
    t1 = (t0 + 6056);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);

LAB21:    goto LAB2;

LAB5:    xsi_set_current_line(117, ng0);
    t1 = (t0 + 5480);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(118, ng0);
    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t1 = (t0 + 9377);
    t14 = 1;
    if (2U == 2U)
        goto LAB50;

LAB51:    t14 = 0;

LAB52:    if (t14 == 1)
        goto LAB47;

LAB48:    t7 = (t0 + 1352U);
    t8 = *((char **)t7);
    t7 = (t0 + 9379);
    t15 = 1;
    if (2U == 2U)
        goto LAB56;

LAB57:    t15 = 0;

LAB58:    t13 = t15;

LAB49:    if (t13 == 1)
        goto LAB44;

LAB45:    t3 = (unsigned char)0;

LAB46:    if (t3 != 0)
        goto LAB41;

LAB43:    xsi_set_current_line(125, ng0);
    t1 = (t0 + 5544);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(126, ng0);
    t1 = (t0 + 5608);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(127, ng0);
    t1 = (t0 + 5736);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(128, ng0);
    t1 = (t0 + 5864);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(129, ng0);
    t1 = (t0 + 5800);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);

LAB42:    goto LAB2;

LAB6:    xsi_set_current_line(133, ng0);
    t1 = (t0 + 5480);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(134, ng0);
    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t1 = (t0 + 9381);
    t14 = 1;
    if (2U == 2U)
        goto LAB71;

LAB72:    t14 = 0;

LAB73:    if (t14 == 1)
        goto LAB68;

LAB69:    t7 = (t0 + 1352U);
    t8 = *((char **)t7);
    t7 = (t0 + 9383);
    t15 = 1;
    if (2U == 2U)
        goto LAB77;

LAB78:    t15 = 0;

LAB79:    t13 = t15;

LAB70:    if (t13 == 1)
        goto LAB65;

LAB66:    t3 = (unsigned char)0;

LAB67:    if (t3 != 0)
        goto LAB62;

LAB64:    xsi_set_current_line(140, ng0);
    t1 = (t0 + 5544);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(141, ng0);
    t1 = (t0 + 5608);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(142, ng0);
    t1 = (t0 + 5736);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(143, ng0);
    t1 = (t0 + 5800);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);

LAB63:    goto LAB2;

LAB7:    xsi_set_current_line(147, ng0);
    t1 = (t0 + 5480);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(148, ng0);
    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t1 = (t0 + 9385);
    t14 = 1;
    if (2U == 2U)
        goto LAB92;

LAB93:    t14 = 0;

LAB94:    if (t14 == 1)
        goto LAB89;

LAB90:    t7 = (t0 + 1352U);
    t8 = *((char **)t7);
    t7 = (t0 + 9387);
    t15 = 1;
    if (2U == 2U)
        goto LAB98;

LAB99:    t15 = 0;

LAB100:    t13 = t15;

LAB91:    if (t13 == 1)
        goto LAB86;

LAB87:    t3 = (unsigned char)0;

LAB88:    if (t3 != 0)
        goto LAB83;

LAB85:    t1 = (t0 + 1192U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t13 = (t3 == (unsigned char)2);
    if (t13 != 0)
        goto LAB104;

LAB105:    xsi_set_current_line(160, ng0);
    t1 = (t0 + 5544);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)4;
    xsi_driver_first_trans_fast(t1);

LAB84:    goto LAB2;

LAB8:    xsi_set_current_line(165, ng0);
    t1 = (t0 + 5480);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(166, ng0);
    t1 = (t0 + 1672U);
    t2 = *((char **)t1);
    t1 = (t0 + 9389);
    t14 = 1;
    if (4U == 4U)
        goto LAB115;

LAB116:    t14 = 0;

LAB117:    if (t14 == 1)
        goto LAB112;

LAB113:    t13 = (unsigned char)0;

LAB114:    if (t13 == 1)
        goto LAB109;

LAB110:    t3 = (unsigned char)0;

LAB111:    if (t3 != 0)
        goto LAB106;

LAB108:    xsi_set_current_line(170, ng0);
    t1 = (t0 + 6056);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(171, ng0);
    t1 = (t0 + 5672);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(172, ng0);
    t1 = (t0 + 1512U);
    t2 = *((char **)t1);
    t1 = (t0 + 9397);
    t3 = 1;
    if (4U == 4U)
        goto LAB139;

LAB140:    t3 = 0;

LAB141:    if ((!(t3)) != 0)
        goto LAB136;

LAB138:    xsi_set_current_line(175, ng0);
    t1 = (t0 + 5544);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)6;
    xsi_driver_first_trans_fast(t1);

LAB137:
LAB107:    goto LAB2;

LAB9:    xsi_set_current_line(181, ng0);
    t1 = (t0 + 5480);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(182, ng0);
    t1 = (t0 + 5992);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(183, ng0);
    t1 = (t0 + 5672);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(184, ng0);
    t1 = (t0 + 5928);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB2;

LAB10:    xsi_set_current_line(187, ng0);
    t1 = (t0 + 5480);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(188, ng0);
    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t1 = (t0 + 9401);
    t3 = 1;
    if (2U == 2U)
        goto LAB148;

LAB149:    t3 = 0;

LAB150:    if (t3 != 0)
        goto LAB145;

LAB147:    xsi_set_current_line(192, ng0);
    t1 = (t0 + 5544);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)5;
    xsi_driver_first_trans_fast(t1);

LAB146:    goto LAB2;

LAB11:    xsi_set_current_line(73, ng0);
    t7 = (t0 + 5544);
    t8 = (t7 + 56U);
    t10 = *((char **)t8);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = (unsigned char)1;
    xsi_driver_first_trans_fast(t7);
    xsi_set_current_line(74, ng0);
    t1 = (t0 + 5608);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(75, ng0);
    t1 = (t0 + 5672);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(76, ng0);
    t1 = (t0 + 5736);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(77, ng0);
    t1 = (t0 + 5800);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(78, ng0);
    t1 = (t0 + 5864);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(79, ng0);
    t1 = (t0 + 5928);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(80, ng0);
    t1 = (t0 + 5992);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(81, ng0);
    t1 = (t0 + 6056);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB12;

LAB14:    t9 = 0;

LAB17:    if (t9 < 2U)
        goto LAB18;
    else
        goto LAB16;

LAB18:    t5 = (t2 + t9);
    t6 = (t1 + t9);
    if (*((unsigned char *)t5) != *((unsigned char *)t6))
        goto LAB15;

LAB19:    t9 = (t9 + 1);
    goto LAB17;

LAB20:    xsi_set_current_line(97, ng0);
    t17 = (t0 + 5544);
    t21 = (t17 + 56U);
    t22 = *((char **)t21);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    *((unsigned char *)t24) = (unsigned char)2;
    xsi_driver_first_trans_fast(t17);
    xsi_set_current_line(98, ng0);
    t1 = (t0 + 5608);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(99, ng0);
    t1 = (t0 + 5672);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(100, ng0);
    t1 = (t0 + 5736);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(101, ng0);
    t1 = (t0 + 5800);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(102, ng0);
    t1 = (t0 + 5864);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(103, ng0);
    t1 = (t0 + 5928);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(104, ng0);
    t1 = (t0 + 6056);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB21;

LAB23:    t17 = (t0 + 1192U);
    t18 = *((char **)t17);
    t19 = *((unsigned char *)t18);
    t20 = (t19 == (unsigned char)3);
    t3 = t20;
    goto LAB25;

LAB26:    t13 = (unsigned char)1;
    goto LAB28;

LAB29:    t9 = 0;

LAB32:    if (t9 < 2U)
        goto LAB33;
    else
        goto LAB31;

LAB33:    t5 = (t2 + t9);
    t6 = (t1 + t9);
    if (*((unsigned char *)t5) != *((unsigned char *)t6))
        goto LAB30;

LAB34:    t9 = (t9 + 1);
    goto LAB32;

LAB35:    t16 = 0;

LAB38:    if (t16 < 2U)
        goto LAB39;
    else
        goto LAB37;

LAB39:    t11 = (t8 + t16);
    t12 = (t7 + t16);
    if (*((unsigned char *)t11) != *((unsigned char *)t12))
        goto LAB36;

LAB40:    t16 = (t16 + 1);
    goto LAB38;

LAB41:    xsi_set_current_line(119, ng0);
    t17 = (t0 + 5544);
    t21 = (t17 + 56U);
    t22 = *((char **)t21);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    *((unsigned char *)t24) = (unsigned char)3;
    xsi_driver_first_trans_fast(t17);
    xsi_set_current_line(120, ng0);
    t1 = (t0 + 5608);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(121, ng0);
    t1 = (t0 + 5736);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(122, ng0);
    t1 = (t0 + 5864);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(123, ng0);
    t1 = (t0 + 5800);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB42;

LAB44:    t17 = (t0 + 1192U);
    t18 = *((char **)t17);
    t19 = *((unsigned char *)t18);
    t20 = (t19 == (unsigned char)3);
    t3 = t20;
    goto LAB46;

LAB47:    t13 = (unsigned char)1;
    goto LAB49;

LAB50:    t9 = 0;

LAB53:    if (t9 < 2U)
        goto LAB54;
    else
        goto LAB52;

LAB54:    t5 = (t2 + t9);
    t6 = (t1 + t9);
    if (*((unsigned char *)t5) != *((unsigned char *)t6))
        goto LAB51;

LAB55:    t9 = (t9 + 1);
    goto LAB53;

LAB56:    t16 = 0;

LAB59:    if (t16 < 2U)
        goto LAB60;
    else
        goto LAB58;

LAB60:    t11 = (t8 + t16);
    t12 = (t7 + t16);
    if (*((unsigned char *)t11) != *((unsigned char *)t12))
        goto LAB57;

LAB61:    t16 = (t16 + 1);
    goto LAB59;

LAB62:    xsi_set_current_line(135, ng0);
    t17 = (t0 + 5544);
    t21 = (t17 + 56U);
    t22 = *((char **)t21);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    *((unsigned char *)t24) = (unsigned char)4;
    xsi_driver_first_trans_fast(t17);
    xsi_set_current_line(136, ng0);
    t1 = (t0 + 5608);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(137, ng0);
    t1 = (t0 + 5736);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(138, ng0);
    t1 = (t0 + 5800);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB63;

LAB65:    t17 = (t0 + 1192U);
    t18 = *((char **)t17);
    t19 = *((unsigned char *)t18);
    t20 = (t19 == (unsigned char)3);
    t3 = t20;
    goto LAB67;

LAB68:    t13 = (unsigned char)1;
    goto LAB70;

LAB71:    t9 = 0;

LAB74:    if (t9 < 2U)
        goto LAB75;
    else
        goto LAB73;

LAB75:    t5 = (t2 + t9);
    t6 = (t1 + t9);
    if (*((unsigned char *)t5) != *((unsigned char *)t6))
        goto LAB72;

LAB76:    t9 = (t9 + 1);
    goto LAB74;

LAB77:    t16 = 0;

LAB80:    if (t16 < 2U)
        goto LAB81;
    else
        goto LAB79;

LAB81:    t11 = (t8 + t16);
    t12 = (t7 + t16);
    if (*((unsigned char *)t11) != *((unsigned char *)t12))
        goto LAB78;

LAB82:    t16 = (t16 + 1);
    goto LAB80;

LAB83:    xsi_set_current_line(149, ng0);
    t17 = (t0 + 5544);
    t21 = (t17 + 56U);
    t22 = *((char **)t21);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    *((unsigned char *)t24) = (unsigned char)7;
    xsi_driver_first_trans_fast(t17);
    xsi_set_current_line(150, ng0);
    t1 = (t0 + 5608);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(151, ng0);
    t1 = (t0 + 5736);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(152, ng0);
    t1 = (t0 + 5800);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(153, ng0);
    t1 = (t0 + 5864);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB84;

LAB86:    t17 = (t0 + 1192U);
    t18 = *((char **)t17);
    t19 = *((unsigned char *)t18);
    t20 = (t19 == (unsigned char)3);
    t3 = t20;
    goto LAB88;

LAB89:    t13 = (unsigned char)1;
    goto LAB91;

LAB92:    t9 = 0;

LAB95:    if (t9 < 2U)
        goto LAB96;
    else
        goto LAB94;

LAB96:    t5 = (t2 + t9);
    t6 = (t1 + t9);
    if (*((unsigned char *)t5) != *((unsigned char *)t6))
        goto LAB93;

LAB97:    t9 = (t9 + 1);
    goto LAB95;

LAB98:    t16 = 0;

LAB101:    if (t16 < 2U)
        goto LAB102;
    else
        goto LAB100;

LAB102:    t11 = (t8 + t16);
    t12 = (t7 + t16);
    if (*((unsigned char *)t11) != *((unsigned char *)t12))
        goto LAB99;

LAB103:    t16 = (t16 + 1);
    goto LAB101;

LAB104:    xsi_set_current_line(155, ng0);
    t1 = (t0 + 5544);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)4;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(156, ng0);
    t1 = (t0 + 5608);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(157, ng0);
    t1 = (t0 + 5736);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(158, ng0);
    t1 = (t0 + 5800);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB84;

LAB106:    xsi_set_current_line(167, ng0);
    t24 = (t0 + 5544);
    t29 = (t24 + 56U);
    t30 = *((char **)t29);
    t31 = (t30 + 56U);
    t32 = *((char **)t31);
    *((unsigned char *)t32) = (unsigned char)5;
    xsi_driver_first_trans_fast(t24);
    xsi_set_current_line(168, ng0);
    t1 = (t0 + 6056);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB107;

LAB109:    t24 = (t0 + 1192U);
    t26 = *((char **)t24);
    t27 = *((unsigned char *)t26);
    t28 = (t27 == (unsigned char)2);
    t3 = t28;
    goto LAB111;

LAB112:    t7 = (t0 + 1352U);
    t8 = *((char **)t7);
    t7 = (t0 + 9393);
    t19 = 1;
    if (2U == 2U)
        goto LAB124;

LAB125:    t19 = 0;

LAB126:    if (t19 == 1)
        goto LAB121;

LAB122:    t17 = (t0 + 1352U);
    t18 = *((char **)t17);
    t17 = (t0 + 9395);
    t20 = 1;
    if (2U == 2U)
        goto LAB130;

LAB131:    t20 = 0;

LAB132:    t15 = t20;

LAB123:    t13 = t15;
    goto LAB114;

LAB115:    t9 = 0;

LAB118:    if (t9 < 4U)
        goto LAB119;
    else
        goto LAB117;

LAB119:    t5 = (t2 + t9);
    t6 = (t1 + t9);
    if (*((unsigned char *)t5) != *((unsigned char *)t6))
        goto LAB116;

LAB120:    t9 = (t9 + 1);
    goto LAB118;

LAB121:    t15 = (unsigned char)1;
    goto LAB123;

LAB124:    t16 = 0;

LAB127:    if (t16 < 2U)
        goto LAB128;
    else
        goto LAB126;

LAB128:    t11 = (t8 + t16);
    t12 = (t7 + t16);
    if (*((unsigned char *)t11) != *((unsigned char *)t12))
        goto LAB125;

LAB129:    t16 = (t16 + 1);
    goto LAB127;

LAB130:    t25 = 0;

LAB133:    if (t25 < 2U)
        goto LAB134;
    else
        goto LAB132;

LAB134:    t22 = (t18 + t25);
    t23 = (t17 + t25);
    if (*((unsigned char *)t22) != *((unsigned char *)t23))
        goto LAB131;

LAB135:    t25 = (t25 + 1);
    goto LAB133;

LAB136:    xsi_set_current_line(173, ng0);
    t7 = (t0 + 5544);
    t8 = (t7 + 56U);
    t10 = *((char **)t8);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = (unsigned char)1;
    xsi_driver_first_trans_fast(t7);
    goto LAB137;

LAB139:    t9 = 0;

LAB142:    if (t9 < 4U)
        goto LAB143;
    else
        goto LAB141;

LAB143:    t5 = (t2 + t9);
    t6 = (t1 + t9);
    if (*((unsigned char *)t5) != *((unsigned char *)t6))
        goto LAB140;

LAB144:    t9 = (t9 + 1);
    goto LAB142;

LAB145:    xsi_set_current_line(189, ng0);
    t7 = (t0 + 5992);
    t8 = (t7 + 56U);
    t10 = *((char **)t8);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t7);
    xsi_set_current_line(190, ng0);
    t1 = (t0 + 5928);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB146;

LAB148:    t9 = 0;

LAB151:    if (t9 < 2U)
        goto LAB152;
    else
        goto LAB150;

LAB152:    t5 = (t2 + t9);
    t6 = (t1 + t9);
    if (*((unsigned char *)t5) != *((unsigned char *)t6))
        goto LAB149;

LAB153:    t9 = (t9 + 1);
    goto LAB151;

}


extern void work_a_3643194780_3212880686_init()
{
	static char *pe[] = {(void *)work_a_3643194780_3212880686_p_0,(void *)work_a_3643194780_3212880686_p_1};
	xsi_register_didat("work_a_3643194780_3212880686", "isim/door_lock_tb_isim_beh.exe.sim/work/a_3643194780_3212880686.didat");
	xsi_register_executes(pe);
}
