----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    11:53:10 02/18/2019 
-- Design Name: 
-- Module Name:    matrix_2_value - Behavioral 
-- Project Name: 
-- Target Devices: 
-- Tool versions: 
-- Description: 
--
-- Dependencies: 
--
-- Revision: 
-- Revision 0.01 - File Created
-- Additional Comments: 
--
----------------------------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity matrix_2_value is
    Port ( row : in  STD_LOGIC_VECTOR (0 to 3);
           col : in  STD_LOGIC_VECTOR (0 to 2);
           num : out  STD_LOGIC_VECTOR (0 to 3));
end matrix_2_value;

architecture Behavioral of matrix_2_value is
	begin
	process (row,col)
	begin
	if row = "1000" then
		if  col = "100" then
			num <= "0001";
		elsif  col = "010" then
			num <= "0010";
		elsif col = "001" then
			num <= "0011";
			else
		num <= "1111";
		end if;
	elsif  row = "0100" then
			if  col = "100" then
			num <= "0100";
				elsif  col = "010" then
				num <= "0101";
			elsif col = "100" then
				num  <= "0110";
			else
		num <= "1111";
				end if;
		
	elsif row = "0010" then
				if  col = "100" then
					num <= "0111";
				elsif  col = "010" then
					num <= "1000";
				elsif col = "001" then
					num <= "1001";
				else
				num <= "1111";
				end if;
		
		elsif row = "0001" then
			if  col = "100" then
			num <= "1010";
		elsif  col = "010" then
			num <= "0000";
		elsif col = "001" then
			num  <= "1011";
			else
		num <= "1111";
		end if;
		end if;
		end process;
		
end Behavioral;

