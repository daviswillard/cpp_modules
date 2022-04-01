#ifndef HUMANB_H
# define HUMANB_H

# include <string>
# include <iostream>
# ifndef HUMANA_H

#  include "Weapon.h"
# endif

class HumanB
{
private:
	Weapon*		weapon_;
	std::string	name_;
public:
	void	attack() const;
	void	setWeapon(Weapon& weapon);
	HumanB(const std::string& name);
	~HumanB();
};


#endif
