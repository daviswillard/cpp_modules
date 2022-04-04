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

Fixed &Fixed::operator=(const Fixed &fixed)
{
	std::cout << "Copy assignment operator called" << std::endl;
	store_ = fixed.get_raw_bits();
	return (*this);
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

std::ostream& operator<< (std::ostream &out, const Fixed& fixed)
{
	return (out << fixed.ToFloat());
}
