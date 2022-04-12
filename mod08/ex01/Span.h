#pragma once

#include <iostream>
#include <vector>
#include <algorithm>

class Span
{
private:
	unsigned int		n_;
	std::vector<int>	vec_;
	Span();

public:
	Span(unsigned int N);
	Span(const Span &copy);
	Span &operator=(const Span &cope);

	void				AddNumber(unsigned int i);
	void				AddNumber(std::vector<int>::iterator begin,
								  std::vector<int>::iterator end);
	unsigned int		ShortestSpan();
	unsigned int		LongestSpan();

	std::vector<int>	get_vec() const;

	class OutOfBounds: public std::exception
	{
		virtual const char* what() const throw();
	};
	class NotValidNumberOfNumbers: public std::exception
	{
		virtual const char* what() const throw();
	};
};

std::ostream &operator<<(std::ostream &out, const Span &b);
