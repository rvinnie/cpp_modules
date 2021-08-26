#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name) {
	Zombie *zombies = new Zombie[N];
	for (int x = 0; x < N; x++) {
		zombies[x].setName(name);
	}
	return (zombies);
}
