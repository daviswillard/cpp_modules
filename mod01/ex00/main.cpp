#include "Zombie.h"

int	main()
{
	Zombie	z1("Jack");
	Zombie	*z2;

	z1.announce();
	z2 = newZombie("Black");
	z2->announce();
	randomChump("Mikhail");
	delete z2;
	return 0;
}