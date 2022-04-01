#include "Zombie.h"

int	main()
{
	Zombie	kamil("Kamil");
	Zombie	*yulya;

	kamil.announce();
	yulya = newZombie("Yulya");
	yulya->announce();
	delete yulya;
	return 0;
}