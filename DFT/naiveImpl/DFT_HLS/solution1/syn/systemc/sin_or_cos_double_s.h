// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2018.2
// Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#ifndef _sin_or_cos_double_s_HH_
#define _sin_or_cos_double_s_HH_

#include "systemc.h"
#include "AESL_pkg.h"

#include "scaled_fixed2ieee.h"
#include "dft_mul_170ns_53nhbi.h"
#include "dft_mux_83_1_1_1.h"
#include "dft_mul_49ns_49nsibs.h"
#include "dft_mul_56ns_52s_jbC.h"
#include "dft_mul_49ns_44s_kbM.h"
#include "dft_mul_42ns_33nslbW.h"
#include "dft_mul_64s_63ns_mb6.h"
#include "dft_mux_164_1_1_1.h"
#include "sin_or_cos_doublebkb.h"
#include "sin_or_cos_doublecud.h"
#include "sin_or_cos_doubledEe.h"
#include "sin_or_cos_doubleeOg.h"
#include "sin_or_cos_doublefYi.h"
#include "sin_or_cos_doubleg8j.h"

namespace ap_rtl {

struct sin_or_cos_double_s : public sc_module {
    // Port declarations 9
    sc_in_clk ap_clk;
    sc_in< sc_logic > ap_rst;
    sc_in< sc_logic > ap_start;
    sc_out< sc_logic > ap_done;
    sc_out< sc_logic > ap_idle;
    sc_out< sc_logic > ap_ready;
    sc_in< sc_lv<64> > t_in;
    sc_in< sc_logic > do_cos;
    sc_out< sc_lv<64> > ap_return;
    sc_signal< sc_logic > ap_var_for_const0;
    sc_signal< sc_lv<1> > ap_var_for_const1;
    sc_signal< sc_lv<1> > ap_var_for_const2;


    // Module declarations
    sin_or_cos_double_s(sc_module_name name);
    SC_HAS_PROCESS(sin_or_cos_double_s);

    ~sin_or_cos_double_s();

    sc_trace_file* mVcdFile;

