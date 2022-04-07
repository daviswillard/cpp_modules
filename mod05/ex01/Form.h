#pragma once

#include <string>
#include <exception>
#include <iostream>
#include "Bureaucrat.h"

extern const char default_form[];

class Form
{
public:
	Form();
	Form(const std::string& name, int sign, int exec);
	~Form();
	Form(const Form& copy);

	class GradeTooHighException : public std::exception
	{
	public:
		const char* what() const throw();
	};
	class GradeTooLowException : public std::exception
	{
	public:
		const char* what() const throw();
	};

	Form& operator=(const Form &form);

	bool		get_signature() const;
	int			get_exec() const;
	int			get_sign() const;
	std::string	get_name() const;

	void	BeSigned(const Bureaucrat& signer);
private:
	const std::string	name_;
	bool				sign_;
	const int			rqr_sign_;
	const int			rqr_exec_;
};
