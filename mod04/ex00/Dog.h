#pragma once

#include "Animal.h"

class Dog : public Animal
{
public:
	Dog();
	~Dog();
	Dog(const Dog& puppy);
	Dog& operator=(const Dog& puppy);

	void		MakeSound() const;
//	void		set_type(const std::string& type_new);
//	std::string	get_type() const;
};
