#pragma once

#include "Animal.h"
#include "Brain.h"

class Cat : public Animal
{
public:
	Cat();
	~Cat();
	Cat(const Cat& kitty);
	Cat& operator=(const Cat& kitty);

	void		MakeSound() const;
	void		set_brain(Brain* brain);
	Brain*		get_brain() const;
private:
	Brain*		brain_;
};
