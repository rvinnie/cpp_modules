#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void) {
	_type = "default";
	std::cout << "WrongAnimal constructed" << std::endl;
}

WrongAnimal::~WrongAnimal(void) {
	std::cout << "WrongAnimal destructed" << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const & other) {
	_type = other._type;
	std::cout << "WrongAnimal copy constructed" << std::endl;
}

WrongAnimal & WrongAnimal::operator=(WrongAnimal const & other) {
	_type = other._type;
	std::cout << "operator =" << std::endl;
	return (*this);
}

void	WrongAnimal::makeSound(void) const {
	std::cout << "* Default sound *" << std::endl;
}

std::string	WrongAnimal::getType(void) const {
	return (_type);
}
