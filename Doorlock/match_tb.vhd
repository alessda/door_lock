--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   11:25:17 02/19/2019
-- Design Name:   
-- Module Name:   /home/ise/Xilinx Projects/doorlock/match_tb.vhd
-- Project Name:  doorlock
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: match
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
 
ENTITY match_tb IS
END match_tb;
 
ARCHITECTURE behavior OF match_tb IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT match
    PORT(
         data : IN  std_logic_vector(3 downto 0);
         num : IN  std_logic_vector(3 downto 0);
         enable : IN  std_logic;
         match_ok : OUT  std_logic
        );
    END COMPONENT;
    

   --Inputs
   signal data : std_logic_vector(3 downto 0) := (others => '0');
   signal num : std_logic_vector(3 downto 0) := (others => '0');
   signal enable : std_logic := '0';

 	--Outputs
   signal match_ok : std_logic;
   -- No clocks detected in port list. Replace <clock> below with 
   -- appropriate port name 
 
   
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: match PORT MAP (
          data => data,
          num => num,
          enable => enable,
          match_ok => match_ok
        );

 

   -- Stimulus process
   stim_proc: process
   begin		
      -- hold reset state for 100 ns.
      wait for 100 ns;	
		enable <='1';
		data <= "0010";
		num<= "0010";
		wait for 100 ns;
      -- insert stimulus here 
		enable <='0';
		data <= "0010";
		num<= "0010";
		wait for 100 ns;
		enable <='1';
		data <= "0110";
		num<= "0010";
      wait;
   end process;

END;
