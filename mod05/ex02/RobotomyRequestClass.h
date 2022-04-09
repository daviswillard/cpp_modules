#pragma once

#include "Form.h"

class RobotomyRequestForm: public Form
{
public:
	RobotomyRequestForm();
	~RobotomyRequestForm();
	explicit RobotomyRequestForm(const std::string& target);
	RobotomyRequestForm(const RobotomyRequestForm& source);
	RobotomyRequestForm& operator=(const RobotomyRequestForm& source);

	void				Execute(const Bureaucrat& executor) const;
private:
	const std::string	target_;
};