--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   11:38:15 02/19/2019
-- Design Name:   
-- Module Name:   /home/ise/Xilinx Projects/doorlock/doorlock_tb.vhd
-- Project Name:  doorlock
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: door_lock
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
 
ENTITY doorlock_tb IS
END doorlock_tb;
 
ARCHITECTURE behavior OF doorlock_tb IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT door_lock
    PORT(
         badgeSx : IN  std_logic;
         badgeDx : IN  std_logic;
         col : IN  std_logic_vector(0 to 2);
         row : IN  std_logic_vector(0 to 3);
         clk : IN  std_logic;
         rst : IN  std_logic;
         unlock : OUT  std_logic
        );
    END COMPONENT;
    

   --Inputs
   signal badgeSx : std_logic := '0';
   signal badgeDx : std_logic := '0';
   signal col : std_logic_vector(0 to 2) := (others => '0');
   signal row : std_logic_vector(0 to 3) := (others => '0');
   signal clk : std_logic := '0';
   signal rst : std_logic := '0';

 	--Outputs
   signal unlock : std_logic;

   -- Clock period definitions
   constant clk_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: door_lock PORT MAP (
          badgeSx => badgeSx,
          badgeDx => badgeDx,
          col => col,
          row => row,
          clk => clk,
          rst => rst,
          unlock => unlock
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
      -- hold reset state for 100 ns.
		rst <= '1';
      wait for 100 ns;	
		rst<= '0';
		badge <= "10";
		row <= "1000";
		col <= "100";
      wait for clk_period*10;

      -- insert stimulus here 

      wait;
   end process;

END;
