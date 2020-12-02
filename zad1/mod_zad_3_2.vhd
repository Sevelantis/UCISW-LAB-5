library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity mod_zad_3_2 is
    Port ( WE : in  STD_LOGIC_VECTOR (3 downto 0);
           WY : OUT  STD_LOGIC_VECTOR (3 downto 0);
           CLK : in  STD_LOGIC);
end mod_zad_3_2;

architecture Behavioral of mod_zad_3_2 is

SIGNAL W : STD_LOGIC;
SIGNAL X : STD_LOGIC;
SIGNAL Y : STD_LOGIC;
SIGNAL Z : STD_LOGIC;

begin
W <= WE(3);
X <= WE(2);
Y <= WE(1);
Z <= WE(0);

WY(3) <= (W AND (X OR (Y AND Z))) OR ((NOT W) AND (NOT X) AND ((NOT Z) OR (NOT Y)));
WY(2) <= (W AND NOT Z) OR (W AND NOT Y) OR (W AND NOT X) OR (NOT W AND X AND Y AND Z);
WY(1) <= ((NOT X) AND (NOT Y) AND (NOT Z)) OR (X AND (Z OR Y));
WY(0) <= NOT Y;

end Behavioral;

