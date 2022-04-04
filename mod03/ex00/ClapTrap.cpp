#include "ClapTrap.h"

ClapTrap::ClapTrap(const std::string& name): name_(name)
{
	std::cout << "Called default constructor" << std::endl;
	hp_ = 10;
	ep_ = 10;
	ad_ = 0;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor was called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& clap)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = clap;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &clap)
{
	std::cout << "Copy assignment operator called" << std::endl;
	name_ = clap.name_;
	hp_ = clap.hp_;
	ep_ = clap.ep_;
	ad_ = clap.ad_;
	return *this;
}

void	ClapTrap::Attack(const std::string& target)
{
	if (hp_ <= 0)
	{
		std::cout << "ClapTrap " << name_ << " is dead.";
		return ;
	}
	if (ep_ <= 0)
	{
		std::cout << "ClapTrap " << name_ << " is exhausted.";
		return ;
	}
	std::cout << "ClapTrap " << name_ << " attacks " << target << " and deals "
		<< ad_ << " damage!" << std::endl;
	ep_--;
}

void	ClapTrap::TakeDamage(unsigned int amount)
{
	if (hp_ <= 0)
	{
		std::cout << "ClapTrap " << name_ << " was attacked and received "
				  << amount << " damage! Now it's even more dead!" << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << name_ << " was attacked and received "
			<< amount << " damage!" << std::endl;
	hp_ -= amount;
	if (hp_ <= 0)
		std::cout << "ClapTrap " << name_ << " was destroyed!" << std::endl;
}

void	ClapTrap::BeRepaired(unsigned int amount)
{
	if (hp_ <= 0)
	{
		std::cout << "ClapTrap " << name_ << " is dead.";
		return ;
	}
	if (ep_ <= 0)
	{
		std::cout << "ClapTrap " << name_ << " is exhausted.";
		return ;
	}
	std::cout << "ClapTrap " << name_ << " has repaired itself for "
			  << amount << " hit points!" << std::endl;
	hp_ += amount;
}
