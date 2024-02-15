--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   11:11:24 02/18/2019
-- Design Name:   
-- Module Name:   /home/ise/Xilinx Projects/doorlock/keyboard_tb.vhd
-- Project Name:  doorlock
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: keyboard
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
 
ENTITY keyboard_tb IS
END keyboard_tb;
 
ARCHITECTURE behavior OF keyboard_tb IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT keyboard
    PORT(
         col : IN  std_logic_vector(0 to 2);
         row : IN  std_logic_vector(0 to 3);
         clk : IN  std_logic;
         rst : IN  std_logic;
         key : OUT  std_logic
        );
    END COMPONENT;
    

   --Inputs
   signal col : std_logic_vector(0 to 2) := (others => '0');
   signal row : std_logic_vector(0 to 3) := (others => '0');
   signal clk : std_logic := '0';
   signal rst : std_logic := '0';

 	--Outputs
   signal key : std_logic;

   -- Clock period definitions
   constant clk_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: keyboard PORT MAP (
          col => col,
          row => row,
          clk => clk,
          rst => rst,
          key => key
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
      wait for 100 ns;	

      wait for clk_period*10;

       --insert stimulus here 
		col<="000";
		row<="0000";
      wait for clk_period*10;
		col<="001";
		row<="0010";
		wait for clk_period*10;
		col<="000";
		row<="0000";
		wait;
   end process;

END;
