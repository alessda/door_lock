----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    15:06:44 02/18/2019 
-- Design Name: 
-- Module Name:    counter - Behavioral 
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
use IEEE.STD_LOGIC_ARITH.ALL;
use IEEE.STD_LOGIC_UNSIGNED.ALL;

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity counter is
   port(
 	 clk: in std_logic;
 	 rst: in std_logic;
	 increase : in std_logic;
 	 Output: out std_logic_vector(0 to 3));
end counter;
 
architecture Behavioral of counter is
   signal temp: std_logic_vector(0 to 3);
begin   process(clk,rst)
   begin
      if rst='1' then
         temp <= "0000";
      elsif(rising_edge(clk)) then
			if (increase = '1') then
               temp <= temp + 1;
				else
					temp<= temp;
            end if;
      end if;
   end process;
   Output <= temp;
end Behavioral;

