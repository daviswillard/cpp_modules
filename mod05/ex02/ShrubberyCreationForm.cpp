#include "ShrubberyCreationForm.h"
ShrubberyCreationForm::ShrubberyCreationForm():
		Form("Shrubbery", 145, 137),
		target_("Unknown")
{
//	std::cout << "ShrubberyCreationForm default constructor was called"
//		<< std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
//	std::cout << "ShrubberyCreationForm destructor was called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string& target):
		Form("Shrubbery", 145, 137),
		target_(target)
{
//	std::cout << "ShrubberyCreationForm default constructor was called"
//		<< std::endl;
}

ShrubberyCreationForm::
	ShrubberyCreationForm(const ShrubberyCreationForm& source) : Form(source)
{
//	std::cout << "ShrubberyCreationForm copy constructor was called"
//		<< std::endl;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& source)
{
//	std::cout << "ShrubberyCreationForm assignation operator was called"
//		<< std::endl;
	(void)source;
	return *this;
}

void	ShrubberyCreationForm::Execute(const Bureaucrat& executor) const
{
	if (executor.get_grade() > get_exec())
		throw Bureaucrat::GradeTooLowException();
	else if (get_sign() <= 0)
		throw GradeTooHighException();
	else if (executor.get_grade() <= get_exec() && executor.get_grade() > 0)
	{
		std::ofstream fout(target_ + "_shrubbery");
		fout << "     ****\n"
			 << "  ****** **\n"
			 << "*  ******** *\n"
			 << " **  ********\n"
			 << "*************\n"
			 << "  *********\n"
			 << "     ||\n"
			 << "     ||\n"
			 << "...!.!!.!.!.." << std::endl;
	}
}