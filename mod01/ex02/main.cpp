#include <iostream>

int	main()
{
	using std::cout;

	std::string		var = "HI THIS IS BRAIN";
	std::string 	*stringPTR = &var;
	std::string		&stringREF = var;

	cout << &var << "\n";
	cout << stringPTR << "\n";
	cout << &stringREF << "\n";

	cout << var << "\n";
	cout << *stringPTR << "\n";
	cout << stringREF << std::endl;

	return 0;
}
