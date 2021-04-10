--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   23:10:55 04/10/2021
-- Design Name:   
-- Module Name:   C:/Users/artur/OneDrive/Pulpit/UCiSW_2/Projekt/Digit_signal_gen_tb.vhd
-- Project Name:  Projekt
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: Dec_sign_generator
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
 
ENTITY Digit_signal_gen_tb IS
END Digit_signal_gen_tb;
 
ARCHITECTURE behavior OF Digit_signal_gen_tb IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT Dec_sign_generator
    PORT(
         Rdy : IN  std_logic;
         Clk : IN  std_logic;
         Command : OUT  std_logic_vector(3 downto 0);
         Address : OUT  std_logic_vector(3 downto 0);
         Data : OUT  std_logic_vector(11 downto 0);
         Start : OUT  std_logic
        );
    END COMPONENT;
    

   --Inputs
   signal Rdy : std_logic := '0';
   signal Clk : std_logic := '0';

 	--Outputs
   signal Command : std_logic_vector(3 downto 0);
   signal Address : std_logic_vector(3 downto 0);
   signal Data : std_logic_vector(11 downto 0);
   signal Start : std_logic;

   -- Clock period definitions
   constant Clk_period : time := 20 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: Dec_sign_generator PORT MAP (
          Rdy => Rdy,
          Clk => Clk,
          Command => Command,
          Address => Address,
          Data => Data,
          Start => Start
        );

   -- Clock process definitions
   Clk_process :process
   begin
		Clk <= '0';
		wait for Clk_period/2;
		Clk <= '1';
		wait for Clk_period/2;
   end process;
 

   -- Stimulus process
   stim_proc: process
   begin		
      -- hold reset state for 100 ns.
      wait for 100 ns;	

      wait for Clk_period*10;

      Rdy <= '0', '1' after 100 ns, '0' after 120 ns;

      wait;
   end process;

END;
