#ifndef FIXED_H
# define FIXED_H

# include <iostream>
# include <cmath>

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

	Fixed&	operator=(const Fixed& fixed);

	int		get_raw_bits() const;
	void	set_raw_bits(int raw_bits);
	int		ToInt() const;
	float	ToFloat() const;
};

std::ostream& operator<< (std::ostream &out, const Fixed& fixed);

#endif
