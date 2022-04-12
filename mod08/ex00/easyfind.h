#pragma once

#include <iostream>
#include <algorithm>
#include <vector>
#include <array>

template <typename T>
void	easyfind(T& array, int number)
{
	typename T::iterator	iter;

	iter = std::find(array.begin(), array.end(), number);
	(iter != array.end())
		? std::cout << "contains " << number << std::endl
		: std::cout << "does not contain " << number << std::endl;
}
