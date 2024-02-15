----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    16:45:12 02/18/2019 
-- Design Name: 
-- Module Name:    rom - Behavioral 
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

library ieee;
use ieee.std_logic_1164.all;
use ieee.std_logic_unsigned.all;

entity rom is
port (CLK : in std_logic;
      EN : in std_logic;
      ADDR : in std_logic_vector(3 downto 0);
      DATA : out std_logic_vector (3 downto 0)
		);
end rom;

architecture syn of rom is
    type rom_type is array (3 downto 0) of std_logic_vector(3 downto 0);                 
    signal ROM : rom_type:= ("1000","0100","0010","0001");                      

    signal rdata : std_logic_vector (3 downto 0);
begin

    rdata <= ROM(conv_integer(ADDR));

    process (CLK)
    begin
        if (falling_edge(clk)) then
            if (EN = '1') then
                DATA <= rdata;
            end if;
        end if;
    end process;

end syn;