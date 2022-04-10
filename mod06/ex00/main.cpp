#include "Convert.h"

int	main(int argc, char *argv[])
{
	if (argc != 2)
	{
		std::cout << "Wrong number of arguments" << std::endl;
		return (1);
	}
	Convert converter(argv[1]);
	converter.Converter();
	return (0);
}
