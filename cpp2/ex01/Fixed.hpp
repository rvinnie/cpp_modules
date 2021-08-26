#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed {

public:
	Fixed(void);
	Fixed(int val);
	Fixed(float val);
	~Fixed(void);
	Fixed(Fixed const &other);
	float	toFloat(void) const;
	int		toInt(void) const;
	Fixed & operator=(Fixed const & other);
	int		getRawBits(void) const;
	void	setRawBits(int const raw);

private:
	int					_value;
	static const int	_bits = 8;

};

std::ostream & operator<<(std::ostream & os, Fixed const & fixed);

#endif