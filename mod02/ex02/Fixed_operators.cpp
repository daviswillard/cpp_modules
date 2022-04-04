#include "Fixed.h"

Fixed &Fixed::operator=(const Fixed &fixed)
{
	std::cout << "Copy assignment operator called" << std::endl;
	store_ = fixed.get_raw_bits();
	return (*this);
}

/* 6 comparison operators: >, <, >=, <=, == and != */

bool Fixed::operator>(const Fixed &fixed) const
{
	return store_ > fixed.get_raw_bits();
}

bool Fixed::operator<(const Fixed &fixed) const
{
	return store_ < fixed.get_raw_bits();
}

bool Fixed::operator>=(const Fixed &fixed) const
{
	return store_ >= fixed.get_raw_bits();
}

bool Fixed::operator<=(const Fixed &fixed) const
{
	return store_ <= fixed.get_raw_bits();
}

bool Fixed::operator==(const Fixed &fixed) const
{
	return store_ == fixed.get_raw_bits();
}

bool Fixed::operator!=(const Fixed &fixed) const
{
	return store_ != fixed.get_raw_bits();
}

/* 4 arithmetic operators: +, -, * and / */

Fixed Fixed::operator+(const Fixed &fixed) const
{
	return (Fixed(ToFloat() + fixed.ToFloat()));
}

Fixed Fixed::operator-(const Fixed &fixed) const
{
	return (Fixed(ToFloat() - fixed.ToFloat()));
}

Fixed Fixed::operator*(const Fixed &fixed) const
{
	return (Fixed(ToFloat() * fixed.ToFloat()));
}

Fixed Fixed::operator/(const Fixed &fixed) const
{
	if (!fixed.ToInt())
	{
		std::cout << "Division by zero" << std::endl;
		std::exit(1);
	}
	return (Fixed(ToFloat() / fixed.ToFloat()));
}

/* 4 increment/decrement operators */

Fixed& Fixed::operator++()
{
	store_++;
	return (*this);
}

Fixed Fixed::operator++(int)
{
	Fixed	new_fixed(*this);
	store_++;
	return (new_fixed);
}

Fixed& Fixed::operator--()
{
	store_--;
	return (*this);
}

Fixed Fixed::operator--(int)
{
	Fixed	new_fixed(*this);
	store_++;
	return (new_fixed);
}

std::ostream& operator<< (std::ostream &out, const Fixed& fixed)
{
	return (out << fixed.ToFloat());
}
