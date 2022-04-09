#include "Bureaucrat.h"

const char default_name[] = "Default bureaucrat";


const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Bureaucrat grade is too high");
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Bureaucrat grade is too low");
}

uint64_t	Bureaucrat::GetTime()
{
	_STRUCT_TIMEVAL	s_tv;

	gettimeofday(&s_tv, nullptr);
	return (s_tv.tv_usec);
}


Bureaucrat::Bureaucrat(): name_(default_name)
{
	srand(GetTime());
	grade_ = rand() % 150 + 1;
}

Bureaucrat::Bureaucrat(const std::string &name): name_(name)
{
	grade_ = rand() % 150 + 1;
}

Bureaucrat::Bureaucrat(const std::string &name, int grade): name_(name)
{
	if (grade > 150)
		throw GradeTooLowException();
	if (grade < 1)
		throw GradeTooHighException();
	grade_ = grade;
}

Bureaucrat::~Bureaucrat()
{
}

Bureaucrat::Bureaucrat(const Bureaucrat &copy): name_(copy.get_name())
{
	*this = copy;
}
