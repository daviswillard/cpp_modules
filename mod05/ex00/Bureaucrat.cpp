#include "Bureaucrat.h"

const char default_name[] = "Default bureaucrat";

//all debug messages disabled for cleaner output

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Grade is too high");
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Grade is too low");
}

Bureaucrat::Bureaucrat(): name_(default_name)
{
//	std::cout << "Default Bureaucrat constructor was called" << std::endl;
	srand(time(nullptr));
	grade_ = rand() % 150 + 1;
}

Bureaucrat::Bureaucrat(const std::string &name): name_(name)
{
//	std::cout << "Named Bureaucrat constructor was called" << std::endl;
	grade_ = rand() % 150 + 1;
}

Bureaucrat::Bureaucrat(const std::string &name, int grade): name_(name)
{
//	std::cout << "Named and graded Bureaucrat constructor was called"
//			<< std::endl;
	if (grade > 150)
		throw GradeTooLowException();
	if (grade < 1)
		throw GradeTooHighException();
	grade_ = grade;
}

Bureaucrat::~Bureaucrat()
{
//	std::cout << "Bureaucrat destructor was called" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &copy): name_(copy.get_name())
{
//	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}
