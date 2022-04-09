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

void	Bureaucrat::SignForm(Form& form)
{
	try
	{
		form.BeSigned(*this);
		std::cout << get_name() << " signed form " << form.get_name()
			<< std::endl;
	}
	catch (std::exception& er)
	{
		std::cout << "Form " << form.get_name() << " couldn't be signed by "
			<< get_name() << " because " << er.what() << std::endl;
	}
}

void	Bureaucrat::ExecuteForm(Form &form)
{
	try
	{
		form.Execute(*this);
		std::cout << "Bureaucrat " << name_	<< " executed " << form.get_name()
			<< std::endl;
	}
	catch (std::exception& error)
	{
		std::cout << name_<< " couldn't execute " << form.get_name()
			<< " because " << error.what() << std::endl;
	}
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
