#pragma once

#include <string>
#include <iostream>

class WrongAnimal
{
public:
	WrongAnimal();
	virtual ~WrongAnimal();
	WrongAnimal(WrongAnimal const& animal);
	WrongAnimal& operator=(WrongAnimal const& animal);

	std::string 	get_type() const;
	void			set_type(const std::string& type_new);
	virtual void 	MakeSound() const;
protected:
	std::string	type;
};
