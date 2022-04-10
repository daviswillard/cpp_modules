#include "Base.h"

int	main()
{
	using	std::cout;
	using	std::endl;

	Base* base = generate();
	identify(base);
	identify(*base);
	delete (base);
	return (0);
}