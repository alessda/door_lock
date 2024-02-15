--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   14:47:31 02/18/2019
-- Design Name:   
-- Module Name:   /home/ise/Xilinx Projects/doorlock/matrix_2_value_tb.vhd
-- Project Name:  doorlock
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: matrix_2_value
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
 
ENTITY matrix_2_value_tb IS
END matrix_2_value_tb;
 
ARCHITECTURE behavior OF matrix_2_value_tb IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT matrix_2_value
    PORT(
         row : IN  std_logic_vector(0 to 3);
         col : IN  std_logic_vector(0 to 2);
         num : OUT  std_logic_vector(0 to 3)
        );
    END COMPONENT;
    

   --Inputs
   signal row : std_logic_vector(0 to 3) := (others => '0');
   signal col : std_logic_vector(0 to 2) := (others => '0');

 	--Outputs
   signal num : std_logic_vector(0 to 3);
   -- No clocks detected in port list. Replace <clock> below with 
   -- appropriate port name 
 
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: matrix_2_value PORT MAP (
          row => row,
          col => col,
          num => num
        );

  
 

   -- Stimulus process
   stim_proc: process
   begin		
      wait for 100 ns;	
	row <= "1000";
	col <= "100";
    wait for 100 ns;	
	row <= "0010";
	col <= "010";
    wait for 100 ns;	
	 row <= "1000";
	col <= "001";
    wait for 100 ns;	
	 row <= "0100";
	col <= "100";
    wait for 100 ns;	
	 row <= "0001";
	col <= "001";
    wait for 100 ns;	
      wait;
   end process;

END;
