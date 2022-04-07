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

	return (0);
}
