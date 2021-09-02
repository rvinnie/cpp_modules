#include "WrongCat.hpp"

WrongCat::WrongCat(void) : WrongAnimal() {
	_type = "WrongCat";
	std::cout << "WrongCat constructed" << std::endl;
}

WrongCat::~WrongCat(void) {
	std::cout << "WrongCat destructed" << std::endl;
}

WrongCat::WrongCat(WrongCat const & other) : WrongAnimal(other) {
	std::cout << "WrongCat copy constructed" << std::endl;
}

WrongCat & WrongCat::operator=(WrongCat const & other) {
	_type = other._type;
	std::cout << "operator =" << std::endl;
	return (*this);
}

void WrongCat::makeSound(void) const {
	std::cout << "* Meow *" << std::endl;
}
