#include "Cat.h"

Cat::Cat() : Animal()
{
	std::cout << "Cat constructor called" << std::endl;
	type = "Cat";
	brain_ = new Brain("Whiskas");
}

Cat::~Cat()
{
	delete brain_;
	std::cout << "Cat destructor called" << std::endl;
}

Cat::Cat(const Cat &kitty) : Animal(kitty)
{
	std::cout << "Cat copy constructor called" << std::endl;
	*this = kitty;
}

void	Cat::set_brain(Brain *brain)
{
	delete brain_;
	brain_ = brain;
}

Brain*	Cat::get_brain() const
{
	return (brain_);
}

Cat& Cat::operator=(const Cat& kitty)
{
	std::cout << "Cat copy assignment operator called" << std::endl;
	if (this == &kitty)
		return (*this);
	type = kitty.type;
	delete brain_;
	brain_ = get_brain();
	return (*this);
}

void	Cat::MakeSound() const
{
	std::cout << "Meow-meow" << std::endl;
}