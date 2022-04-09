#include "Form.h"

const char default_form[] = "Default form";

const char* Form::GradeTooHighException::what() const throw()
{
	return ("Form grade is too high");
}

const char* Form::GradeTooLowException::what() const throw()
{
	return ("Form grade is too low");
}

Form::Form():
name_(default_form), rqr_sign_(get_rand()),
rqr_exec_((get_rand() + static_cast<int>(Bureaucrat::GetTime())) % 150 + 1)
{
	sign_ = false;
}

Form::Form(const std::string &name, int sign, int exec):
name_(name), rqr_sign_(sign), rqr_exec_(exec)
{
	sign_ = false;
	if (rqr_sign_ < 1 || rqr_exec_ < 1)
		throw GradeTooHighException();
	else if (rqr_sign_ > 150 || rqr_exec_ > 150)
		throw GradeTooLowException();
}

Form::Form(const std::string &name):
	name_(name), rqr_sign_(get_rand()),
	rqr_exec_((get_rand() + static_cast<int>(Bureaucrat::GetTime())) % 150 + 1)
{
	sign_ = false;
}

Form::Form(const Form& form):
name_(form.name_), rqr_sign_(form.rqr_sign_), rqr_exec_(form.rqr_exec_)
{
	*this = form;
}

int	Form::get_rand() const
{
	usleep(1);
	srand(Bureaucrat::GetTime());
	return (rand() % 150 + 1);
}

bool	Form::get_signature() const
{
	return (sign_);
}

int	Form::get_exec() const
{
	return (rqr_exec_);
}

int	Form::get_sign() const
{
	return (rqr_sign_);
}

std::string	Form::get_name() const
{
	return (name_);
}

void	Form::set_sign(bool sign)
{
	sign_ = sign;
}

Form& Form::operator=(const Form &form)
{
	sign_ = form.get_signature();
	return (*this);
}

std::ostream& operator<< (std::ostream& out, const Form& form)
{
	out << form.get_name()
		<< (form.get_signature() ? " is signed.\n" : " is not signed.\n")
		<< "Grade to sign: " << form.get_sign()
		<< ".\nGrade to execute: " << form.get_exec() << std::endl;
	return (out);
}

Form::~Form()
{
}

void	Form::BeSigned(const Bureaucrat &signer)
{
	if (signer.get_grade() <= rqr_sign_)
		set_sign(true);
	else if (signer.get_grade() > rqr_sign_)
		throw Bureaucrat::GradeTooLowException();
	else if (get_sign() <= 0)
		throw GradeTooHighException();
}
