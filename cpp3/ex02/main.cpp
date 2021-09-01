#include "FragTrap.hpp"

int main(void) {
	FragTrap one("Max");
	one.attack("Steve");
	one.takeDamage(40);
	one.beRepaired(200);
	one.highFivesGuys();
	return (0);
}