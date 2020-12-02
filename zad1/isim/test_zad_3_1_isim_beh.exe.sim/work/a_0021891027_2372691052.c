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
static const char *ng0 = "E:/SZKOLA/aaaSEMESTR - 5/UCISW/Lab 4/zad1_1/zad1/test_zad_3_1.vhd";



static void work_a_0021891027_2372691052_p_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    int64 t7;
    int64 t8;

LAB0:    t1 = (t0 + 2632U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(46, ng0);
    t2 = (t0 + 3264);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(47, ng0);
    t2 = (t0 + 1648U);
    t3 = *((char **)t2);
    t7 = *((int64 *)t3);
    t8 = (t7 / 2);
    t2 = (t0 + 2440);
    xsi_process_wait(t2, t8);

LAB6:    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    xsi_set_current_line(48, ng0);
    t2 = (t0 + 3264);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(49, ng0);
    t2 = (t0 + 1648U);
    t3 = *((char **)t2);
    t7 = *((int64 *)t3);
    t8 = (t7 / 2);
    t2 = (t0 + 2440);
    xsi_process_wait(t2, t8);

LAB10:    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB5:    goto LAB4;

LAB7:    goto LAB5;

LAB8:    goto LAB2;

LAB9:    goto LAB8;

LAB11:    goto LAB9;

}

static void work_a_0021891027_2372691052_p_1(char *t0)
{
    char *t1;
    char *t2;
    int64 t3;
    char *t4;
    int64 t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;

LAB0:    t1 = (t0 + 2880U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(57, ng0);
    t3 = (100 * 1000LL);
    t2 = (t0 + 2688);
    xsi_process_wait(t2, t3);

LAB6:    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    xsi_set_current_line(59, ng0);
    t2 = (t0 + 1648U);
    t4 = *((char **)t2);
    t3 = *((int64 *)t4);
    t5 = (t3 * 10);
    t2 = (t0 + 2688);
    xsi_process_wait(t2, t5);

LAB10:    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB5:    goto LAB4;

LAB7:    goto LAB5;

LAB8:    xsi_set_current_line(62, ng0);
    t2 = (t0 + 5424);
    t6 = (t0 + 3328);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t2, 4U);
    xsi_driver_first_trans_fast(t6);
    xsi_set_current_line(62, ng0);
    t3 = (50 * 1000LL);
    t2 = (t0 + 2688);
    xsi_process_wait(t2, t3);

LAB14:    *((char **)t1) = &&LAB15;
    goto LAB1;

LAB9:    goto LAB8;

LAB11:    goto LAB9;

LAB12:    xsi_set_current_line(63, ng0);
    t2 = (t0 + 5428);
    t6 = (t0 + 3328);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t2, 4U);
    xsi_driver_first_trans_fast(t6);
    xsi_set_current_line(63, ng0);
    t3 = (50 * 1000LL);
    t2 = (t0 + 2688);
    xsi_process_wait(t2, t3);

LAB18:    *((char **)t1) = &&LAB19;
    goto LAB1;

LAB13:    goto LAB12;

LAB15:    goto LAB13;

LAB16:    xsi_set_current_line(64, ng0);
    t2 = (t0 + 5432);
    t6 = (t0 + 3328);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t2, 4U);
    xsi_driver_first_trans_fast(t6);
    xsi_set_current_line(64, ng0);
    t3 = (50 * 1000LL);
    t2 = (t0 + 2688);
    xsi_process_wait(t2, t3);

LAB22:    *((char **)t1) = &&LAB23;
    goto LAB1;

LAB17:    goto LAB16;

LAB19:    goto LAB17;

LAB20:    xsi_set_current_line(65, ng0);
    t2 = (t0 + 5436);
    t6 = (t0 + 3328);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t2, 4U);
    xsi_driver_first_trans_fast(t6);
    xsi_set_current_line(65, ng0);
    t3 = (50 * 1000LL);
    t2 = (t0 + 2688);
    xsi_process_wait(t2, t3);

LAB26:    *((char **)t1) = &&LAB27;
    goto LAB1;

LAB21:    goto LAB20;

LAB23:    goto LAB21;

LAB24:    xsi_set_current_line(66, ng0);
    t2 = (t0 + 5440);
    t6 = (t0 + 3328);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t2, 4U);
    xsi_driver_first_trans_fast(t6);
    xsi_set_current_line(66, ng0);
    t3 = (50 * 1000LL);
    t2 = (t0 + 2688);
    xsi_process_wait(t2, t3);

LAB30:    *((char **)t1) = &&LAB31;
    goto LAB1;

LAB25:    goto LAB24;

LAB27:    goto LAB25;

LAB28:    xsi_set_current_line(67, ng0);
    t2 = (t0 + 5444);
    t6 = (t0 + 3328);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t2, 4U);
    xsi_driver_first_trans_fast(t6);
    xsi_set_current_line(67, ng0);
    t3 = (50 * 1000LL);
    t2 = (t0 + 2688);
    xsi_process_wait(t2, t3);

LAB34:    *((char **)t1) = &&LAB35;
    goto LAB1;

LAB29:    goto LAB28;

LAB31:    goto LAB29;

LAB32:    xsi_set_current_line(68, ng0);
    t2 = (t0 + 5448);
    t6 = (t0 + 3328);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t2, 4U);
    xsi_driver_first_trans_fast(t6);
    xsi_set_current_line(68, ng0);
    t3 = (50 * 1000LL);
    t2 = (t0 + 2688);
    xsi_process_wait(t2, t3);

