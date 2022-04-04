#include "Fixed.h"

int	main()
{
	using std::cout;
	using std::endl;

	Fixed a;
	Fixed b(a);
	Fixed c;

	c = b;
	cout << a.get_raw_bits() << endl;
	cout << b.get_raw_bits() << endl;
	cout << c.get_raw_bits() << endl;
	a.set_raw_bits(10);
	cout << a.get_raw_bits() << endl;
	return (0);
}