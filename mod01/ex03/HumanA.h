#ifndef HUMANA_H
# define HUMANA_H

# include <string>
# include <iostream>
# include "Weapon.h"

class HumanA
{
private:
	Weapon&		weapon_;
	std::string	name_;
public:
	void attack() const;
	HumanA(const std::string& name, Weapon& weapon);
	~HumanA();
};


#endif
