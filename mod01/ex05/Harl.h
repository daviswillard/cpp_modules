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
	typedef void(Harl::*action[])();
	void	debug();
	void	info();
	void	warning();
	void	error();
};

#endif
