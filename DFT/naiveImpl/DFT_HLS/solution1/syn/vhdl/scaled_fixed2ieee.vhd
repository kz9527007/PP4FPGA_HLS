-- ==============================================================
-- RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
-- Version: 2018.2
-- Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
-- 
-- ===========================================================

library IEEE;
use IEEE.std_logic_1164.all;
use IEEE.numeric_std.all;

entity scaled_fixed2ieee is
port (
    ap_clk : IN STD_LOGIC;
    ap_rst : IN STD_LOGIC;
    ap_start : IN STD_LOGIC;
    ap_done : OUT STD_LOGIC;
    ap_idle : OUT STD_LOGIC;
    ap_ready : OUT STD_LOGIC;
    in_V : IN STD_LOGIC_VECTOR (62 downto 0);
    prescale : IN STD_LOGIC_VECTOR (11 downto 0);
    ap_return : OUT STD_LOGIC_VECTOR (63 downto 0) );
end;


architecture behav of scaled_fixed2ieee is 
    constant ap_const_logic_1 : STD_LOGIC := '1';
    constant ap_const_logic_0 : STD_LOGIC := '0';
    constant ap_ST_fsm_state1 : STD_LOGIC_VECTOR (7 downto 0) := "00000001";
    constant ap_ST_fsm_state2 : STD_LOGIC_VECTOR (7 downto 0) := "00000010";
    constant ap_ST_fsm_state3 : STD_LOGIC_VECTOR (7 downto 0) := "00000100";
    constant ap_ST_fsm_state4 : STD_LOGIC_VECTOR (7 downto 0) := "00001000";
    constant ap_ST_fsm_state5 : STD_LOGIC_VECTOR (7 downto 0) := "00010000";
    constant ap_ST_fsm_state6 : STD_LOGIC_VECTOR (7 downto 0) := "00100000";
    constant ap_ST_fsm_state7 : STD_LOGIC_VECTOR (7 downto 0) := "01000000";
    constant ap_ST_fsm_state8 : STD_LOGIC_VECTOR (7 downto 0) := "10000000";
    constant ap_const_lv32_0 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000000";
    constant ap_const_lv32_1 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000001";
    constant ap_const_lv1_0 : STD_LOGIC_VECTOR (0 downto 0) := "0";
    constant ap_const_lv1_1 : STD_LOGIC_VECTOR (0 downto 0) := "1";
    constant ap_const_lv32_2 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000010";
    constant ap_const_lv32_4 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000100";
    constant ap_const_lv32_5 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000101";
    constant ap_const_lv32_6 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000110";
    constant ap_const_lv2_0 : STD_LOGIC_VECTOR (1 downto 0) := "00";
    constant ap_const_lv32_3 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000011";
    constant ap_const_lv2_1 : STD_LOGIC_VECTOR (1 downto 0) := "01";
    constant ap_const_lv3_0 : STD_LOGIC_VECTOR (2 downto 0) := "000";
    constant ap_const_lv2_3 : STD_LOGIC_VECTOR (1 downto 0) := "11";
    constant ap_const_lv2_2 : STD_LOGIC_VECTOR (1 downto 0) := "10";
    constant ap_const_lv4_0 : STD_LOGIC_VECTOR (3 downto 0) := "0000";
    constant ap_const_lv6_3E : STD_LOGIC_VECTOR (5 downto 0) := "111110";
    constant ap_const_lv6_2F : STD_LOGIC_VECTOR (5 downto 0) := "101111";
    constant ap_const_lv32_10 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000010000";
    constant ap_const_lv32_1F : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000011111";
    constant ap_const_lv32_3E : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000111110";
    constant ap_const_lv63_7FFFFFFFFFFFFFFF : STD_LOGIC_VECTOR (62 downto 0) := "111111111111111111111111111111111111111111111111111111111111111";
    constant ap_const_lv32_F : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000001111";
    constant ap_const_lv3_4 : STD_LOGIC_VECTOR (2 downto 0) := "100";
    constant ap_const_lv3_1 : STD_LOGIC_VECTOR (2 downto 0) := "001";
    constant ap_const_lv63_0 : STD_LOGIC_VECTOR (62 downto 0) := "000000000000000000000000000000000000000000000000000000000000000";
    constant ap_const_lv12_3FF : STD_LOGIC_VECTOR (11 downto 0) := "001111111111";
    constant ap_const_lv32_7 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000111";
    constant ap_const_lv32_A : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000001010";
    constant ap_const_lv32_3D : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000111101";
    constant ap_const_lv52_0 : STD_LOGIC_VECTOR (51 downto 0) := "0000000000000000000000000000000000000000000000000000";
    constant ap_const_lv11_0 : STD_LOGIC_VECTOR (10 downto 0) := "00000000000";
    constant ap_const_lv64_0 : STD_LOGIC_VECTOR (63 downto 0) := "0000000000000000000000000000000000000000000000000000000000000000";
    constant ap_const_boolean_1 : BOOLEAN := true;

    signal ap_CS_fsm : STD_LOGIC_VECTOR (7 downto 0) := "00000001";
    attribute fsm_encoding : string;
    attribute fsm_encoding of ap_CS_fsm : signal is "none";
    signal ap_CS_fsm_state1 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state1 : signal is "none";
    signal out_bits_2_V_load_reg_676 : STD_LOGIC_VECTOR (31 downto 0);
    signal ap_CS_fsm_state2 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state2 : signal is "none";
    signal out_bits_2_V_1_load_reg_682 : STD_LOGIC_VECTOR (31 downto 0);
    signal out_bits_2_V_2_load_reg_688 : STD_LOGIC_VECTOR (31 downto 0);
    signal i_1_fu_240_p2 : STD_LOGIC_VECTOR (1 downto 0);
    signal i_1_reg_697 : STD_LOGIC_VECTOR (1 downto 0);
    signal Hi_assign_fu_254_p2 : STD_LOGIC_VECTOR (5 downto 0);
    signal Hi_assign_reg_702 : STD_LOGIC_VECTOR (5 downto 0);
    signal exitcond1_fu_234_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal Lo_assign_fu_260_p2 : STD_LOGIC_VECTOR (5 downto 0);
    signal Lo_assign_reg_709 : STD_LOGIC_VECTOR (5 downto 0);
    signal tmp_24_fu_266_p2 : STD_LOGIC_VECTOR (5 downto 0);
    signal tmp_24_reg_717 : STD_LOGIC_VECTOR (5 downto 0);
    signal p_Result_28_fu_283_p5 : STD_LOGIC_VECTOR (31 downto 0);
    signal p_Result_28_reg_746 : STD_LOGIC_VECTOR (31 downto 0);
    signal tmp_36_fu_369_p1 : STD_LOGIC_VECTOR (15 downto 0);
    signal tmp_36_reg_751 : STD_LOGIC_VECTOR (15 downto 0);
    signal ap_CS_fsm_state3 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state3 : signal is "none";
    signal i_2_fu_413_p2 : STD_LOGIC_VECTOR (2 downto 0);
    signal ap_CS_fsm_state5 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state5 : signal is "none";
    signal tmp_37_fu_471_p3 : STD_LOGIC_VECTOR (0 downto 0);
    signal tmp_37_reg_767 : STD_LOGIC_VECTOR (0 downto 0);
    signal ap_CS_fsm_state6 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state6 : signal is "none";
    signal i_3_fu_479_p2 : STD_LOGIC_VECTOR (2 downto 0);
    signal i_3_reg_771 : STD_LOGIC_VECTOR (2 downto 0);
    signal sh_assign_fu_501_p6 : STD_LOGIC_VECTOR (31 downto 0);
    signal sh_assign_reg_776 : STD_LOGIC_VECTOR (31 downto 0);
    signal isNeg_reg_783 : STD_LOGIC_VECTOR (0 downto 0);
    signal tmp_3_fu_523_p2 : STD_LOGIC_VECTOR (31 downto 0);
    signal tmp_3_reg_789 : STD_LOGIC_VECTOR (31 downto 0);
    signal shift_2_fu_529_p2 : STD_LOGIC_VECTOR (31 downto 0);
    signal ap_CS_fsm_state7 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state7 : signal is "none";
    signal in_shift_V_fu_555_p3 : STD_LOGIC_VECTOR (62 downto 0);
    signal tmp_10_fu_567_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal tmp_10_reg_809 : STD_LOGIC_VECTOR (0 downto 0);
    signal tmp_9_fu_562_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal i_reg_138 : STD_LOGIC_VECTOR (1 downto 0);
    signal ap_CS_fsm_state4 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state4 : signal is "none";
    signal p_Val2_2_reg_150 : STD_LOGIC_VECTOR (31 downto 0);
    signal i1_reg_161 : STD_LOGIC_VECTOR (2 downto 0);
    signal exitcond_fu_407_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal in_shift_reg_172 : STD_LOGIC_VECTOR (62 downto 0);
    signal shift_reg_182 : STD_LOGIC_VECTOR (31 downto 0);
    signal i2_reg_194 : STD_LOGIC_VECTOR (2 downto 0);
    signal p_Val2_s_reg_205 : STD_LOGIC_VECTOR (62 downto 0);
    signal shift_1_reg_215 : STD_LOGIC_VECTOR (31 downto 0);
    signal out_bits_2_V_fu_98 : STD_LOGIC_VECTOR (31 downto 0);
    signal out_bits_0_V_fu_380_p5 : STD_LOGIC_VECTOR (31 downto 0);
    signal out_bits_2_V_1_fu_102 : STD_LOGIC_VECTOR (31 downto 0);
    signal out_bits_2_V_2_fu_106 : STD_LOGIC_VECTOR (31 downto 0);
    signal c_3_fu_110 : STD_LOGIC_VECTOR (31 downto 0);
    signal c_0_fu_443_p3 : STD_LOGIC_VECTOR (31 downto 0);
    signal tmp_35_fu_419_p1 : STD_LOGIC_VECTOR (1 downto 0);
    signal c_3_1_fu_114 : STD_LOGIC_VECTOR (31 downto 0);
    signal c_3_2_fu_118 : STD_LOGIC_VECTOR (31 downto 0);
    signal c_3_3_fu_122 : STD_LOGIC_VECTOR (31 downto 0);
    signal tmp_7_fu_246_p3 : STD_LOGIC_VECTOR (5 downto 0);
    signal tmp_20_fu_272_p1 : STD_LOGIC_VECTOR (14 downto 0);
    signal tmp_fu_275_p3 : STD_LOGIC_VECTOR (15 downto 0);
    signal tmp_21_fu_295_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal tmp_23_fu_308_p2 : STD_LOGIC_VECTOR (5 downto 0);
    signal tmp_25_fu_312_p2 : STD_LOGIC_VECTOR (5 downto 0);
    signal tmp_22_fu_299_p4 : STD_LOGIC_VECTOR (62 downto 0);
    signal tmp_26_fu_316_p3 : STD_LOGIC_VECTOR (5 downto 0);
    signal tmp_28_fu_331_p3 : STD_LOGIC_VECTOR (5 downto 0);
    signal tmp_29_fu_337_p2 : STD_LOGIC_VECTOR (5 downto 0);
    signal tmp_27_fu_324_p3 : STD_LOGIC_VECTOR (62 downto 0);
    signal tmp_30_fu_343_p1 : STD_LOGIC_VECTOR (62 downto 0);
    signal tmp_31_fu_347_p1 : STD_LOGIC_VECTOR (62 downto 0);
    signal tmp_32_fu_351_p2 : STD_LOGIC_VECTOR (62 downto 0);
    signal tmp_33_fu_357_p2 : STD_LOGIC_VECTOR (62 downto 0);
    signal p_Result_s_fu_363_p2 : STD_LOGIC_VECTOR (62 downto 0);
    signal tmp_6_fu_373_p3 : STD_LOGIC_VECTOR (16 downto 0);
    signal p_Val2_30_fu_423_p5 : STD_LOGIC_VECTOR (1 downto 0);
    signal p_Val2_30_fu_423_p6 : STD_LOGIC_VECTOR (31 downto 0);
    signal p_Result_29_fu_433_p4 : STD_LOGIC_VECTOR (31 downto 0);
    signal sh_assign_fu_501_p5 : STD_LOGIC_VECTOR (1 downto 0);
    signal sh_assign_1_fu_534_p3 : STD_LOGIC_VECTOR (31 downto 0);
    signal tmp_4_fu_539_p1 : STD_LOGIC_VECTOR (62 downto 0);
    signal tmp_5_fu_549_p2 : STD_LOGIC_VECTOR (62 downto 0);
    signal tmp_8_fu_543_p2 : STD_LOGIC_VECTOR (62 downto 0);
    signal ap_CS_fsm_state8 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state8 : signal is "none";
    signal tmp_s_fu_572_p2 : STD_LOGIC_VECTOR (11 downto 0);
    signal tmp_cast_fu_577_p1 : STD_LOGIC_VECTOR (31 downto 0);
    signal newexp_fu_581_p2 : STD_LOGIC_VECTOR (31 downto 0);
    signal tmp_40_fu_587_p3 : STD_LOGIC_VECTOR (0 downto 0);
    signal or_cond_fu_595_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal phitmp2_fu_604_p4 : STD_LOGIC_VECTOR (51 downto 0);
    signal tmp_41_fu_600_p1 : STD_LOGIC_VECTOR (10 downto 0);
    signal out_exp_V_fu_622_p3 : STD_LOGIC_VECTOR (10 downto 0);
    signal p_Val2_31_fu_614_p3 : STD_LOGIC_VECTOR (51 downto 0);
    signal p_Result_30_fu_630_p4 : STD_LOGIC_VECTOR (63 downto 0);
    signal result_write_assign_fu_640_p1 : STD_LOGIC_VECTOR (63 downto 0);
    signal ap_return_preg : STD_LOGIC_VECTOR (63 downto 0) := "0000000000000000000000000000000000000000000000000000000000000000";
    signal ap_NS_fsm : STD_LOGIC_VECTOR (7 downto 0);

    component dft_mux_42_32_1_1 IS
    generic (
        ID : INTEGER;
        NUM_STAGE : INTEGER;
        din0_WIDTH : INTEGER;
        din1_WIDTH : INTEGER;
        din2_WIDTH : INTEGER;
        din3_WIDTH : INTEGER;
        din4_WIDTH : INTEGER;
        dout_WIDTH : INTEGER );
    port (
        din0 : IN STD_LOGIC_VECTOR (31 downto 0);
        din1 : IN STD_LOGIC_VECTOR (31 downto 0);
        din2 : IN STD_LOGIC_VECTOR (31 downto 0);
        din3 : IN STD_LOGIC_VECTOR (31 downto 0);
        din4 : IN STD_LOGIC_VECTOR (1 downto 0);
        dout : OUT STD_LOGIC_VECTOR (31 downto 0) );
    end component;



