#include "Bureaucrat.h"
#include "Form.h"
#include "ShrubberyCreationForm.h"
#include "RobotomyRequestClass.h"
#include "PresidentialPardonForm.h"

int	main()
{
	using std::cout;
	using std::endl;


	Bureaucrat omega("OmegaWeapon", 20);
	std::cout << "-----------------------------------" << std::endl;
	try
	{
		ShrubberyCreationForm Shrubbery("Shrubbery");
		omega.SignForm(Shrubbery);
		omega.ExecuteForm(Shrubbery);
	}
	catch (std::exception & error)
	{
		std::cout << error.what() << std::endl;
	}
	std::cout << "-----------------------------------" << std::endl;
	try
	{
		RobotomyRequestForm Robotomy("Robotomy");
		omega.SignForm(Robotomy);
		omega.ExecuteForm(Robotomy);
	}
	catch (std::exception & error)
	{
		std::cout << error.what() << std::endl;
	}
	std::cout << "-----------------------------------" << std::endl;
	try
	{
		PresidentialPardonForm President("President");
		omega.SignForm(President);
		omega.ExecuteForm(President);
	}
	catch (std::exception & error)
	{
		std::cout << error.what() << std::endl;
	}
	std::cout << "-----------------------------------" << std::endl;
	return (0);
}
