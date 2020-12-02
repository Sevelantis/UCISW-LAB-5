library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity mod_zad_3_1 is
    Port ( X : in  STD_LOGIC_VECTOR (3 downto 0);
           Y : out  STD_LOGIC_VECTOR (3 downto 0);
           CLK : in  STD_LOGIC);
end mod_zad_3_1;

architecture Behavioral of mod_zad_3_1 is

begin

WITH X SELECT Y <=

	"0000" when "0011",
	"0001" when "0100",
	"0011" when "0101",
	"0010" when "0110",
	
	"0110" when "0111",
	"0111" when "1000",
	"0101" when "1001",
	"0100" when "1010",
	
	"1100" when "1011",
	"1101" when "1100",
	"1111" when "1101",
	"1110" when "1110",
	
	"1010" when "1111",
	"1011" when "0000",
	"1001" when "0001",
	"1000" when "0010",
	
	"XXXX" when others;

end Behavioral;

