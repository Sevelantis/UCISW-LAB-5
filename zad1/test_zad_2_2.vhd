--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   12:58:26 12/02/2020
-- Design Name:   
LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
 
-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--USE ieee.numeric_std.ALL;
 
ENTITY test_zad_2_2 IS
END test_zad_2_2;
 
ARCHITECTURE behavior OF test_zad_2_2 IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT mod_zad_2_2
    PORT(
         INPUT : IN  std_logic_vector(3 downto 0);
         G : OUT  std_logic;
         CLK : IN  std_logic
        );
    END COMPONENT;
    

   --Inputs
   signal INPUT : std_logic_vector(3 downto 0) := (others => '0');
   signal CLK : std_logic := '0';

 	--Outputs
   signal G : std_logic;

   -- Clock period definitions
   constant CLK_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: mod_zad_2_2 PORT MAP (
          INPUT => INPUT,
          G => G,
          CLK => CLK
        );

   -- Clock process definitions
   CLK_process :process
   begin
		CLK <= '0';
		wait for CLK_period/2;
		CLK <= '1';
		wait for CLK_period/2;
   end process;
 

   -- Stimulus process
   stim_proc: process
   begin		
      -- hold reset state for 100 ns.
      wait for 100 ns;	

      wait for CLK_period*10;

      INPUT<= "0000"; wait for 50 ns;
		INPUT<= "0001"; wait for 50 ns;
		INPUT<= "0010"; wait for 50 ns;
		INPUT<= "0011"; wait for 50 ns;
		INPUT<= "0100"; wait for 50 ns;
		INPUT<= "0101"; wait for 50 ns;
		INPUT<= "0110"; wait for 50 ns;
		INPUT<= "0111"; wait for 50 ns;
		INPUT<= "1000"; wait for 50 ns;
		INPUT<= "1001"; wait for 50 ns;
		INPUT<= "1010"; wait for 50 ns;
		INPUT<= "1011"; wait for 50 ns;
		INPUT<= "1100"; wait for 50 ns;
		INPUT<= "1101"; wait for 50 ns;
		INPUT<= "1110"; wait for 50 ns;
		INPUT<= "1111"; wait for 50 ns; 

      wait;
   end process;

END;