LAB38:    *((char **)t1) = &&LAB39;
    goto LAB1;

LAB33:    goto LAB32;

LAB35:    goto LAB33;

LAB36:    xsi_set_current_line(69, ng0);
    t2 = (t0 + 5452);
    t6 = (t0 + 3328);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t2, 4U);
    xsi_driver_first_trans_fast(t6);
    xsi_set_current_line(69, ng0);
    t3 = (50 * 1000LL);
    t2 = (t0 + 2688);
    xsi_process_wait(t2, t3);

LAB42:    *((char **)t1) = &&LAB43;
    goto LAB1;

LAB37:    goto LAB36;

LAB39:    goto LAB37;

LAB40:    xsi_set_current_line(70, ng0);
    t2 = (t0 + 5456);
    t6 = (t0 + 3328);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t2, 4U);
    xsi_driver_first_trans_fast(t6);
    xsi_set_current_line(70, ng0);
    t3 = (50 * 1000LL);
    t2 = (t0 + 2688);
    xsi_process_wait(t2, t3);

LAB46:    *((char **)t1) = &&LAB47;
    goto LAB1;

LAB41:    goto LAB40;

LAB43:    goto LAB41;

LAB44:    xsi_set_current_line(71, ng0);
    t2 = (t0 + 5460);
    t6 = (t0 + 3328);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t2, 4U);
    xsi_driver_first_trans_fast(t6);
    xsi_set_current_line(71, ng0);
    t3 = (50 * 1000LL);
    t2 = (t0 + 2688);
    xsi_process_wait(t2, t3);

LAB50:    *((char **)t1) = &&LAB51;
    goto LAB1;

LAB45:    goto LAB44;

LAB47:    goto LAB45;

LAB48:    xsi_set_current_line(72, ng0);
    t2 = (t0 + 5464);
    t6 = (t0 + 3328);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t2, 4U);
    xsi_driver_first_trans_fast(t6);
    xsi_set_current_line(72, ng0);
    t3 = (50 * 1000LL);
    t2 = (t0 + 2688);
    xsi_process_wait(t2, t3);

LAB54:    *((char **)t1) = &&LAB55;
    goto LAB1;

LAB49:    goto LAB48;

LAB51:    goto LAB49;

LAB52:    xsi_set_current_line(73, ng0);
    t2 = (t0 + 5468);
    t6 = (t0 + 3328);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t2, 4U);
    xsi_driver_first_trans_fast(t6);
    xsi_set_current_line(73, ng0);
    t3 = (50 * 1000LL);
    t2 = (t0 + 2688);
    xsi_process_wait(t2, t3);

LAB58:    *((char **)t1) = &&LAB59;
    goto LAB1;

LAB53:    goto LAB52;

LAB55:    goto LAB53;

LAB56:    xsi_set_current_line(74, ng0);
    t2 = (t0 + 5472);
    t6 = (t0 + 3328);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t2, 4U);
    xsi_driver_first_trans_fast(t6);
    xsi_set_current_line(74, ng0);
    t3 = (50 * 1000LL);
    t2 = (t0 + 2688);
    xsi_process_wait(t2, t3);

LAB62:    *((char **)t1) = &&LAB63;
    goto LAB1;

LAB57:    goto LAB56;

LAB59:    goto LAB57;

LAB60:    xsi_set_current_line(75, ng0);
    t2 = (t0 + 5476);
    t6 = (t0 + 3328);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t2, 4U);
    xsi_driver_first_trans_fast(t6);
    xsi_set_current_line(75, ng0);
    t3 = (50 * 1000LL);
    t2 = (t0 + 2688);
    xsi_process_wait(t2, t3);

LAB66:    *((char **)t1) = &&LAB67;
    goto LAB1;

LAB61:    goto LAB60;

LAB63:    goto LAB61;

LAB64:    xsi_set_current_line(76, ng0);
    t2 = (t0 + 5480);
    t6 = (t0 + 3328);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t2, 4U);
    xsi_driver_first_trans_fast(t6);
    xsi_set_current_line(76, ng0);
    t3 = (50 * 1000LL);
    t2 = (t0 + 2688);
    xsi_process_wait(t2, t3);

LAB70:    *((char **)t1) = &&LAB71;
    goto LAB1;

LAB65:    goto LAB64;

LAB67:    goto LAB65;

LAB68:    xsi_set_current_line(77, ng0);
    t2 = (t0 + 5484);
    t6 = (t0 + 3328);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t2, 4U);
    xsi_driver_first_trans_fast(t6);
    xsi_set_current_line(77, ng0);
    t3 = (50 * 1000LL);
    t2 = (t0 + 2688);
    xsi_process_wait(t2, t3);

LAB74:    *((char **)t1) = &&LAB75;
    goto LAB1;

LAB69:    goto LAB68;

LAB71:    goto LAB69;

LAB72:    xsi_set_current_line(78, ng0);

LAB78:    *((char **)t1) = &&LAB79;
    goto LAB1;

LAB73:    goto LAB72;

LAB75:    goto LAB73;

LAB76:    goto LAB2;

LAB77:    goto LAB76;

LAB79:    goto LAB77;

}


extern void work_a_0021891027_2372691052_init()
{
	static char *pe[] = {(void *)work_a_0021891027_2372691052_p_0,(void *)work_a_0021891027_2372691052_p_1};
	xsi_register_didat("work_a_0021891027_2372691052", "isim/test_zad_3_1_isim_beh.exe.sim/work/a_0021891027_2372691052.didat");
	xsi_register_executes(pe);
}
