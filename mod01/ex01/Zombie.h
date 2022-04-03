#ifndef ZOMBIE_H
# define ZOMBIE_H

# include <iostream>

class Zombie
{
private:
	std::string name_;
public:
	Zombie();
	~Zombie();
	void	announce();
	void	set_name(const std::string& name);
};

Zombie*	zombieHorde(int N, const std::string& name);

#endif
