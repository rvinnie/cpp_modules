#include "Fixed.hpp"

Fixed::Fixed(void) {
	std::cout << "Default constructor called" << std::endl;
	_value = 0;
}

Fixed::Fixed(int val) {
	std::cout << "Int constructor called" << std::endl;
	_value = val * (1 << _bits);
}

Fixed::Fixed(float val) {
	std::cout << "Float constructor called" << std::endl;
	_value = (int)roundf(val * (1 << _bits));
}

Fixed::~Fixed(void) {
	std::cout << "Destructor called" << std::endl;
}

float	Fixed::toFloat(void) const {
	return ((float)_value / (float)(1 << _bits));
}

int	Fixed::toInt(void) const {
	return (_value >> _bits);
}

Fixed::Fixed(Fixed const & other) {
	std::cout << "Copy constructor called" << std::endl;
	*this = other;
}

Fixed & Fixed::operator=(Fixed const & other) {
	std::cout << "Assignation operator called" << std::endl;
	if (this != &other)
		this->_value = other.getRawBits();
	return (*this);
}

int		Fixed::getRawBits(void) const {
	return (this->_value);
}

void	Fixed::setRawBits(int const raw) {
	this->_value = raw;
}

std::ostream & operator<<(std::ostream & os, Fixed const & fixed) {
	os << fixed.toFloat();
	return (os);
}
