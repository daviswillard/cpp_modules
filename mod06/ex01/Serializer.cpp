#include "Serializer.h"

Serializer::Serializer()
{
	std::cout << "Default Serializer constructor was called" << std::endl;
}

Serializer::~Serializer()
{
	std::cout << "Destructor Serializer was called" << std::endl;
}

Serializer::Serializer(const Serializer& copy)
{
	std::cout << "Copy Serializer constructor was called" << std::endl;
	(void)copy;
}

uintptr_t	Serializer::Serialize(Data *ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data*	Serializer::Deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data*>(raw));
}
