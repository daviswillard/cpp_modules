#include "WrongCat.h"

WrongCat::WrongCat() : WrongAnimal()
{
	std::cout << "WrongCat constructor called" << std::endl;
	type = "WrongCat";
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat destructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat &kitty) : WrongAnimal(kitty)
{
	std::cout << "WrongCat copy constructor called" << std::endl;
	*this = kitty;
}

WrongCat& WrongCat::operator=(const WrongCat& kitty)
{
	std::cout << "WrongCat copy assignment operator called" << std::endl;
	type = kitty.type;
	return (*this);
}

void	WrongCat::MakeSound() const
{
	std::cout << "Meow-meow, but now it's Wrong" << std::endl;
}
