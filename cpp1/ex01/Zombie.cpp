#include "Zombie.hpp"

Zombie::Zombie(std::string name) {
	this->_name = name;
}

Zombie::Zombie(void) {
	return ;
}

void	Zombie::setName(std::string name) {
	this->_name = name;
}

Zombie::~Zombie(void) {
	std::cout << "<" << this->_name << "> died" << std::endl;
}

void	Zombie::announce(void) {
	std::cout << "<" << this->_name << "> BraiiiiiiinnnzzzZ..." << std::endl;
}