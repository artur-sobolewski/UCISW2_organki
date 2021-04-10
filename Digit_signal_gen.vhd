----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    17:29:06 04/10/2021 
-- Design Name: 
-- Module Name:    Dec_sign_generator - Behavioral 
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
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use ieee.numeric_std.all; 

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity Dec_sign_generator is
    Port ( Rdy : in  STD_LOGIC;
           Clk : in  STD_LOGIC;
           Command : out  STD_LOGIC_VECTOR (3 downto 0);
           Address : out  STD_LOGIC_VECTOR (3 downto 0);
           Data : out  STD_LOGIC_VECTOR (11 downto 0);
           Start : out  STD_LOGIC);
end Dec_sign_generator;

architecture Behavioral of Dec_sign_generator is

	constant clks_delay : integer := 999;
	signal clk_counter : integer := 0;
	signal diff : STD_LOGIC_VECTOR (11 downto 0) := X"052";
	signal var : STD_LOGIC_VECTOR (11 downto 0) := X"000";
	signal isOn : STD_LOGIC := '0';
	
begin

	process(Clk, Rdy)
	begin
		
		if rising_edge(Rdy) then
			if isOn = '1' then
				isOn <= '0';
				Start <= '0';
			else
				Command <= "0011";
				Address <= "0000";
				isOn <= '1';
				Start <= '1';
			end if;	
		end if;
		
		if rising_edge(Clk) and isOn = '1' then
		--TODO
		--Wyd³u¿yæ 1000 razy
			if clk_counter < clks_delay then
				clk_counter <= clk_counter + 1;
			else 
				if var < X"FAD" then
					var <= std_logic_vector( unsigned(var) + unsigned(diff) );
				else 
					var <= X"000";
				end if;
				clk_counter <= 0;
			end if;
		end if;
		
	end process;
	Data <= var;
end Behavioral;

