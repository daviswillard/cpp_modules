#include "Span.h"

int	main()
{
	Span	sp = Span(5);

	try
	{
		sp.AddNumber(6);
		sp.AddNumber(3);
		sp.AddNumber(17);
		sp.AddNumber(9);
		sp.AddNumber(11);
		std::cout << sp << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	{
		Span spn = sp;
		try
		{
			std::cout << "Longest: " << spn.LongestSpan() << std::endl;
			std::cout << "Shortest: " << spn.ShortestSpan() << std::endl;
		}
		catch (const std::exception &er)
		{
			std::cerr << er.what() << '\n';
		}
	}
	return (0);
}