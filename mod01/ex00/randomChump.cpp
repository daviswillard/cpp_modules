#include "Zombie.h"

void	randomChump(std::string name)
{
	Zombie chump = Zombie(name);
	chump.announce();
	chump.~Zombie();
}