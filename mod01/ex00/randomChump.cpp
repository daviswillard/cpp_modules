#include "Zombie.h"

void	randomChump(const std::string& name)
{
	Zombie chump = Zombie(name);
	chump.announce();
}