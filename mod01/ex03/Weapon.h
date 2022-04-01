#ifndef WEAPON_H
# define WEAPON_H

# ifndef HUMANA_H

#  include <string>

# endif

class Weapon
{
private:
	std::string	type_;
public:
	Weapon(const std::string& type);
	~Weapon();

	const std::string&	getType() const;
	void				setType(const std::string& type);
};

#endif
