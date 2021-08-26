#include "Zombie.hpp"

Zombie*	newZombie(std::string name);
void	randomChump(std::string name);

int main(void) {
	randomChump("Bob");
	randomChump("Mike");
	Zombie *tom = newZombie("Tom");
	Zombie *alex = newZombie("Alex");
	tom->announce();
	alex->announce();
	delete tom;
	delete alex;
	return (0);
}
