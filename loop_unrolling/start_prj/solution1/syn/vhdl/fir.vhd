-- ==============================================================
-- RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
-- Version: 2018.2
-- Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
-- 
-- ===========================================================

library IEEE;
use IEEE.std_logic_1164.all;
use IEEE.numeric_std.all;

entity fir is
port (
    ap_clk : IN STD_LOGIC;
    ap_rst : IN STD_LOGIC;
    ap_start : IN STD_LOGIC;
    ap_done : OUT STD_LOGIC;
    ap_idle : OUT STD_LOGIC;
    ap_ready : OUT STD_LOGIC;
    y : OUT STD_LOGIC_VECTOR (31 downto 0);
    y_ap_vld : OUT STD_LOGIC;
    c_address0 : OUT STD_LOGIC_VECTOR (3 downto 0);
    c_ce0 : OUT STD_LOGIC;
    c_q0 : IN STD_LOGIC_VECTOR (31 downto 0);
    x : IN STD_LOGIC_VECTOR (31 downto 0) );
end;


architecture behav of fir is 
    attribute CORE_GENERATION_INFO : STRING;
    attribute CORE_GENERATION_INFO of behav : architecture is
    "fir,hls_ip_2018_2,{HLS_INPUT_TYPE=c,HLS_INPUT_FLOAT=0,HLS_INPUT_FIXED=0,HLS_INPUT_PART=xa7a12tcsg325-1q,HLS_INPUT_CLOCK=10.000000,HLS_INPUT_ARCH=others,HLS_SYN_CLOCK=8.470000,HLS_SYN_LAT=56,HLS_SYN_TPT=none,HLS_SYN_MEM=2,HLS_SYN_DSP=3,HLS_SYN_FF=163,HLS_SYN_LUT=287,HLS_VERSION=2018_2}";
    constant ap_const_logic_1 : STD_LOGIC := '1';
    constant ap_const_logic_0 : STD_LOGIC := '0';
    constant ap_ST_fsm_state1 : STD_LOGIC_VECTOR (8 downto 0) := "000000001";
    constant ap_ST_fsm_state2 : STD_LOGIC_VECTOR (8 downto 0) := "000000010";
    constant ap_ST_fsm_state3 : STD_LOGIC_VECTOR (8 downto 0) := "000000100";
    constant ap_ST_fsm_state4 : STD_LOGIC_VECTOR (8 downto 0) := "000001000";
    constant ap_ST_fsm_state5 : STD_LOGIC_VECTOR (8 downto 0) := "000010000";
    constant ap_ST_fsm_state6 : STD_LOGIC_VECTOR (8 downto 0) := "000100000";
    constant ap_ST_fsm_state7 : STD_LOGIC_VECTOR (8 downto 0) := "001000000";
    constant ap_ST_fsm_state8 : STD_LOGIC_VECTOR (8 downto 0) := "010000000";
    constant ap_ST_fsm_state9 : STD_LOGIC_VECTOR (8 downto 0) := "100000000";
    constant ap_const_lv32_0 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000000";
    constant ap_const_lv32_2 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000010";
    constant ap_const_lv32_6 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000110";
    constant ap_const_lv32_1 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000001";
    constant ap_const_lv1_1 : STD_LOGIC_VECTOR (0 downto 0) := "1";
    constant ap_const_lv32_5 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000101";
    constant ap_const_lv1_0 : STD_LOGIC_VECTOR (0 downto 0) := "0";
    constant ap_const_lv32_7 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000111";
    constant ap_const_lv32_8 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000001000";
    constant ap_const_lv4_A : STD_LOGIC_VECTOR (3 downto 0) := "1010";
    constant ap_const_lv32_3 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000011";
    constant ap_const_lv32_4 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000100";
    constant ap_const_lv5_A : STD_LOGIC_VECTOR (4 downto 0) := "01010";
    constant ap_const_lv4_0 : STD_LOGIC_VECTOR (3 downto 0) := "0000";
    constant ap_const_lv4_1 : STD_LOGIC_VECTOR (3 downto 0) := "0001";
    constant ap_const_lv4_2 : STD_LOGIC_VECTOR (3 downto 0) := "0010";
    constant ap_const_lv4_F : STD_LOGIC_VECTOR (3 downto 0) := "1111";
    constant ap_const_lv4_E : STD_LOGIC_VECTOR (3 downto 0) := "1110";
    constant ap_const_lv4_D : STD_LOGIC_VECTOR (3 downto 0) := "1101";
    constant ap_const_lv5_1F : STD_LOGIC_VECTOR (4 downto 0) := "11111";
    constant ap_const_boolean_1 : BOOLEAN := true;

    signal ap_CS_fsm : STD_LOGIC_VECTOR (8 downto 0) := "000000001";
    attribute fsm_encoding : string;
    attribute fsm_encoding of ap_CS_fsm : signal is "none";
    signal ap_CS_fsm_state1 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state1 : signal is "none";
    signal shift_reg_address0 : STD_LOGIC_VECTOR (3 downto 0);
    signal shift_reg_ce0 : STD_LOGIC;
    signal shift_reg_we0 : STD_LOGIC;
    signal shift_reg_d0 : STD_LOGIC_VECTOR (31 downto 0);
    signal shift_reg_q0 : STD_LOGIC_VECTOR (31 downto 0);
    signal shift_reg_address1 : STD_LOGIC_VECTOR (3 downto 0);
    signal shift_reg_ce1 : STD_LOGIC;
    signal shift_reg_we1 : STD_LOGIC;
    signal shift_reg_d1 : STD_LOGIC_VECTOR (31 downto 0);
    signal shift_reg_q1 : STD_LOGIC_VECTOR (31 downto 0);
    signal reg_171 : STD_LOGIC_VECTOR (31 downto 0);
    signal ap_CS_fsm_state3 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state3 : signal is "none";
    signal ap_CS_fsm_state7 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state7 : signal is "none";
    signal shift_reg_addr_reg_262 : STD_LOGIC_VECTOR (3 downto 0);
    signal ap_CS_fsm_state2 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state2 : signal is "none";
    signal tmp_fu_176_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal shift_reg_addr_2_reg_268 : STD_LOGIC_VECTOR (3 downto 0);
    signal tmp_6_fu_209_p2 : STD_LOGIC_VECTOR (3 downto 0);
    signal tmp_6_reg_274 : STD_LOGIC_VECTOR (3 downto 0);
    signal ap_CS_fsm_state6 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state6 : signal is "none";
    signal tmp_8_fu_224_p3 : STD_LOGIC_VECTOR (0 downto 0);
    signal i_2_fu_238_p2 : STD_LOGIC_VECTOR (4 downto 0);
    signal i_2_reg_297 : STD_LOGIC_VECTOR (4 downto 0);
    signal c_load_reg_302 : STD_LOGIC_VECTOR (31 downto 0);
    signal tmp_s_fu_244_p2 : STD_LOGIC_VECTOR (31 downto 0);
    signal tmp_s_reg_307 : STD_LOGIC_VECTOR (31 downto 0);
    signal ap_CS_fsm_state8 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state8 : signal is "none";
    signal acc_1_fu_249_p2 : STD_LOGIC_VECTOR (31 downto 0);
    signal ap_CS_fsm_state9 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state9 : signal is "none";
    signal i_reg_135 : STD_LOGIC_VECTOR (3 downto 0);
    signal ap_CS_fsm_state4 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state4 : signal is "none";
    signal acc_reg_147 : STD_LOGIC_VECTOR (31 downto 0);
    signal ap_CS_fsm_state5 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state5 : signal is "none";
    signal i_1_reg_160 : STD_LOGIC_VECTOR (4 downto 0);
    signal tmp_2_fu_188_p1 : STD_LOGIC_VECTOR (63 downto 0);
    signal tmp_5_fu_199_p1 : STD_LOGIC_VECTOR (63 downto 0);
    signal tmp_3_fu_204_p1 : STD_LOGIC_VECTOR (63 downto 0);
    signal tmp_7_fu_215_p1 : STD_LOGIC_VECTOR (63 downto 0);
    signal tmp_9_fu_232_p1 : STD_LOGIC_VECTOR (63 downto 0);
    signal tmp_1_fu_182_p2 : STD_LOGIC_VECTOR (3 downto 0);
    signal tmp_4_fu_193_p2 : STD_LOGIC_VECTOR (3 downto 0);
    signal i_1_cast_fu_220_p1 : STD_LOGIC_VECTOR (31 downto 0);
    signal tmp_s_fu_244_p0 : STD_LOGIC_VECTOR (31 downto 0);
    signal ap_NS_fsm : STD_LOGIC_VECTOR (8 downto 0);

    component fir_shift_reg IS
    generic (
        DataWidth : INTEGER;
        AddressRange : INTEGER;
        AddressWidth : INTEGER );
    port (
        clk : IN STD_LOGIC;
        reset : IN STD_LOGIC;
        address0 : IN STD_LOGIC_VECTOR (3 downto 0);
        ce0 : IN STD_LOGIC;
        we0 : IN STD_LOGIC;
        d0 : IN STD_LOGIC_VECTOR (31 downto 0);
        q0 : OUT STD_LOGIC_VECTOR (31 downto 0);
        address1 : IN STD_LOGIC_VECTOR (3 downto 0);
        ce1 : IN STD_LOGIC;
        we1 : IN STD_LOGIC;
        d1 : IN STD_LOGIC_VECTOR (31 downto 0);
        q1 : OUT STD_LOGIC_VECTOR (31 downto 0) );
    end component;



