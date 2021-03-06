// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2018.2
// Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

`timescale 1 ns / 1 ps 

(* CORE_GENERATION_INFO="fir,hls_ip_2018_2,{HLS_INPUT_TYPE=c,HLS_INPUT_FLOAT=0,HLS_INPUT_FIXED=0,HLS_INPUT_PART=xa7a12tcsg325-1q,HLS_INPUT_CLOCK=1.000000,HLS_INPUT_ARCH=others,HLS_SYN_CLOCK=2.298000,HLS_SYN_LAT=276,HLS_SYN_TPT=none,HLS_SYN_MEM=0,HLS_SYN_DSP=4,HLS_SYN_FF=924,HLS_SYN_LUT=343,HLS_VERSION=2018_2}" *)

module fir (
        ap_clk,
        ap_rst,
        ap_start,
        ap_done,
        ap_idle,
        ap_ready,
        y,
        y_ap_vld,
        c_address0,
        c_ce0,
        c_q0,
        x
);

parameter    ap_ST_fsm_state1 = 27'd1;
parameter    ap_ST_fsm_state2 = 27'd2;
parameter    ap_ST_fsm_state3 = 27'd4;
parameter    ap_ST_fsm_state4 = 27'd8;
parameter    ap_ST_fsm_state5 = 27'd16;
parameter    ap_ST_fsm_state6 = 27'd32;
parameter    ap_ST_fsm_state7 = 27'd64;
parameter    ap_ST_fsm_state8 = 27'd128;
parameter    ap_ST_fsm_state9 = 27'd256;
parameter    ap_ST_fsm_state10 = 27'd512;
parameter    ap_ST_fsm_state11 = 27'd1024;
parameter    ap_ST_fsm_state12 = 27'd2048;
parameter    ap_ST_fsm_state13 = 27'd4096;
parameter    ap_ST_fsm_state14 = 27'd8192;
parameter    ap_ST_fsm_state15 = 27'd16384;
parameter    ap_ST_fsm_state16 = 27'd32768;
parameter    ap_ST_fsm_state17 = 27'd65536;
parameter    ap_ST_fsm_state18 = 27'd131072;
parameter    ap_ST_fsm_state19 = 27'd262144;
parameter    ap_ST_fsm_state20 = 27'd524288;
parameter    ap_ST_fsm_state21 = 27'd1048576;
parameter    ap_ST_fsm_state22 = 27'd2097152;
parameter    ap_ST_fsm_state23 = 27'd4194304;
parameter    ap_ST_fsm_state24 = 27'd8388608;
parameter    ap_ST_fsm_state25 = 27'd16777216;
parameter    ap_ST_fsm_state26 = 27'd33554432;
parameter    ap_ST_fsm_state27 = 27'd67108864;

input   ap_clk;
input   ap_rst;
input   ap_start;
output   ap_done;
output   ap_idle;
output   ap_ready;
output  [31:0] y;
output   y_ap_vld;
output  [3:0] c_address0;
output   c_ce0;
input  [31:0] c_q0;
input  [31:0] x;

reg ap_done;
reg ap_idle;
reg ap_ready;
reg y_ap_vld;
reg c_ce0;

(* fsm_encoding = "none" *) reg   [26:0] ap_CS_fsm;
wire    ap_CS_fsm_state1;
reg   [3:0] shift_reg_address0;
reg    shift_reg_ce0;
reg    shift_reg_we0;
reg   [31:0] shift_reg_d0;
wire   [31:0] shift_reg_q0;
wire   [4:0] grp_fu_125_p2;
reg   [4:0] reg_132;
wire    ap_CS_fsm_state2;
wire   [0:0] tmp_fu_141_p3;
wire   [0:0] tmp_1_fu_149_p2;
wire    ap_CS_fsm_state5;
wire  signed [31:0] i_cast_fu_137_p1;
reg  signed [31:0] i_cast_reg_184;
reg   [0:0] tmp_1_reg_193;
wire    ap_CS_fsm_state3;
reg   [31:0] data_reg_202;
wire    ap_CS_fsm_state4;
reg  signed [31:0] c_load_reg_213;
wire    ap_CS_fsm_state6;
wire   [31:0] grp_fu_168_p2;
reg   [31:0] tmp_6_reg_218;
wire    ap_CS_fsm_state25;
wire   [31:0] grp_fu_173_p2;
wire    ap_CS_fsm_state27;
reg   [31:0] acc_reg_90;
wire  signed [4:0] ap_phi_mux_i_phi_fu_107_p4;
reg  signed [4:0] i_reg_103;
reg  signed [31:0] data1_reg_115;
wire   [63:0] tmp_3_fu_155_p1;
wire   [63:0] tmp_4_fu_160_p1;
wire   [63:0] tmp_5_fu_164_p1;
reg  signed [4:0] grp_fu_125_p0;
wire    ap_CS_fsm_state7;
wire    ap_CS_fsm_state26;
reg   [26:0] ap_NS_fsm;

// power-on initialization
initial begin
#0 ap_CS_fsm = 27'd1;
end

fir_shift_reg #(
    .DataWidth( 32 ),
    .AddressRange( 11 ),
    .AddressWidth( 4 ))
shift_reg_U(
    .clk(ap_clk),
    .reset(ap_rst),
    .address0(shift_reg_address0),
    .ce0(shift_reg_ce0),
    .we0(shift_reg_we0),
    .d0(shift_reg_d0),
    .q0(shift_reg_q0)
);

fir_mul_32s_32s_3bkb #(
    .ID( 1 ),
    .NUM_STAGE( 19 ),
    .din0_WIDTH( 32 ),
    .din1_WIDTH( 32 ),
    .dout_WIDTH( 32 ))
fir_mul_32s_32s_3bkb_U1(
    .clk(ap_clk),
    .reset(ap_rst),
    .din0(c_load_reg_213),
    .din1(data1_reg_115),
    .ce(1'b1),
    .dout(grp_fu_168_p2)
);

fir_add_32ns_32nscud #(
    .ID( 1 ),
    .NUM_STAGE( 2 ),
    .din0_WIDTH( 32 ),
    .din1_WIDTH( 32 ),
    .dout_WIDTH( 32 ))
fir_add_32ns_32nscud_U2(
    .clk(ap_clk),
    .reset(ap_rst),
    .din0(tmp_6_reg_218),
    .din1(acc_reg_90),
    .ce(1'b1),
    .dout(grp_fu_173_p2)
);

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_CS_fsm <= ap_ST_fsm_state1;
    end else begin
        ap_CS_fsm <= ap_NS_fsm;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state27)) begin
        acc_reg_90 <= grp_fu_173_p2;
    end else if (((ap_start == 1'b1) & (1'b1 == ap_CS_fsm_state1))) begin
        acc_reg_90 <= 32'd0;
    end
end

always @ (posedge ap_clk) begin
    if (((tmp_1_reg_193 == 1'd0) & (1'b1 == ap_CS_fsm_state5))) begin
        data1_reg_115 <= data_reg_202;
    end else if (((tmp_1_fu_149_p2 == 1'd1) & (tmp_fu_141_p3 == 1'd0) & (1'b1 == ap_CS_fsm_state2))) begin
        data1_reg_115 <= x;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state27)) begin
        i_reg_103 <= reg_132;
    end else if (((ap_start == 1'b1) & (1'b1 == ap_CS_fsm_state1))) begin
        i_reg_103 <= 5'd10;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state6)) begin
        c_load_reg_213 <= c_q0;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state4)) begin
        data_reg_202 <= shift_reg_q0;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state2)) begin
        i_cast_reg_184 <= i_cast_fu_137_p1;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_CS_fsm_state5) | ((tmp_1_fu_149_p2 == 1'd0) & (tmp_fu_141_p3 == 1'd0) & (1'b1 == ap_CS_fsm_state2)))) begin
        reg_132 <= grp_fu_125_p2;
    end
end

always @ (posedge ap_clk) begin
    if (((tmp_fu_141_p3 == 1'd0) & (1'b1 == ap_CS_fsm_state2))) begin
        tmp_1_reg_193 <= tmp_1_fu_149_p2;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state25)) begin
        tmp_6_reg_218 <= grp_fu_168_p2;
    end
end

always @ (*) begin
    if (((tmp_fu_141_p3 == 1'd1) & (1'b1 == ap_CS_fsm_state2))) begin
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
    if (((tmp_fu_141_p3 == 1'd1) & (1'b1 == ap_CS_fsm_state2))) begin
        ap_ready = 1'b1;
    end else begin
        ap_ready = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state5)) begin
        c_ce0 = 1'b1;
    end else begin
        c_ce0 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state5)) begin
        grp_fu_125_p0 = i_reg_103;
    end else if ((1'b1 == ap_CS_fsm_state2)) begin
        grp_fu_125_p0 = ap_phi_mux_i_phi_fu_107_p4;
    end else begin
        grp_fu_125_p0 = 'bx;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state5)) begin
        shift_reg_address0 = tmp_4_fu_160_p1;
    end else if ((1'b1 == ap_CS_fsm_state3)) begin
        shift_reg_address0 = tmp_3_fu_155_p1;
    end else if ((1'b1 == ap_CS_fsm_state2)) begin
        shift_reg_address0 = 4'd0;
    end else begin
        shift_reg_address0 = 'bx;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state3) | (1'b1 == ap_CS_fsm_state5) | (1'b1 == ap_CS_fsm_state2))) begin
        shift_reg_ce0 = 1'b1;
    end else begin
        shift_reg_ce0 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state5)) begin
        shift_reg_d0 = data_reg_202;
    end else if ((1'b1 == ap_CS_fsm_state2)) begin
        shift_reg_d0 = x;
    end else begin
        shift_reg_d0 = 'bx;
    end
end

always @ (*) begin
    if ((((tmp_1_reg_193 == 1'd0) & (1'b1 == ap_CS_fsm_state5)) | ((tmp_1_fu_149_p2 == 1'd1) & (tmp_fu_141_p3 == 1'd0) & (1'b1 == ap_CS_fsm_state2)))) begin
        shift_reg_we0 = 1'b1;
    end else begin
        shift_reg_we0 = 1'b0;
    end
end

always @ (*) begin
    if (((tmp_fu_141_p3 == 1'd1) & (1'b1 == ap_CS_fsm_state2))) begin
        y_ap_vld = 1'b1;
    end else begin
        y_ap_vld = 1'b0;
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
            if (((tmp_fu_141_p3 == 1'd1) & (1'b1 == ap_CS_fsm_state2))) begin
                ap_NS_fsm = ap_ST_fsm_state1;
            end else if (((tmp_1_fu_149_p2 == 1'd1) & (tmp_fu_141_p3 == 1'd0) & (1'b1 == ap_CS_fsm_state2))) begin
                ap_NS_fsm = ap_ST_fsm_state5;
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
            ap_NS_fsm = ap_ST_fsm_state16;
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
            ap_NS_fsm = ap_ST_fsm_state27;
        end
        ap_ST_fsm_state27 : begin
            ap_NS_fsm = ap_ST_fsm_state2;
        end
        default : begin
            ap_NS_fsm = 'bx;
        end
    endcase
end

assign ap_CS_fsm_state1 = ap_CS_fsm[32'd0];

assign ap_CS_fsm_state2 = ap_CS_fsm[32'd1];

assign ap_CS_fsm_state25 = ap_CS_fsm[32'd24];

assign ap_CS_fsm_state26 = ap_CS_fsm[32'd25];

assign ap_CS_fsm_state27 = ap_CS_fsm[32'd26];

assign ap_CS_fsm_state3 = ap_CS_fsm[32'd2];

assign ap_CS_fsm_state4 = ap_CS_fsm[32'd3];

assign ap_CS_fsm_state5 = ap_CS_fsm[32'd4];

assign ap_CS_fsm_state6 = ap_CS_fsm[32'd5];

assign ap_CS_fsm_state7 = ap_CS_fsm[32'd6];

assign ap_phi_mux_i_phi_fu_107_p4 = i_reg_103;

assign c_address0 = tmp_5_fu_164_p1;

assign grp_fu_125_p2 = ($signed(grp_fu_125_p0) + $signed(5'd31));

assign i_cast_fu_137_p1 = i_reg_103;

assign tmp_1_fu_149_p2 = ((i_reg_103 == 5'd0) ? 1'b1 : 1'b0);

assign tmp_3_fu_155_p1 = reg_132;

assign tmp_4_fu_160_p1 = $unsigned(i_cast_reg_184);

assign tmp_5_fu_164_p1 = $unsigned(i_cast_reg_184);

assign tmp_fu_141_p3 = i_reg_103[32'd4];

assign y = acc_reg_90;

endmodule //fir
