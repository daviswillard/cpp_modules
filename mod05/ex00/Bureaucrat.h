#pragma once

#include <iostream>
#include <string>
#include <exception>

class Bureaucrat
{
public:
	explicit Bureaucrat(const std::string& name);
	~Bureaucrat();
	Bureaucrat(const Bureaucrat& copy);
	Bureaucrat& operator=(const Bureaucrat& copy);

	class GradeTooHighException : std::exception
	{
	public:
		const char* what() const throw();
	};
	class GradeTooLowException : std::exception
	{
	public:
		const char* what() const throw();
	};
	void		set_grade(const int &grade);
	int			get_grade() const;
	std::string	get_name() const;
private:
	const std::string	name_;
	int					grade_;
};
