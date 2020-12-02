library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.NUMERIC_STD.ALL;
library UNISIM;
use UNISIM.VComponents.all;

entity mod_zad1_1 is
    Port ( X : in  STD_LOGIC_VECTOR(3 downto 0);
				CLK : in STD_LOGIC;
           Y : out  STD_LOGIC);
end mod_zad1_1;

architecture Behavioral of mod_zad1_1 is

begin
WITH X SELECT Y <=

	'1' WHEN "0000",
	'1' WHEN "0001",
	'1' WHEN "0011",
	'1' WHEN "0101",
	'1' WHEN "0111",
	'1' WHEN "1000",
	'1' WHEN "1010",
	'1' WHEN "1100",
	'1' WHEN "1101",
	'1' WHEN "1110",
	'1' WHEN "1111",
	'0' WHEN OTHERS;

end Behavioral;

