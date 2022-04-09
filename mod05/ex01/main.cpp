#include "Bureaucrat.h"
#include "Form.h"

int	main()
{
	using std::cout;
	using std::endl;

	Bureaucrat	alpha;
	Bureaucrat	beta("Beta");
	Bureaucrat	gamma("Gamma", 100);
	Form 		kek;
	Form		omegakek("Omega", 60, 100);
	Form		lul("Phi");

	cout << endl;
	cout << alpha;
	cout << beta;
	cout << gamma;
	cout << endl;
	cout << kek;
	cout << omegakek;
	cout << lul;
	cout << endl;

	try
	{
		Form omegalul("Wronger", 151, 100);
	}
	catch (std::exception& er)
	{
		cout << er.what() << endl;
	}
	try
	{
		Form omegalul("Wronger", 0, 100);
	}
	catch (std::exception& er)
	{
		cout << er.what() << endl;
	}
	try
	{
		Form		omegalul("Wronger", 43, 100);
		Bureaucrat	omegabureau("Signer", 65);
		omegabureau.SignForm(omegalul);
	}
	catch (std::exception& er)
	{
		cout << er.what() << endl;
	}
	try
	{
		Form		omegalul("Righter", 65, 100);
		Bureaucrat	omegabureau("Signer", 65);
		omegabureau.SignForm(omegalul);
		Form		copy(omegalul);
		omegabureau.SignForm(copy);
	}
	catch (std::exception& er)
	{
		cout << er.what() << endl;
	}
	Bureaucrat delta(gamma);
	cout << delta;

	return (0);
}
