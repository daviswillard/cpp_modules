#include <iostream>

int	main(int argc, char *argv[])
{
	using		std::cout;
	using		std::endl;

	if (argc == 1)
		cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << endl;
	else
	{
		for (int i = 1; argv[i]; i++)
		{
			for (int j = 0; argv[i][j]; j++)
			{
				argv[i][j] = std::toupper(argv[i][j]);
				cout << argv[i][j];
			}
		}
		cout << endl;
	}
	return (0);
}