#pragma once

#include "Animal.h"
#include "Brain.h"

class Dog : public Animal
{
public:
	Dog();
	~Dog();
	Dog(const Dog& puppy);
	Dog& operator=(const Dog& puppy);

	void		MakeSound() const;
	void		set_brain(Brain* brain);
	Brain*		get_brain() const;
private:
	Brain*		brain_;
};
