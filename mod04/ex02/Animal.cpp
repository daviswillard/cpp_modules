#include "Animal.h"

Animal::Animal()
{
	std::cout << "Animal constructor called" << std::endl;
	type = "Animal";
}

Animal::~Animal()
{
	std::cout << "Animal destructor called" << std::endl;
}

Animal::Animal(const Animal &animal)
{
	std::cout << "Animal copy constructor called" << std::endl;
	*this = animal;
}

Animal& Animal::operator=(const Animal& animal)
{
	std::cout << "Animal copy assignment operator called" << std::endl;
	type = animal.type;
	return (*this);
}

void	Animal::set_type(const std::string& type_1)
{
	type = type_1;
}

std::string Animal::get_type() const
{
	return (type);
}

void	Animal::MakeSound() const
{
	std::cout << "Eh... What do I say again?" << std::endl;
}