    sin_or_cos_doublebkb* ref_4oPi_table_256_V_U;
    sin_or_cos_doublecud* fourth_order_double_4_U;
    sin_or_cos_doubledEe* fourth_order_double_5_U;
    sin_or_cos_doubleeOg* fourth_order_double_6_U;
    sin_or_cos_doublefYi* fourth_order_double_7_U;
    sin_or_cos_doubleg8j* fourth_order_double_s_U;
    scaled_fixed2ieee* grp_scaled_fixed2ieee_fu_268;
    dft_mul_170ns_53nhbi<1,5,170,53,223>* dft_mul_170ns_53nhbi_U6;
    dft_mux_83_1_1_1<1,1,1,1,1,1,1,1,1,1,3,1>* dft_mux_83_1_1_1_U7;
    dft_mul_49ns_49nsibs<1,2,49,49,98>* dft_mul_49ns_49nsibs_U8;
    dft_mul_49ns_49nsibs<1,2,49,49,98>* dft_mul_49ns_49nsibs_U9;
    dft_mul_49ns_49nsibs<1,2,49,49,98>* dft_mul_49ns_49nsibs_U10;
    dft_mul_56ns_52s_jbC<1,2,56,52,108>* dft_mul_56ns_52s_jbC_U11;
    dft_mul_49ns_44s_kbM<1,2,49,44,93>* dft_mul_49ns_44s_kbM_U12;
    dft_mul_42ns_33nslbW<1,2,42,33,75>* dft_mul_42ns_33nslbW_U13;
    dft_mul_64s_63ns_mb6<1,5,64,63,126>* dft_mul_64s_63ns_mb6_U14;
    dft_mux_164_1_1_1<1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,4,1>* dft_mux_164_1_1_1_U15;
    dft_mux_164_1_1_1<1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,4,1>* dft_mux_164_1_1_1_U16;
    sc_signal< sc_lv<24> > ap_CS_fsm;
    sc_signal< sc_logic > ap_CS_fsm_state1;
    sc_signal< sc_lv<4> > ref_4oPi_table_256_V_address0;
    sc_signal< sc_logic > ref_4oPi_table_256_V_ce0;
    sc_signal< sc_lv<256> > ref_4oPi_table_256_V_q0;
    sc_signal< sc_lv<8> > fourth_order_double_4_address0;
    sc_signal< sc_logic > fourth_order_double_4_ce0;
    sc_signal< sc_lv<59> > fourth_order_double_4_q0;
    sc_signal< sc_lv<8> > fourth_order_double_5_address0;
    sc_signal< sc_logic > fourth_order_double_5_ce0;
    sc_signal< sc_lv<52> > fourth_order_double_5_q0;
    sc_signal< sc_lv<8> > fourth_order_double_6_address0;
    sc_signal< sc_logic > fourth_order_double_6_ce0;
    sc_signal< sc_lv<44> > fourth_order_double_6_q0;
    sc_signal< sc_lv<8> > fourth_order_double_7_address0;
    sc_signal< sc_logic > fourth_order_double_7_ce0;
    sc_signal< sc_lv<33> > fourth_order_double_7_q0;
    sc_signal< sc_lv<8> > fourth_order_double_s_address0;
    sc_signal< sc_logic > fourth_order_double_s_ce0;
    sc_signal< sc_lv<25> > fourth_order_double_s_q0;
    sc_signal< sc_lv<1> > p_Result_19_reg_1102;
    sc_signal< sc_lv<11> > loc_V_fu_286_p4;
    sc_signal< sc_lv<11> > loc_V_reg_1108;
    sc_signal< sc_lv<52> > loc_V_1_fu_296_p1;
    sc_signal< sc_lv<52> > loc_V_1_reg_1115;
    sc_signal< sc_lv<1> > closepath_fu_300_p2;
    sc_signal< sc_lv<1> > closepath_reg_1121;
    sc_signal< sc_lv<7> > tmp_13_fu_335_p1;
    sc_signal< sc_lv<7> > tmp_13_reg_1132;
    sc_signal< sc_lv<170> > ret_V_reg_1137;
    sc_signal< sc_logic > ap_CS_fsm_state2;
    sc_signal< sc_logic > ap_CS_fsm_state3;
    sc_signal< sc_lv<1> > tmp_7_fu_378_p2;
    sc_signal< sc_lv<1> > tmp_7_reg_1152;
    sc_signal< sc_lv<124> > p_Val2_8_reg_1158;
    sc_signal< sc_logic > ap_CS_fsm_state7;
    sc_signal< sc_lv<3> > tmp_14_i_reg_1164;
    sc_signal< sc_lv<3> > p_Val2_29_fu_403_p3;
    sc_signal< sc_lv<3> > p_Val2_29_reg_1169;
    sc_signal< sc_logic > ap_CS_fsm_state8;
    sc_signal< sc_lv<124> > p_Val2_11_fu_418_p3;
    sc_signal< sc_lv<124> > p_Val2_11_reg_1175;
    sc_signal< sc_lv<61> > p_Result_i2_i_reg_1180;
    sc_signal< sc_lv<63> > Mx_V_reg_1185;
    sc_signal< sc_logic > ap_CS_fsm_state9;
    sc_signal< sc_lv<11> > Ex_V_fu_507_p2;
    sc_signal< sc_lv<11> > Ex_V_reg_1192;
    sc_signal< sc_lv<1> > isNeg_reg_1198;
    sc_signal< sc_lv<1> > tmp_6_fu_521_p2;
    sc_signal< sc_lv<1> > tmp_6_reg_1204;
    sc_signal< sc_lv<1> > tmp_8_fu_526_p2;
    sc_signal< sc_lv<1> > tmp_8_reg_1210;
    sc_signal< sc_lv<7> > p_Result_i_reg_1218;
    sc_signal< sc_logic > ap_CS_fsm_state10;
    sc_signal< sc_lv<56> > p_Val2_15_fu_582_p1;
    sc_signal< sc_lv<56> > p_Val2_15_reg_1223;
    sc_signal< sc_lv<49> > tmp_i1_reg_1228;
    sc_signal< sc_logic > ap_CS_fsm_state11;
    sc_signal< sc_lv<1> > tmp_fu_596_p10;
    sc_signal< sc_lv<1> > tmp_reg_1239;
    sc_signal< sc_lv<98> > OP1_V_fu_617_p1;
    sc_signal< sc_lv<98> > OP1_V_reg_1245;
    sc_signal< sc_lv<1> > not_do_cos_i_fu_626_p2;
    sc_signal< sc_lv<1> > not_do_cos_i_reg_1252;
    sc_signal< sc_lv<64> > tmp_30_i_fu_645_p1;
    sc_signal< sc_lv<64> > tmp_30_i_reg_1257;
    sc_signal< sc_lv<49> > tmp_25_i_reg_1274;
    sc_signal< sc_logic > ap_CS_fsm_state12;
    sc_signal< sc_lv<52> > fourth_order_double_10_reg_1280;
    sc_signal< sc_lv<44> > fourth_order_double_12_reg_1285;
    sc_signal< sc_lv<98> > OP2_V_fu_661_p1;
    sc_signal< sc_logic > ap_CS_fsm_state13;
    sc_signal< sc_lv<42> > tmp_27_i_reg_1332;
    sc_signal< sc_logic > ap_CS_fsm_state14;
    sc_signal< sc_lv<35> > tmp_29_i_reg_1337;
    sc_signal< sc_lv<59> > p_Val2_19_reg_1342;
    sc_signal< sc_lv<56> > tmp_12_i_reg_1347;
    sc_signal< sc_lv<48> > tmp_14_i1_reg_1352;
    sc_signal< sc_lv<33> > fourth_order_double_14_reg_1357;
    sc_signal< sc_lv<25> > fourth_order_double_16_reg_1362;
    sc_signal< sc_logic > ap_CS_fsm_state15;
    sc_signal< sc_lv<29> > tmp_2_reg_1377;
    sc_signal< sc_lv<64> > p_Val2_22_fu_796_p2;
    sc_signal< sc_lv<64> > p_Val2_22_reg_1382;
    sc_signal< sc_lv<37> > tmp_1_reg_1387;
    sc_signal< sc_logic > ap_CS_fsm_state16;
    sc_signal< sc_lv<1> > cos_basis_fu_817_p3;
    sc_signal< sc_lv<1> > cos_basis_reg_1392;
    sc_signal< sc_logic > ap_CS_fsm_state17;
    sc_signal< sc_lv<64> > r_V_3_fu_834_p2;
    sc_signal< sc_lv<64> > r_V_3_reg_1399;
    sc_signal< sc_logic > ap_CS_fsm_state18;
    sc_signal< sc_lv<63> > result_V_reg_1414;
    sc_signal< sc_logic > ap_CS_fsm_state22;
    sc_signal< sc_lv<12> > r_V_fu_880_p2;
    sc_signal< sc_lv<12> > r_V_reg_1419;
    sc_signal< sc_lv<64> > grp_scaled_fixed2ieee_fu_268_ap_return;
    sc_signal< sc_lv<64> > resultf_reg_1424;
    sc_signal< sc_logic > ap_CS_fsm_state23;
    sc_signal< sc_logic > grp_scaled_fixed2ieee_fu_268_ap_idle;
    sc_signal< sc_logic > grp_scaled_fixed2ieee_fu_268_ap_ready;
    sc_signal< sc_logic > grp_scaled_fixed2ieee_fu_268_ap_done;
    sc_signal< sc_logic > grp_scaled_fixed2ieee_fu_268_ap_start;
    sc_signal< sc_logic > grp_scaled_fixed2ieee_fu_268_ap_start_reg;
    sc_signal< sc_lv<64> > tmp_2_i_i_fu_330_p1;
    sc_signal< sc_lv<64> > p_Val2_s_fu_274_p1;
    sc_signal< sc_lv<11> > expv_op_fu_306_p2;
    sc_signal< sc_lv<11> > addr_V_fu_312_p3;
    sc_signal< sc_lv<4> > p_Result_i_i_fu_320_p4;
    sc_signal< sc_lv<256> > tmp_4_i_i_fu_339_p1;
    sc_signal< sc_lv<256> > r_V_4_fu_342_p2;
    sc_signal< sc_lv<53> > p_Result_20_fu_358_p3;
    sc_signal< sc_lv<170> > grp_fu_372_p0;
    sc_signal< sc_lv<53> > grp_fu_372_p1;
    sc_signal< sc_lv<223> > grp_fu_372_p2;
    sc_signal< sc_lv<1> > tmp_14_fu_409_p1;
    sc_signal< sc_lv<124> > p_Val2_i_fu_413_p2;
    sc_signal< sc_lv<11> > tmp_i_fu_435_p2;
    sc_signal< sc_lv<62> > p_Result_21_fu_447_p3;
    sc_signal< sc_lv<62> > p_Result_22_fu_454_p4;
    sc_signal< sc_lv<64> > p_Result_23_fu_464_p3;
    sc_signal< sc_lv<64> > tmp_i3_i_fu_472_p3;
    sc_signal< sc_lv<6> > Mx_zeros_V_fu_480_p1;
    sc_signal< sc_lv<124> > tmp_15_i_fu_484_p1;
    sc_signal< sc_lv<124> > p_Val2_13_fu_488_p2;
    sc_signal< sc_lv<11> > storemerge_i_fu_440_p3;
    sc_signal< sc_lv<11> > tmp_18_i_fu_503_p1;
    sc_signal< sc_lv<12> > sh_cast_fu_531_p1;
    sc_signal< sc_lv<12> > tmp_20_i_fu_534_p2;
    sc_signal< sc_lv<12> > sh_assign_fu_540_p3;
    sc_signal< sc_lv<32> > sh_assign_2_cast_fu_547_p1;
    sc_signal< sc_lv<63> > tmp_21_i_fu_551_p1;
    sc_signal< sc_lv<63> > tmp_22_i_fu_555_p2;
    sc_signal< sc_lv<63> > tmp_23_i_fu_560_p2;
    sc_signal< sc_lv<63> > p_Val2_14_fu_565_p3;
    sc_signal< sc_lv<49> > grp_fu_620_p0;
    sc_signal< sc_lv<49> > grp_fu_620_p1;
    sc_signal< sc_lv<1> > not_do_cos_i_fu_626_p0;
    sc_signal< sc_lv<1> > sin_basis_fu_632_p2;
    sc_signal< sc_lv<8> > p_Result_24_fu_638_p3;
    sc_signal< sc_lv<98> > grp_fu_620_p2;
    sc_signal< sc_lv<49> > grp_fu_664_p0;
    sc_signal< sc_lv<49> > grp_fu_664_p1;
    sc_signal< sc_lv<49> > grp_fu_669_p0;
    sc_signal< sc_lv<49> > grp_fu_669_p1;
    sc_signal< sc_lv<56> > grp_fu_681_p0;
    sc_signal< sc_lv<49> > grp_fu_693_p0;
    sc_signal< sc_lv<98> > grp_fu_664_p2;
    sc_signal< sc_lv<98> > grp_fu_669_p2;
    sc_signal< sc_lv<108> > grp_fu_681_p2;
    sc_signal< sc_lv<93> > grp_fu_693_p2;
    sc_signal< sc_lv<42> > grp_fu_752_p0;
    sc_signal< sc_lv<33> > grp_fu_752_p1;
    sc_signal< sc_lv<35> > p_Val2_4_fu_764_p0;
    sc_signal< sc_lv<25> > p_Val2_4_fu_764_p1;
    sc_signal< sc_lv<60> > p_Val2_4_fu_764_p2;
    sc_signal< sc_lv<63> > p_Val2_20_fu_739_p3;
    sc_signal< sc_lv<64> > tmp_32_i_fu_780_p1;
    sc_signal< sc_lv<64> > tmp_33_i_fu_784_p1;
    sc_signal< sc_lv<64> > p_Val2_21_fu_787_p2;
    sc_signal< sc_lv<64> > tmp_35_i_cast_fu_793_p1;
    sc_signal< sc_lv<75> > grp_fu_752_p2;
    sc_signal< sc_lv<1> > cos_basis_fu_817_p0;
    sc_signal< sc_lv<1> > tmp_s_fu_812_p2;
    sc_signal< sc_lv<64> > tmp_37_i_cast_fu_823_p1;
    sc_signal< sc_lv<64> > p_Val2_23_fu_826_p2;
    sc_signal< sc_lv<64> > tmp_39_i_cast_fu_831_p1;
    sc_signal< sc_lv<63> > Mx_V_read_assign_fu_840_p3;
    sc_signal< sc_lv<63> > grp_fu_853_p1;
    sc_signal< sc_lv<126> > grp_fu_853_p2;
    sc_signal< sc_lv<11> > p_Ex_V_ret_fu_859_p3;
    sc_signal< sc_lv<12> > rhs_V_fu_876_p1;
    sc_signal< sc_logic > ap_CS_fsm_state24;
    sc_signal< sc_lv<64> > p_Val2_25_fu_887_p1;
    sc_signal< sc_lv<4> > p_Result_26_fu_912_p3;
    sc_signal< sc_lv<1> > tmp_3_fu_918_p18;
    sc_signal< sc_lv<1> > tmp_4_fu_956_p18;
    sc_signal< sc_lv<1> > p_cast_cast_fu_1009_p0;
    sc_signal< sc_lv<1> > tmp_5_fu_994_p3;
    sc_signal< sc_lv<1> > tmp_9_fu_1021_p2;
    sc_signal< sc_lv<1> > not_tmp_s_fu_1016_p2;
    sc_signal< sc_lv<1> > p_Result_25_fu_890_p3;
    sc_signal< sc_lv<11> > loc_V_2_fu_898_p4;
    sc_signal< sc_lv<1> > or_cond_fu_1001_p2;
    sc_signal< sc_lv<1> > p_Result_s_fu_1005_p2;
    sc_signal< sc_lv<1> > p_Result_s_39_fu_1026_p3;
    sc_signal< sc_lv<11> > p_cast_cast_fu_1009_p3;
    sc_signal< sc_lv<11> > p_Result_s_40_fu_1034_p3;
    sc_signal< sc_lv<1> > not_or_cond_demorgan_fu_1057_p2;
    sc_signal< sc_lv<1> > not_or_cond_fu_1061_p2;
    sc_signal< sc_lv<1> > tmp_10_fu_1075_p2;
    sc_signal< sc_lv<52> > p_Result_1_cast_fu_1067_p3;
    sc_signal< sc_lv<52> > loc_V_3_fu_908_p1;
    sc_signal< sc_lv<1> > p_Result_s_41_fu_1041_p3;
    sc_signal< sc_lv<11> > ret_V_6_fu_1049_p3;
    sc_signal< sc_lv<52> > ret_V_7_fu_1080_p3;
    sc_signal< sc_lv<64> > p_Result_27_fu_1088_p4;
    sc_signal< sc_lv<24> > ap_NS_fsm;
    sc_signal< sc_lv<223> > grp_fu_372_p00;
    sc_signal< sc_lv<223> > grp_fu_372_p10;
    sc_signal< sc_lv<108> > grp_fu_681_p00;
    sc_signal< sc_lv<93> > grp_fu_693_p00;
    sc_signal< sc_lv<75> > grp_fu_752_p00;
    sc_signal< sc_lv<75> > grp_fu_752_p10;
    sc_signal< sc_lv<126> > grp_fu_853_p10;
    sc_signal< sc_lv<60> > p_Val2_4_fu_764_p00;
    sc_signal< sc_lv<60> > p_Val2_4_fu_764_p10;
    static const sc_logic ap_const_logic_1;
    static const sc_logic ap_const_logic_0;
    static const sc_lv<24> ap_ST_fsm_state1;
    static const sc_lv<24> ap_ST_fsm_state2;
    static const sc_lv<24> ap_ST_fsm_state3;
    static const sc_lv<24> ap_ST_fsm_state4;
    static const sc_lv<24> ap_ST_fsm_state5;
    static const sc_lv<24> ap_ST_fsm_state6;
    static const sc_lv<24> ap_ST_fsm_state7;
    static const sc_lv<24> ap_ST_fsm_state8;
    static const sc_lv<24> ap_ST_fsm_state9;
    static const sc_lv<24> ap_ST_fsm_state10;
    static const sc_lv<24> ap_ST_fsm_state11;
    static const sc_lv<24> ap_ST_fsm_state12;
    static const sc_lv<24> ap_ST_fsm_state13;
    static const sc_lv<24> ap_ST_fsm_state14;
    static const sc_lv<24> ap_ST_fsm_state15;
    static const sc_lv<24> ap_ST_fsm_state16;
    static const sc_lv<24> ap_ST_fsm_state17;
    static const sc_lv<24> ap_ST_fsm_state18;
    static const sc_lv<24> ap_ST_fsm_state19;
    static const sc_lv<24> ap_ST_fsm_state20;
    static const sc_lv<24> ap_ST_fsm_state21;
    static const sc_lv<24> ap_ST_fsm_state22;
    static const sc_lv<24> ap_ST_fsm_state23;
    static const sc_lv<24> ap_ST_fsm_state24;
    static const sc_lv<32> ap_const_lv32_0;
    static const sc_lv<32> ap_const_lv32_1;
    static const sc_lv<32> ap_const_lv32_2;
    static const sc_lv<32> ap_const_lv32_6;
    static const sc_lv<1> ap_const_lv1_0;
    static const sc_lv<32> ap_const_lv32_7;
    static const sc_lv<32> ap_const_lv32_8;
    static const sc_lv<32> ap_const_lv32_9;
    static const sc_lv<32> ap_const_lv32_A;
    static const sc_lv<32> ap_const_lv32_B;
    static const sc_lv<32> ap_const_lv32_C;
    static const sc_lv<32> ap_const_lv32_D;
    static const sc_lv<32> ap_const_lv32_E;
    static const sc_lv<32> ap_const_lv32_F;
    static const sc_lv<32> ap_const_lv32_10;
    static const sc_lv<32> ap_const_lv32_11;
    static const sc_lv<32> ap_const_lv32_15;
    static const sc_lv<32> ap_const_lv32_16;
    static const sc_lv<32> ap_const_lv32_3F;
    static const sc_lv<32> ap_const_lv32_34;
    static const sc_lv<32> ap_const_lv32_3E;
    static const sc_lv<11> ap_const_lv11_3FE;
    static const sc_lv<11> ap_const_lv11_44D;
    static const sc_lv<11> ap_const_lv11_4A;
    static const sc_lv<32> ap_const_lv32_56;
    static const sc_lv<32> ap_const_lv32_FF;
    static const sc_lv<1> ap_const_lv1_1;
    static const sc_lv<52> ap_const_lv52_0;
    static const sc_lv<32> ap_const_lv32_2B;
    static const sc_lv<32> ap_const_lv32_A6;
    static const sc_lv<32> ap_const_lv32_A7;
    static const sc_lv<32> ap_const_lv32_A9;
    static const sc_lv<3> ap_const_lv3_0;
    static const sc_lv<124> ap_const_lv124_0;
    static const sc_lv<32> ap_const_lv32_7B;
    static const sc_lv<11> ap_const_lv11_403;
    static const sc_lv<11> ap_const_lv11_0;
    static const sc_lv<32> ap_const_lv32_3D;
    static const sc_lv<2> ap_const_lv2_3;
    static const sc_lv<11> ap_const_lv11_7FF;
    static const sc_lv<12> ap_const_lv12_0;
    static const sc_lv<32> ap_const_lv32_38;
    static const sc_lv<32> ap_const_lv32_37;
    static const sc_lv<32> ap_const_lv32_31;
    static const sc_lv<32> ap_const_lv32_61;
    static const sc_lv<32> ap_const_lv32_6B;
    static const sc_lv<32> ap_const_lv32_2D;
    static const sc_lv<32> ap_const_lv32_5C;
    static const sc_lv<4> ap_const_lv4_0;
    static const sc_lv<32> ap_const_lv32_1F;
    static const sc_lv<32> ap_const_lv32_3B;
    static const sc_lv<32> ap_const_lv32_26;
    static const sc_lv<32> ap_const_lv32_4A;
    static const sc_lv<63> ap_const_lv63_7FFFFFFFFFFFFFFF;
    static const sc_lv<32> ap_const_lv32_7D;
    static const sc_lv<32> ap_const_lv32_17;
    static const sc_lv<11> ap_const_lv11_3FF;
    static const sc_lv<52> ap_const_lv52_FFFFFFFFFFFFF;
    static const bool ap_const_boolean_1;
    // Thread declarations
    void thread_ap_var_for_const0();
    void thread_ap_var_for_const1();
    void thread_ap_var_for_const2();
    void thread_ap_clk_no_reset_();
    void thread_Ex_V_fu_507_p2();
    void thread_Mx_V_read_assign_fu_840_p3();
    void thread_Mx_zeros_V_fu_480_p1();
    void thread_OP1_V_fu_617_p1();
    void thread_OP2_V_fu_661_p1();
    void thread_addr_V_fu_312_p3();
    void thread_ap_CS_fsm_state1();
    void thread_ap_CS_fsm_state10();
    void thread_ap_CS_fsm_state11();
    void thread_ap_CS_fsm_state12();
    void thread_ap_CS_fsm_state13();
    void thread_ap_CS_fsm_state14();
    void thread_ap_CS_fsm_state15();
    void thread_ap_CS_fsm_state16();
    void thread_ap_CS_fsm_state17();
    void thread_ap_CS_fsm_state18();
    void thread_ap_CS_fsm_state2();
    void thread_ap_CS_fsm_state22();
    void thread_ap_CS_fsm_state23();
    void thread_ap_CS_fsm_state24();
    void thread_ap_CS_fsm_state3();
    void thread_ap_CS_fsm_state7();
    void thread_ap_CS_fsm_state8();
    void thread_ap_CS_fsm_state9();
    void thread_ap_done();
    void thread_ap_idle();
    void thread_ap_ready();
    void thread_ap_return();
    void thread_closepath_fu_300_p2();
    void thread_cos_basis_fu_817_p0();
    void thread_cos_basis_fu_817_p3();
    void thread_expv_op_fu_306_p2();
    void thread_fourth_order_double_4_address0();
    void thread_fourth_order_double_4_ce0();
    void thread_fourth_order_double_5_address0();
    void thread_fourth_order_double_5_ce0();
    void thread_fourth_order_double_6_address0();
    void thread_fourth_order_double_6_ce0();
    void thread_fourth_order_double_7_address0();
    void thread_fourth_order_double_7_ce0();
    void thread_fourth_order_double_s_address0();
    void thread_fourth_order_double_s_ce0();
    void thread_grp_fu_372_p0();
    void thread_grp_fu_372_p00();
    void thread_grp_fu_372_p1();
    void thread_grp_fu_372_p10();
    void thread_grp_fu_620_p0();
    void thread_grp_fu_620_p1();
    void thread_grp_fu_664_p0();
    void thread_grp_fu_664_p1();
    void thread_grp_fu_669_p0();
    void thread_grp_fu_669_p1();
    void thread_grp_fu_681_p0();
    void thread_grp_fu_681_p00();
    void thread_grp_fu_693_p0();
    void thread_grp_fu_693_p00();
    void thread_grp_fu_752_p0();
    void thread_grp_fu_752_p00();
    void thread_grp_fu_752_p1();
    void thread_grp_fu_752_p10();
    void thread_grp_fu_853_p1();
    void thread_grp_fu_853_p10();
    void thread_grp_scaled_fixed2ieee_fu_268_ap_start();
    void thread_loc_V_1_fu_296_p1();
    void thread_loc_V_2_fu_898_p4();
    void thread_loc_V_3_fu_908_p1();
    void thread_loc_V_fu_286_p4();
    void thread_not_do_cos_i_fu_626_p0();
    void thread_not_do_cos_i_fu_626_p2();
    void thread_not_or_cond_demorgan_fu_1057_p2();
    void thread_not_or_cond_fu_1061_p2();
    void thread_not_tmp_s_fu_1016_p2();
    void thread_or_cond_fu_1001_p2();
    void thread_p_Ex_V_ret_fu_859_p3();
    void thread_p_Result_1_cast_fu_1067_p3();
    void thread_p_Result_20_fu_358_p3();
    void thread_p_Result_21_fu_447_p3();
    void thread_p_Result_22_fu_454_p4();
    void thread_p_Result_23_fu_464_p3();
    void thread_p_Result_24_fu_638_p3();
    void thread_p_Result_25_fu_890_p3();
    void thread_p_Result_26_fu_912_p3();
    void thread_p_Result_27_fu_1088_p4();
    void thread_p_Result_i_i_fu_320_p4();
    void thread_p_Result_s_39_fu_1026_p3();
    void thread_p_Result_s_40_fu_1034_p3();
    void thread_p_Result_s_41_fu_1041_p3();
    void thread_p_Result_s_fu_1005_p2();
    void thread_p_Val2_11_fu_418_p3();
    void thread_p_Val2_13_fu_488_p2();
    void thread_p_Val2_14_fu_565_p3();
    void thread_p_Val2_15_fu_582_p1();
    void thread_p_Val2_20_fu_739_p3();
    void thread_p_Val2_21_fu_787_p2();
    void thread_p_Val2_22_fu_796_p2();
    void thread_p_Val2_23_fu_826_p2();
    void thread_p_Val2_25_fu_887_p1();
    void thread_p_Val2_29_fu_403_p3();
    void thread_p_Val2_4_fu_764_p0();
    void thread_p_Val2_4_fu_764_p00();
    void thread_p_Val2_4_fu_764_p1();
    void thread_p_Val2_4_fu_764_p10();
    void thread_p_Val2_4_fu_764_p2();
    void thread_p_Val2_i_fu_413_p2();
    void thread_p_Val2_s_fu_274_p1();
    void thread_p_cast_cast_fu_1009_p0();
    void thread_p_cast_cast_fu_1009_p3();
    void thread_r_V_3_fu_834_p2();
    void thread_r_V_4_fu_342_p2();
    void thread_r_V_fu_880_p2();
    void thread_ref_4oPi_table_256_V_address0();
    void thread_ref_4oPi_table_256_V_ce0();
    void thread_ret_V_6_fu_1049_p3();
    void thread_ret_V_7_fu_1080_p3();
    void thread_rhs_V_fu_876_p1();
    void thread_sh_assign_2_cast_fu_547_p1();
    void thread_sh_assign_fu_540_p3();
    void thread_sh_cast_fu_531_p1();
    void thread_sin_basis_fu_632_p2();
    void thread_storemerge_i_fu_440_p3();
    void thread_tmp_10_fu_1075_p2();
    void thread_tmp_13_fu_335_p1();
    void thread_tmp_14_fu_409_p1();
    void thread_tmp_15_i_fu_484_p1();
    void thread_tmp_18_i_fu_503_p1();
    void thread_tmp_20_i_fu_534_p2();
    void thread_tmp_21_i_fu_551_p1();
    void thread_tmp_22_i_fu_555_p2();
    void thread_tmp_23_i_fu_560_p2();
    void thread_tmp_2_i_i_fu_330_p1();
    void thread_tmp_30_i_fu_645_p1();
    void thread_tmp_32_i_fu_780_p1();
    void thread_tmp_33_i_fu_784_p1();
    void thread_tmp_35_i_cast_fu_793_p1();
    void thread_tmp_37_i_cast_fu_823_p1();
    void thread_tmp_39_i_cast_fu_831_p1();
    void thread_tmp_4_i_i_fu_339_p1();
    void thread_tmp_5_fu_994_p3();
    void thread_tmp_6_fu_521_p2();
    void thread_tmp_7_fu_378_p2();
    void thread_tmp_8_fu_526_p2();
    void thread_tmp_9_fu_1021_p2();
    void thread_tmp_i3_i_fu_472_p3();
    void thread_tmp_i_fu_435_p2();
    void thread_tmp_s_fu_812_p2();
    void thread_ap_NS_fsm();
};

}

using namespace ap_rtl;

#endif
