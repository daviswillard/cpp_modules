#include "Bureaucrat.h"

int	main()
{
	using std::cout;
	using std::endl;

	Bureaucrat alpha;
	Bureaucrat beta("Beta");
	Bureaucrat gamma("Gamma", 100);

	cout << endl;
	cout << alpha;
	cout << beta;
	cout << gamma;
	cout << endl;

	try
	{
		Bureaucrat delta("Delta", 151);
	}
	catch (std::exception& er)
	{
		cout << er.what() << endl;
	}
	try
	{
		while (1)
			gamma++;
	}
	catch (std::exception& er)
	{
		cout << er.what() << endl;
	}
	try
	{
		while (1)
			gamma--;
	}
	catch (std::exception& er)
	{
		cout << er.what() << endl;
	}
	Bureaucrat delta(gamma);
	cout << delta;

	return (0);
}
