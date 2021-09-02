#include "Brain.hpp"

Brain::Brain(void) {
	std::cout << "Brain constructed" << std::endl;
}

Brain::~Brain(void) {
	std::cout << "Brain destructed" << std::endl;
}

Brain::Brain(Brain const &) {
	std::cout << "Brain copy constructed" << std::endl;
}

Brain & Brain::operator=(Brain const &) {
	std::cout << "operator =" << std::endl;
	return (*this);
}
