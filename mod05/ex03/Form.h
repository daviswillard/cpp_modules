#pragma once

#include <string>
#include <exception>
#include <iostream>
#include "Bureaucrat.h"

extern const char default_form[];

class Bureaucrat;

class Form
{
public:
	Form();
	explicit Form(const std::string& name);
	Form(const std::string& name, int sign, int exec);
	virtual ~Form();
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

	bool			get_signature() const;
	int				get_exec() const;
	int				get_sign() const;
	int				get_rand() const;
	std::string		get_name() const;
	void			set_sign(bool sign);
	void			BeSigned(const Bureaucrat& signer);
	virtual void	Execute(const Bureaucrat& executor) const = 0;

private:
	const std::string	name_;
	bool				sign_;
	const int			rqr_sign_;
	const int			rqr_exec_;
};

std::ostream& operator<< (std::ostream& out, const Form& form);