begin
    dft_mux_42_32_1_1_U1 : component dft_mux_42_32_1_1
    generic map (
        ID => 1,
        NUM_STAGE => 1,
        din0_WIDTH => 32,
        din1_WIDTH => 32,
        din2_WIDTH => 32,
        din3_WIDTH => 32,
        din4_WIDTH => 2,
        dout_WIDTH => 32)
    port map (
        din0 => out_bits_2_V_load_reg_676,
        din1 => out_bits_2_V_1_load_reg_682,
        din2 => out_bits_2_V_2_load_reg_688,
        din3 => p_Result_28_reg_746,
        din4 => p_Val2_30_fu_423_p5,
        dout => p_Val2_30_fu_423_p6);

    dft_mux_42_32_1_1_U2 : component dft_mux_42_32_1_1
    generic map (
        ID => 1,
        NUM_STAGE => 1,
        din0_WIDTH => 32,
        din1_WIDTH => 32,
        din2_WIDTH => 32,
        din3_WIDTH => 32,
        din4_WIDTH => 2,
        dout_WIDTH => 32)
    port map (
        din0 => c_3_1_fu_114,
        din1 => c_3_2_fu_118,
        din2 => c_3_3_fu_122,
        din3 => c_3_fu_110,
        din4 => sh_assign_fu_501_p5,
        dout => sh_assign_fu_501_p6);





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


    ap_return_preg_assign_proc : process(ap_clk)
    begin
        if (ap_clk'event and ap_clk =  '1') then
            if (ap_rst = '1') then
                ap_return_preg(0) <= '0';
                ap_return_preg(1) <= '0';
                ap_return_preg(2) <= '0';
                ap_return_preg(3) <= '0';
                ap_return_preg(4) <= '0';
                ap_return_preg(5) <= '0';
                ap_return_preg(6) <= '0';
                ap_return_preg(7) <= '0';
                ap_return_preg(8) <= '0';
                ap_return_preg(9) <= '0';
                ap_return_preg(10) <= '0';
                ap_return_preg(11) <= '0';
                ap_return_preg(12) <= '0';
                ap_return_preg(13) <= '0';
                ap_return_preg(14) <= '0';
                ap_return_preg(15) <= '0';
                ap_return_preg(16) <= '0';
                ap_return_preg(17) <= '0';
                ap_return_preg(18) <= '0';
                ap_return_preg(19) <= '0';
                ap_return_preg(20) <= '0';
                ap_return_preg(21) <= '0';
                ap_return_preg(22) <= '0';
                ap_return_preg(23) <= '0';
                ap_return_preg(24) <= '0';
                ap_return_preg(25) <= '0';
                ap_return_preg(26) <= '0';
                ap_return_preg(27) <= '0';
                ap_return_preg(28) <= '0';
                ap_return_preg(29) <= '0';
                ap_return_preg(30) <= '0';
                ap_return_preg(31) <= '0';
                ap_return_preg(32) <= '0';
                ap_return_preg(33) <= '0';
                ap_return_preg(34) <= '0';
                ap_return_preg(35) <= '0';
                ap_return_preg(36) <= '0';
                ap_return_preg(37) <= '0';
                ap_return_preg(38) <= '0';
                ap_return_preg(39) <= '0';
                ap_return_preg(40) <= '0';
                ap_return_preg(41) <= '0';
                ap_return_preg(42) <= '0';
                ap_return_preg(43) <= '0';
                ap_return_preg(44) <= '0';
                ap_return_preg(45) <= '0';
                ap_return_preg(46) <= '0';
                ap_return_preg(47) <= '0';
                ap_return_preg(48) <= '0';
                ap_return_preg(49) <= '0';
                ap_return_preg(50) <= '0';
                ap_return_preg(51) <= '0';
                ap_return_preg(52) <= '0';
                ap_return_preg(53) <= '0';
                ap_return_preg(54) <= '0';
                ap_return_preg(55) <= '0';
                ap_return_preg(56) <= '0';
                ap_return_preg(57) <= '0';
                ap_return_preg(58) <= '0';
                ap_return_preg(59) <= '0';
                ap_return_preg(60) <= '0';
                ap_return_preg(61) <= '0';
                ap_return_preg(62) <= '0';
            else
                if ((ap_const_logic_1 = ap_CS_fsm_state8)) then 
                                        ap_return_preg(62 downto 0) <= result_write_assign_fu_640_p1(62 downto 0);
                end if; 
            end if;
        end if;
    end process;


    i1_reg_161_assign_proc : process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((exitcond_fu_407_p2 = ap_const_lv1_0) and (ap_const_logic_1 = ap_CS_fsm_state5))) then 
                i1_reg_161 <= i_2_fu_413_p2;
            elsif (((exitcond1_fu_234_p2 = ap_const_lv1_1) and (ap_const_logic_1 = ap_CS_fsm_state2))) then 
                i1_reg_161 <= ap_const_lv3_0;
            end if; 
        end if;
    end process;

    i2_reg_194_assign_proc : process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((exitcond_fu_407_p2 = ap_const_lv1_1) and (ap_const_logic_1 = ap_CS_fsm_state5))) then 
                i2_reg_194 <= ap_const_lv3_0;
            elsif (((tmp_9_fu_562_p2 = ap_const_lv1_1) and (tmp_37_reg_767 = ap_const_lv1_0) and (ap_const_logic_1 = ap_CS_fsm_state7))) then 
                i2_reg_194 <= i_3_reg_771;
            end if; 
        end if;
    end process;

    i_reg_138_assign_proc : process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if ((ap_const_logic_1 = ap_CS_fsm_state4)) then 
                i_reg_138 <= i_1_reg_697;
            elsif (((ap_const_logic_1 = ap_CS_fsm_state1) and (ap_start = ap_const_logic_1))) then 
                i_reg_138 <= ap_const_lv2_0;
            end if; 
        end if;
    end process;

    in_shift_reg_172_assign_proc : process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((exitcond_fu_407_p2 = ap_const_lv1_1) and (ap_const_logic_1 = ap_CS_fsm_state5))) then 
                in_shift_reg_172 <= in_V;
            elsif (((tmp_9_fu_562_p2 = ap_const_lv1_1) and (tmp_37_reg_767 = ap_const_lv1_0) and (ap_const_logic_1 = ap_CS_fsm_state7))) then 
                in_shift_reg_172 <= in_shift_V_fu_555_p3;
            end if; 
        end if;
    end process;

    p_Val2_2_reg_150_assign_proc : process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if ((ap_const_logic_1 = ap_CS_fsm_state3)) then
                if ((i_reg_138 = ap_const_lv2_0)) then 
                    p_Val2_2_reg_150 <= out_bits_2_V_load_reg_676;
                elsif ((not((i_reg_138 = ap_const_lv2_0)) and not((i_reg_138 = ap_const_lv2_1)))) then 
                    p_Val2_2_reg_150 <= out_bits_2_V_2_load_reg_688;
                elsif ((i_reg_138 = ap_const_lv2_1)) then 
                    p_Val2_2_reg_150 <= out_bits_2_V_1_load_reg_682;
                end if;
            end if; 
        end if;
    end process;

    p_Val2_s_reg_205_assign_proc : process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((tmp_37_reg_767 = ap_const_lv1_0) and (tmp_9_fu_562_p2 = ap_const_lv1_0) and (ap_const_logic_1 = ap_CS_fsm_state7))) then 
                p_Val2_s_reg_205 <= in_shift_V_fu_555_p3;
            elsif (((tmp_37_fu_471_p3 = ap_const_lv1_1) and (ap_const_logic_1 = ap_CS_fsm_state6))) then 
                p_Val2_s_reg_205 <= in_shift_reg_172;
            end if; 
        end if;
    end process;

    shift_1_reg_215_assign_proc : process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((tmp_37_reg_767 = ap_const_lv1_0) and (tmp_9_fu_562_p2 = ap_const_lv1_0) and (ap_const_logic_1 = ap_CS_fsm_state7))) then 
                shift_1_reg_215 <= shift_2_fu_529_p2;
            elsif (((tmp_37_fu_471_p3 = ap_const_lv1_1) and (ap_const_logic_1 = ap_CS_fsm_state6))) then 
                shift_1_reg_215 <= shift_reg_182;
            end if; 
        end if;
    end process;

    shift_reg_182_assign_proc : process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((exitcond_fu_407_p2 = ap_const_lv1_1) and (ap_const_logic_1 = ap_CS_fsm_state5))) then 
                shift_reg_182 <= ap_const_lv32_0;
            elsif (((tmp_9_fu_562_p2 = ap_const_lv1_1) and (tmp_37_reg_767 = ap_const_lv1_0) and (ap_const_logic_1 = ap_CS_fsm_state7))) then 
                shift_reg_182 <= shift_2_fu_529_p2;
            end if; 
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((exitcond1_fu_234_p2 = ap_const_lv1_0) and (ap_const_logic_1 = ap_CS_fsm_state2))) then
                    Hi_assign_reg_702(5 downto 4) <= Hi_assign_fu_254_p2(5 downto 4);
                    Lo_assign_reg_709(5 downto 4) <= Lo_assign_fu_260_p2(5 downto 4);
                    tmp_24_reg_717(5 downto 4) <= tmp_24_fu_266_p2(5 downto 4);
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((exitcond_fu_407_p2 = ap_const_lv1_0) and (ap_const_logic_1 = ap_CS_fsm_state5) and (tmp_35_fu_419_p1 = ap_const_lv2_0))) then
                c_3_1_fu_114 <= c_0_fu_443_p3;
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((exitcond_fu_407_p2 = ap_const_lv1_0) and (ap_const_logic_1 = ap_CS_fsm_state5) and (tmp_35_fu_419_p1 = ap_const_lv2_1))) then
                c_3_2_fu_118 <= c_0_fu_443_p3;
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((exitcond_fu_407_p2 = ap_const_lv1_0) and (ap_const_logic_1 = ap_CS_fsm_state5) and (tmp_35_fu_419_p1 = ap_const_lv2_2))) then
                c_3_3_fu_122 <= c_0_fu_443_p3;
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((exitcond_fu_407_p2 = ap_const_lv1_0) and (ap_const_logic_1 = ap_CS_fsm_state5) and (tmp_35_fu_419_p1 = ap_const_lv2_3))) then
                c_3_fu_110 <= c_0_fu_443_p3;
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if ((ap_const_logic_1 = ap_CS_fsm_state2)) then
                i_1_reg_697 <= i_1_fu_240_p2;
                out_bits_2_V_1_load_reg_682 <= out_bits_2_V_1_fu_102;
                out_bits_2_V_2_load_reg_688 <= out_bits_2_V_2_fu_106;
                out_bits_2_V_load_reg_676 <= out_bits_2_V_fu_98;
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if ((ap_const_logic_1 = ap_CS_fsm_state6)) then
                i_3_reg_771 <= i_3_fu_479_p2;
                tmp_37_reg_767 <= i2_reg_194(2 downto 2);
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((tmp_37_fu_471_p3 = ap_const_lv1_0) and (ap_const_logic_1 = ap_CS_fsm_state6))) then
                isNeg_reg_783 <= sh_assign_fu_501_p6(31 downto 31);
                sh_assign_reg_776 <= sh_assign_fu_501_p6;
                tmp_3_reg_789 <= tmp_3_fu_523_p2;
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((ap_const_logic_1 = ap_CS_fsm_state4) and (i_reg_138 = ap_const_lv2_1))) then
                out_bits_2_V_1_fu_102 <= out_bits_0_V_fu_380_p5;
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if ((not((i_reg_138 = ap_const_lv2_0)) and not((i_reg_138 = ap_const_lv2_1)) and (ap_const_logic_1 = ap_CS_fsm_state4))) then
                out_bits_2_V_2_fu_106 <= out_bits_0_V_fu_380_p5;
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((ap_const_logic_1 = ap_CS_fsm_state4) and (i_reg_138 = ap_const_lv2_0))) then
                out_bits_2_V_fu_98 <= out_bits_0_V_fu_380_p5;
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((exitcond1_fu_234_p2 = ap_const_lv1_1) and (ap_const_logic_1 = ap_CS_fsm_state2))) then
                p_Result_28_reg_746 <= p_Result_28_fu_283_p5;
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((ap_const_logic_1 = ap_CS_fsm_state7) and ((tmp_37_reg_767 = ap_const_lv1_1) or (tmp_9_fu_562_p2 = ap_const_lv1_0)))) then
                tmp_10_reg_809 <= tmp_10_fu_567_p2;
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if ((ap_const_logic_1 = ap_CS_fsm_state3)) then
                tmp_36_reg_751 <= tmp_36_fu_369_p1;
            end if;
        end if;
    end process;
    Hi_assign_reg_702(3 downto 0) <= "1110";
    Lo_assign_reg_709(3 downto 0) <= "1111";
    tmp_24_reg_717(3 downto 0) <= "1111";
    ap_return_preg(63) <= '0';

    ap_NS_fsm_assign_proc : process (ap_start, ap_CS_fsm, ap_CS_fsm_state1, ap_CS_fsm_state2, exitcond1_fu_234_p2, ap_CS_fsm_state5, tmp_37_reg_767, ap_CS_fsm_state7, tmp_9_fu_562_p2, exitcond_fu_407_p2)
    begin
        case ap_CS_fsm is
            when ap_ST_fsm_state1 => 
                if (((ap_const_logic_1 = ap_CS_fsm_state1) and (ap_start = ap_const_logic_1))) then
                    ap_NS_fsm <= ap_ST_fsm_state2;
                else
                    ap_NS_fsm <= ap_ST_fsm_state1;
                end if;
            when ap_ST_fsm_state2 => 
                if (((exitcond1_fu_234_p2 = ap_const_lv1_1) and (ap_const_logic_1 = ap_CS_fsm_state2))) then
                    ap_NS_fsm <= ap_ST_fsm_state5;
                else
                    ap_NS_fsm <= ap_ST_fsm_state3;
                end if;
            when ap_ST_fsm_state3 => 
                ap_NS_fsm <= ap_ST_fsm_state4;
            when ap_ST_fsm_state4 => 
                ap_NS_fsm <= ap_ST_fsm_state2;
            when ap_ST_fsm_state5 => 
                if (((exitcond_fu_407_p2 = ap_const_lv1_1) and (ap_const_logic_1 = ap_CS_fsm_state5))) then
                    ap_NS_fsm <= ap_ST_fsm_state6;
                else
                    ap_NS_fsm <= ap_ST_fsm_state5;
                end if;
            when ap_ST_fsm_state6 => 
                ap_NS_fsm <= ap_ST_fsm_state7;
            when ap_ST_fsm_state7 => 
                if (((ap_const_logic_1 = ap_CS_fsm_state7) and ((tmp_37_reg_767 = ap_const_lv1_1) or (tmp_9_fu_562_p2 = ap_const_lv1_0)))) then
                    ap_NS_fsm <= ap_ST_fsm_state8;
                else
                    ap_NS_fsm <= ap_ST_fsm_state6;
                end if;
            when ap_ST_fsm_state8 => 
                ap_NS_fsm <= ap_ST_fsm_state1;
            when others =>  
                ap_NS_fsm <= "XXXXXXXX";
        end case;
    end process;
    Hi_assign_fu_254_p2 <= std_logic_vector(signed(ap_const_lv6_3E) - signed(tmp_7_fu_246_p3));
    Lo_assign_fu_260_p2 <= std_logic_vector(signed(ap_const_lv6_2F) - signed(tmp_7_fu_246_p3));
    ap_CS_fsm_state1 <= ap_CS_fsm(0);
    ap_CS_fsm_state2 <= ap_CS_fsm(1);
    ap_CS_fsm_state3 <= ap_CS_fsm(2);
    ap_CS_fsm_state4 <= ap_CS_fsm(3);
    ap_CS_fsm_state5 <= ap_CS_fsm(4);
    ap_CS_fsm_state6 <= ap_CS_fsm(5);
    ap_CS_fsm_state7 <= ap_CS_fsm(6);
    ap_CS_fsm_state8 <= ap_CS_fsm(7);

    ap_done_assign_proc : process(ap_start, ap_CS_fsm_state1, ap_CS_fsm_state8)
    begin
        if (((ap_const_logic_1 = ap_CS_fsm_state8) or ((ap_start = ap_const_logic_0) and (ap_const_logic_1 = ap_CS_fsm_state1)))) then 
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


    ap_ready_assign_proc : process(ap_CS_fsm_state8)
    begin
        if ((ap_const_logic_1 = ap_CS_fsm_state8)) then 
            ap_ready <= ap_const_logic_1;
        else 
            ap_ready <= ap_const_logic_0;
        end if; 
    end process;


    ap_return_assign_proc : process(ap_CS_fsm_state8, result_write_assign_fu_640_p1, ap_return_preg)
    begin
        if ((ap_const_logic_1 = ap_CS_fsm_state8)) then 
            ap_return <= result_write_assign_fu_640_p1;
        else 
            ap_return <= ap_return_preg;
        end if; 
    end process;

    
    c_0_fu_443_p3_proc : process(p_Result_29_fu_433_p4)
    begin
        c_0_fu_443_p3 <= std_logic_vector(to_unsigned(32, 32));
        for i in 0 to 32 - 1 loop
            if p_Result_29_fu_433_p4(i) = '1' then
                c_0_fu_443_p3 <= std_logic_vector(to_unsigned(i,32));
                exit;
            end if;
        end loop;
    end process;

    exitcond1_fu_234_p2 <= "1" when (i_reg_138 = ap_const_lv2_3) else "0";
    exitcond_fu_407_p2 <= "1" when (i1_reg_161 = ap_const_lv3_4) else "0";
    i_1_fu_240_p2 <= std_logic_vector(unsigned(i_reg_138) + unsigned(ap_const_lv2_1));
    i_2_fu_413_p2 <= std_logic_vector(unsigned(i1_reg_161) + unsigned(ap_const_lv3_1));
    i_3_fu_479_p2 <= std_logic_vector(unsigned(i2_reg_194) + unsigned(ap_const_lv3_1));
    in_shift_V_fu_555_p3 <= 
        tmp_5_fu_549_p2 when (isNeg_reg_783(0) = '1') else 
        tmp_8_fu_543_p2;
    newexp_fu_581_p2 <= std_logic_vector(signed(tmp_cast_fu_577_p1) - signed(shift_1_reg_215));
    or_cond_fu_595_p2 <= (tmp_40_fu_587_p3 or tmp_10_reg_809);
    out_bits_0_V_fu_380_p5 <= (tmp_6_fu_373_p3 & p_Val2_2_reg_150(14 downto 0));
    out_exp_V_fu_622_p3 <= 
        ap_const_lv11_0 when (or_cond_fu_595_p2(0) = '1') else 
        tmp_41_fu_600_p1;
    p_Result_28_fu_283_p5 <= (tmp_fu_275_p3 & ap_const_lv32_0(15 downto 0));
    
    p_Result_29_fu_433_p4_proc : process(p_Val2_30_fu_423_p6)
    variable vlo_cpy : STD_LOGIC_VECTOR(32+32 - 1 downto 0);
    variable vhi_cpy : STD_LOGIC_VECTOR(32+32 - 1 downto 0);
    variable v0_cpy : STD_LOGIC_VECTOR(32 - 1 downto 0);
    variable p_Result_29_fu_433_p4_i : integer;
    variable section : STD_LOGIC_VECTOR(32 - 1 downto 0);
    variable tmp_mask : STD_LOGIC_VECTOR(32 - 1 downto 0);
    variable resvalue, res_value, res_mask : STD_LOGIC_VECTOR(32 - 1 downto 0);
    begin
        vlo_cpy := (others => '0');
        vlo_cpy(5 - 1 downto 0) := ap_const_lv32_1F(5 - 1 downto 0);
        vhi_cpy := (others => '0');
        vhi_cpy(5 - 1 downto 0) := ap_const_lv32_0(5 - 1 downto 0);
        v0_cpy := p_Val2_30_fu_423_p6;
        if (vlo_cpy(5 - 1 downto 0) > vhi_cpy(5 - 1 downto 0)) then
            vhi_cpy(5-1 downto 0) := std_logic_vector(32-1-unsigned(ap_const_lv32_0(5-1 downto 0)));
            vlo_cpy(5-1 downto 0) := std_logic_vector(32-1-unsigned(ap_const_lv32_1F(5-1 downto 0)));
            for p_Result_29_fu_433_p4_i in 0 to 32-1 loop
                v0_cpy(p_Result_29_fu_433_p4_i) := p_Val2_30_fu_423_p6(32-1-p_Result_29_fu_433_p4_i);
            end loop;
        end if;
        res_value := std_logic_vector(shift_right(unsigned(v0_cpy), to_integer(unsigned('0' & vlo_cpy(5-1 downto 0)))));

        section := (others=>'0');
        section(5-1 downto 0) := std_logic_vector(unsigned(vhi_cpy(5-1 downto 0)) - unsigned(vlo_cpy(5-1 downto 0)));
        tmp_mask := (others => '1');
        res_mask := std_logic_vector(shift_left(unsigned(tmp_mask),to_integer(unsigned('0' & section(31-1 downto 0)))));
        res_mask := res_mask(32-2 downto 0) & '0';
        resvalue := res_value and not res_mask;
        p_Result_29_fu_433_p4 <= resvalue(32-1 downto 0);
    end process;

    p_Result_30_fu_630_p4 <= ((ap_const_lv1_0 & out_exp_V_fu_622_p3) & p_Val2_31_fu_614_p3);
    p_Result_s_fu_363_p2 <= (tmp_33_fu_357_p2 and tmp_32_fu_351_p2);
    p_Val2_30_fu_423_p5 <= i1_reg_161(2 - 1 downto 0);
    p_Val2_31_fu_614_p3 <= 
        ap_const_lv52_0 when (or_cond_fu_595_p2(0) = '1') else 
        phitmp2_fu_604_p4;
    phitmp2_fu_604_p4 <= p_Val2_s_reg_205(61 downto 10);
    result_write_assign_fu_640_p1 <= p_Result_30_fu_630_p4;
    sh_assign_1_fu_534_p3 <= 
        tmp_3_reg_789 when (isNeg_reg_783(0) = '1') else 
        sh_assign_reg_776;
    sh_assign_fu_501_p5 <= i2_reg_194(2 - 1 downto 0);
    shift_2_fu_529_p2 <= std_logic_vector(unsigned(sh_assign_reg_776) + unsigned(shift_reg_182));
    tmp_10_fu_567_p2 <= "1" when (in_V = ap_const_lv63_0) else "0";
    tmp_20_fu_272_p1 <= in_V(15 - 1 downto 0);
    tmp_21_fu_295_p2 <= "1" when (unsigned(Lo_assign_reg_709) > unsigned(Hi_assign_reg_702)) else "0";
    
    tmp_22_fu_299_p4_proc : process(in_V)
    variable vlo_cpy : STD_LOGIC_VECTOR(63+32 - 1 downto 0);
    variable vhi_cpy : STD_LOGIC_VECTOR(63+32 - 1 downto 0);
    variable v0_cpy : STD_LOGIC_VECTOR(63 - 1 downto 0);
    variable tmp_22_fu_299_p4_i : integer;
    variable section : STD_LOGIC_VECTOR(63 - 1 downto 0);
    variable tmp_mask : STD_LOGIC_VECTOR(63 - 1 downto 0);
    variable resvalue, res_value, res_mask : STD_LOGIC_VECTOR(63 - 1 downto 0);
    begin
        vlo_cpy := (others => '0');
        vlo_cpy(6 - 1 downto 0) := ap_const_lv32_3E(6 - 1 downto 0);
        vhi_cpy := (others => '0');
        vhi_cpy(6 - 1 downto 0) := ap_const_lv32_0(6 - 1 downto 0);
        v0_cpy := in_V;
        if (vlo_cpy(6 - 1 downto 0) > vhi_cpy(6 - 1 downto 0)) then
            vhi_cpy(6-1 downto 0) := std_logic_vector(63-1-unsigned(ap_const_lv32_0(6-1 downto 0)));
            vlo_cpy(6-1 downto 0) := std_logic_vector(63-1-unsigned(ap_const_lv32_3E(6-1 downto 0)));
            for tmp_22_fu_299_p4_i in 0 to 63-1 loop
                v0_cpy(tmp_22_fu_299_p4_i) := in_V(63-1-tmp_22_fu_299_p4_i);
            end loop;
        end if;
        res_value := std_logic_vector(shift_right(unsigned(v0_cpy), to_integer(unsigned('0' & vlo_cpy(6-1 downto 0)))));

        section := (others=>'0');
        section(6-1 downto 0) := std_logic_vector(unsigned(vhi_cpy(6-1 downto 0)) - unsigned(vlo_cpy(6-1 downto 0)));
        tmp_mask := (others => '1');
        res_mask := std_logic_vector(shift_left(unsigned(tmp_mask),to_integer(unsigned('0' & section(31-1 downto 0)))));
        res_mask := res_mask(63-2 downto 0) & '0';
        resvalue := res_value and not res_mask;
        tmp_22_fu_299_p4 <= resvalue(63-1 downto 0);
    end process;

    tmp_23_fu_308_p2 <= std_logic_vector(unsigned(Lo_assign_reg_709) - unsigned(Hi_assign_reg_702));
    tmp_24_fu_266_p2 <= std_logic_vector(signed(ap_const_lv6_3E) - signed(Lo_assign_fu_260_p2));
    tmp_25_fu_312_p2 <= std_logic_vector(unsigned(Hi_assign_reg_702) - unsigned(Lo_assign_reg_709));
    tmp_26_fu_316_p3 <= 
        tmp_23_fu_308_p2 when (tmp_21_fu_295_p2(0) = '1') else 
        tmp_25_fu_312_p2;
    tmp_27_fu_324_p3 <= 
        tmp_22_fu_299_p4 when (tmp_21_fu_295_p2(0) = '1') else 
        in_V;
    tmp_28_fu_331_p3 <= 
        tmp_24_reg_717 when (tmp_21_fu_295_p2(0) = '1') else 
        Lo_assign_reg_709;
    tmp_29_fu_337_p2 <= std_logic_vector(signed(ap_const_lv6_3E) - signed(tmp_26_fu_316_p3));
    tmp_30_fu_343_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(tmp_28_fu_331_p3),63));
    tmp_31_fu_347_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(tmp_29_fu_337_p2),63));
    tmp_32_fu_351_p2 <= std_logic_vector(shift_right(unsigned(tmp_27_fu_324_p3),to_integer(unsigned('0' & tmp_30_fu_343_p1(31-1 downto 0)))));
    tmp_33_fu_357_p2 <= std_logic_vector(shift_right(unsigned(ap_const_lv63_7FFFFFFFFFFFFFFF),to_integer(unsigned('0' & tmp_31_fu_347_p1(31-1 downto 0)))));
    tmp_35_fu_419_p1 <= i1_reg_161(2 - 1 downto 0);
    tmp_36_fu_369_p1 <= p_Result_s_fu_363_p2(16 - 1 downto 0);
    tmp_37_fu_471_p3 <= i2_reg_194(2 downto 2);
    tmp_3_fu_523_p2 <= std_logic_vector(unsigned(ap_const_lv32_0) - unsigned(sh_assign_fu_501_p6));
    tmp_40_fu_587_p3 <= newexp_fu_581_p2(31 downto 31);
    tmp_41_fu_600_p1 <= newexp_fu_581_p2(11 - 1 downto 0);
    tmp_4_fu_539_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(sh_assign_1_fu_534_p3),63));
    tmp_5_fu_549_p2 <= std_logic_vector(shift_right(signed(in_shift_reg_172),to_integer(unsigned('0' & tmp_4_fu_539_p1(31-1 downto 0)))));
    tmp_6_fu_373_p3 <= (tmp_36_reg_751 & ap_const_lv1_1);
    tmp_7_fu_246_p3 <= (i_reg_138 & ap_const_lv4_0);
    tmp_8_fu_543_p2 <= std_logic_vector(shift_left(unsigned(in_shift_reg_172),to_integer(unsigned('0' & tmp_4_fu_539_p1(31-1 downto 0)))));
    tmp_9_fu_562_p2 <= "1" when (sh_assign_reg_776 = ap_const_lv32_10) else "0";
        tmp_cast_fu_577_p1 <= std_logic_vector(IEEE.numeric_std.resize(signed(tmp_s_fu_572_p2),32));

    tmp_fu_275_p3 <= (tmp_20_fu_272_p1 & ap_const_lv1_1);
    tmp_s_fu_572_p2 <= std_logic_vector(unsigned(ap_const_lv12_3FF) - unsigned(prescale));
end behav;