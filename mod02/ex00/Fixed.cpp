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

Fixed::Fixed(const Fixed& fixed)
{
	std::cout << "Copy constructor called\n";
	*this = fixed;
}

Fixed &Fixed::operator=(const Fixed &fixed)
{
	std::cout << "Copy assignment operator called\n";
	store_ = fixed.get_raw_bits();
	return (*this);
}

int	Fixed::get_raw_bits() const
{
	std::cout << "get_raw_bits member function called\n";
	return (store_);
}

void	Fixed::set_raw_bits(int const raw_bits)
{
	std::cout << "set_raw_bits member function called\n";
	store_ = raw_bits;
}
