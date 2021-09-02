#include "Dog.hpp"

Dog::Dog(void) : Animal() {
	_type = "Dog";
	std::cout << "Dog constructed" << std::endl;
}

Dog::~Dog(void) {
	std::cout << "Dog destructed" << std::endl;
}

Dog::Dog(Dog const & other) : Animal(other) {
	std::cout << "Dog copy constructed" << std::endl;
}

Dog & Dog::operator=(Dog const & other) {
	_type = other._type;
	std::cout << "operator =" << std::endl;
	return (*this);
}

void Dog::makeSound(void) const {
	std::cout << "* Gav *" << std::endl;
}
