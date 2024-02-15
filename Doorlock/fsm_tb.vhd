--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   15:28:55 02/19/2019
-- Design Name:   
-- Module Name:   /home/ise/Xilinx Projects/doorlock/fsm_tb.vhd
-- Project Name:  doorlock
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: fsm
-- 
-- Dependencies:
-- 
-- Revision:
-- Revision 0.01 - File Created
-- Additional Comments:
--
-- Notes: 
-- This testbench has been automatically generated using types std_logic and
-- std_logic_vector for the ports of the unit under test.  Xilinx recommends
-- that these types always be used for the top-level I/O of a design in order
-- to guarantee that the testbench will bind correctly to the post-implementation 
-- simulation model.
--------------------------------------------------------------------------------
LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
 
-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--USE ieee.numeric_std.ALL;
 
ENTITY fsm_tb IS
END fsm_tb;
 
ARCHITECTURE behavior OF fsm_tb IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT fsm
    PORT(
         clk : IN  std_logic;
         keypressed : IN  std_logic;
         badge : IN  std_logic_vector(1 downto 0);
         count_in : IN  std_logic_vector(3 downto 0);
         match_ok : IN  std_logic_vector(3 downto 0);
         increase_num : OUT  std_logic;
         increase_try : OUT  std_logic;
         reset_try : OUT  std_logic;
         reset_num : OUT  std_logic;
         enable_rom : OUT  std_logic;
         enable_match : OUT  std_logic;
         unlock : OUT  std_logic;
         error_system : OUT  std_logic;
         rst : IN  std_logic
        );
    END COMPONENT;
    

   --Inputs
   signal clk : std_logic := '0';
   signal keypressed : std_logic := '0';
   signal badge : std_logic_vector(1 downto 0) := (others => '0');
   signal count_in : std_logic_vector(3 downto 0) := (others => '0');
   signal match_ok : std_logic_vector(3 downto 0) := (others => '0');
   signal rst : std_logic := '0';

 	--Outputs
   signal increase_num : std_logic;
   signal increase_try : std_logic;
   signal reset_try : std_logic;
   signal reset_num : std_logic;
   signal enable_rom : std_logic;
   signal enable_match : std_logic;
   signal unlock : std_logic;
   signal error_system : std_logic;

   -- Clock period definitions
   constant clk_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: fsm PORT MAP (
          clk => clk,
          keypressed => keypressed,
          badge => badge,
          count_in => count_in,
          match_ok => match_ok,
          increase_num => increase_num,
          increase_try => increase_try,
          reset_try => reset_try,
          reset_num => reset_num,
          enable_rom => enable_rom,
          enable_match => enable_match,
          unlock => unlock,
          error_system => error_system,
          rst => rst
        );

   -- Clock process definitions
   clk_process :process
   begin
		clk <= '0';
		wait for clk_period/2;
		clk <= '1';
		wait for clk_period/2;
   end process;
 

   -- Stimulus process
   stim_proc: process
    begin	
		rst <='1';	
      -- hold reset state for 100 ns.
      wait for 100 ns;	
		rst <= '0';
		badge <= "10";
		keypressed <= '1';
		
      wait for clk_period*5;
	count_in <= "0001";
	 wait for clk_period*5;
	 rst <='1';
	 wait for 10 ns;
	 rst <='0';
      -- insert stimulus here 

      wait;
   end process;

END;
