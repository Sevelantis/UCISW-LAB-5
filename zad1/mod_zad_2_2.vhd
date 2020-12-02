library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity mod_zad_2_2 is
    Port ( INPUT : in  STD_LOGIC_VECTOR (3 downto 0);
           G : out  STD_LOGIC;
           CLK : in  STD_LOGIC);
end mod_zad_2_2;

architecture Behavioral of mod_zad_2_2 is

begin

G <= ((NOT INPUT(3)) AND (NOT INPUT(1)) AND INPUT(0)) OR (INPUT(3) AND INPUT(1) AND (NOT INPUT(0))) OR (INPUT(3) AND (NOT INPUT(2)) AND (NOT INPUT(0)));

end Behavioral;

