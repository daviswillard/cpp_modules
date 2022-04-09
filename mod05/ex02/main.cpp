#include "Bureaucrat.h"
#include "Form.h"
#include "ShrubberyCreationForm.h"
#include "RobotomyRequestClass.h"
#include "PresidentialPardonForm.h"

int	main()
{
	using std::cout;
	using std::endl;


	Bureaucrat bureau("OmegaWeapon", 20);
	std::cout << "-----------------------------------" << std::endl;
	try
	{
		ShrubberyCreationForm Shrubbery("Shrubbery");
		bureau.SignForm(Shrubbery);
		bureau.ExecuteForm(Shrubbery);
	}
	catch (std::exception & error)
	{
		std::cout << error.what() << std::endl;
	}
	std::cout << "-----------------------------------" << std::endl;
	try
	{
		RobotomyRequestForm Robotomy("Robotomy");
		bureau.SignForm(Robotomy);
		bureau.ExecuteForm(Robotomy);
	}
	catch (std::exception & error)
	{
		std::cout << error.what() << std::endl;
	}
	std::cout << "-----------------------------------" << std::endl;
	try
	{
		PresidentialPardonForm President("President");
		bureau.SignForm(President);
		bureau.ExecuteForm(President);
	}
	catch (std::exception & error)
	{
		std::cout << error.what() << std::endl;
	}
	std::cout << "-----------------------------------" << std::endl;
	return (0);
}
