#include "ScavTrap.h"
#include "ClapTrap.h"


int main()
{
	unsigned int damage = 30;

	ScavTrap scav = ScavTrap();
	scav.GetInfo();
	scav.set_attack_damage(damage);
	scav.TakeDamage(damage);
	scav.GuardGate();
	scav.GetInfo();

	scav.Attack("Serena");
	scav.GetInfo();
	std::cout << std::endl;

	ScavTrap serena("Serena");
	serena.GetInfo();
	serena.TakeDamage(damage);
	serena.GetInfo();
	std::cout << std::endl;

	ScavTrap counterpart(scav);
	counterpart.GetInfo();
	std::cout << std::endl;

	ScavTrap counterpart2 = serena;
	counterpart2.GetInfo();
	std::cout << std::endl;
	return 0;
}
