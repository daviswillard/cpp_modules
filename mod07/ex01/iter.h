#pragma once

#include <iostream>

template <typename T>
void	iter(T* arr, uint32_t len, void (*f)(T&))
{
	uint32_t	temp;

	for (temp = 0; temp < len; temp++)
		(*f)(arr[temp]);
}

template <typename T>
void	Print(T& ch)
{
	std::cout << ch << std::endl;
}