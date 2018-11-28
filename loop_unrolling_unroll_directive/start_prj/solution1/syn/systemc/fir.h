// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2018.2
// Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#ifndef _fir_HH_
#define _fir_HH_

#include "systemc.h"
#include "AESL_pkg.h"


namespace ap_rtl {

struct fir : public sc_module {
    // Port declarations 12
    sc_in_clk ap_clk;
    sc_in< sc_logic > ap_rst;
    sc_in< sc_logic > ap_start;
    sc_out< sc_logic > ap_done;
    sc_out< sc_logic > ap_idle;
    sc_out< sc_logic > ap_ready;
    sc_out< sc_lv<32> > y;
    sc_out< sc_logic > y_ap_vld;
    sc_out< sc_lv<4> > c_address0;
    sc_out< sc_logic > c_ce0;
    sc_in< sc_lv<32> > c_q0;
    sc_in< sc_lv<32> > x;


    // Module declarations
    fir(sc_module_name name);
    SC_HAS_PROCESS(fir);

    ~fir();

    sc_trace_file* mVcdFile;

    ofstream mHdltvinHandle;
    ofstream mHdltvoutHandle;
    sc_signal< sc_lv<11> > ap_CS_fsm;
    sc_signal< sc_logic > ap_CS_fsm_state1;
    sc_signal< sc_lv<32> > shift_reg_9;
    sc_signal< sc_lv<32> > shift_reg_5;
    sc_signal< sc_lv<32> > shift_reg_1;
    sc_signal< sc_lv<32> > shift_reg_0;
    sc_signal< sc_lv<32> > shift_reg_2;
    sc_signal< sc_lv<32> > shift_reg_4;
    sc_signal< sc_lv<32> > shift_reg_6;
    sc_signal< sc_lv<32> > shift_reg_8;
    sc_signal< sc_lv<32> > shift_reg_10;
    sc_signal< sc_lv<32> > shift_reg_3;
    sc_signal< sc_lv<32> > shift_reg_7;
    sc_signal< sc_lv<32> > reg_289;
    sc_signal< sc_logic > ap_CS_fsm_state5;
    sc_signal< sc_lv<4> > tmp_2_reg_583;
    sc_signal< sc_logic > ap_CS_fsm_state7;
    sc_signal< sc_lv<32> > reg_295;
    sc_signal< sc_lv<32> > reg_301;
    sc_signal< sc_lv<32> > reg_307;
    sc_signal< sc_lv<32> > reg_313;
    sc_signal< sc_lv<4> > tmp_2_fu_325_p1;
    sc_signal< sc_logic > ap_CS_fsm_state2;
    sc_signal< sc_lv<1> > tmp_fu_319_p2;
    sc_signal< sc_lv<5> > i_2_1_fu_399_p2;
    sc_signal< sc_lv<5> > i_2_1_reg_591;
    sc_signal< sc_lv<1> > tmp_1_fu_393_p2;
    sc_signal< sc_lv<4> > i_2_2_cast_fu_440_p2;
    sc_signal< sc_lv<4> > i_2_2_cast_reg_604;
    sc_signal< sc_logic > ap_CS_fsm_state3;
    sc_signal< sc_lv<1> > tmp_s_fu_435_p2;
    sc_signal< sc_lv<5> > i_2_3_fu_490_p2;
    sc_signal< sc_lv<5> > i_2_3_reg_617;
    sc_signal< sc_logic > ap_CS_fsm_state4;
    sc_signal< sc_lv<1> > tmp_3_fu_485_p2;
    sc_signal< sc_lv<32> > shift_reg_1_load_2_reg_627;
    sc_signal< sc_lv<32> > shift_reg_3_load_1_reg_632;
    sc_signal< sc_lv<32> > shift_reg_5_load_2_reg_637;
    sc_signal< sc_lv<32> > shift_reg_7_load_1_reg_642;
    sc_signal< sc_lv<32> > shift_reg_9_load_2_reg_647;
    sc_signal< sc_logic > ap_CS_fsm_state8;
    sc_signal< sc_lv<1> > tmp_4_fu_541_p3;
    sc_signal< sc_lv<5> > i_3_fu_558_p2;
    sc_signal< sc_lv<5> > i_3_reg_663;
    sc_signal< sc_lv<32> > c_load_reg_668;
    sc_signal< sc_logic > ap_CS_fsm_state9;
    sc_signal< sc_lv<32> > tmp_6_fu_564_p2;
    sc_signal< sc_lv<32> > tmp_6_reg_673;
    sc_signal< sc_logic > ap_CS_fsm_state10;
    sc_signal< sc_lv<32> > acc_1_fu_569_p2;
    sc_signal< sc_logic > ap_CS_fsm_state11;
    sc_signal< sc_lv<5> > i_reg_120;
    sc_signal< sc_logic > ap_CS_fsm_state6;
    sc_signal< sc_lv<32> > ap_phi_mux_UnifiedRetVal_i_phi_fu_135_p12;
    sc_signal< sc_lv<32> > UnifiedRetVal_i_reg_132;
    sc_signal< sc_lv<32> > ap_phi_mux_UnifiedRetVal_i1_phi_fu_152_p12;
    sc_signal< sc_lv<32> > UnifiedRetVal_i1_reg_149;
    sc_signal< sc_lv<32> > UnifiedRetVal_i2_reg_166;
    sc_signal< sc_lv<32> > acc_reg_183;
    sc_signal< sc_lv<5> > i_1_reg_196;
    sc_signal< sc_lv<32> > UnifiedRetVal_i3_reg_207;
    sc_signal< sc_lv<4> > tmp_7_fu_554_p1;
    sc_signal< sc_lv<64> > tmp_5_fu_549_p1;
    sc_signal< sc_lv<32> > sel_tmp5_fu_355_p3;
    sc_signal< sc_lv<1> > sel_tmp_fu_335_p2;
    sc_signal< sc_lv<1> > sel_tmp4_fu_349_p2;
    sc_signal< sc_lv<32> > sel_tmp1_fu_341_p3;
    sc_signal< sc_lv<5> > i_2_fu_329_p2;
    sc_signal< sc_lv<32> > i_1_cast_fu_537_p1;
    sc_signal< sc_lv<11> > ap_NS_fsm;
    sc_signal< bool > ap_condition_98;
    sc_signal< bool > ap_condition_478;
    sc_signal< bool > ap_condition_216;
    static const sc_logic ap_const_logic_1;
    static const sc_logic ap_const_logic_0;
    static const sc_lv<11> ap_ST_fsm_state1;
    static const sc_lv<11> ap_ST_fsm_state2;
    static const sc_lv<11> ap_ST_fsm_state3;
    static const sc_lv<11> ap_ST_fsm_state4;
    static const sc_lv<11> ap_ST_fsm_state5;
    static const sc_lv<11> ap_ST_fsm_state6;
    static const sc_lv<11> ap_ST_fsm_state7;
    static const sc_lv<11> ap_ST_fsm_state8;
    static const sc_lv<11> ap_ST_fsm_state9;
    static const sc_lv<11> ap_ST_fsm_state10;
    static const sc_lv<11> ap_ST_fsm_state11;
    static const sc_lv<32> ap_const_lv32_0;
    static const sc_lv<32> ap_const_lv32_4;
    static const sc_lv<4> ap_const_lv4_8;
    static const sc_lv<32> ap_const_lv32_6;
    static const sc_lv<4> ap_const_lv4_C;
    static const sc_lv<4> ap_const_lv4_6;
    static const sc_lv<4> ap_const_lv4_A;
    static const sc_lv<4> ap_const_lv4_4;
    static const sc_lv<32> ap_const_lv32_1;
    static const sc_lv<1> ap_const_lv1_1;
    static const sc_lv<4> ap_const_lv4_2;
    static const sc_lv<32> ap_const_lv32_2;
    static const sc_lv<32> ap_const_lv32_3;
    static const sc_lv<32> ap_const_lv32_7;
    static const sc_lv<1> ap_const_lv1_0;
    static const sc_lv<32> ap_const_lv32_8;
    static const sc_lv<32> ap_const_lv32_9;
    static const sc_lv<32> ap_const_lv32_A;
    static const sc_lv<5> ap_const_lv5_A;
    static const sc_lv<32> ap_const_lv32_5;
    static const sc_lv<4> ap_const_lv4_1;
    static const sc_lv<4> ap_const_lv4_3;
    static const sc_lv<4> ap_const_lv4_5;
    static const sc_lv<4> ap_const_lv4_7;
    static const sc_lv<4> ap_const_lv4_9;
    static const sc_lv<4> ap_const_lv4_0;
    static const sc_lv<5> ap_const_lv5_0;
    static const sc_lv<5> ap_const_lv5_1F;
    static const sc_lv<5> ap_const_lv5_1E;
    static const sc_lv<4> ap_const_lv4_D;
    static const sc_lv<5> ap_const_lv5_1C;
    static const bool ap_const_boolean_1;
    // Thread declarations
    void thread_ap_clk_no_reset_();
    void thread_acc_1_fu_569_p2();
    void thread_ap_CS_fsm_state1();
    void thread_ap_CS_fsm_state10();
    void thread_ap_CS_fsm_state11();
    void thread_ap_CS_fsm_state2();
    void thread_ap_CS_fsm_state3();
    void thread_ap_CS_fsm_state4();
    void thread_ap_CS_fsm_state5();
    void thread_ap_CS_fsm_state6();
    void thread_ap_CS_fsm_state7();
    void thread_ap_CS_fsm_state8();
    void thread_ap_CS_fsm_state9();
    void thread_ap_condition_216();
    void thread_ap_condition_478();
    void thread_ap_condition_98();
    void thread_ap_done();
    void thread_ap_idle();
    void thread_ap_phi_mux_UnifiedRetVal_i1_phi_fu_152_p12();
    void thread_ap_phi_mux_UnifiedRetVal_i_phi_fu_135_p12();
    void thread_ap_ready();
    void thread_c_address0();
    void thread_c_ce0();
    void thread_i_1_cast_fu_537_p1();
    void thread_i_2_1_fu_399_p2();
    void thread_i_2_2_cast_fu_440_p2();
    void thread_i_2_3_fu_490_p2();
    void thread_i_2_fu_329_p2();
    void thread_i_3_fu_558_p2();
    void thread_sel_tmp1_fu_341_p3();
    void thread_sel_tmp4_fu_349_p2();
    void thread_sel_tmp5_fu_355_p3();
    void thread_sel_tmp_fu_335_p2();
    void thread_tmp_1_fu_393_p2();
    void thread_tmp_2_fu_325_p1();
    void thread_tmp_3_fu_485_p2();
    void thread_tmp_4_fu_541_p3();
    void thread_tmp_5_fu_549_p1();
    void thread_tmp_6_fu_564_p2();
    void thread_tmp_7_fu_554_p1();
    void thread_tmp_fu_319_p2();
    void thread_tmp_s_fu_435_p2();
    void thread_y();
    void thread_y_ap_vld();
    void thread_ap_NS_fsm();
    void thread_hdltv_gen();
};

}

using namespace ap_rtl;

#endif
