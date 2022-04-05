#include "FragTrap.h"

FragTrap::FragTrap() : ClapTrap()
{
	std::cout << "Called default FragTrap constructor" << std::endl;
	set_name("Default FragTrap");
	set_hit_points(100);
	set_energy_points(100);
	set_attack_damage(30);
}

FragTrap::FragTrap(const std::string& name) : ClapTrap(name)
{
	std::cout << "Called FragTrap name constructor" << std::endl;
	set_name(name);
	set_hit_points(100);
	set_energy_points(50);
	set_attack_damage(20);
}

FragTrap::FragTrap(const FragTrap& scav) : ClapTrap(scav)
{
	std::cout << "Copy FragTrap constructor called" << std::endl;
	*this = scav;
}

FragTrap::~FragTrap()
{
	std::cout << "Destructor FragTrap was called for " << get_name()
			  << std::endl;
}

FragTrap&	FragTrap::operator=(const FragTrap& scav)
{
	std::cout << "Copy assignment operator called" << std::endl;
	set_name(scav.get_name());
	set_hit_points(scav.get_hit_points());
	set_energy_points(scav.get_energy_points());
	set_attack_damage(scav.get_attack_damage());
	return (*this);
}

void	FragTrap::HighFivesGuys()
{
	std::cout << "FragTrap " << get_name() << " wants to high five someone "
			"but everyone ignores him." << std::endl;
}