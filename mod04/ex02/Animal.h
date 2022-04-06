#pragma once

#include <string>
#include <iostream>

class Animal
{
public:
	Animal();
	virtual ~Animal();
	Animal(const Animal& animal);
	Animal& operator=(const Animal& animal);

	std::string		get_type() const;
	void			set_type(const std::string& type_1);
	virtual void	MakeSound() const = 0;
protected:
	std::string	type;
};
