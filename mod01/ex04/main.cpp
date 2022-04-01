#include "Replace.h"

int	main(int argc, char *argv[])
{
	std::fstream	src;
	std::string		dst;

	if (argc != 4)
		return (0);
	src.open(argv[1], std::fstream::in);

	dst.append(argv[1]);
	dst.append(".replace");
}
