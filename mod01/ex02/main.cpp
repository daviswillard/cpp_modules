#include <iostream>

int	main()
{
	using std::string;
	using std::cout;
	using std::endl;

	string		var = "HI THIS IS BRAIN";
	string 		*stringPTR = &var;
	string		&stringREF = var;

	cout << &var << "\n";
	cout << stringPTR << "\n";
	cout << &stringREF << "\n";

	cout << var << "\n";
	cout << *stringPTR << "\n";
	cout << stringREF << "\n";

	return 0;
}
