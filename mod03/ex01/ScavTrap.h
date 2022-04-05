#ifndef SCAVTRAP_H
# define SCAVTRAP_H

# include "ClapTrap.h"

class ScavTrap : public ClapTrap
{
public:
	ScavTrap();
	explicit ScavTrap(const std::string& name);
	ScavTrap(const ScavTrap& scav);
	~ScavTrap();
	ScavTrap&	operator=(const ScavTrap& scav);

	void	GuardGate();
};


#endif
