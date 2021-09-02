#include "Animal.hpp"

Animal::Animal(void) {
	_type = "default";
	std::cout << "Animal constructed" << std::endl;
}

Animal::~Animal(void) {
	std::cout << "Animal destructed" << std::endl;
}

Animal::Animal(Animal const & other) {
	_type = other._type;
	std::cout << "Animal copy constructed" << std::endl;
}

Animal & Animal::operator=(Animal const & other) {
	_type = other._type;
	std::cout << "operator =" << std::endl;
	return (*this);
}

void	Animal::makeSound(void) const {
	std::cout << "* Default sound *" << std::endl;
}

std::string	Animal::getType(void) const {
	return (_type);
}
