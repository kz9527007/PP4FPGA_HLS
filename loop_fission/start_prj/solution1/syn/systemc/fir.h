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

#include "fir_shift_reg.h"

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
    fir_shift_reg* shift_reg_U;
    sc_signal< sc_lv<7> > ap_CS_fsm;
    sc_signal< sc_logic > ap_CS_fsm_state1;
    sc_signal< sc_lv<4> > shift_reg_address0;
    sc_signal< sc_logic > shift_reg_ce0;
    sc_signal< sc_logic > shift_reg_we0;
    sc_signal< sc_lv<32> > shift_reg_d0;
    sc_signal< sc_lv<32> > shift_reg_q0;
    sc_signal< sc_lv<4> > i_2_fu_149_p2;
    sc_signal< sc_lv<4> > i_2_reg_206;
    sc_signal< sc_logic > ap_CS_fsm_state2;
    sc_signal< sc_lv<1> > tmp_fu_143_p2;
    sc_signal< sc_logic > ap_CS_fsm_state4;
    sc_signal< sc_lv<1> > tmp_1_fu_169_p3;
    sc_signal< sc_lv<5> > i_3_fu_183_p2;
    sc_signal< sc_lv<5> > i_3_reg_229;
    sc_signal< sc_lv<32> > shift_reg_load_1_reg_234;
    sc_signal< sc_logic > ap_CS_fsm_state5;
    sc_signal< sc_lv<32> > c_load_reg_239;
    sc_signal< sc_lv<32> > tmp_6_fu_189_p2;
    sc_signal< sc_lv<32> > tmp_6_reg_244;
    sc_signal< sc_logic > ap_CS_fsm_state6;
    sc_signal< sc_lv<32> > acc_1_fu_193_p2;
    sc_signal< sc_logic > ap_CS_fsm_state7;
    sc_signal< sc_lv<4> > i_reg_107;
    sc_signal< sc_logic > ap_CS_fsm_state3;
    sc_signal< sc_lv<32> > acc_reg_119;
    sc_signal< sc_lv<5> > i_1_reg_132;
    sc_signal< sc_lv<64> > tmp_2_fu_155_p1;
    sc_signal< sc_lv<64> > tmp_3_fu_160_p1;
    sc_signal< sc_lv<64> > tmp_5_fu_177_p1;
    sc_signal< sc_lv<32> > i_1_cast_fu_165_p1;
    sc_signal< sc_lv<7> > ap_NS_fsm;
    static const sc_logic ap_const_logic_1;
    static const sc_logic ap_const_logic_0;
    static const sc_lv<7> ap_ST_fsm_state1;
    static const sc_lv<7> ap_ST_fsm_state2;
    static const sc_lv<7> ap_ST_fsm_state3;
    static const sc_lv<7> ap_ST_fsm_state4;
    static const sc_lv<7> ap_ST_fsm_state5;
    static const sc_lv<7> ap_ST_fsm_state6;
    static const sc_lv<7> ap_ST_fsm_state7;
    static const sc_lv<32> ap_const_lv32_0;
    static const sc_lv<32> ap_const_lv32_1;
    static const sc_lv<1> ap_const_lv1_0;
    static const sc_lv<32> ap_const_lv32_3;
    static const sc_lv<32> ap_const_lv32_4;
    static const sc_lv<32> ap_const_lv32_5;
    static const sc_lv<32> ap_const_lv32_6;
    static const sc_lv<4> ap_const_lv4_A;
    static const sc_lv<32> ap_const_lv32_2;
    static const sc_lv<1> ap_const_lv1_1;
    static const sc_lv<5> ap_const_lv5_A;
    static const sc_lv<4> ap_const_lv4_0;
    static const sc_lv<4> ap_const_lv4_F;
    static const sc_lv<5> ap_const_lv5_1F;
    static const bool ap_const_boolean_1;
    // Thread declarations
    void thread_ap_clk_no_reset_();
    void thread_acc_1_fu_193_p2();
    void thread_ap_CS_fsm_state1();
    void thread_ap_CS_fsm_state2();
    void thread_ap_CS_fsm_state3();
    void thread_ap_CS_fsm_state4();
    void thread_ap_CS_fsm_state5();
    void thread_ap_CS_fsm_state6();
    void thread_ap_CS_fsm_state7();
    void thread_ap_done();
    void thread_ap_idle();
    void thread_ap_ready();
    void thread_c_address0();
    void thread_c_ce0();
    void thread_i_1_cast_fu_165_p1();
    void thread_i_2_fu_149_p2();
    void thread_i_3_fu_183_p2();
    void thread_shift_reg_address0();
    void thread_shift_reg_ce0();
    void thread_shift_reg_d0();
    void thread_shift_reg_we0();
    void thread_tmp_1_fu_169_p3();
    void thread_tmp_2_fu_155_p1();
    void thread_tmp_3_fu_160_p1();
    void thread_tmp_5_fu_177_p1();
    void thread_tmp_6_fu_189_p2();
    void thread_tmp_fu_143_p2();
    void thread_y();
    void thread_y_ap_vld();
    void thread_ap_NS_fsm();
    void thread_hdltv_gen();
};

}

using namespace ap_rtl;

#endif
