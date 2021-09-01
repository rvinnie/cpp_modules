#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void) : ClapTrap(), FragTrap(), ScavTrap() {
	_name = "default";
	_hitPoints = FragTrap::_hitPoints;
	_energy = ScavTrap::_energy;
	_damage = FragTrap::_damage;
	_mxHP = 500;
	std::cout << "DiamondTrap " << _name << " is constructed" << std::endl;	
}

DiamondTrap::~DiamondTrap(void) {
	std::cout << "DiamondTrap " << _name << " is deconstructed" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name), FragTrap(name), ScavTrap(name){
	_name = name;
	_hitPoints = FragTrap::_hitPoints;
	_energy = ScavTrap::_energy;
	_damage = FragTrap::_damage;
	_mxHP = 500;
	std::cout << "DiamondTrap " << name << " with " << FragTrap::_hitPoints
				<< " hp is constructed" << std::endl;
}

DiamondTrap::DiamondTrap(DiamondTrap const & other) : ClapTrap(other), FragTrap(other), ScavTrap(other) {
	std::cout << "DiamondTrap copy constructor called" << std::endl;
}

DiamondTrap & DiamondTrap::operator=(DiamondTrap const & other) {
	ClapTrap::_name = other.ClapTrap::_name;
	_name = other._name;
	_hitPoints = other._hitPoints;
	_energy = other._energy;
	_damage = other._damage;
	_mxHP = other._mxHP;
	std::cout << "DiamondTrap assignation operator called" << std::endl;
	return (*this);
}

void	DiamondTrap::attack(std::string const & target) {
	ScavTrap::attack(target);
}

void	DiamondTrap::whoAmI() {
	std::cout << "<< I am " << _name << " and also " << ClapTrap::_name << " >>" << std::endl;
}
