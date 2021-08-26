#include "Fixed.hpp"
#include "Point.hpp"

float	pseudoscalar(Point a, Point b, Point p) {
	float	product;

	product = ((a.getX() - p.getX()) * (b.getY() - a.getY())
			- (b.getX() - a.getX()) * (a.getY() - p.getY())).toFloat();
	return (product);
}

bool	checkSign(float first, float second, float third) {
	if (first > 0 && second > 0 && third > 0)
		return (true);
	else if (first < 0 && second < 0 && third < 0)
		return (true);
	return (false);
}

bool	bsp(Point const a, Point const b, Point const c, Point const point) {
	float first = pseudoscalar(a, b, point);
	float second = pseudoscalar(b, c, point);
	float third = pseudoscalar(c, a, point);

	if (first == 0 || second == 0 || third == 0)
		return (false);
	return (checkSign(first, second, third));
}
