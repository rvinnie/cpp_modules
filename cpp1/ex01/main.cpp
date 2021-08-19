#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name);

int main(void) {
	Zombie		*zombies;
	std::string	name;
	int			n;

	n = 10;
	name = "Bob";
	zombies = zombieHorde(n, name);
	for (int x = 0; x < n; x++) {
		zombies[x].announce();
	}
	delete [] zombies;
	return (0);
}