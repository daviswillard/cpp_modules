#include "ScavTrap.h"
#include "ClapTrap.h"


int main()
{
	unsigned int damage = 30;

	ScavTrap tamara("Tamara Petrovna");
	tamara.GetInfo();
	tamara.set_attack_damage(damage);
	tamara.GuardGate();

	tamara.Attack("Boris Nikolaevich");
	tamara.GetInfo();
	std::cout << std::endl;

	ScavTrap borya("Boris Nikolaevich");
	borya.GetInfo();
	borya.TakeDamage(damage);
	borya.GetInfo();
	std::cout << std::endl;

	ScavTrap counterpart(tamara);
	counterpart.GetInfo();
	std::cout << std::endl;

	ScavTrap counterpart2 = borya;
	counterpart2.GetInfo();
	std::cout << std::endl;
	return 0;
}
