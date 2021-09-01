#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) {
	_hitPoints = 10;
	_mxHP = 100;
	_energy = 10;
	_damage = 0;
	_name = "default_clap_name";
	std::cout << "ClapTrap " << _name << " is constructed" << std::endl;	
}

ClapTrap::ClapTrap(std::string name) {
	_name = name + "_clap_name";
	_hitPoints = 10;
	_mxHP = 100;
	_energy = 10;
	_damage = 0;
	std::cout << "ClapTrap " << _name << " with " << _hitPoints
				<< " hp is constructed" << std::endl;
}

ClapTrap::~ClapTrap(void) {
	std::cout << "ClapTrap " << _name << " is deconstructed" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const & other) {
	_name = other.getName();
	_hitPoints = other._hitPoints;
	_mxHP = other._mxHP;
	_energy = other._energy;
	_damage = other._damage;
	std::cout << "ClapTrap copy constructor called" << std::endl;
}

ClapTrap & ClapTrap::operator=(ClapTrap const & other) {
	_name = other._name;
	_hitPoints = other._hitPoints;
	_mxHP = other._mxHP;
	_energy = other._energy;
	_damage = other._damage;
	std::cout << "ClapTrap assignation operator called" << std::endl;
	return (*this);
}

void	ClapTrap::attack(std::string const & target) {
	std::cout << "<< ClapTrap " << _name << " attack " << target
			<< ", causing " << _damage << " points of damage >>" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount) {
	if ((int)_hitPoints - (int)amount < 0) {
		amount = _hitPoints;
	}
	_hitPoints -= amount;
	std::cout << "<< " << _name << " took " << amount << " damage >>" << std::endl;
	printHealth();
}

void	ClapTrap::beRepaired(unsigned int amount) {
	if (_hitPoints + amount > _mxHP) {
		amount = _mxHP - _hitPoints;
	}
	_hitPoints += amount;
	std::cout << "<< " << _name << " repaired by " << amount << " points >>" << std::endl;
	printHealth();
}

void	ClapTrap::printHealth(void) {
	std::cout << COLOR_GREEN << "<< Current health - " << _hitPoints << " hit points >>" << COLOR_RESET << std::endl;
}

std::string	ClapTrap::getName(void) const {
	return (_name);
}
