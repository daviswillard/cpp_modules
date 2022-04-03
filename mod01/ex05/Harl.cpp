#include "Harl.h"

Harl::Harl()
{

}

Harl::~Harl()
{
}

void	Harl::debug()
{
	std::cout << "I really do!" << std::endl;
}

void	Harl::info()
{
	std::cout << "Seriously, it's not funny." << std::endl;
}

void	Harl::warning()
{
	std::cout << "Do you really think that's okay? I got bad news for you." << std::endl;
}

void	Harl::error()
{
	std::cout << "Oh, i don't want to explain it, just leave me alone." << std::endl;
}

void	Harl::complain(const std::string& level)
{
	std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	action		fn = {&Harl::debug, &Harl::info,
				 &Harl::warning, &Harl::error};
	int index = 0;

	while (level != levels[index] && index < 4)
		index++;
	if (index == 4)
	{
		std::cout << "There is no level \"" << level << "\"" << std::endl;
		return;
	}
	(this->*fn[index])();
}
