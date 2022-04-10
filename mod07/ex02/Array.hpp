#pragma once

#include <iostream>

template<class T>
class Array
{
public:
	Array();
	explicit Array(uint32_t size);
	Array(const Array<T>& arr);
	~Array();

	class NegativeException : public std::exception
	{
		const char* what() const throw();
	};
	class OutOfBoundsException : public std::exception
	{
		const char* what() const throw();
	};

	Array& operator=(const Array<T>& arr);
	T& operator[](int64_t index);

private:
	uint32_t	size_;
	T*			var_;
};

#include "Array.tpp"
