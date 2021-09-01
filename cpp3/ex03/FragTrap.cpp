#include "FragTrap.hpp"

FragTrap::FragTrap(void) : ClapTrap() {
	_hitPoints = 100;
	_mxHP = 300;
	_energy = 100;
	_damage = 30;
	_name = "default_clap_name";
	std::cout << "FragTrap " << _name << " is constructed" << std::endl;	
}

FragTrap::FragTrap(std::string name) : ClapTrap(name){
	_hitPoints = 100;
	_mxHP = 300;
	_energy = 100;
	_damage = 30;
	std::cout << "FragTrap " << _name << " with " << _hitPoints
				<< " hp is constructed" << std::endl;
}

FragTrap::~FragTrap(void) {
	std::cout << "FragTrap " << _name << " is deconstructed" << std::endl;
}

FragTrap::FragTrap(FragTrap const & other) : ClapTrap(other){
	std::cout << "FragTrap copy constructor called" << std::endl;
}

FragTrap & FragTrap::operator=(FragTrap const & other) {
	_name = other._name;
	_hitPoints = other._hitPoints;
	_mxHP = other._mxHP;
	_energy = other._energy;
	_damage = other._damage;
	std::cout << "FragTrap assignation operator called" << std::endl;
	return (*this);
}

void		FragTrap::highFivesGuys(void) {
	std::cout << "<< High five! >>" << std::endl;
}
