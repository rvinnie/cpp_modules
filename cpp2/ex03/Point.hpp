#ifndef POINT_HPP
# define POINT_HPP

# include <iostream>
# include "Fixed.hpp"

class Point {

public:
	Point(void);
	Point(Point const & other);
	Point(float x, float y);
	~Point(void);

	Point & operator=(Point const & other);

	Fixed const	getX(void);
	Fixed const	getY(void);

private:
	Fixed const _x;
	Fixed const _y;

};

#endif
