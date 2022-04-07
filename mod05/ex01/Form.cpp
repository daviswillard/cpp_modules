#include "Form.h"

const char default_form[] = "Default form";

const char* Form::GradeTooHighException::what() const throw()
{
	return ("Grade is too high");
}

const char* Form::GradeTooLowException::what() const throw()
{
	return ("Grade is too low");
}

Form::Form():
name_(default_name), rqr_sign_(rand() % 150), rqr_exec_(rand() % 150)
{
	std::cout << "Default Form constructor was called" << std::endl;
	sign_ = false;
}

Form::Form(const std::string &name, int sign, int exec):
name_(name), rqr_sign_(sign), rqr_exec_(exec)
{
	std::cout << "Named Form constructor was called" << std::endl;
	sign_ = false;
}

Form::Form(const Form& form):
name_(form.name_), rqr_sign_(form.rqr_sign_), rqr_exec_(form.rqr_exec_)
{
	*this = form;
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

Form& Form::operator=(const Form &form)
{
	sign_ = form.get_signature();
	return (*this);
}

std::ostream& operator<< (std::ostream& out, const Bureaucrat& bureau)
{
	out << bureau.get_name() << ", bureaucrat grade " << bureau.get_grade()
		<< std::endl;
	return (out);
}

Form::~Form()
{
	std::cout << "Form destructor was called" << std::endl;
}

void Form::BeSigned(const Bureaucrat &signer)
{
	
}
