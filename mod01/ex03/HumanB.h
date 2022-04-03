#ifndef HUMANB_H
# define HUMANB_H
# define HUMANA_H

# include <string>
# include <iostream>
# include "Weapon.h"

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
