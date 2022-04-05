#include "ScavTrap.h"
#include "FragTrap.h"

int main()
{
	ClapTrap lol;
	lol.GetInfo();
	std::cout << std::endl;

	ScavTrap kek;
	kek.GetInfo();
	kek.GuardGate();
	std::cout << std::endl;

	FragTrap mek;
	mek.GetInfo();
	mek.HighFivesGuys();
	std::cout << std::endl;
	return 0;
}
