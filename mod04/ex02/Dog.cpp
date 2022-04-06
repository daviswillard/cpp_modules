#include "Dog.h"

Dog::Dog() : Animal()
{
	std::cout << "Dog constructor called" << std::endl;
	type = "Dog";
	brain_ = new Brain("Pedigree");
}

Dog::~Dog()
{
	delete brain_;
	std::cout << "Dog destructor called" << std::endl;
}

Dog::Dog(const Dog &puppy) : Animal(puppy)
{
	std::cout << "Dog copy constructor called" << std::endl;
	*this = puppy;
}

void	Dog::set_brain(Brain *brain)
{
	delete brain_;
	brain_ = brain;
}

Brain*	Dog::get_brain() const
{
	return (brain_);
}

Dog& Dog::operator=(const Dog& puppy)
{
	std::cout << "Dog copy assignment operator called" << std::endl;
	if (this == &puppy)
		return (*this);
	type = puppy.type;
	delete brain_;
	brain_ = get_brain();
	return (*this);
}

void	Dog::MakeSound() const
{
	std::cout << "Woof-woof" << std::endl;
}
