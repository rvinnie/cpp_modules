#include "Cat.hpp"

Cat::Cat(void) : Animal() {
	_type = "Cat";
	_brain = new Brain();
	std::cout << "Cat constructed" << std::endl;
}

Cat::~Cat(void) {
	delete _brain;
	std::cout << "Cat destructed" << std::endl;
}

Cat::Cat(Cat const & other) : Animal(other) {
	delete _brain;
	_brain = new Brain();
	std::cout << "Cat copy constructed" << std::endl;
}

Cat & Cat::operator=(Cat const & other) {
	delete _brain;
	_brain = new Brain();
	_type = other._type;
	std::cout << "operator =" << std::endl;
	return (*this);
}

void Cat::makeSound(void) const {
	std::cout << "* Meow *" << std::endl;
}

Brain *Cat::getBrain(void) {
	return (_brain);
}
