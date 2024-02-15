----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    14:43:27 02/19/2019 
-- Design Name: 
-- Module Name:    flag_rst - Behavioral 
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

entity flag_rst is
    Port ( error_system : in  STD_LOGIC;
           rst : out  STD_LOGIC);
end flag_rst;

architecture Behavioral of flag_rst is

begin
	with error_system select rst <=
		'1' when '1',
		'0' when '0',
		'0' when others;
end Behavioral;

