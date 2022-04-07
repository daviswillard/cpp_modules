#include "Bureaucrat.h"

std::string	Bureaucrat::get_name() const
{
	return (name_);
}

int	Bureaucrat::get_grade() const
{
	return (grade_);
}

void	Bureaucrat::set_grade(const int &grade)
{
	if (grade < 1)
		throw GradeTooHighException();
	else if (grade > 150)
		throw GradeTooLowException();
	grade_ = grade;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat &copy)
{
//	std::cout << "Copy assignment operator called" << std::endl;
	grade_ = copy.get_grade();
	return (*this);
}

Bureaucrat Bureaucrat::operator++(int)
{
	const Bureaucrat copy(*this);
	if (grade_ - 1 < 1)
		throw GradeTooHighException();
	grade_--;
	return (copy);
}

Bureaucrat Bureaucrat::operator--(int)
{
	const Bureaucrat copy(*this);
	if (grade_ + 1 > 150)
		throw GradeTooLowException();
	grade_++;
	return (copy);
}

std::ostream& operator<< (std::ostream& out, const Bureaucrat& bureau)
{
	out << bureau.get_name() << ", bureaucrat grade " << bureau.get_grade()
		<< std::endl;
	return (out);
}
