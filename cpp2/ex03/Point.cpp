#include "Point.hpp"

Point::Point(void) : _x(Fixed(0)), _y(Fixed(0)) {}

Point::~Point(void) {}

Point::Point(float x, float y) : _x(Fixed(x)), _y(Fixed(y)) {}

Point::Point(Point const & other) : _x(Fixed(other._x)), _y(Fixed(other._y)){}

Point & Point::operator=(Point const &) {
	return (*this);
}

Fixed const Point::getX(void) {
	return (this->_x);
}

Fixed const Point::getY(void) {
	return (this->_y);
}
