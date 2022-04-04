#include "ScavTrap.h"

ScavTrap::ScavTrap(const std::string& name) : ClapTrap(name)
{

}
ScavTrap::ScavTrap(const ScavTrap& scav) : ClapTrap(scav)
{

}
ScavTrap::~ScavTrap()
{

}
ScavTrap&	operator=(const ScavTrap& scav)
{
}
