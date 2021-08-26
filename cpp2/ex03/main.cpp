#include <iostream>
#include "Fixed.hpp"
#include "Point.hpp"

bool	bsp(Point const a, Point const b, Point const c, Point const point);

int main( void ) {
	Point A(0, 0);
	Point B(0, 9);
	Point C(10, 0);
	Point P1(3, 3);
	Point P2(0, 4);
	Point P3(9, 6);

	std::cout << "true >> " << bsp(A, B, C, P1) << std::endl; // in
	std::cout << "false >> " << bsp(A, B, C, P2) << std::endl; // on
	std::cout << "false >> " << bsp(A, B, C, P3) << std::endl; // out
	std::cout << "false >> " << bsp(A, B, C, Point(100, 100)) << std::endl; // out
	std::cout << "true >> " << bsp(A, B, C, Point(2, 2)) << std::endl; // in
	std::cout << "false >> " << bsp(A, B, C, Point(0, 9)) << std::endl; // on

	return 0;
}