#pragma once

#include "Animal.h"

class Cat : public Animal
{
public:
	Cat();
	~Cat();
	Cat(const Cat& kitty);
	Cat& operator=(const Cat& kitty);

	void		MakeSound() const;
};
