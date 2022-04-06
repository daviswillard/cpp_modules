#pragma once

#include "WrongAnimal.h"

class WrongCat : public WrongAnimal
{
public:
	WrongCat();
	~WrongCat();
	WrongCat(const WrongCat& kitty);
	WrongCat& operator=(const WrongCat& kitty);

	void		MakeSound() const;
};
