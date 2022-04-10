#include <iostream>
#include "Array.hpp"

#define MAX_VAL 10
int main(int, char**)
{
	std::cout << "Creating Array<int> and array of integers" << std::endl;
	Array<int> numbers(MAX_VAL);
	int* mirror = new int[MAX_VAL];
	std::cout << "Initializing both with random values" << std::endl;
	srand(time(nullptr));
	for (int i = 0; i < MAX_VAL; i++)
	{
		const int value = rand();
		numbers[i] = value;
		mirror[i] = value;
	}
	std::cout << "Creating two copies of Array<int>" << std::endl;
	Array<int> tmp = numbers;
	Array<int> test(tmp);
	std::cout << "-------------------------------------------------------" << std::endl;

	std::cout << "Comparing these arrays..." << std::endl;
	for (int i = 0; i < MAX_VAL; i++)
	{
		if (numbers[i] != mirror[i] || tmp[i] != mirror[i] || test[i] != mirror[i])
		{
			std::cout << "didn't save the same value!!" << std::endl;
			return (1);
		}
	}
	std::cout << "-------------------------------------------------------" << std::endl;

	std::cout << "Trying to refer to the array with negative index..." << std::endl;
	try
	{
		numbers[-2] = 0;
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << '\n';
	}
	std::cout << "-------------------------------------------------------" << std::endl;

	std::cout << "Trying to write to the array element with too big index..."
	<< std::endl;
	try
	{
		numbers[MAX_VAL + 1] = 0;
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << '\n';
	}
	std::cout << "-------------------------------------------------------" << std::endl;

	for (int i = 0; i < MAX_VAL; i++)
	{
		numbers[i] = rand();
	}
	delete [] mirror;
	return (0);
}