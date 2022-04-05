#include "ScavTrap.h"

ScavTrap::ScavTrap() : ClapTrap()
{
	std::cout << "Called default ScavTrap constructor" << std::endl;
	set_name("Default ScavTrap");
	set_hit_points(100);
	set_energy_points(50);
	set_attack_damage(20);
}

ScavTrap::ScavTrap(const std::string& name) : ClapTrap(name)
{
	std::cout << "Called ScavTrap name constructor" << std::endl;
	set_name(name);
	set_hit_points(100);
	set_energy_points(50);
	set_attack_damage(20);
}

ScavTrap::ScavTrap(const ScavTrap& scav) : ClapTrap(scav)
{
	std::cout << "Copy ScavTrap constructor called" << std::endl;
	set_name(scav.get_name());
	set_hit_points(scav.get_hit_points());
	set_energy_points(scav.get_energy_points());
	set_attack_damage(scav.get_attack_damage());
}

ScavTrap::~ScavTrap()
{
	std::cout << "Destructor ScavTrap was called" << std::endl;
}

ScavTrap&	ScavTrap::operator=(const ScavTrap& scav)
{
	std::cout << "Copy assignment operator called" << std::endl;
	set_name(scav.get_name());
	set_hit_points(scav.get_hit_points());
	set_energy_points(scav.get_energy_points());
	set_attack_damage(scav.get_attack_damage());
	return (*this);
}

void	ScavTrap::GuardGate()
{
	std::cout << "ScavTrap " << get_name() << " has entered the Guard "
		"keeper state" << std::endl;
}
