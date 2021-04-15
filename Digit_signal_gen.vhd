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
	signal var : unsigned (11 downto 0) := X"000";
	
begin

	Command <= "0011";
	Address <= "0000";
	
	process(Clk)
	begin
			
		if rising_edge(Clk) and Rdy = '1' then
			if clk_counter < clks_delay then
				clk_counter <= clk_counter + 1;
				Start <= '0';
			else
				Start <= '1';
				if var < X"FAD" then
					var <=  var + 82;
				else 
					var <= X"000";
				end if;
				clk_counter <= 0;
			end if;
		end if;
		
	end process;
	Data <= STD_LOGIC_VECTOR(var);
end Behavioral;

