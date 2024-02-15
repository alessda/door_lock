----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    09:35:51 02/19/2019 
-- Design Name: 
-- Module Name:    fsm - Behavioral 
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

entity fsm is
    Port ( clk : in  STD_LOGIC;
			  keypressed : in std_logic;
			  badge : in std_logic_vector (1 downto 0);
			  count_in : in std_logic_vector (3 downto 0);
			  match_ok : in std_logic_vector (3 downto 0);
			  increase_num : out std_logic;
			  increase_try : out std_logic;
			  reset_try : out std_logic;
			  reset_num : out std_logic;
			  rst_match : out std_logic;
			  enable_rom : out std_logic;
			  enable_match : out std_logic;
			  unlock : out std_logic;
			  error_system : out std_logic;
           rst : in  STD_LOGIC
			  );
end fsm;

architecture Behavioral of fsm is
	type state is (locked, c1, c2, c3, c4, unlocked,error,compare);
	signal current_state,next_state : state; 
	
	begin
		current_state_register: process(next_state,rst,clk) --start
			begin
				if rising_edge(clk) then
					if (rst = '1') then 
					current_state <= locked; 
				else 
					current_state <= next_state; 
				end if;
			end if;
	end process;

	process (clk) -- macchina sequenziale a stati finiti
	begin
	case current_state is
		when locked =>
			unlock <= '0';
			if (badge = "10") then
				next_state <= c1;
				increase_num <= '1';
				increase_try <= '0';
				enable_rom <= '1';
				enable_match <= '0';
				reset_num <= '1';
				reset_try <= '1';
				error_system <= '0';
				rst_match <= '1';
			else 
				next_state <= locked;
				increase_num <= '0';
				increase_try <= '0';
				enable_rom <= '1';
				enable_match <= '0';
				reset_num <= '1';
				reset_try <= '1';
				error_system <= '0';
				rst_match <= '1';
			end if;
			
		when c1 =>
			unlock <= '0';
			if ((badge = "00" or badge = "10") and keypressed = '1') then
				next_state <= c2;
				increase_num <= '1';
				increase_try <= '0';
				enable_rom <= '1';
				enable_match <= '1';
				reset_num <= '0';
				reset_try <= '0';
				rst_match <= '0';
			else 
				next_state <= c1;
				increase_num <= '0';
				increase_try <= '0';
				enable_rom <= '1';
				enable_match <= '0';
				reset_num <= '0';
				reset_try <= '0';
				rst_match <= '0';
			end if;
			
		when c2 =>
			unlock <= '0';
			if ((badge = "00" or badge = "10") and keypressed = '1') then
				next_state <= c3;
				increase_num <= '1';
				enable_rom <= '1';
				reset_num <= '0';
				enable_match <= '1';
				else 
				next_state <= c2;
				increase_num <= '0';
				enable_rom <= '1';
				reset_num <= '0';
				enable_match <= '0';
			end if;
			
		when c3 =>
			unlock <= '0';
			if ((badge = "00" or badge = "10") and keypressed = '1') then
				next_state <= c4;
				increase_num <= '1';
				enable_rom <= '1';
				enable_match <= '1';
				else 
				next_state <= c3;
				increase_num <= '0';
				enable_rom <= '1';
				enable_match <= '0';
			end if;
			
		when c4 =>
			unlock <= '0';
			if ((badge = "00" or badge = "10") and keypressed = '1') then
					next_state <= compare;
					increase_num <= '0';
					enable_rom <= '1';
					enable_match <= '1';
					reset_num <='1';
				elsif (keypressed = '0') then
					next_state <= c4;
					increase_num <= '0';
					enable_rom <= '1';
					enable_match <= '0';
				else
					next_state <= c4;
					
			end if;
			
		when compare =>
			unlock <= '0';
			if (match_ok = "0011" and (badge = "00" or badge = "10") and keypressed = '0') then
					next_state <= unlocked;
					rst_match <= '1';
				else
					rst_match <= '1';
					increase_try <= '1';
					if (count_in /="0001") then
						next_state <= c1;
					else
						next_state <= error;
						
					end if;
				end if;
				
			when error =>
				unlock <= '0';
				error_system <='1';
				increase_try <= '0';
				reset_try <= '1';
				
			when unlocked =>
				unlock <= '1';
				if (badge = "01") then
					error_system <= '1';
					reset_try <= '0';
				else
					next_state <=unlocked;
				end if;
		end case;
end process;

end Behavioral;

