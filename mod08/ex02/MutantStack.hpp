#pragma once

#include <iostream>
#include <deque>
#include <stack>
#include <list>

template<class T, class Container= std::deque<T> >
class MutantStack : public std::stack<T, Container>
{
public:
	MutantStack() : std::stack<T, Container>()
	{
	};
	~MutantStack()
	{
	};
	MutantStack(const MutantStack<T, Container>& copy)
	{
		*this = copy;
	}
	MutantStack<T, Container>& operator=(const MutantStack<T, Container>& copy)
	{
		if (this == &copy)
			return (*this);
		this->c = copy->c;
		return (*this);
	}

	typedef typename Container::iterator iterator;
	typedef typename Container::const_iterator const_iterator;
	typedef typename Container::reverse_iterator reverse_iterator;
	typedef typename Container::const_reverse_iterator const_reverse_iterator;

	iterator begin()
	{
		return (this->c.begin());
	}
	iterator end()
	{
		return (this->c.end());
	}
	const_iterator cbegin()
	{
		return (this->c.cbegin());
	}
	const_iterator cend()
	{
		return (this->c.cend());
	}
	reverse_iterator rbegin()
	{
		return (this->c.rbegin());
	}
	reverse_iterator rend()
	{
		return (this->c.rend());
	}
	const_reverse_iterator crbegin()
	{
		return (this->c.crbegin());
	}
	const_reverse_iterator crend()
	{
		return (this->c.crend());
	}
};