begin
    shift_reg_U : component fir_shift_reg
    generic map (
        DataWidth => 32,
        AddressRange => 11,
        AddressWidth => 4)
    port map (
        clk => ap_clk,
        reset => ap_rst,
        address0 => shift_reg_address0,
        ce0 => shift_reg_ce0,
        we0 => shift_reg_we0,
        d0 => shift_reg_d0,
        q0 => shift_reg_q0,
        address1 => shift_reg_address1,
        ce1 => shift_reg_ce1,
        we1 => shift_reg_we1,
        d1 => shift_reg_d1,
        q1 => shift_reg_q1);





    ap_CS_fsm_assign_proc : process(ap_clk)
    begin
        if (ap_clk'event and ap_clk =  '1') then
            if (ap_rst = '1') then
                ap_CS_fsm <= ap_ST_fsm_state1;
            else
                ap_CS_fsm <= ap_NS_fsm;
            end if;
        end if;
    end process;


    acc_reg_147_assign_proc : process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if ((ap_const_logic_1 = ap_CS_fsm_state9)) then 
                acc_reg_147 <= acc_1_fu_249_p2;
            elsif ((ap_const_logic_1 = ap_CS_fsm_state5)) then 
                acc_reg_147 <= ap_const_lv32_0;
            end if; 
        end if;
    end process;

    i_1_reg_160_assign_proc : process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if ((ap_const_logic_1 = ap_CS_fsm_state9)) then 
                i_1_reg_160 <= i_2_reg_297;
            elsif ((ap_const_logic_1 = ap_CS_fsm_state5)) then 
                i_1_reg_160 <= ap_const_lv5_A;
            end if; 
        end if;
    end process;

    i_reg_135_assign_proc : process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if ((ap_const_logic_1 = ap_CS_fsm_state4)) then 
                i_reg_135 <= tmp_6_reg_274;
            elsif (((ap_const_logic_1 = ap_CS_fsm_state1) and (ap_start = ap_const_logic_1))) then 
                i_reg_135 <= ap_const_lv4_A;
            end if; 
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if ((ap_const_logic_1 = ap_CS_fsm_state7)) then
                c_load_reg_302 <= c_q0;
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((tmp_8_fu_224_p3 = ap_const_lv1_0) and (ap_const_logic_1 = ap_CS_fsm_state6))) then
                i_2_reg_297 <= i_2_fu_238_p2;
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((ap_const_logic_1 = ap_CS_fsm_state7) or (ap_const_logic_1 = ap_CS_fsm_state3))) then
                reg_171 <= shift_reg_q1;
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((tmp_fu_176_p2 = ap_const_lv1_1) and (ap_const_logic_1 = ap_CS_fsm_state2))) then
                shift_reg_addr_2_reg_268 <= tmp_5_fu_199_p1(4 - 1 downto 0);
                shift_reg_addr_reg_262 <= tmp_2_fu_188_p1(4 - 1 downto 0);
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if ((ap_const_logic_1 = ap_CS_fsm_state3)) then
                tmp_6_reg_274 <= tmp_6_fu_209_p2;
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if ((ap_const_logic_1 = ap_CS_fsm_state8)) then
                tmp_s_reg_307 <= tmp_s_fu_244_p2;
            end if;
        end if;
    end process;

    ap_NS_fsm_assign_proc : process (ap_start, ap_CS_fsm, ap_CS_fsm_state1, ap_CS_fsm_state2, tmp_fu_176_p2, ap_CS_fsm_state6, tmp_8_fu_224_p3)
    begin
        case ap_CS_fsm is
            when ap_ST_fsm_state1 => 
                if (((ap_const_logic_1 = ap_CS_fsm_state1) and (ap_start = ap_const_logic_1))) then
                    ap_NS_fsm <= ap_ST_fsm_state2;
                else
                    ap_NS_fsm <= ap_ST_fsm_state1;
                end if;
            when ap_ST_fsm_state2 => 
                if (((tmp_fu_176_p2 = ap_const_lv1_0) and (ap_const_logic_1 = ap_CS_fsm_state2))) then
                    ap_NS_fsm <= ap_ST_fsm_state5;
                else
                    ap_NS_fsm <= ap_ST_fsm_state3;
                end if;
            when ap_ST_fsm_state3 => 
                ap_NS_fsm <= ap_ST_fsm_state4;
            when ap_ST_fsm_state4 => 
                ap_NS_fsm <= ap_ST_fsm_state2;
            when ap_ST_fsm_state5 => 
                ap_NS_fsm <= ap_ST_fsm_state6;
            when ap_ST_fsm_state6 => 
                if (((tmp_8_fu_224_p3 = ap_const_lv1_1) and (ap_const_logic_1 = ap_CS_fsm_state6))) then
                    ap_NS_fsm <= ap_ST_fsm_state1;
                else
                    ap_NS_fsm <= ap_ST_fsm_state7;
                end if;
            when ap_ST_fsm_state7 => 
                ap_NS_fsm <= ap_ST_fsm_state8;
            when ap_ST_fsm_state8 => 
                ap_NS_fsm <= ap_ST_fsm_state9;
            when ap_ST_fsm_state9 => 
                ap_NS_fsm <= ap_ST_fsm_state6;
            when others =>  
                ap_NS_fsm <= "XXXXXXXXX";
        end case;
    end process;
    acc_1_fu_249_p2 <= std_logic_vector(unsigned(tmp_s_reg_307) + unsigned(acc_reg_147));
    ap_CS_fsm_state1 <= ap_CS_fsm(0);
    ap_CS_fsm_state2 <= ap_CS_fsm(1);
    ap_CS_fsm_state3 <= ap_CS_fsm(2);
    ap_CS_fsm_state4 <= ap_CS_fsm(3);
    ap_CS_fsm_state5 <= ap_CS_fsm(4);
    ap_CS_fsm_state6 <= ap_CS_fsm(5);
    ap_CS_fsm_state7 <= ap_CS_fsm(6);
    ap_CS_fsm_state8 <= ap_CS_fsm(7);
    ap_CS_fsm_state9 <= ap_CS_fsm(8);

    ap_done_assign_proc : process(ap_CS_fsm_state6, tmp_8_fu_224_p3)
    begin
        if (((tmp_8_fu_224_p3 = ap_const_lv1_1) and (ap_const_logic_1 = ap_CS_fsm_state6))) then 
            ap_done <= ap_const_logic_1;
        else 
            ap_done <= ap_const_logic_0;
        end if; 
    end process;


    ap_idle_assign_proc : process(ap_start, ap_CS_fsm_state1)
    begin
        if (((ap_start = ap_const_logic_0) and (ap_const_logic_1 = ap_CS_fsm_state1))) then 
            ap_idle <= ap_const_logic_1;
        else 
            ap_idle <= ap_const_logic_0;
        end if; 
    end process;


    ap_ready_assign_proc : process(ap_CS_fsm_state6, tmp_8_fu_224_p3)
    begin
        if (((tmp_8_fu_224_p3 = ap_const_lv1_1) and (ap_const_logic_1 = ap_CS_fsm_state6))) then 
            ap_ready <= ap_const_logic_1;
        else 
            ap_ready <= ap_const_logic_0;
        end if; 
    end process;

    c_address0 <= tmp_9_fu_232_p1(4 - 1 downto 0);

    c_ce0_assign_proc : process(ap_CS_fsm_state6)
    begin
        if ((ap_const_logic_1 = ap_CS_fsm_state6)) then 
            c_ce0 <= ap_const_logic_1;
        else 
            c_ce0 <= ap_const_logic_0;
        end if; 
    end process;

        i_1_cast_fu_220_p1 <= std_logic_vector(IEEE.numeric_std.resize(signed(i_1_reg_160),32));

    i_2_fu_238_p2 <= std_logic_vector(signed(i_1_reg_160) + signed(ap_const_lv5_1F));

    shift_reg_address0_assign_proc : process(ap_CS_fsm_state3, ap_CS_fsm_state2, tmp_fu_176_p2, shift_reg_addr_2_reg_268, ap_CS_fsm_state4, ap_CS_fsm_state5, tmp_2_fu_188_p1, tmp_7_fu_215_p1)
    begin
        if ((ap_const_logic_1 = ap_CS_fsm_state4)) then 
            shift_reg_address0 <= shift_reg_addr_2_reg_268;
        elsif ((ap_const_logic_1 = ap_CS_fsm_state3)) then 
            shift_reg_address0 <= tmp_7_fu_215_p1(4 - 1 downto 0);
        elsif (((ap_const_logic_1 = ap_CS_fsm_state5) or ((tmp_fu_176_p2 = ap_const_lv1_0) and (ap_const_logic_1 = ap_CS_fsm_state2)))) then 
            shift_reg_address0 <= ap_const_lv4_0;
        elsif (((tmp_fu_176_p2 = ap_const_lv1_1) and (ap_const_logic_1 = ap_CS_fsm_state2))) then 
            shift_reg_address0 <= tmp_2_fu_188_p1(4 - 1 downto 0);
        else 
            shift_reg_address0 <= "XXXX";
        end if; 
    end process;


    shift_reg_address1_assign_proc : process(ap_CS_fsm_state3, shift_reg_addr_reg_262, ap_CS_fsm_state2, ap_CS_fsm_state6, ap_CS_fsm_state4, ap_CS_fsm_state5, tmp_5_fu_199_p1, tmp_3_fu_204_p1, tmp_9_fu_232_p1)
    begin
        if ((ap_const_logic_1 = ap_CS_fsm_state6)) then 
            shift_reg_address1 <= tmp_9_fu_232_p1(4 - 1 downto 0);
        elsif ((ap_const_logic_1 = ap_CS_fsm_state5)) then 
            shift_reg_address1 <= ap_const_lv4_1;
        elsif ((ap_const_logic_1 = ap_CS_fsm_state4)) then 
            shift_reg_address1 <= shift_reg_addr_reg_262;
        elsif ((ap_const_logic_1 = ap_CS_fsm_state3)) then 
            shift_reg_address1 <= tmp_3_fu_204_p1(4 - 1 downto 0);
        elsif ((ap_const_logic_1 = ap_CS_fsm_state2)) then 
            shift_reg_address1 <= tmp_5_fu_199_p1(4 - 1 downto 0);
        else 
            shift_reg_address1 <= "XXXX";
        end if; 
    end process;


    shift_reg_ce0_assign_proc : process(ap_CS_fsm_state3, ap_CS_fsm_state2, tmp_fu_176_p2, ap_CS_fsm_state4, ap_CS_fsm_state5)
    begin
        if (((ap_const_logic_1 = ap_CS_fsm_state3) or (ap_const_logic_1 = ap_CS_fsm_state5) or (ap_const_logic_1 = ap_CS_fsm_state4) or ((tmp_fu_176_p2 = ap_const_lv1_1) and (ap_const_logic_1 = ap_CS_fsm_state2)) or ((tmp_fu_176_p2 = ap_const_lv1_0) and (ap_const_logic_1 = ap_CS_fsm_state2)))) then 
            shift_reg_ce0 <= ap_const_logic_1;
        else 
            shift_reg_ce0 <= ap_const_logic_0;
        end if; 
    end process;


    shift_reg_ce1_assign_proc : process(ap_CS_fsm_state3, ap_CS_fsm_state2, ap_CS_fsm_state6, ap_CS_fsm_state4, ap_CS_fsm_state5)
    begin
        if (((ap_const_logic_1 = ap_CS_fsm_state6) or (ap_const_logic_1 = ap_CS_fsm_state2) or (ap_const_logic_1 = ap_CS_fsm_state3) or (ap_const_logic_1 = ap_CS_fsm_state5) or (ap_const_logic_1 = ap_CS_fsm_state4))) then 
            shift_reg_ce1 <= ap_const_logic_1;
        else 
            shift_reg_ce1 <= ap_const_logic_0;
        end if; 
    end process;


    shift_reg_d0_assign_proc : process(x, shift_reg_q0, ap_CS_fsm_state4, ap_CS_fsm_state5)
    begin
        if ((ap_const_logic_1 = ap_CS_fsm_state5)) then 
            shift_reg_d0 <= x;
        elsif ((ap_const_logic_1 = ap_CS_fsm_state4)) then 
            shift_reg_d0 <= shift_reg_q0;
        else 
            shift_reg_d0 <= "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
        end if; 
    end process;


    shift_reg_d1_assign_proc : process(shift_reg_q0, reg_171, ap_CS_fsm_state3, ap_CS_fsm_state4, ap_CS_fsm_state5)
    begin
        if ((ap_const_logic_1 = ap_CS_fsm_state4)) then 
            shift_reg_d1 <= reg_171;
        elsif (((ap_const_logic_1 = ap_CS_fsm_state3) or (ap_const_logic_1 = ap_CS_fsm_state5))) then 
            shift_reg_d1 <= shift_reg_q0;
        else 
            shift_reg_d1 <= "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
        end if; 
    end process;


    shift_reg_we0_assign_proc : process(ap_CS_fsm_state4, ap_CS_fsm_state5)
    begin
        if (((ap_const_logic_1 = ap_CS_fsm_state5) or (ap_const_logic_1 = ap_CS_fsm_state4))) then 
            shift_reg_we0 <= ap_const_logic_1;
        else 
            shift_reg_we0 <= ap_const_logic_0;
        end if; 
    end process;


    shift_reg_we1_assign_proc : process(ap_CS_fsm_state3, ap_CS_fsm_state4, ap_CS_fsm_state5)
    begin
        if (((ap_const_logic_1 = ap_CS_fsm_state3) or (ap_const_logic_1 = ap_CS_fsm_state5) or (ap_const_logic_1 = ap_CS_fsm_state4))) then 
            shift_reg_we1 <= ap_const_logic_1;
        else 
            shift_reg_we1 <= ap_const_logic_0;
        end if; 
    end process;

    tmp_1_fu_182_p2 <= std_logic_vector(unsigned(i_reg_135) + unsigned(ap_const_lv4_F));
    tmp_2_fu_188_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(tmp_1_fu_182_p2),64));
    tmp_3_fu_204_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(i_reg_135),64));
    tmp_4_fu_193_p2 <= std_logic_vector(unsigned(i_reg_135) + unsigned(ap_const_lv4_E));
    tmp_5_fu_199_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(tmp_4_fu_193_p2),64));
    tmp_6_fu_209_p2 <= std_logic_vector(unsigned(i_reg_135) + unsigned(ap_const_lv4_D));
    tmp_7_fu_215_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(tmp_6_fu_209_p2),64));
    tmp_8_fu_224_p3 <= i_1_reg_160(4 downto 4);
    tmp_9_fu_232_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(i_1_cast_fu_220_p1),64));
    tmp_fu_176_p2 <= "1" when (unsigned(i_reg_135) > unsigned(ap_const_lv4_2)) else "0";
    tmp_s_fu_244_p0 <= reg_171;
    tmp_s_fu_244_p2 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(std_logic_vector(signed(tmp_s_fu_244_p0) * signed(c_load_reg_302))), 32));
    y <= acc_reg_147;

    y_ap_vld_assign_proc : process(ap_CS_fsm_state6, tmp_8_fu_224_p3)
    begin
        if (((tmp_8_fu_224_p3 = ap_const_lv1_1) and (ap_const_logic_1 = ap_CS_fsm_state6))) then 
            y_ap_vld <= ap_const_logic_1;
        else 
            y_ap_vld <= ap_const_logic_0;
        end if; 
    end process;

end behav;
