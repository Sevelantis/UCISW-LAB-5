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

entity mod_zad_2_1 is
    Port ( X : in  STD_LOGIC_VECTOR (3 downto 0);
           G : OUT  STD_LOGIC;
           CLK : in  STD_LOGIC);
end mod_zad_2_1;

architecture Behavioral of mod_zad_2_1 is

begin
WITH X SELECT G <=

	'1' WHEN "0001",
	'1' WHEN "0101",
	'1' WHEN "1000",
	'1' WHEN "1010",
	'1' WHEN "1110",
	'0' WHEN OTHERS;

end Behavioral;

