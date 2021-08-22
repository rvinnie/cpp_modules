#include "Fixed.hpp"

Fixed::Fixed(void) {
	std::cout << "Default constructor called" << std::endl;
	_value = 0;
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

int		Fixed::getRawBits(void) const {
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_value);
}

void	Fixed::setRawBits(int const raw) {
	this->_value = raw;
}
