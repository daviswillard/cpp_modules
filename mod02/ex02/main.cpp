#include "Fixed.h"

int	main()
{
	using std::cout;
	using std::endl;

	Fixed		a;
	Fixed const	b(Fixed(5.05f) * Fixed(2));
	Fixed		c(10);
	Fixed		d(20);

	cout << a << endl;
	cout << ++a << endl;
	cout << a << endl;
	cout << a++ << endl;
	cout << a << endl;

	cout << b << endl;
	cout << b / c << endl;
	cout << c / 1024 << endl;
	cout << c.ToInt() << endl;

	cout << Fixed::max(a, b) << endl;
	cout << Fixed::min(a, b) << endl;
	return (0);
}
