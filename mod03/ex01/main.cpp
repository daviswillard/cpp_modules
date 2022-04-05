#include "ScavTrap.h"


int main() {
	ScavTrap robot1("RoboBoba");

	srand(time(nullptr));
	while (robot1.get_hit_points() > 0)
	{
		if (robot1.get_hit_points() <= 50)
		{
			std::cout << std::endl;
			robot1.GuardGate();
		}
		std::cout << std::endl;
		robot1.TakeDamage(rand() % 100 + 1);
		robot1.BeRepaired(rand() % 2 + 1);
		robot1.Attack("RobaBoba");
	}
	std::cout << std::endl;
	return 0;
}
