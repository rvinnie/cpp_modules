#include "Dog.hpp"

Dog::Dog(void) : Animal() {
	_type = "Dog";
	_brain = new Brain();
	std::cout << "Dog constructed" << std::endl;
}

Dog::~Dog(void) {
	delete _brain;
	std::cout << "Dog destructed" << std::endl;
}

Dog::Dog(Dog const & other) : Animal(other) {
	delete _brain;
	_brain = new Brain();
	std::cout << "Dog copy constructed" << std::endl;
}

Dog & Dog::operator=(Dog const & other) {
	delete _brain;
	_brain = new Brain();
	_type = other._type;
	std::cout << "operator =" << std::endl;
	return (*this);
}

void Dog::makeSound(void) const {
	std::cout << "* Gav *" << std::endl;
}

Brain *Dog::getBrain(void) {
	return (_brain);
}
