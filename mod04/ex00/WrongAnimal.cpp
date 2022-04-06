#include "WrongAnimal.h"

WrongAnimal::WrongAnimal()
{
	std::cout << "WrongAnimal constructor called" << std::endl;
	type = "WrongAnimal";
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal destructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &w_animal)
{
	std::cout << "WrongAnimal copy constructor called" << std::endl;
	*this = w_animal;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& w_animal)
{
	std::cout << "WrongAnimal copy assignment operator called" << std::endl;
	type = w_animal.type;
	return (*this);
}

void	WrongAnimal::set_type(const std::string& type_1)
{
	type = type_1;
}

std::string WrongAnimal::get_type() const
{
	return (type);
}

void	WrongAnimal::MakeSound() const
{
	std::cout << "Eh... What do I say again? Wrong, anyway" << std::endl;
}