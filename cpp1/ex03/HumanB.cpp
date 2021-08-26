#include "HumanB.hpp"

HumanB::HumanB(std::string name) {
	this->_name = name;
	_weapon = NULL;
}

HumanB::~HumanB(void) {
	return ;
}

void	HumanB::attack(void) {
	std::cout << this->_name << " attacks with his "
				<< (*this->_weapon).getType() << std::endl;
}

void	HumanB::setWeapon(Weapon &weapon) {
	this->_weapon = &weapon;
}
