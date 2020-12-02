--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   11:57:20 12/02/2020
-- Design Name:   
-- Module Name:   E:/SZKOLA/aaaSEMESTR - 5/UCISW/Lab 4/zad1_1/zad1/test_zad_1_1.vhd
-- Project Name:  zad1
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: mod_zad1_1
-- 
-- Dependencies:
-- 
-- Revision:
-- Revision 0.01 - File Created
-- Additional Comments:
--
-- Notes: 
-- This testbench has been automatically generated using types std_logic and
-- std_logic_vector for the ports of the unit under test.  Xilinx recommends
-- that these types always be used for the top-level I/O of a design in order
-- to guarantee that the testbench will bind correctly to the post-implementation 
-- simulation model.
--------------------------------------------------------------------------------
LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
 
-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--USE ieee.numeric_std.ALL;
 
ENTITY test_zad_1_1 IS
END test_zad_1_1;
 
ARCHITECTURE behavior OF test_zad_1_1 IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT mod_zad1_1
    PORT(
         X : IN  std_logic_vector(3 downto 0);
         CLK : IN  std_logic;
         Y : OUT  std_logic
        );
    END COMPONENT;
    

   --Inputs
   signal X : std_logic_vector(3 downto 0) := (others => '0');
   signal CLK : std_logic := '0';

 	--Outputs
   signal Y : std_logic;

   -- Clock period definitions
   constant CLK_period : time := 10 ns;
 
BEGIN
	-- Instantiate the Unit Under Test (UUT)
   uut: mod_zad1_1 PORT MAP (
          X => X,
          CLK => CLK,
          Y => Y
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
		
		X <= "0000"; wait for 50 ns;
		X <= "0001"; wait for 50 ns;
		X <= "0010"; wait for 50 ns;
		X <= "0011"; wait for 50 ns;
		X <= "0100"; wait for 50 ns;
		X <= "0101"; wait for 50 ns;
		X <= "0110"; wait for 50 ns;
		X <= "0111"; wait for 50 ns;
		X <= "1000"; wait for 50 ns;
		X <= "1001"; wait for 50 ns;
		X <= "1010"; wait for 50 ns;
		X <= "1011"; wait for 50 ns;
		X <= "1100"; wait for 50 ns;
		X <= "1101"; wait for 50 ns;
		X <= "1110"; wait for 50 ns;
		X <= "1111"; wait for 50 ns;

      wait;
   end process;

END;
