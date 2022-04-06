#include "Cat.h"

Cat::Cat() : Animal()
{
	std::cout << "Cat constructor called" << std::endl;
	type = "Cat";
}

Cat::~Cat()
{
	std::cout << "Cat destructor called" << std::endl;
}

Cat::Cat(const Cat &kitty) : Animal(kitty)
{
	std::cout << "Cat copy constructor called" << std::endl;
	*this = kitty;
}

Cat& Cat::operator=(const Cat& kitty)
{
	std::cout << "Cat copy assignment operator called" << std::endl;
	type = kitty.type;
	return (*this);
}

void	Cat::MakeSound() const
{
	std::cout << "Meow-meow" << std::endl;
}
