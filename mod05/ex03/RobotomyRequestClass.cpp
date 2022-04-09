#include "RobotomyRequestClass.h"

RobotomyRequestForm::RobotomyRequestForm():
		Form("Robotomy", 72, 45),
		target_("Unknown")
{
	std::cout << "RobotomyRequestForm default constructor was called"
		<< std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << "RobotomyRequestForm destructor was called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const std::string& target):
		Form("Robotomy", 72, 45),
		target_(target)
{
	std::cout << "RobotomyRequestForm default constructor was called"
		<< std::endl;
}

RobotomyRequestForm::
	RobotomyRequestForm(const RobotomyRequestForm& source) : Form(source)
{
	std::cout << "RobotomyRequestForm copy constructor was called" << std::endl;
}

RobotomyRequestForm&
	RobotomyRequestForm::operator=(const RobotomyRequestForm& source)
{
	std::cout << "RobotomyRequestForm assignation operator was called"
		<< std::endl;
	(void)source;
	return *this;
}

void	RobotomyRequestForm::Execute(const Bureaucrat& executor) const
{
	if (executor.get_grade() > get_exec())
		throw Bureaucrat::GradeTooLowException();
	else if (get_sign() <= 0)
		throw GradeTooHighException();
	else if (executor.get_grade() <= get_exec() && executor.get_grade() > 0)
	{
		std::cout << "*Makes some drilling noises*" << std::endl;
		srand(get_rand());
		if (rand() % 2 == 0)
			std::cout << target_ << " has been robotomized succesfully"
					  << std::endl;
		else
			std::cout << target_ << " failed to be robotomized " << std::endl;
	}
}