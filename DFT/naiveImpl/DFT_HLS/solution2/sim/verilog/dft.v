// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2018.2
// Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

`timescale 1 ns / 1 ps 

(* CORE_GENERATION_INFO="dft,hls_ip_2018_2,{HLS_INPUT_TYPE=cxx,HLS_INPUT_FLOAT=1,HLS_INPUT_FIXED=0,HLS_INPUT_PART=xa7a100tcsg324-1i,HLS_INPUT_CLOCK=10.000000,HLS_INPUT_ARCH=others,HLS_SYN_CLOCK=8.573000,HLS_SYN_LAT=4853762,HLS_SYN_TPT=none,HLS_SYN_MEM=18,HLS_SYN_DSP=199,HLS_SYN_FF=12531,HLS_SYN_LUT=18213,HLS_VERSION=2018_2}" *)

module dft (
        ap_clk,
        ap_rst,
        ap_start,
        ap_done,
        ap_idle,
        ap_ready,
        sample_real_address0,
        sample_real_ce0,
        sample_real_we0,
        sample_real_d0,
        sample_real_q0,
        sample_imag_address0,
        sample_imag_ce0,
        sample_imag_we0,
        sample_imag_d0,
        sample_imag_q0
);

parameter    ap_ST_fsm_state1 = 44'd1;
parameter    ap_ST_fsm_state2 = 44'd2;
parameter    ap_ST_fsm_state3 = 44'd4;
parameter    ap_ST_fsm_state4 = 44'd8;
parameter    ap_ST_fsm_state5 = 44'd16;
parameter    ap_ST_fsm_state6 = 44'd32;
parameter    ap_ST_fsm_state7 = 44'd64;
parameter    ap_ST_fsm_state8 = 44'd128;
parameter    ap_ST_fsm_state9 = 44'd256;
parameter    ap_ST_fsm_state10 = 44'd512;
parameter    ap_ST_fsm_state11 = 44'd1024;
parameter    ap_ST_fsm_state12 = 44'd2048;
parameter    ap_ST_fsm_state13 = 44'd4096;
parameter    ap_ST_fsm_state14 = 44'd8192;
parameter    ap_ST_fsm_state15 = 44'd16384;
parameter    ap_ST_fsm_state16 = 44'd32768;
parameter    ap_ST_fsm_state17 = 44'd65536;
parameter    ap_ST_fsm_state18 = 44'd131072;
parameter    ap_ST_fsm_state19 = 44'd262144;
parameter    ap_ST_fsm_state20 = 44'd524288;
parameter    ap_ST_fsm_state21 = 44'd1048576;
parameter    ap_ST_fsm_state22 = 44'd2097152;
parameter    ap_ST_fsm_state23 = 44'd4194304;
parameter    ap_ST_fsm_state24 = 44'd8388608;
parameter    ap_ST_fsm_state25 = 44'd16777216;
parameter    ap_ST_fsm_state26 = 44'd33554432;
parameter    ap_ST_fsm_state27 = 44'd67108864;
parameter    ap_ST_fsm_state28 = 44'd134217728;
parameter    ap_ST_fsm_state29 = 44'd268435456;
parameter    ap_ST_fsm_state30 = 44'd536870912;
parameter    ap_ST_fsm_state31 = 44'd1073741824;
parameter    ap_ST_fsm_state32 = 44'd2147483648;
parameter    ap_ST_fsm_state33 = 44'd4294967296;
parameter    ap_ST_fsm_state34 = 44'd8589934592;
parameter    ap_ST_fsm_state35 = 44'd17179869184;
parameter    ap_ST_fsm_state36 = 44'd34359738368;
parameter    ap_ST_fsm_state37 = 44'd68719476736;
parameter    ap_ST_fsm_state38 = 44'd137438953472;
parameter    ap_ST_fsm_state39 = 44'd274877906944;
parameter    ap_ST_fsm_state40 = 44'd549755813888;
parameter    ap_ST_fsm_state41 = 44'd1099511627776;
parameter    ap_ST_fsm_state42 = 44'd2199023255552;
parameter    ap_ST_fsm_state43 = 44'd4398046511104;
parameter    ap_ST_fsm_state44 = 44'd8796093022208;

input   ap_clk;
input   ap_rst;
input   ap_start;
output   ap_done;
output   ap_idle;
output   ap_ready;
output  [7:0] sample_real_address0;
output   sample_real_ce0;
output   sample_real_we0;
output  [31:0] sample_real_d0;
input  [31:0] sample_real_q0;
output  [7:0] sample_imag_address0;
output   sample_imag_ce0;
output   sample_imag_we0;
output  [31:0] sample_imag_d0;
input  [31:0] sample_imag_q0;

reg ap_done;
reg ap_idle;
reg ap_ready;
reg[7:0] sample_real_address0;
reg sample_real_ce0;
reg sample_real_we0;
reg[7:0] sample_imag_address0;
reg sample_imag_ce0;
reg sample_imag_we0;

(* fsm_encoding = "none" *) reg   [43:0] ap_CS_fsm;
wire    ap_CS_fsm_state1;
wire   [31:0] grp_fu_261_p1;
reg   [31:0] reg_278;
wire    ap_CS_fsm_state6;
wire    ap_CS_fsm_state19;
wire   [63:0] grp_fu_270_p1;
reg   [63:0] reg_284;
wire    ap_CS_fsm_state7;
wire    ap_CS_fsm_state24;
wire   [31:0] grp_fu_245_p2;
reg   [31:0] reg_291;
wire    ap_CS_fsm_state23;
wire    ap_CS_fsm_state31;
wire   [31:0] grp_fu_235_p2;
reg   [31:0] reg_297;
wire    ap_CS_fsm_state36;
wire    ap_CS_fsm_state41;
wire   [31:0] grp_fu_239_p2;
reg   [31:0] reg_304;
wire   [8:0] i_5_fu_317_p2;
reg   [8:0] i_5_reg_378;
wire    ap_CS_fsm_state2;
wire   [31:0] tmp_30_fu_323_p1;
wire   [0:0] tmp_fu_311_p2;
wire   [63:0] grp_fu_273_p2;
reg   [63:0] tmp_13_reg_388;
wire    ap_CS_fsm_state13;
reg   [7:0] temp_real_addr_reg_393;
wire    ap_CS_fsm_state14;
reg   [7:0] temp_imag_addr_reg_398;
wire   [31:0] grp_fu_264_p1;
reg   [31:0] w_reg_403;
wire   [8:0] j_1_fu_340_p2;
reg   [8:0] j_1_reg_411;
wire    ap_CS_fsm_state15;
wire   [31:0] tmp_31_fu_346_p1;
wire   [0:0] tmp_17_fu_334_p2;
wire   [63:0] grp_sin_or_cos_double_s_fu_197_ap_return;
reg   [63:0] tmp_i_i_reg_421;
wire    ap_CS_fsm_state26;
wire    grp_sin_or_cos_double_s_fu_197_ap_idle;
wire    grp_sin_or_cos_double_s_fu_197_ap_ready;
wire    grp_sin_or_cos_double_s_fu_197_ap_done;
wire    grp_sin_or_cos_double_s_fu_216_ap_idle;
wire    grp_sin_or_cos_double_s_fu_216_ap_ready;
wire    grp_sin_or_cos_double_s_fu_216_ap_done;
reg    ap_block_state26_on_subcall_done;
wire   [63:0] grp_sin_or_cos_double_s_fu_216_ap_return;
reg   [63:0] tmp_i_i9_reg_426;
reg   [31:0] c_reg_441;
wire    ap_CS_fsm_state27;
wire   [31:0] s_fu_267_p1;
reg   [31:0] s_reg_447;
reg   [31:0] sample_real_load_reg_453;
reg   [31:0] sample_imag_load_reg_459;
wire   [31:0] grp_fu_249_p2;
reg   [31:0] tmp_23_reg_465;
wire   [31:0] grp_fu_253_p2;
reg   [31:0] tmp_26_reg_470;
wire   [31:0] grp_fu_257_p2;
reg   [31:0] tmp_27_reg_475;
wire   [8:0] i_4_fu_363_p2;
reg   [8:0] i_4_reg_483;
wire    ap_CS_fsm_state43;
wire   [63:0] tmp_18_fu_369_p1;
reg   [63:0] tmp_18_reg_488;
wire   [0:0] tmp_14_fu_357_p2;
reg   [7:0] temp_real_address0;
reg    temp_real_ce0;
reg    temp_real_we0;
reg   [31:0] temp_real_d0;
wire   [31:0] temp_real_q0;
reg   [7:0] temp_imag_address0;
reg    temp_imag_ce0;
reg    temp_imag_we0;
reg   [31:0] temp_imag_d0;
wire   [31:0] temp_imag_q0;
wire    grp_sin_or_cos_double_s_fu_197_ap_start;
wire    grp_sin_or_cos_double_s_fu_197_do_cos;
wire    grp_sin_or_cos_double_s_fu_216_ap_start;
wire    grp_sin_or_cos_double_s_fu_216_do_cos;
reg   [8:0] i_reg_138;
reg   [31:0] tmp_15_reg_150;
wire    ap_CS_fsm_state42;
reg   [31:0] tmp_16_reg_162;
reg   [8:0] j_reg_174;
reg   [8:0] i_1_reg_186;
wire    ap_CS_fsm_state44;
reg    grp_sin_or_cos_double_s_fu_197_ap_start_reg;
wire    ap_CS_fsm_state25;
reg    grp_sin_or_cos_double_s_fu_216_ap_start_reg;
wire   [63:0] tmp_s_fu_328_p1;
wire   [63:0] tmp_21_fu_351_p1;
reg   [31:0] grp_fu_235_p0;
reg   [31:0] grp_fu_235_p1;
wire    ap_CS_fsm_state32;
wire    ap_CS_fsm_state37;
reg   [31:0] grp_fu_239_p0;
reg   [31:0] grp_fu_239_p1;
reg   [31:0] grp_fu_245_p0;
reg   [31:0] grp_fu_245_p1;
wire    ap_CS_fsm_state20;
wire    ap_CS_fsm_state28;
reg   [31:0] grp_fu_261_p0;
reg   [63:0] grp_fu_264_p0;
reg   [31:0] grp_fu_270_p0;
wire    ap_CS_fsm_state8;
reg   [1:0] grp_fu_235_opcode;
reg   [1:0] grp_fu_239_opcode;
reg   [43:0] ap_NS_fsm;

// power-on initialization
initial begin
#0 ap_CS_fsm = 44'd1;
#0 grp_sin_or_cos_double_s_fu_197_ap_start_reg = 1'b0;
#0 grp_sin_or_cos_double_s_fu_216_ap_start_reg = 1'b0;
end

dft_temp_real #(
    .DataWidth( 32 ),
    .AddressRange( 256 ),
    .AddressWidth( 8 ))
temp_real_U(
    .clk(ap_clk),
    .reset(ap_rst),
    .address0(temp_real_address0),
    .ce0(temp_real_ce0),
    .we0(temp_real_we0),
    .d0(temp_real_d0),
    .q0(temp_real_q0)
);

dft_temp_real #(
    .DataWidth( 32 ),
    .AddressRange( 256 ),
    .AddressWidth( 8 ))
temp_imag_U(
    .clk(ap_clk),
    .reset(ap_rst),
    .address0(temp_imag_address0),
    .ce0(temp_imag_ce0),
    .we0(temp_imag_we0),
    .d0(temp_imag_d0),
    .q0(temp_imag_q0)
);

sin_or_cos_double_s grp_sin_or_cos_double_s_fu_197(
    .ap_clk(ap_clk),
    .ap_rst(ap_rst),
    .ap_start(grp_sin_or_cos_double_s_fu_197_ap_start),
    .ap_done(grp_sin_or_cos_double_s_fu_197_ap_done),
    .ap_idle(grp_sin_or_cos_double_s_fu_197_ap_idle),
    .ap_ready(grp_sin_or_cos_double_s_fu_197_ap_ready),
    .t_in(reg_284),
    .do_cos(grp_sin_or_cos_double_s_fu_197_do_cos),
    .ap_return(grp_sin_or_cos_double_s_fu_197_ap_return)
);

sin_or_cos_double_s grp_sin_or_cos_double_s_fu_216(
    .ap_clk(ap_clk),
    .ap_rst(ap_rst),
    .ap_start(grp_sin_or_cos_double_s_fu_216_ap_start),
    .ap_done(grp_sin_or_cos_double_s_fu_216_ap_done),
    .ap_idle(grp_sin_or_cos_double_s_fu_216_ap_idle),
    .ap_ready(grp_sin_or_cos_double_s_fu_216_ap_ready),
    .t_in(reg_284),
    .do_cos(grp_sin_or_cos_double_s_fu_216_do_cos),
    .ap_return(grp_sin_or_cos_double_s_fu_216_ap_return)
);

dft_faddfsub_32nsncg #(
    .ID( 1 ),
    .NUM_STAGE( 5 ),
    .din0_WIDTH( 32 ),
    .din1_WIDTH( 32 ),
    .dout_WIDTH( 32 ))
dft_faddfsub_32nsncg_U34(
    .clk(ap_clk),
    .reset(ap_rst),
    .din0(grp_fu_235_p0),
    .din1(grp_fu_235_p1),
    .opcode(grp_fu_235_opcode),
    .ce(1'b1),
    .dout(grp_fu_235_p2)
);

dft_faddfsub_32nsncg #(
    .ID( 1 ),
    .NUM_STAGE( 5 ),
    .din0_WIDTH( 32 ),
    .din1_WIDTH( 32 ),
    .dout_WIDTH( 32 ))
dft_faddfsub_32nsncg_U35(
    .clk(ap_clk),
    .reset(ap_rst),
    .din0(grp_fu_239_p0),
    .din1(grp_fu_239_p1),
    .opcode(grp_fu_239_opcode),
    .ce(1'b1),
    .dout(grp_fu_239_p2)
);

dft_fmul_32ns_32nocq #(
    .ID( 1 ),
    .NUM_STAGE( 4 ),
    .din0_WIDTH( 32 ),
    .din1_WIDTH( 32 ),
    .dout_WIDTH( 32 ))
dft_fmul_32ns_32nocq_U36(
    .clk(ap_clk),
    .reset(ap_rst),
    .din0(grp_fu_245_p0),
    .din1(grp_fu_245_p1),
    .ce(1'b1),
    .dout(grp_fu_245_p2)
);

dft_fmul_32ns_32nocq #(
    .ID( 1 ),
    .NUM_STAGE( 4 ),
    .din0_WIDTH( 32 ),
    .din1_WIDTH( 32 ),
    .dout_WIDTH( 32 ))
dft_fmul_32ns_32nocq_U37(
    .clk(ap_clk),
    .reset(ap_rst),
    .din0(sample_imag_load_reg_459),
    .din1(s_reg_447),
    .ce(1'b1),
    .dout(grp_fu_249_p2)
);

dft_fmul_32ns_32nocq #(
    .ID( 1 ),
    .NUM_STAGE( 4 ),
    .din0_WIDTH( 32 ),
    .din1_WIDTH( 32 ),
    .dout_WIDTH( 32 ))
dft_fmul_32ns_32nocq_U38(
    .clk(ap_clk),
    .reset(ap_rst),
    .din0(sample_real_load_reg_453),
    .din1(s_reg_447),
    .ce(1'b1),
    .dout(grp_fu_253_p2)
);

dft_fmul_32ns_32nocq #(
    .ID( 1 ),
    .NUM_STAGE( 4 ),
    .din0_WIDTH( 32 ),
    .din1_WIDTH( 32 ),
    .dout_WIDTH( 32 ))
dft_fmul_32ns_32nocq_U39(
    .clk(ap_clk),
    .reset(ap_rst),
    .din0(sample_imag_load_reg_459),
    .din1(c_reg_441),
    .ce(1'b1),
    .dout(grp_fu_257_p2)
);

dft_uitofp_32ns_3pcA #(
    .ID( 1 ),
    .NUM_STAGE( 5 ),
    .din0_WIDTH( 32 ),
    .dout_WIDTH( 32 ))
dft_uitofp_32ns_3pcA_U40(
    .clk(ap_clk),
    .reset(ap_rst),
    .din0(grp_fu_261_p0),
    .ce(1'b1),
    .dout(grp_fu_261_p1)
);

dft_fptrunc_64ns_qcK #(
    .ID( 1 ),
    .NUM_STAGE( 1 ),
    .din0_WIDTH( 64 ),
    .dout_WIDTH( 32 ))
dft_fptrunc_64ns_qcK_U41(
    .din0(grp_fu_264_p0),
    .dout(grp_fu_264_p1)
);

dft_fptrunc_64ns_qcK #(
    .ID( 1 ),
    .NUM_STAGE( 1 ),
    .din0_WIDTH( 64 ),
    .dout_WIDTH( 32 ))
dft_fptrunc_64ns_qcK_U42(
    .din0(tmp_i_i9_reg_426),
    .dout(s_fu_267_p1)
);

dft_fpext_32ns_64rcU #(
    .ID( 1 ),
    .NUM_STAGE( 1 ),
    .din0_WIDTH( 32 ),
    .dout_WIDTH( 64 ))
dft_fpext_32ns_64rcU_U43(
    .din0(grp_fu_270_p0),
    .dout(grp_fu_270_p1)
);

dft_dmul_64ns_64nsc4 #(
    .ID( 1 ),
    .NUM_STAGE( 6 ),
    .din0_WIDTH( 64 ),
    .din1_WIDTH( 64 ),
    .dout_WIDTH( 64 ))
dft_dmul_64ns_64nsc4_U44(
    .clk(ap_clk),
    .reset(ap_rst),
    .din0(reg_284),
    .din1(64'd4582731459160450590),
    .ce(1'b1),
    .dout(grp_fu_273_p2)
);

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_CS_fsm <= ap_ST_fsm_state1;
    end else begin
        ap_CS_fsm <= ap_NS_fsm;
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        grp_sin_or_cos_double_s_fu_197_ap_start_reg <= 1'b0;
    end else begin
        if ((1'b1 == ap_CS_fsm_state25)) begin
            grp_sin_or_cos_double_s_fu_197_ap_start_reg <= 1'b1;
        end else if ((grp_sin_or_cos_double_s_fu_197_ap_ready == 1'b1)) begin
            grp_sin_or_cos_double_s_fu_197_ap_start_reg <= 1'b0;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        grp_sin_or_cos_double_s_fu_216_ap_start_reg <= 1'b0;
    end else begin
        if ((1'b1 == ap_CS_fsm_state25)) begin
            grp_sin_or_cos_double_s_fu_216_ap_start_reg <= 1'b1;
        end else if ((grp_sin_or_cos_double_s_fu_216_ap_ready == 1'b1)) begin
            grp_sin_or_cos_double_s_fu_216_ap_start_reg <= 1'b0;
        end
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_CS_fsm_state2) & (tmp_fu_311_p2 == 1'd1))) begin
        i_1_reg_186 <= 9'd0;
    end else if ((1'b1 == ap_CS_fsm_state44)) begin
        i_1_reg_186 <= i_4_reg_483;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_CS_fsm_state15) & (tmp_17_fu_334_p2 == 1'd1))) begin
        i_reg_138 <= i_5_reg_378;
    end else if (((ap_start == 1'b1) & (1'b1 == ap_CS_fsm_state1))) begin
        i_reg_138 <= 9'd0;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state42)) begin
        j_reg_174 <= j_1_reg_411;
    end else if ((1'b1 == ap_CS_fsm_state14)) begin
        j_reg_174 <= 9'd0;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state42)) begin
        tmp_15_reg_150 <= reg_304;
    end else if ((1'b1 == ap_CS_fsm_state14)) begin
        tmp_15_reg_150 <= 32'd0;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state42)) begin
        tmp_16_reg_162 <= reg_297;
    end else if ((1'b1 == ap_CS_fsm_state14)) begin
        tmp_16_reg_162 <= 32'd0;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state27)) begin
        c_reg_441 <= grp_fu_264_p1;
        s_reg_447 <= s_fu_267_p1;
        sample_imag_load_reg_459 <= sample_imag_q0;
        sample_real_load_reg_453 <= sample_real_q0;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state43)) begin
        i_4_reg_483 <= i_4_fu_363_p2;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state2)) begin
        i_5_reg_378 <= i_5_fu_317_p2;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state15)) begin
        j_1_reg_411 <= j_1_fu_340_p2;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_CS_fsm_state19) | (1'b1 == ap_CS_fsm_state6))) begin
        reg_278 <= grp_fu_261_p1;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_CS_fsm_state7) | (1'b1 == ap_CS_fsm_state24))) begin
        reg_284 <= grp_fu_270_p1;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_CS_fsm_state31) | (1'b1 == ap_CS_fsm_state23))) begin
        reg_291 <= grp_fu_245_p2;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_CS_fsm_state41) | (1'b1 == ap_CS_fsm_state36))) begin
        reg_297 <= grp_fu_235_p2;
        reg_304 <= grp_fu_239_p2;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state14)) begin
        temp_imag_addr_reg_398 <= tmp_s_fu_328_p1;
        temp_real_addr_reg_393 <= tmp_s_fu_328_p1;
        w_reg_403 <= grp_fu_264_p1;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state13)) begin
        tmp_13_reg_388 <= grp_fu_273_p2;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_CS_fsm_state43) & (tmp_14_fu_357_p2 == 1'd0))) begin
        tmp_18_reg_488[8 : 0] <= tmp_18_fu_369_p1[8 : 0];
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state31)) begin
        tmp_23_reg_465 <= grp_fu_249_p2;
        tmp_26_reg_470 <= grp_fu_253_p2;
        tmp_27_reg_475 <= grp_fu_257_p2;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_CS_fsm_state26) & (1'b0 == ap_block_state26_on_subcall_done))) begin
        tmp_i_i9_reg_426 <= grp_sin_or_cos_double_s_fu_216_ap_return;
        tmp_i_i_reg_421 <= grp_sin_or_cos_double_s_fu_197_ap_return;
    end
end

always @ (*) begin
    if (((tmp_14_fu_357_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state43))) begin
        ap_done = 1'b1;
    end else begin
        ap_done = 1'b0;
    end
end

always @ (*) begin
    if (((ap_start == 1'b0) & (1'b1 == ap_CS_fsm_state1))) begin
        ap_idle = 1'b1;
    end else begin
        ap_idle = 1'b0;
    end
end

always @ (*) begin
    if (((tmp_14_fu_357_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state43))) begin
        ap_ready = 1'b1;
    end else begin
        ap_ready = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state32)) begin
        grp_fu_235_opcode = 2'd1;
    end else if ((1'b1 == ap_CS_fsm_state37)) begin
        grp_fu_235_opcode = 2'd0;
    end else begin
        grp_fu_235_opcode = 'bx;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state37)) begin
        grp_fu_235_p0 = tmp_16_reg_162;
    end else if ((1'b1 == ap_CS_fsm_state32)) begin
        grp_fu_235_p0 = reg_291;
    end else begin
        grp_fu_235_p0 = 'bx;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state37)) begin
        grp_fu_235_p1 = reg_297;
    end else if ((1'b1 == ap_CS_fsm_state32)) begin
        grp_fu_235_p1 = tmp_23_reg_465;
    end else begin
        grp_fu_235_p1 = 'bx;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state37)) begin
        grp_fu_239_opcode = 2'd1;
    end else if ((1'b1 == ap_CS_fsm_state32)) begin
        grp_fu_239_opcode = 2'd0;
    end else begin
        grp_fu_239_opcode = 'bx;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state37)) begin
        grp_fu_239_p0 = tmp_15_reg_150;
    end else if ((1'b1 == ap_CS_fsm_state32)) begin
        grp_fu_239_p0 = tmp_26_reg_470;
    end else begin
        grp_fu_239_p0 = 'bx;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state37)) begin
        grp_fu_239_p1 = reg_304;
    end else if ((1'b1 == ap_CS_fsm_state32)) begin
        grp_fu_239_p1 = tmp_27_reg_475;
    end else begin
        grp_fu_239_p1 = 'bx;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state28)) begin
        grp_fu_245_p0 = sample_real_load_reg_453;
    end else if ((1'b1 == ap_CS_fsm_state20)) begin
        grp_fu_245_p0 = reg_278;
    end else begin
        grp_fu_245_p0 = 'bx;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state28)) begin
        grp_fu_245_p1 = c_reg_441;
    end else if ((1'b1 == ap_CS_fsm_state20)) begin
        grp_fu_245_p1 = w_reg_403;
    end else begin
        grp_fu_245_p1 = 'bx;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state15)) begin
        grp_fu_261_p0 = tmp_31_fu_346_p1;
    end else if ((1'b1 == ap_CS_fsm_state2)) begin
        grp_fu_261_p0 = tmp_30_fu_323_p1;
    end else begin
        grp_fu_261_p0 = 'bx;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state27)) begin
        grp_fu_264_p0 = tmp_i_i_reg_421;
    end else if ((1'b1 == ap_CS_fsm_state14)) begin
        grp_fu_264_p0 = tmp_13_reg_388;
    end else begin
        grp_fu_264_p0 = 'bx;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state24)) begin
        grp_fu_270_p0 = reg_291;
    end else if ((1'b1 == ap_CS_fsm_state7)) begin
        grp_fu_270_p0 = reg_278;
    end else begin
        grp_fu_270_p0 = 'bx;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state44)) begin
        sample_imag_address0 = tmp_18_reg_488;
    end else if ((1'b1 == ap_CS_fsm_state26)) begin
        sample_imag_address0 = tmp_21_fu_351_p1;
    end else begin
        sample_imag_address0 = 'bx;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state44) | ((1'b1 == ap_CS_fsm_state26) & (1'b0 == ap_block_state26_on_subcall_done)))) begin
        sample_imag_ce0 = 1'b1;
    end else begin
        sample_imag_ce0 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state44)) begin
        sample_imag_we0 = 1'b1;
    end else begin
        sample_imag_we0 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state44)) begin
        sample_real_address0 = tmp_18_reg_488;
    end else if ((1'b1 == ap_CS_fsm_state26)) begin
        sample_real_address0 = tmp_21_fu_351_p1;
    end else begin
        sample_real_address0 = 'bx;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state44) | ((1'b1 == ap_CS_fsm_state26) & (1'b0 == ap_block_state26_on_subcall_done)))) begin
        sample_real_ce0 = 1'b1;
    end else begin
        sample_real_ce0 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state44)) begin
        sample_real_we0 = 1'b1;
    end else begin
        sample_real_we0 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state43)) begin
        temp_imag_address0 = tmp_18_fu_369_p1;
    end else if ((1'b1 == ap_CS_fsm_state42)) begin
        temp_imag_address0 = temp_imag_addr_reg_398;
    end else if ((1'b1 == ap_CS_fsm_state14)) begin
        temp_imag_address0 = tmp_s_fu_328_p1;
    end else begin
        temp_imag_address0 = 'bx;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state42) | (1'b1 == ap_CS_fsm_state43) | (1'b1 == ap_CS_fsm_state14))) begin
        temp_imag_ce0 = 1'b1;
    end else begin
        temp_imag_ce0 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state42)) begin
        temp_imag_d0 = reg_304;
    end else if ((1'b1 == ap_CS_fsm_state14)) begin
        temp_imag_d0 = 32'd0;
    end else begin
        temp_imag_d0 = 'bx;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state42) | (1'b1 == ap_CS_fsm_state14))) begin
        temp_imag_we0 = 1'b1;
    end else begin
        temp_imag_we0 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state43)) begin
        temp_real_address0 = tmp_18_fu_369_p1;
    end else if ((1'b1 == ap_CS_fsm_state42)) begin
        temp_real_address0 = temp_real_addr_reg_393;
    end else if ((1'b1 == ap_CS_fsm_state14)) begin
        temp_real_address0 = tmp_s_fu_328_p1;
    end else begin
        temp_real_address0 = 'bx;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state42) | (1'b1 == ap_CS_fsm_state43) | (1'b1 == ap_CS_fsm_state14))) begin
        temp_real_ce0 = 1'b1;
    end else begin
        temp_real_ce0 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state42)) begin
        temp_real_d0 = reg_297;
    end else if ((1'b1 == ap_CS_fsm_state14)) begin
        temp_real_d0 = 32'd0;
    end else begin
        temp_real_d0 = 'bx;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state42) | (1'b1 == ap_CS_fsm_state14))) begin
        temp_real_we0 = 1'b1;
    end else begin
        temp_real_we0 = 1'b0;
    end
end

always @ (*) begin
    case (ap_CS_fsm)
        ap_ST_fsm_state1 : begin
            if (((ap_start == 1'b1) & (1'b1 == ap_CS_fsm_state1))) begin
                ap_NS_fsm = ap_ST_fsm_state2;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state1;
            end
        end
        ap_ST_fsm_state2 : begin
            if (((1'b1 == ap_CS_fsm_state2) & (tmp_fu_311_p2 == 1'd1))) begin
                ap_NS_fsm = ap_ST_fsm_state43;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state3;
            end
        end
        ap_ST_fsm_state3 : begin
            ap_NS_fsm = ap_ST_fsm_state4;
        end
        ap_ST_fsm_state4 : begin
            ap_NS_fsm = ap_ST_fsm_state5;
        end
        ap_ST_fsm_state5 : begin
            ap_NS_fsm = ap_ST_fsm_state6;
        end
        ap_ST_fsm_state6 : begin
            ap_NS_fsm = ap_ST_fsm_state7;
        end
        ap_ST_fsm_state7 : begin
            ap_NS_fsm = ap_ST_fsm_state8;
        end
        ap_ST_fsm_state8 : begin
            ap_NS_fsm = ap_ST_fsm_state9;
        end
        ap_ST_fsm_state9 : begin
            ap_NS_fsm = ap_ST_fsm_state10;
        end
        ap_ST_fsm_state10 : begin
            ap_NS_fsm = ap_ST_fsm_state11;
        end
        ap_ST_fsm_state11 : begin
            ap_NS_fsm = ap_ST_fsm_state12;
        end
        ap_ST_fsm_state12 : begin
            ap_NS_fsm = ap_ST_fsm_state13;
        end
        ap_ST_fsm_state13 : begin
            ap_NS_fsm = ap_ST_fsm_state14;
        end
        ap_ST_fsm_state14 : begin
            ap_NS_fsm = ap_ST_fsm_state15;
        end
        ap_ST_fsm_state15 : begin
            if (((1'b1 == ap_CS_fsm_state15) & (tmp_17_fu_334_p2 == 1'd1))) begin
                ap_NS_fsm = ap_ST_fsm_state2;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state16;
            end
        end
        ap_ST_fsm_state16 : begin
            ap_NS_fsm = ap_ST_fsm_state17;
        end
        ap_ST_fsm_state17 : begin
            ap_NS_fsm = ap_ST_fsm_state18;
        end
        ap_ST_fsm_state18 : begin
            ap_NS_fsm = ap_ST_fsm_state19;
        end
        ap_ST_fsm_state19 : begin
            ap_NS_fsm = ap_ST_fsm_state20;
        end
        ap_ST_fsm_state20 : begin
            ap_NS_fsm = ap_ST_fsm_state21;
        end
        ap_ST_fsm_state21 : begin
            ap_NS_fsm = ap_ST_fsm_state22;
        end
        ap_ST_fsm_state22 : begin
            ap_NS_fsm = ap_ST_fsm_state23;
        end
        ap_ST_fsm_state23 : begin
            ap_NS_fsm = ap_ST_fsm_state24;
        end
        ap_ST_fsm_state24 : begin
            ap_NS_fsm = ap_ST_fsm_state25;
        end
        ap_ST_fsm_state25 : begin
            ap_NS_fsm = ap_ST_fsm_state26;
        end
        ap_ST_fsm_state26 : begin
            if (((1'b1 == ap_CS_fsm_state26) & (1'b0 == ap_block_state26_on_subcall_done))) begin
                ap_NS_fsm = ap_ST_fsm_state27;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state26;
            end
        end
        ap_ST_fsm_state27 : begin
            ap_NS_fsm = ap_ST_fsm_state28;
        end
        ap_ST_fsm_state28 : begin
            ap_NS_fsm = ap_ST_fsm_state29;
        end
        ap_ST_fsm_state29 : begin
            ap_NS_fsm = ap_ST_fsm_state30;
        end
        ap_ST_fsm_state30 : begin
            ap_NS_fsm = ap_ST_fsm_state31;
        end
        ap_ST_fsm_state31 : begin
            ap_NS_fsm = ap_ST_fsm_state32;
        end
        ap_ST_fsm_state32 : begin
            ap_NS_fsm = ap_ST_fsm_state33;
        end
        ap_ST_fsm_state33 : begin
            ap_NS_fsm = ap_ST_fsm_state34;
        end
        ap_ST_fsm_state34 : begin
            ap_NS_fsm = ap_ST_fsm_state35;
        end
        ap_ST_fsm_state35 : begin
            ap_NS_fsm = ap_ST_fsm_state36;
        end
        ap_ST_fsm_state36 : begin
            ap_NS_fsm = ap_ST_fsm_state37;
        end
        ap_ST_fsm_state37 : begin
            ap_NS_fsm = ap_ST_fsm_state38;
        end
        ap_ST_fsm_state38 : begin
            ap_NS_fsm = ap_ST_fsm_state39;
        end
        ap_ST_fsm_state39 : begin
            ap_NS_fsm = ap_ST_fsm_state40;
        end
        ap_ST_fsm_state40 : begin
            ap_NS_fsm = ap_ST_fsm_state41;
        end
        ap_ST_fsm_state41 : begin
            ap_NS_fsm = ap_ST_fsm_state42;
        end
        ap_ST_fsm_state42 : begin
            ap_NS_fsm = ap_ST_fsm_state15;
        end
        ap_ST_fsm_state43 : begin
            if (((tmp_14_fu_357_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state43))) begin
                ap_NS_fsm = ap_ST_fsm_state1;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state44;
            end
        end
        ap_ST_fsm_state44 : begin
            ap_NS_fsm = ap_ST_fsm_state43;
        end
        default : begin
            ap_NS_fsm = 'bx;
        end
    endcase
end

assign ap_CS_fsm_state1 = ap_CS_fsm[32'd0];

assign ap_CS_fsm_state13 = ap_CS_fsm[32'd12];

assign ap_CS_fsm_state14 = ap_CS_fsm[32'd13];

assign ap_CS_fsm_state15 = ap_CS_fsm[32'd14];

assign ap_CS_fsm_state19 = ap_CS_fsm[32'd18];

assign ap_CS_fsm_state2 = ap_CS_fsm[32'd1];

assign ap_CS_fsm_state20 = ap_CS_fsm[32'd19];

assign ap_CS_fsm_state23 = ap_CS_fsm[32'd22];

assign ap_CS_fsm_state24 = ap_CS_fsm[32'd23];

assign ap_CS_fsm_state25 = ap_CS_fsm[32'd24];

assign ap_CS_fsm_state26 = ap_CS_fsm[32'd25];

assign ap_CS_fsm_state27 = ap_CS_fsm[32'd26];

assign ap_CS_fsm_state28 = ap_CS_fsm[32'd27];

assign ap_CS_fsm_state31 = ap_CS_fsm[32'd30];

assign ap_CS_fsm_state32 = ap_CS_fsm[32'd31];

assign ap_CS_fsm_state36 = ap_CS_fsm[32'd35];

assign ap_CS_fsm_state37 = ap_CS_fsm[32'd36];

assign ap_CS_fsm_state41 = ap_CS_fsm[32'd40];

assign ap_CS_fsm_state42 = ap_CS_fsm[32'd41];

assign ap_CS_fsm_state43 = ap_CS_fsm[32'd42];

assign ap_CS_fsm_state44 = ap_CS_fsm[32'd43];

assign ap_CS_fsm_state6 = ap_CS_fsm[32'd5];

assign ap_CS_fsm_state7 = ap_CS_fsm[32'd6];

assign ap_CS_fsm_state8 = ap_CS_fsm[32'd7];

always @ (*) begin
    ap_block_state26_on_subcall_done = ((grp_sin_or_cos_double_s_fu_216_ap_done == 1'b0) | (grp_sin_or_cos_double_s_fu_197_ap_done == 1'b0));
end

assign grp_sin_or_cos_double_s_fu_197_ap_start = grp_sin_or_cos_double_s_fu_197_ap_start_reg;

assign grp_sin_or_cos_double_s_fu_197_do_cos = 1'd1;

assign grp_sin_or_cos_double_s_fu_216_ap_start = grp_sin_or_cos_double_s_fu_216_ap_start_reg;

assign grp_sin_or_cos_double_s_fu_216_do_cos = 1'd0;

assign i_4_fu_363_p2 = (i_1_reg_186 + 9'd1);

assign i_5_fu_317_p2 = (i_reg_138 + 9'd1);

assign j_1_fu_340_p2 = (j_reg_174 + 9'd1);

assign sample_imag_d0 = temp_imag_q0;

assign sample_real_d0 = temp_real_q0;

assign tmp_14_fu_357_p2 = ((i_1_reg_186 == 9'd256) ? 1'b1 : 1'b0);

assign tmp_17_fu_334_p2 = ((j_reg_174 == 9'd256) ? 1'b1 : 1'b0);

assign tmp_18_fu_369_p1 = i_1_reg_186;

assign tmp_21_fu_351_p1 = j_reg_174;

assign tmp_30_fu_323_p1 = i_reg_138;

assign tmp_31_fu_346_p1 = j_reg_174;

assign tmp_fu_311_p2 = ((i_reg_138 == 9'd256) ? 1'b1 : 1'b0);

assign tmp_s_fu_328_p1 = i_reg_138;

always @ (posedge ap_clk) begin
    tmp_18_reg_488[63:9] <= 55'b0000000000000000000000000000000000000000000000000000000;
end

endmodule //dft
