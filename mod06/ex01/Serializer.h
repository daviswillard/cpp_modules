#pragma once

#include <iostream>

struct Data{
	int			data_i_;
	const char*	str;
};

class Serializer
{
public:
	Serializer();
	~Serializer();
	Serializer(const Serializer& copy);
	virtual Serializer& operator=(const Serializer& copy) = 0;


	static uintptr_t	Serialize(Data* ptr);
	static Data*		Deserialize(uintptr_t raw);
};

