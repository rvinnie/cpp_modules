#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal {

public:
	Cat(void);
	~Cat(void);
	Cat(Cat const & other);
	Cat & operator=(Cat const & other);
	void makeSound(void) const;
	Brain *getBrain(void);

private:
	Brain *_brain;

};

#endif