#include "Dog.h"

Dog::Dog() : Animal()
{
	std::cout << "Dog constructor called" << std::endl;
	type = "Dog";
}

Dog::~Dog()
{
	std::cout << "Dog destructor called" << std::endl;
}

Dog::Dog(const Dog &puppy) : Animal(puppy)
{
	std::cout << "Dog copy constructor called" << std::endl;
	*this = puppy;
}

Dog& Dog::operator=(const Dog& puppy)
{
	std::cout << "Dog copy assignment operator called" << std::endl;
	type = puppy.type;
	return (*this);
}

//void	Dog::set_type(const std::string& type_new)
//{
//	type = type_new;
//}
//
//std::string Dog::get_type() const
//{
//	return (type);
//}

void	Dog::MakeSound() const
{
	std::cout << "Woof-woof" << std::endl;
}
