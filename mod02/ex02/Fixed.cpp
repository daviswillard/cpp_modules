#include "Fixed.h"


Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	store_ = 0;
}

Fixed::Fixed(const int value)
{
	std::cout << "Int constructor called" << std::endl;
	store_ = value << raw_bits_;
}

Fixed::Fixed(const float value)
{
	std::cout << "Float constructor called" << std::endl;
	store_ = roundf(value * (1 << 8));
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed& fixed)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = fixed;
}

int	Fixed::get_raw_bits() const
{
	std::cout << "get_raw_bits member function called" << std::endl;
	return (store_);
}

void	Fixed::set_raw_bits(int const raw_bits)
{
	std::cout << "set_raw_bits member function called" << std::endl;
	store_ = raw_bits;
}

int	Fixed::ToInt() const
{
	return (store_ >> raw_bits_);
}

float	Fixed::ToFloat() const
{
	return ((float)store_ / (1 << raw_bits_));
}

Fixed	&Fixed::min(Fixed& obj1, Fixed& obj2)
{
	if (obj1.get_raw_bits() < obj2.get_raw_bits())
		return (obj1);
	return (obj2);
}

Fixed	&Fixed::max(Fixed& obj1, Fixed& obj2)
{
	if (obj1.get_raw_bits() > obj2.get_raw_bits())
		return (obj1);
	return (obj2);
}

const Fixed	&Fixed::min(const Fixed& obj1, const Fixed& obj2)
{
	if (obj1.get_raw_bits() < obj2.get_raw_bits())
		return (obj1);
	return (obj2);
}

const Fixed	&Fixed::max(const Fixed& obj1, const Fixed& obj2)
{
	if (obj1.get_raw_bits() > obj2.get_raw_bits())
		return (obj1);
	return (obj2);
}
