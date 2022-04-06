#include "Animal.h"
#include "Dog.h"
#include "Cat.h"
#include "WrongAnimal.h"
#include "WrongCat.h"

int	main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	const WrongAnimal* wi = new WrongCat();
	const WrongAnimal* wmeta = new WrongAnimal();
	wi->MakeSound(); //will output the wrong cat sound!
	std::cout << wi->get_type() << " " << std::endl;
	wmeta->MakeSound();//will try to output wrong animal sound!
	delete wmeta;
	delete wi;
	j->MakeSound(); //will output the dog sound!
	std::cout << j->get_type() << " " << std::endl;
	i->MakeSound();	//will output the cat sound!
	std::cout << i->get_type() << " " << std::endl;
	meta->MakeSound(); //will output animal sound! or at least tries to...
	delete meta;
	delete j;
	delete i;
	return 0;
}
