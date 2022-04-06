#include "Animal.h"
#include "Dog.h"
#include "Cat.h"

#define COUNT 6

int	main()
{
	const Animal*	pack[COUNT];

	for (int i = 0; i < COUNT; i++){
		if (i % 2)
			pack[i] = new Cat();
		else
			pack[i] = new Dog();
	}
	for (int i = 0; i < COUNT; i++)
		delete pack[i];
	return 0;
}
