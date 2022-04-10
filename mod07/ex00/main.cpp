#include "whatever.h"

int	main()
{
	int			i_int = 5;
	int			j_int = 7;
	std::string	i_str = "kek";
	std::string j_str = "Kek";

	{
		std::cout << "i_int:\t" << i_int << "\nj_int\t" << j_int << std::endl;
		swap(i_int, j_int);
		std::cout << "Swap" << std::endl;
		std::cout << "i_int:\t" << i_int << "\nj_int\t" << j_int << std::endl;
		std::cout << "i_str:\t" << i_str << "\nj_str\t" << j_str << std::endl;
		swap(i_str, j_str);
		std::cout << "Swap" << std::endl;
		std::cout << "i_str:\t" << i_str << "\nj_str\t" << j_str << std::endl;
	}
	{
		std::cout << "i_int:\t" << i_int << "\nj_int\t" << j_int << std::endl;
		std::cout << "Min:\t" << min(i_int, j_int) << std::endl;
		std::cout << "i_str:\t" << i_str << "\nj_str\t" << j_str << std::endl;
		std::cout << "Min\t" << min(i_str, j_str) << std::endl;
	}
	{
		std::cout << "i_int:\t" << i_int << "\nj_int\t" << j_int << std::endl;
		std::cout << "Max:\t" << max(i_int, j_int) << std::endl;
		std::cout << "i_str:\t" << i_str << "\nj_str\t" << j_str << std::endl;
		std::cout << "Max\t" << max(i_str, j_str) << std::endl;
	}
}