#include "Replace.h"

int	main(int argc, char *argv[])
{
	if (argc != 4)
	{
		std::cout << "Wrong number of arguments\n" << std::endl;
		return (1);
	}
	Replace replace(argv[1], argv[2], argv[3]);
	return (0);
}
