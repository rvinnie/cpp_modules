#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) : ClapTrap(){
	_hitPoints = 100;
	_mxHP = 300;
	_energy = 50;
	_damage = 20;
	_name = "default";
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {
	_hitPoints = 100;
	_mxHP = 300;
	_energy = 50;
	_damage = 20;
	std::cout << "ScavTrap " << name << " with " << _hitPoints
				<< " hp is constructed" << std::endl;
}

ScavTrap::~ScavTrap(void) {
	std::cout << "ScavTrap " << _name << " is deconstructed" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const & other) : ClapTrap(other) {
	std::cout << "ScavTrap copy constructor called" << std::endl;
}

ScavTrap & ScavTrap::operator=(ScavTrap const & other) {
	_name = other.getName();
	_hitPoints = other._hitPoints;
	_mxHP = other._mxHP;
	_energy = other._energy;
	_damage = other._damage;
	std::cout << "ScavTrap assignation operator called" << std::endl;
	return (*this);
}

void	ScavTrap::attack(std::string const & target) {
	std::cout << "<< ScavTrap " << _name << " attack " << target
			<< ", causing " << _damage << " points of damage >>" << std::endl;
}

void	ScavTrap::guardGate() {
	std::cout << "<< ScavTrap " << _name << " have enterred in Gate keeper mode >>" << std::endl;
}
