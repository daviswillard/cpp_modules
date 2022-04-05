#ifndef CLAPTRAP_H
# define CLAPTRAP_H

# include <iostream>
# include <string>
# include <iomanip>

class ClapTrap
{
private:
	std::string name_;
	int			hit_points_;
	int			energy_points_;
	int			attack_damage_;
public:
	ClapTrap();
	explicit ClapTrap(const std::string& name);
	ClapTrap(const ClapTrap& clap);
	~ClapTrap();
	ClapTrap&	operator=(const ClapTrap& clap);

	void		set_name(const std::string& name);
	void		set_attack_damage(int ad);
	void		set_hit_points(int hp);
	void		set_energy_points(int ep);

	void		GetInfo();
	std::string get_name() const;
	int			get_attack_damage() const;
	int			get_hit_points() const;
	int			get_energy_points() const;

	void		Attack(const std::string& target);
	void		TakeDamage(unsigned int amount);
	void		BeRepaired(unsigned int amount);
};


#endif
