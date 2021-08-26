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

	Fixed & operator=(Fixed const & other);
	bool	operator>(Fixed const & other) const;
	bool	operator<(Fixed const & other) const;
	bool	operator>=(Fixed const & other) const;
	bool	operator<=(Fixed const & other) const;
	bool	operator==(Fixed const & other) const;
	bool	operator!=(Fixed const & other) const;
	Fixed	operator+(Fixed const & other) const;
	Fixed	operator-(Fixed const & other) const;
	Fixed	operator*(Fixed const & other) const;
	Fixed	operator/(Fixed const & other) const;
	Fixed 	operator++();
	Fixed 	operator++(int);
	Fixed 	operator--();
	Fixed 	operator--(int);

	float	toFloat(void) const;
	int		toInt(void) const;
	int		getRawBits(void) const;
	void	setRawBits(int const raw);
	static Fixed const & max(Fixed const & a, Fixed const & b);
	static Fixed & max(Fixed & a, Fixed & b);
	static Fixed const & min(Fixed const & a, Fixed const & b);
	static Fixed & min(Fixed & a, Fixed & b);

private:
	int					_value;
	static const int	_bits = 8;

};

std::ostream & operator<<(std::ostream & os, Fixed const & fixed);

#endif