#include "ClapTrap.hpp"

int main(void) {
	ClapTrap one("Toaster");
	one.attack("Steve");
	one.takeDamage(3);
	one.beRepaired(100);
	return (0);
}