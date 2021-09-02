#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"

int main(void) {
	Animal *animals[6];

	for (int x = 0; x < 3; x++) {
		animals[x] = new Dog();
	}
	
	for (int y = 3; y < 6; y++) {
		animals[y] = new Cat();
	}

	Animal *newDog(animals[1]);
	newDog->makeSound();


	for (int z = 5; z >= 0; z--) {
		delete animals[z];
	}

	// const Animal* j = new Dog();
	// const Animal* i = new Cat();

	// delete j;
	// delete i;
}