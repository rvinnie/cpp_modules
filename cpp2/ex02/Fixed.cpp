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

bool	Fixed::operator>(Fixed const & other) const {
	return (this->_value > other.getRawBits());
}

bool	Fixed::operator<(Fixed const & other) const {
	return (this->_value < other.getRawBits());
}

bool	Fixed::operator>=(Fixed const & other) const {
	return (this->_value >= other.getRawBits());
}

bool	Fixed::operator<=(Fixed const & other) const {
	return (this->_value <= other.getRawBits());
}

bool	Fixed::operator==(Fixed const & other) const {
	return (this->_value == other.getRawBits());
}

bool	Fixed::operator!=(Fixed const & other) const {
	return (this->_value != other.getRawBits());
}

Fixed	Fixed::operator+(Fixed const & other) const {
	Fixed tmp;
	tmp.setRawBits(this->_value + other.getRawBits());
	return (tmp);
}

Fixed	Fixed::operator-(Fixed const & other) const {
	Fixed tmp;
	tmp.setRawBits(this->_value - other.getRawBits());
	return (tmp);
}

Fixed	Fixed::operator*(Fixed const & other) const {
	Fixed tmp;
	tmp.setRawBits((this->_value * other.getRawBits()) >> _bits);
	return (tmp);
}

Fixed	Fixed::operator/(Fixed const & other) const {
	Fixed tmp;
	tmp.setRawBits((this->_value * (1 << _bits)) / other.getRawBits());
	return (tmp);
}

Fixed	Fixed::operator++() {
	this->_value++;
	return (*this);
}

Fixed	Fixed::operator++(int) {
	Fixed tmp(*this);
	operator++();
	return (tmp);
}

Fixed	Fixed::operator--() {
	this->_value++;
	return (*this);
}

Fixed	Fixed::operator--(int) {
	Fixed tmp(*this);
	operator--();
	return (tmp);
}

std::ostream & operator<<(std::ostream & os, Fixed const & fixed) {
	os << fixed.toFloat();
	return (os);
}

int		Fixed::getRawBits(void) const {
	return (this->_value);
}

float	Fixed::toFloat(void) const {
	return ((float)_value / (float)(1 << _bits));
}

int	Fixed::toInt(void) const {
	return (_value >> _bits);
}

void	Fixed::setRawBits(int const raw) {
	this->_value = raw;
}

Fixed const & Fixed::max(Fixed const & a, Fixed const & b) {
	if (a > b)
		return (a);
	return (b);
}

Fixed & Fixed::max(Fixed & a, Fixed & b) {
	if (a > b)
		return (a);
	return (b);
}

Fixed const & Fixed::min(Fixed const & a, Fixed const & b) {
	if (a > b)
		return (b);
	return (a);
}

Fixed & Fixed::min(Fixed & a, Fixed & b) {
	if (a > b)
		return (b);
	return (a);
}
