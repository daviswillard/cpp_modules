#include "Bureaucrat.h"
#include "Form.h"
#include "ShrubberyCreationForm.h"
#include "RobotomyRequestClass.h"
#include "PresidentialPardonForm.h"
#include "Intern.h"

int	main()
{
	using std::cout;
	using std::endl;

	std::string sc = "shrubbery creation";
	std::string rr = "robotomy request";
	std::string pp = "presidential pardon";
	Bureaucrat	omega("OmegaWeapon", 20);
	Intern		creator = Intern();
	std::cout << "-----------------------------------" << std::endl;
	try
	{
		Form* Shrubbery = creator.MakeForm(sc, "Yulya");
		omega.SignForm(*Shrubbery);
		omega.ExecuteForm(*Shrubbery);
	}
	catch (std::exception & error)
	{
		std::cout << error.what() << std::endl;
	}
	std::cout << "-----------------------------------" << std::endl;
	try
	{
		Form* Robotomy = creator.MakeForm(rr, "Robot");
		omega.SignForm(*Robotomy);
		omega.ExecuteForm(*Robotomy);
	}
	catch (std::exception & error)
	{
		std::cout << error.what() << std::endl;
	}
	std::cout << "-----------------------------------" << std::endl;
	try
	{
		Form* President = creator.MakeForm(pp, "President");
		omega.SignForm(*President);
		omega.ExecuteForm(*President);
	}
	catch (std::exception & error)
	{
		std::cout << error.what() << std::endl;
	}
	std::cout << "-----------------------------------" << std::endl;
	return (0);
}
