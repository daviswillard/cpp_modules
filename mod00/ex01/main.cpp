#include "PhoneBook.h"

int	main()
{
	using		std::cout;
	PhoneBook	book;
	std::string	line;
	int			count = 0;

	cout << "Print one of three following "
				"commands:\n\"ADD\"\n\"SEARCH\"\n\"EXIT\"\n";
	std::getline(std::cin, line);
	while (line != "EXIT")
	{
		if (line == "ADD")
		{
			book.Add();
			count++;
		}
		else if (line == "SEARCH")
			book.Search(count);
		else
			cout << "Couldn't get command;\n";
		cout << "Print one of three following "
				"commands:\n\"ADD\"\n\"SEARCH\"\n\"EXIT\"\n";
		std::getline(std::cin, line);
	}
	std::cout << "Exiting now...";
	return (0);
}
