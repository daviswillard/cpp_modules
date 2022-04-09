#include "PresidentialPardonForm.h"

PresidentialPardonForm::PresidentialPardonForm():
		Form("President", 28, 5),
		target_("Unknown")
{
//	std::cout << "PresidentialPardonForm default constructor was called"
//	<< std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
//	std::cout << "PresidentialPardonForm destructor was called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const std::string& target):
		Form("President", 28, 5),
		target_(target)
{
//	std::cout << "PresidentialPardonForm default constructor was called"
//	<< std::endl;
}

PresidentialPardonForm::
	PresidentialPardonForm(const PresidentialPardonForm& source) : Form(source)
{
//	std::cout << "PresidentialPardonForm copy constructor was called"
//	<< std::endl;
}

PresidentialPardonForm&
	PresidentialPardonForm::operator=(const PresidentialPardonForm& source)
{
//	std::cout << "PresidentialPardonForm assignation operator was called"
//	<< std::endl;
	(void)source;
	return *this;
}

void	PresidentialPardonForm::Execute(const Bureaucrat& executor) const
{
	if (executor.get_grade() > get_exec())
		throw Bureaucrat::GradeTooLowException();
	else if (get_sign() <= 0)
		throw GradeTooHighException();
	else if (executor.get_grade() <= get_exec() && executor.get_grade() > 0)
	{
		std::cout << target_ << " has been pardoned by Zaphod Beeblebrox"
				  << std::endl;
	}
}