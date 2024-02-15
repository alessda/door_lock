----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    16:06:03 01/05/2019 
-- Design Name: 
-- Module Name:    door_lock - Behavioral 
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
--library UNISIM;
--use UNISIM.VComponents.all;



entity door_lock is
	Port ( badge : in  STD_LOGIC_vector (1 downto 0);
				col : in std_logic_vector (0 to 2);
				row : in std_logic_vector (0 to 3);
				clk : in std_logic;
				rst : in std_logic;
				unlock : out  STD_LOGIC
			);
end door_lock;

architecture Behavioral of door_lock is 
	signal keypressed : std_logic;
	signal rst_try : std_logic;
	signal rst_num : std_logic;
	signal rst_match : std_logic;
	signal increase_try : std_logic;
	signal increase_num : std_logic;
	signal count_in : std_logic_vector(3 downto 0);
	signal address_rom : std_logic_vector(3 downto 0);
	signal enable : std_logic;
	signal data_out : std_logic_vector(3 downto 0);
	signal num : STD_LOGIC_VECTOR (0 to 3);
	signal match_ok : std_logic;
	signal enable_match : std_logic;
	signal error_system : std_logic;
	signal allert : std_logic;
	signal match_out : std_logic_vector (3 downto 0);
	
	component keyboard port (
				col : in std_logic_vector (0 to 2);
				row : in std_logic_vector (0 to 3);
				clk : in std_logic;
				rst : in std_logic;
				key : out  STD_LOGIC
				);
	end component;
	
	component rom is
port (CLK : in std_logic;
      EN : in std_logic;
      ADDR : in std_logic_vector(3 downto 0);
      DATA : out std_logic_vector(3 downto 0))
		;
end component;

component counter is
   port(
 	 clk: in std_logic;
 	 rst: in std_logic;
	 increase : in std_logic;
 	 Output: out std_logic_vector(3 downto 0));
end component;

component matrix_2_value is
    Port ( row : in  STD_LOGIC_VECTOR (0 to 3);
           col : in  STD_LOGIC_VECTOR (0 to 2);
           num : out  STD_LOGIC_VECTOR (0 to 3));
end component;

component fsm is
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
end component;

component match is
    Port ( data : in  STD_LOGIC_VECTOR (3 downto 0);
           num : in  STD_LOGIC_VECTOR (3 downto 0);
           enable : in  STD_LOGIC;
           match_ok : out  STD_LOGIC);
end component;

component flag_rst is
    Port ( error_system : in  STD_LOGIC;
           rst : out  STD_LOGIC);
end component;

component match_append is
    Port ( match_ok : in  STD_LOGIC;
           enable : in  STD_LOGIC;
			  last_value : in std_logic;
           correct_code : out  STD_LOGIC);
end component;
	begin
	
	input : keyboard port map (col,row,clk,rst,keypressed);
	value : matrix_2_value port map (row,col,num);
	try_counter  : counter port map (clk,rst_try,increase_try,count_in);
	num_counter : counter port map (clk,rst_num,increase_num,address_rom);
	memory : rom port map (clk,enable,address_rom,data_out);
	machine : fsm port map (clk,keypressed,badge,count_in,match_out,increase_num,increase_try,rst_try,rst_num,rst_match,enable,enable_match,unlock,error_system,allert);
	compare : match port map (data_out,num,enable_match,match_ok);
	flag : flag_rst port map (error_system,allert);
	match_counter  : counter port map (clk,rst_match,match_ok,match_out);

end Behavioral;