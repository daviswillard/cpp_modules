#ifndef CLAPTRAP_H
# define CLAPTRAP_H

# include <iostream>
# include <string>

class ClapTrap
{
private:
	std::string name_;
	int			hp_;
	int			ep_;
	int			ad_;
public:
	ClapTrap(const std::string& name);
	ClapTrap(const ClapTrap& clap);
	~ClapTrap();
	ClapTrap&	operator=(const ClapTrap &clap);

	void		Attack(const std::string& target);
	void		TakeDamage(unsigned int amount);
	void		BeRepaired(unsigned int amount);
};


#endif
