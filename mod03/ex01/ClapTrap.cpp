#include "ClapTrap.h"

ClapTrap::ClapTrap()
{
	std::cout << "Called default ClapTrap constructor" << std::endl;
	name_ = "Default ClapTrap";
	hit_points_ = 100;
	energy_points_ = 50;
	attack_damage_ = 20;
}

ClapTrap::ClapTrap(const std::string& name): name_(name)
{
	std::cout << "Called Claptrap name constructor" << std::endl;
	hit_points_ = 100;
	energy_points_ = 50;
	attack_damage_ = 20;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor ClapTrap was called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& clap)
{
	std::cout << "Copy ClapTrap constructor called" << std::endl;
	name_ = clap.get_name();
	hit_points_ = clap.get_hit_points();
	energy_points_ = clap.get_energy_points();
	attack_damage_ = clap.get_attack_damage();
}

ClapTrap &ClapTrap::operator=(const ClapTrap &clap)
{
	std::cout << "Copy assignment operator called" << std::endl;
	name_ = clap.get_name();
	hit_points_ = clap.get_hit_points();
	energy_points_ = clap.get_energy_points();
	attack_damage_ = clap.get_attack_damage();
	return *this;
}

void	ClapTrap::set_name(const std::string& name)
{
	name_ = name;
}

void	ClapTrap::set_attack_damage(int ad)
{
	attack_damage_ = ad;
}

void	ClapTrap::set_hit_points(int hp)
{
	hit_points_ = hp;
}

void	ClapTrap::set_energy_points(int ep)
{
	energy_points_ = ep;
}

std::string ClapTrap::get_name() const
{
	return (name_);
}
int			ClapTrap::get_attack_damage() const
{
	return (attack_damage_);
}

int			ClapTrap::get_hit_points() const
{
	return (hit_points_);
}

int			ClapTrap::get_energy_points() const
{
	return (energy_points_);
}

void	ClapTrap::Attack(const std::string& target)
{
	if (hit_points_ <= 0)
	{
		std::cout << "ClapTrap " << name_ << " is dead." << std::endl;
		return ;
	}
	if (energy_points_ <= 0)
	{
		std::cout << "ClapTrap " << name_ << " is exhausted." << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << name_ << " attacks " << target << " and deals "
			  << attack_damage_ << " damage!" << std::endl;
	energy_points_--;
}

void	ClapTrap::TakeDamage(unsigned int amount)
{
	if (hit_points_ <= 0)
	{
		std::cout << "ClapTrap " << name_ << " was attacked and received "
				  << amount << " damage! Now it's even more dead!" << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << name_ << " was attacked and received "
			<< amount << " damage!" << std::endl;
	hit_points_ -= amount;
	if (hit_points_ <= 0)
		std::cout << "ClapTrap " << name_ << " was destroyed!" << std::endl;
}

void	ClapTrap::BeRepaired(unsigned int amount)
{
	if (hit_points_ <= 0)
	{
		std::cout << "ClapTrap " << name_ << " is dead." << std::endl;
		return ;
	}
	if (energy_points_ <= 0)
	{
		std::cout << "ClapTrap " << name_ << " is exhausted." << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << name_ << " has repaired itself for "
			  << amount << " hit points!" << std::endl;
	hit_points_ += amount;
}
