----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    17:09:46 01/05/2019 
-- Design Name: 
-- Module Name:    keyboard - Behavioral 
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
use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
library UNISIM;
use UNISIM.VComponents.all;

entity keyboard is
port (	   
				col : in std_logic_vector (0 to 2);
				row : in std_logic_vector (0 to 3);
				clk : in std_logic;
				rst : in std_logic;
				key : out  STD_LOGIC
				);
end keyboard;

architecture Behavioral of keyboard is
	type state is (notpressed, pressed, released);
		signal current_state,next_state : state;
		begin
	
	current_state_register: process(next_state,rst,clk)
	begin
	if rising_edge(clk) then
		if (rst = '1') then
			current_state <= notpressed;
		else 
			current_state <= next_state; 
		end if;
	end if;
	end process;
	
	process (clk)
		begin
		case current_state is
	
			when notpressed =>
				key <= '0';
				if ((col /="000") and (row /="0000")) then					
					next_state <= pressed;
				else
					next_state <= notpressed;
				end if;
				
				when pressed =>
					key <= '0';
				if ((col /="000") and (row /="0000")) then					
					next_state <= pressed;
				else
					next_state <= released;
				end if;
					
				when released =>
					key <= '1';
					next_state <= notpressed;
					
				end case;
		end process;

end Behavioral;