#include "Zombie.h"

Zombie	*newZombie(const std::string& name)
{
	Zombie *ret = new Zombie(name);
	return ret;
}

