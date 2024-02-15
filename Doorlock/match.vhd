----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    11:22:14 02/19/2019 
-- Design Name: 
-- Module Name:    match - Behavioral 
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

entity match is
    Port ( data : in  STD_LOGIC_VECTOR (3 downto 0);
           num : in  STD_LOGIC_VECTOR (3 downto 0);
           enable : in  STD_LOGIC;
           match_ok : out  STD_LOGIC);
end match;

architecture Behavioral of match is
	
begin
	process (enable,data,num) 
	begin
		if (enable='1') then
			if (data = num) then
				match_ok <= '1';
			else
				match_ok <='0';
			end if;
		else
			match_ok<='0';
		end if;
	end process;

end Behavioral;

