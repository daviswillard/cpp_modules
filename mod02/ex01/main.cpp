#include "Fixed.h"

int	main()
{
	using std::cout;
	using std::endl;

	Fixed		a;
	Fixed const	b(10);
	Fixed const	c(42.42f);
	Fixed const d(b);

	a = Fixed(1234.4321f);

	cout << "a is " << a << endl;
	cout << "b is " << b << endl;
	cout << "c is " << c << endl;
	cout << "d is " << d << endl;

	cout << "a is " << a.ToInt() << " as integer" << endl;
	cout << "b is " << b.ToInt() << " as integer" << endl;
	cout << "c is " << c.ToInt() << " as integer" << endl;
	cout << "d is " << d.ToInt() << " as integer" << endl;
	return (0);
}
