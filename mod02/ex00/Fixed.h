#ifndef FIXED_H
# define FIXED_H

# include <iostream>

class Fixed
{
private:
	int					store_;
	static const int	bit_ = 8;
public:
	Fixed();
	~Fixed();
	Fixed(const Fixed& fixed);
	Fixed& operator= (const Fixed& fixed);
	int	get_raw_bits() const;
	int	set_raw_bits(int const raw_bits);
};


#endif
