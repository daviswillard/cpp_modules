#include "Fixed.h"

Fixed::Fixed()
{
	std::cout << "Default constructor called\n";
	store_ = 0;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called\n";
}

Fixed::Fixed(const Fixed &fixed): store_(fixed.store_)
{
	std::cout << "Copy constructor called\n";
}

Fixed &Fixed::operator=(const Fixed &fixed)
{
	std::cout << "Copy assignment operator called\n";
	store_ = fixed.store_;
	return *this;
}
