#include "HumanB.h"

HumanB::HumanB(const std::string& name): name_(name)
{
}

HumanB::~HumanB()
{
}

void HumanB::setWeapon(Weapon& weapon)
{
	weapon_ = &weapon;
}

void	HumanB::attack() const
{
	if (weapon_)
		std::cout << name_ + " attacks with " + weapon_->getType() << std::endl;
	else
		std::cout << name_ + " attacks with no weapon at all" << std::endl;
}
