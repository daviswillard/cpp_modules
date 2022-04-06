#include "Brain.h"

#include <iostream>

Brain::Brain()
{
	ideas_ = new std::string[100];
	std::cout << "Brain constructor called" << std::endl;
	for (int i = 0; i < 100; i++)
		ideas_[i] = "Random thought";
}

Brain::Brain(const std::string& idea)
{
	ideas_ = new std::string[100];
	std::cout << "Brain idea constructor called" << std::endl;
	for (int i = 0; i < 100; i++)
		ideas_[i] = idea;
}

Brain::~Brain()
{
	std::cout << "Brain destructor called" << std::endl;
	delete [] ideas_;
}

Brain::Brain(const Brain& brain)
{
	std::cout << "Brain copy constructor called" << std::endl;
	*this = brain;
}

Brain& Brain::operator=(const Brain& brain)
{
	std::cout << "Brain copy assignment operator called" << std::endl;
	if (this == &brain)
		return (*this);
	delete [] ideas_;
	ideas_ = brain.get_ideas();
	return (*this);
}

void	Brain::ShareThoughts() const
{
	for (int i = 0; i < 100; i++)
		std::cout << ideas_[i] << std::endl;
}

void	Brain::set_ideas(const std::string& idea)
{
	for (int i = 0; i < 100; i++)
		ideas_[i] = idea;
}

std::string*	Brain::get_ideas() const
{
	return (ideas_);
}
