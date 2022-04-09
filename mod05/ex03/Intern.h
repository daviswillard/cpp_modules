#pragma once

#include "Form.h"
#include "ShrubberyCreationForm.h"
#include "PresidentialPardonForm.h"
#include "RobotomyRequestClass.h"

class Intern
{
public:
	Intern();
	~Intern();
	Intern(const Intern& base);
	Intern& operator=(const Intern &form);

	Form*	MakeForm(const std::string &ref, const std::string &name);
	class NoFormException : public std::exception
	{
	public:
		const char* what() const throw();
	};
};
