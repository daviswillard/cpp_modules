#pragma once

#include "Form.h"

class PresidentialPardonForm: public Form
{
public:
	PresidentialPardonForm();
	~PresidentialPardonForm();
	explicit PresidentialPardonForm(const std::string& target);
	PresidentialPardonForm(const PresidentialPardonForm& source);
	PresidentialPardonForm& operator=(const PresidentialPardonForm& source);

	void				Execute(const Bureaucrat& executor) const;
private:
	const std::string	target_;
};
