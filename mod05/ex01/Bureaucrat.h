#pragma once

#include "Form.h"
#include <iostream>
#include <string>
#include <exception>
#include <sys/time.h>
#include <unistd.h>

extern const char default_name[];

class Form;

class Bureaucrat
{
public:
	Bureaucrat();
	explicit Bureaucrat(const std::string& name);
	Bureaucrat(const std::string &name, int grade);
	~Bureaucrat();
	Bureaucrat(const Bureaucrat& copy);

	Bureaucrat& operator=(const Bureaucrat& copy);
	Bureaucrat operator--(int);
	Bureaucrat operator++(int);

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

	static uint64_t	GetTime();
	void			SignForm(Form& form);
	void			set_grade(const int &grade);
	int				get_grade() const;
	std::string		get_name() const;

private:
	const std::string	name_;
	int					grade_;
};

std::ostream& operator<< (std::ostream& out, const Bureaucrat& bureau);
