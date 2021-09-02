#include "Cat.hpp"

Cat::Cat(void) : Animal() {
	_type = "Cat";
	std::cout << "Cat constructed" << std::endl;
}

Cat::~Cat(void) {
	std::cout << "Cat destructed" << std::endl;
}

Cat::Cat(Cat const & other) : Animal(other) {
	std::cout << "Cat copy constructed" << std::endl;
}

Cat & Cat::operator=(Cat const & other) {
	_type = other._type;
	std::cout << "operator =" << std::endl;
	return (*this);
}

void Cat::makeSound(void) const {
	std::cout << "* Meow *" << std::endl;
}
