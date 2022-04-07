#include "ClapTrap.h"

int	main()
{
	std::string		robo = "Roba";
	std::string		boba = "Boba";
	ClapTrap		robot(robo);
	ClapTrap		droid(robot);

	std::cout << "\nFirst round:" << std::endl;
	uint32_t	damage_amount = 5;
	uint32_t	damage_droid = 6;
	droid.set_name(boba);
	robot.set_attack_damage(damage_amount);
	droid.set_attack_damage(damage_droid);
	robot.Attack(boba);
	droid.TakeDamage(damage_amount);
	droid.Attack(robo);
	robot.TakeDamage(damage_droid);

	std::cout << "\nBreak:" << std::endl;
	robot.BeRepaired(9);
	droid.BeRepaired(9);

	std::cout << "\nSecond round:" << std::endl;
	robot.set_attack_damage(damage_amount);
	droid.set_attack_damage(damage_droid);
	for (uint32_t i = 0; i < (10 / damage_amount); i++)
	{
		droid.Attack(robo);
		robot.TakeDamage(damage_droid);
	}
	droid.Attack(robo);
	robot.TakeDamage(damage_droid);

	std::cout << "Boba is victorious!" << std::endl;

	return 0;
}
