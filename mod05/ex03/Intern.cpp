#include "Intern.h"

Intern::Intern()
{
	std::cout << "Default Intern constructor was called" << std::endl;
}

Intern::~Intern()
{
	std::cout << "Default Intern destructor was called" << std::endl;
}

Intern::Intern(const Intern& base)
{
	std::cout << "Copy Intern constructor was called" << std::endl;
	*this = base;
}

Intern& Intern::operator=(const Intern &form)
{
	std::cout << "Copy assignment Intern operator was called" << std::endl;
	(void)form;
	return (*this);
}

const char* Intern::NoFormException::what() const throw()
{
	return ("No corresponding Form was found!");
}

Form*	Intern::MakeForm(const std::string &ref, const std::string &name)
{
	if (ref == "shrubbery creation")
		return (new ShrubberyCreationForm(name));
	if (ref == "robotomy request")
		return (new RobotomyRequestForm(name));
	if (ref == "presidential pardon")
		return (new PresidentialPardonForm(name));
	throw NoFormException();
}
