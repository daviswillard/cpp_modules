#ifndef HARL_H
# define HARL_H

#include <iostream>

class Harl
{
public:
	Harl();
	~Harl();
	void	complain(const std::string& level);
private:
	void	debug();
	void	info();
	void	warning();
	void	error();
};

typedef void(Harl::*action[4])();

#endif
