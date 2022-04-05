#ifndef FRAGTRAP_H
# define FRAGTRAP_H

# include "ClapTrap.h"
# include <iostream>
# include <string>

class FragTrap : public ClapTrap
{
public:
	FragTrap();
	explicit FragTrap(const std::string& name);
	FragTrap(const FragTrap& scav);
	~FragTrap();
	FragTrap&	operator=(const FragTrap& scav);

	void	HighFivesGuys();
};


#endif
