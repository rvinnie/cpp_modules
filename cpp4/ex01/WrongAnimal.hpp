#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>
# include <string>

class WrongAnimal {

public:
	WrongAnimal(void);
	virtual ~WrongAnimal(void);
	WrongAnimal(WrongAnimal const & other);
	WrongAnimal & operator=(WrongAnimal const & other);
	std::string	getType(void) const;
	void makeSound(void) const;

protected:
	std::string _type;

};

#endif
