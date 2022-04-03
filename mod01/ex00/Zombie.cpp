#include "Zombie.h"

void	Zombie::announce()
{
	std::cout << name_ << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::Zombie(const std::string& name)
{
	name_ = name;
}

Zombie::~Zombie()
{
	std::cout << "For " << name_ << " destructor was called" << std::endl;
}
