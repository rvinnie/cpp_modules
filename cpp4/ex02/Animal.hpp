#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include <string>

class Animal {

public:
	Animal(void);
	virtual ~Animal(void);
	Animal(Animal const & other);
	Animal & operator=(Animal const & other);
	std::string	getType(void) const;
	virtual void makeSound(void) const = 0;

protected:
	std::string _type;

};

#endif
