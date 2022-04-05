#include "ClapTrap.h"

int	main()
{
	std::string		robo = "Roba";
	std::string		boba = "Boba";
	ClapTrap		robot(robo);
	ClapTrap		droid(boba);

	std::cout << "\nFirst round:" << std::endl;
	unsigned int damage_amount = 3;
	robot.set_attack_damage(damage_amount);
	droid.set_attack_damage(damage_amount);
	for (uint32_t i = 0; i < (10 / damage_amount); i++)
	{
		robot.Attack(boba);
		droid.TakeDamage(damage_amount);
	}
	robot.Attack(boba);

	std::cout << "\nBreak:" << std::endl;
	robot.BeRepaired(9);
	droid.BeRepaired(9);

	std::cout << "\nSecond round:" << std::endl;
	damage_amount = 3;
	robot.set_attack_damage(damage_amount);
	droid.set_attack_damage(damage_amount);
	for (uint32_t i = 0; i < (10 / damage_amount); i++)
	{
		droid.Attack(robo);
		robot.TakeDamage(damage_amount);
	}
	droid.Attack(boba);

	std::cout << "\nBreak:" << std::endl;
	robot.BeRepaired(10);
	droid.BeRepaired(10);

	std::cout << "\nThird round:" << std::endl;
	damage_amount = 2;
	robot.set_attack_damage(damage_amount);
	droid.set_attack_damage(damage_amount);
	robot.Attack(robo);
	droid.TakeDamage(damage_amount);

	std::cout << std::endl;
	return 0;
}
