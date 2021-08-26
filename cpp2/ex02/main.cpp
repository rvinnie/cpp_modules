#include <iostream>
#include "Fixed.hpp"

int main( void ) {
	Fixed const m(5.1f);
	Fixed const n(5.2f);
	Fixed const c(6);
	Fixed const d(5);

	std::cout << "-------------------" << std::endl;
	std::cout << "FLOAT" << std::endl;
	std::cout << "0 -> " << (m > n) << std::endl;
	std::cout << "1 -> " << (m < n) << std::endl;
	std::cout << "0 -> " << (m >= n) << std::endl;
	std::cout << "1 -> " <<(m <= n) << std::endl;
	std::cout << "0 -> " <<(m == n) << std::endl;
	std::cout << "1 -> " <<(m != n) << std::endl;
	std::cout << "INT" << std::endl;
	std::cout << "1 -> " << (c > d) << std::endl;
	std::cout << "0 -> " << (c < d) << std::endl;
	std::cout << "1 -> " << (c >= d) << std::endl;
	std::cout << "0 -> " <<(c <= d) << std::endl;
	std::cout << "0 -> " <<(c == d) << std::endl;
	std::cout << "1 -> " <<(c != d) << std::endl;

	std::cout << m + n << std::endl;
	std::cout << c - d << std::endl;
	std::cout << m * n << std::endl;
	std::cout << Fixed(100) / Fixed(25) << std::endl;

	std::cout << "-------------------" << std::endl;
	Fixed a;
	Fixed const b(Fixed(5.05f) * Fixed(2));

	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;

	std::cout << Fixed::max(a, b) << std::endl;

	std::cout << "-------------------" << std::endl;

	return 0;
}