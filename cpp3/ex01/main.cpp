#include "ScavTrap.hpp"

int main(void) {
	ScavTrap one("Max");
	one.attack("Steve");
	one.takeDamage(30);
	one.beRepaired(112);
	one.guardGate();
	return (0);
}