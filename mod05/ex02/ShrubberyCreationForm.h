#pragma once

#include "Form.h"
#include <fstream>

class ShrubberyCreationForm: public Form
{
public:
	ShrubberyCreationForm();
	~ShrubberyCreationForm();
	ShrubberyCreationForm(const std::string& target);
	ShrubberyCreationForm(const ShrubberyCreationForm& source);
	ShrubberyCreationForm& operator=(const ShrubberyCreationForm& source);

	void				Execute(const Bureaucrat& executor) const;
private:
	const std::string	target_;
};
