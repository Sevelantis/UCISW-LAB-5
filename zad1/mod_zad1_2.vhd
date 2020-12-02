library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
library UNISIM;
use UNISIM.VComponents.all;

entity mod_zad1_2 is
    Port ( X : IN STD_LOGIC_VECTOR(3 DOWNTO 0);
           F : out  STD_LOGIC;
           CLK : in  STD_LOGIC);
end mod_zad1_2;

architecture Behavioral of mod_zad1_2 is

begin

F <= (X(3) XOR X(0)) OR ((NOT X(3)) AND (NOT X(2)) AND (NOT X(1))) OR (X(2) AND X(0));

end Behavioral;

