#ifndef FIXED_H
# define FIXED_H

# include <iostream>
# include <cmath>
# include <cstdlib>

# define RAW_BITS 8

class Fixed
{
private:
	int					store_;
	static const int	raw_bits_ = RAW_BITS;
public:
	Fixed();
	~Fixed();
	Fixed(const Fixed& fixed);
	Fixed(int value);
	Fixed(float value);

	Fixed&			operator=(const Fixed& fixed);
	bool			operator>(const Fixed& fixed) const;
	bool			operator<(const Fixed& fixed) const;
	bool			operator>=(const Fixed& fixed) const;
	bool			operator<=(const Fixed& fixed) const;
	bool			operator==(const Fixed& fixed) const;
	bool			operator!=(const Fixed& fixed) const;
	Fixed			operator+(const Fixed &fixed) const;
	Fixed			operator-(const Fixed &fixed) const;
	Fixed			operator*(const Fixed &fixed) const;
	Fixed			operator/(const Fixed &fixed) const;
	Fixed&			operator++();
	Fixed			operator++(int);
	Fixed&			operator--();
	Fixed			operator--(int);

	int				get_raw_bits() const;
	void			set_raw_bits(int raw_bits);
	int				ToInt() const;
	float			ToFloat() const;
	static			Fixed& min(Fixed &obj1, Fixed &obj2);
	static			Fixed& max(Fixed &obj1, Fixed &obj2);
	static const	Fixed& min(const Fixed &obj1, const Fixed &obj2);
	static const	Fixed& max(const Fixed &obj1, const Fixed &obj2);
};

std::ostream& operator<< (std::ostream &out, const Fixed& fixed);

#endif
