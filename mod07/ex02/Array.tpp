#pragma once

#include "Array.hpp"

template<typename T>
Array<T>::Array()
{
	size_ = 0;
	var_ = nullptr;
}

template<typename T>
Array<T>::Array(uint32_t size)
{
	try
	{
		if (size < 0)
			throw NegativeException();
		size_ = size;
		var_ = new T[size]();
	}
	catch (std::exception& er)
	{
		std::cout << er.what() << std::endl;
	}
}

template<typename T>
const char* Array<T>::NegativeException::what() const throw()
{
	return ("Array size if less than zero");
}

template<typename T>
const char* Array<T>::OutOfBoundsException::what() const throw()
{
	return ("Index is out of bounds of array");
}

template<typename T>
Array<T>::Array(const Array<T>& arr): size_(arr.size_)
{
	var_ = new T[size_];
	for(uint32_t i = 0; i < size_; i++)
		var_[i] = arr.var_[i];
}

template<typename T>
T& Array<T>::operator[](int64_t index)
{
	if (index < 0)
		throw NegativeException();
	else if (index > size_)
		throw OutOfBoundsException();
	else
		return (var_[index]);
}

template<typename T>
Array<T>& Array<T>::operator=(const Array<T> &copy)
{
	if (this == &copy)
		return (*this);
	size_ = copy.size_;
	delete [] var_;
	var_ = new T[size_];
	for(uint32_t i = 0; i < size_; i++)
		var_[i] = copy.var_[i];
	return (*this);
}

template<typename T>
Array<T>::~Array<T>()
{
	delete [] var_;
}
