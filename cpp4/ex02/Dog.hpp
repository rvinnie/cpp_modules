#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal {

public:
	Dog(void);
	~Dog(void);
	Dog(Dog const & other);
	Dog & operator=(Dog const & other);
	void makeSound(void) const;
	Brain *getBrain(void);

private:
	Brain *_brain;

};

#endif
